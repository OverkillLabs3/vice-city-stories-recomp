// macOS window, input and presentation (SDL2 window and controller, CAMetalLayer swapchain).
// Split out of display_window.cpp so Windows and macOS code cannot affect each other.

#include "display_window.hpp"
#include "dx12_presenter.hpp"
#include "ge_gpu_backend.hpp"
#include "vcs_camera_input.hpp"
#include "vcs_config.hpp"
#include "vcs_env.hpp"
#include "vcs_key_prompts.hpp"
#include "vcs_runtime_log.hpp"
#include "vcs_vehicle_input.hpp"

#include <algorithm>
#include <atomic>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>


// macOS presentation backend using SDL2.
//
// This is structurally different from the Win32 path above for one hard
// reason: Cocoa requires window creation and the event loop to run on the
// process's real main thread. A dedicated "window thread" the way Win32 uses
// one either never receives events on macOS or crashes. So here the PSP
// interpreter runs on a worker thread (see main.cpp's __APPLE__ branch) and
// the actual main() thread repeatedly calls display_window_pump_events()
// instead of blocking on runtime.run() directly.

#include <SDL.h>

#include "metal_drawable_size.h"

#include <cmath>
#include <chrono>
#include <thread>

namespace vcs {
namespace {

constexpr std::uint32_t kPspSelect   = 0x000001u;
constexpr std::uint32_t kPspStart    = 0x000008u;
constexpr std::uint32_t kPspUp       = 0x000010u;
constexpr std::uint32_t kPspRight    = 0x000020u;
constexpr std::uint32_t kPspDown     = 0x000040u;
constexpr std::uint32_t kPspLeft     = 0x000080u;
constexpr std::uint32_t kPspLTrigger = 0x000100u;
constexpr std::uint32_t kPspRTrigger = 0x000200u;
constexpr std::uint32_t kPspTriangle = 0x001000u;
constexpr std::uint32_t kPspCircle   = 0x002000u;
constexpr std::uint32_t kPspCross    = 0x004000u;
constexpr std::uint32_t kPspSquare   = 0x008000u;

struct KeyBinding {
    SDL_Scancode scancode;
    std::uint32_t psp_button;
};

// Same mapping as the Win32 build above (see its comment block for the full
// San Andreas-control-scheme provenance). Movement stays off this table:
// WASD drives the analog stick, not the D-pad.
constexpr KeyBinding kKeyBindings[] = {
    {SDL_SCANCODE_SPACE, kPspCross},
    {SDL_SCANCODE_LSHIFT, kPspSquare},
    {SDL_SCANCODE_RSHIFT, kPspSquare},
    {SDL_SCANCODE_F, kPspTriangle},
    {SDL_SCANCODE_RETURN, kPspTriangle},
    {SDL_SCANCODE_Q, kPspLeft},
    {SDL_SCANCODE_E, kPspRight},
    {SDL_SCANCODE_H, kPspLTrigger},
    {SDL_SCANCODE_UP, kPspUp},       {SDL_SCANCODE_DOWN, kPspDown},
    {SDL_SCANCODE_LEFT, kPspLeft},   {SDL_SCANCODE_RIGHT, kPspRight},
    {SDL_SCANCODE_ESCAPE, kPspStart},
    {SDL_SCANCODE_TAB, kPspSelect},
};

constexpr SDL_Scancode kMoveForward  = SDL_SCANCODE_W;
constexpr SDL_Scancode kMoveBack     = SDL_SCANCODE_S;
constexpr SDL_Scancode kMoveLeft     = SDL_SCANCODE_A;
constexpr SDL_Scancode kMoveRight    = SDL_SCANCODE_D;
constexpr SDL_Scancode kWalkModifier = SDL_SCANCODE_LALT;

struct WindowState {
    std::mutex mutex;
    SDL_Window *window{nullptr};
    SDL_Renderer *renderer{nullptr};
    SDL_Texture *texture{nullptr};
    std::atomic<SDL_GameController *> controller{nullptr};
    std::vector<std::uint32_t> pixels;  // 0x00RRGGBB, top-down; same packing as the Win32 path
    std::uint32_t width{};
    std::uint32_t height{};
    std::atomic<bool> frame_pending{false};
    std::atomic<bool> ready{false};
    std::atomic<bool> focused{true};
    std::atomic<bool> close_requested{false};
    std::atomic<bool> shutdown_requested{false};
    std::atomic<bool> destroyed{false};
    std::atomic<bool> aspect_lock{false};
    std::atomic<std::int32_t> mouse_dx{0};
    std::atomic<std::int32_t> mouse_dy{0};
    std::atomic<std::int32_t> wheel{0};
    DisplayConfiguration configuration{};
    std::mutex title_mutex;
    std::string pending_title;
};

WindowState &window_state() {
    static WindowState state;
    return state;
}

// Tells the widescreen code (the guest's projection and the interface correction) how big the game
// picture really is on screen: the whole drawable when it is stretched, the letterboxed rectangle when
// its proportions are kept. Called once the renderer exists and on every resize, so any display or
// window shape gets a projection and an interface that match. Same rules as the Windows layer and the
// GPU present pass. Must run on the thread that owns the SDL renderer (the main thread).
void publish_output_surface(const WindowState &state) {
    if (state.renderer == nullptr) return;
    int output_w = 0;
    int output_h = 0;
    SDL_GetRendererOutputSize(state.renderer, &output_w, &output_h);
    if (output_w <= 0 || output_h <= 0) return;
    const InternalResolutionDimensions source = resolve_internal_resolution(vcs_configuration().rendering);
    const PresentationRectangle picture = calculate_presentation_rectangle(
        static_cast<std::uint32_t>(output_w), static_cast<std::uint32_t>(output_h), source.width, source.height,
        state.configuration.aspect_mode, state.configuration.integer_scale);
    publish_live_display_surface(static_cast<std::uint32_t>(std::max(1, picture.width)),
                                 static_cast<std::uint32_t>(std::max(1, picture.height)));
}

bool key_down(const std::uint8_t *keys, SDL_Scancode code) noexcept { return keys[code] != 0; }

// -1..1 with the same deadzone shape XInput used on Windows (7849 of 32767).
float axis_with_deadzone(Sint16 raw) noexcept {
    constexpr int kDeadZone = 7849;
    int magnitude = std::abs(static_cast<int>(raw));
    if (magnitude <= kDeadZone) return 0.0f;
    magnitude = (magnitude - kDeadZone) * 32767 / (32767 - kDeadZone);
    return static_cast<float>(raw < 0 ? -magnitude : magnitude) / 32767.0f;
}

std::uint8_t stick_to_psp(float normalized, bool invert) noexcept {
    if (invert) normalized = -normalized;
    return static_cast<std::uint8_t>(
        std::clamp(128 + static_cast<int>(std::lround(normalized * 127.0f)), 0, 255));
}

void resolve_window_size(const DisplayConfiguration &configuration, int &width, int &height,
                         bool &fullscreen_desktop) {
    // Fullscreen and ResolutionMode are supposed to be independent settings
    // -- Fullscreen picks borderless-fullscreen vs. a regular window,
    // ResolutionMode picks what size to target -- but this used to conflate
    // them: either one alone forced fullscreen_desktop=true. At the shipped
    // defaults (Fullscreen=true, ResolutionMode=Desktop) that meant neither
    // could actually be turned off: picking PSP resolution did nothing while
    // Fullscreen stayed true, and turning Fullscreen off did nothing while
    // ResolutionMode stayed Desktop -- both confirmed directly. Fullscreen
    // alone decides fullscreen_desktop now.
    fullscreen_desktop = configuration.fullscreen;

    if (configuration.resolution_mode == DisplayResolutionMode::PspNative) {
        width = 480;
        height = 272;
        return;
    }
    if (configuration.resolution_mode == DisplayResolutionMode::Custom) {
        width = static_cast<int>(configuration.custom_width);
        height = static_cast<int>(configuration.custom_height);
        return;
    }
    // Desktop: match the real display. SDL_WINDOW_FULLSCREEN_DESKTOP ignores
    // whatever width/height SDL_CreateWindow is given and always fills the
    // display on its own, so these only actually matter for the windowed
    // (Fullscreen=false) case -- but resolving them the same way either way
    // means turning Fullscreen off with ResolutionMode still Desktop
    // produces a window sized to the real display, not a stale 480x272.
    SDL_DisplayMode mode{};
    if (SDL_GetDesktopDisplayMode(0, &mode) == 0 && mode.w > 0 && mode.h > 0) {
        width = mode.w;
        height = mode.h;
        return;
    }
    // Same PSPRECOMP_WINDOW_SCALE compatibility path as Windows, kept as a
    // last-resort fallback if SDL genuinely cannot report a display.
    const char *scale_text = VCS_ENV("PSPRECOMP_WINDOW_SCALE");
    int scale = 2;
    if (scale_text != nullptr && *scale_text != '\0') {
        char *end = nullptr;
        const long parsed = std::strtol(scale_text, &end, 10);
        if (end != scale_text && *end == '\0' && parsed >= 1 && parsed <= 16) scale = static_cast<int>(parsed);
    }
    width = 480 * scale;
    height = 272 * scale;
}

void publish_pixels(WindowState &state, std::vector<std::uint32_t> &&pixels, std::uint32_t width,
                    std::uint32_t height) {
    std::lock_guard<std::mutex> guard(state.mutex);
    state.pixels = std::move(pixels);
    state.width = width;
    state.height = height;
    state.frame_pending.store(true, std::memory_order_release);
}

// Same as publish_pixels(), but swaps with the caller's buffer instead of
// consuming it, so the caller gets back whatever this window state's pixel
// buffer held last call (already the right size after the first frame) to
// fill in place next time, instead of allocating a fresh multi-megabyte
// vector every single frame. Used on the GPU-readback present path, which
// runs every vblank at full internal resolution (e.g. 1920x1080 = ~8MB) --
// the per-frame allocation showed up as real, avoidable cost there.
void publish_pixels_reuse(WindowState &state, std::vector<std::uint32_t> &pixels,
                          std::uint32_t width, std::uint32_t height) {
    std::lock_guard<std::mutex> guard(state.mutex);
    std::swap(state.pixels, pixels);
    state.width = width;
    state.height = height;
    state.frame_pending.store(true, std::memory_order_release);
}

} // namespace

bool display_window_enabled() {
    // Required PSPRECOMP_WINDOW=1 unconditionally, with no config fallback --
    // unlike the Windows branch just above, which already falls back to
    // Display.Enabled (true in the shipped .ini) when the env var is unset.
    // On macOS the Vulkan backend does not present directly to a native
    // swapchain yet (ge_gpu_backend_presents_directly() is false), so this
    // window is not optional the way it might be elsewhere -- without it
    // there is no way to see anything at all. Requiring a Terminal-only env
    // var for that meant a plain double-click Finder launch produced a
    // process that ran, played audio, and never showed a window: exactly the
    // "I hear the game but don't see it" symptom. Match the Windows branch's
    // config-aware default instead so a double-click launch just works.
    static const bool enabled = [] {
        const char *text = VCS_ENV("PSPRECOMP_WINDOW");
        if (text != nullptr && *text != '\0') return std::string(text) != "0";
        const VcsConfiguration &configuration = vcs_configuration();
        return configuration.initialized && configuration.display.enabled;
    }();
    return enabled;
}

void display_window_start() {
    if (!display_window_enabled()) return;
    WindowState &state = window_state();
    if (state.ready.load(std::memory_order_acquire)) return;

    if (SDL_InitSubSystem(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER) != 0) {
        std::cerr << "[display] SDL_Init failed: " << SDL_GetError() << "\n";
        return;
    }

    state.configuration = vcs_configuration().display;
    int width = 480;
    int height = 272;
    bool fullscreen_desktop = false;
    resolve_window_size(state.configuration, width, height, fullscreen_desktop);

    Uint32 flags = SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI;
    if (fullscreen_desktop) flags |= SDL_WINDOW_FULLSCREEN_DESKTOP;

    // Native-swapchain present-path migration (PSPRECOMP_VULKAN_SWAPCHAIN=1):
    // the SDL_Renderer is now ALWAYS created, unconditionally, same as the
    // default path -- earlier this used SDL_Metal_CreateView to get a
    // CAMetalLayer, which attaches its OWN new content view and broke intro
    // videos/the software-raster fallback (nothing left to draw them into,
    // since state.renderer was skipped entirely in that mode). Fixed by
    // pulling the CAMetalLayer back OUT of the renderer SDL already created
    // (SDL_RenderGetMetalLayer, a real SDL2 API for exactly this -- SDL's
    // own Metal renderer already owns a CAMetalLayer when created on
    // macOS), instead of creating a second, competing one. Both the SDL
    // renderer (video/software-raster path) and the Vulkan swapchain
    // (direct 3D gameplay present) now share the same underlying layer,
    // never used at the same time (ge_gpu_backend_presents_directly()
    // already decides which path handles a given vblank before the other
    // even runs).
    // Default ON now that the intro-video/software-present regression is
    // fixed (see the comment above) and the real present-cost win is
    // confirmed (CPU present cost dropped to ~0 in live testing). Set
    // PSPRECOMP_VULKAN_SWAPCHAIN=0 to opt back out to the CPU-readback/SDL
    // present path if this ever needs bisecting against.
    static const bool vulkan_swapchain_migration = [] {
        const char *value = VCS_ENV("PSPRECOMP_VULKAN_SWAPCHAIN");
        return value == nullptr || (*value != '\0' && std::strcmp(value, "0") != 0);
    }();

    SDL_Window *window = SDL_CreateWindow("VCSNative", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width,
                                          height, flags);
    if (window == nullptr) {
        std::cerr << "[display] SDL_CreateWindow failed: " << SDL_GetError() << "\n";
        return;
    }

    // SDL hints only take effect before the renderer is created, so the scale
    // quality hint has to land here rather than after SDL_CreateRenderer.
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY,
                state.configuration.upscale_filter == DisplayUpscaleFilter::Bilinear ? "1" : "0");
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (renderer == nullptr) renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);

    if (vulkan_swapchain_migration && renderer != nullptr) {
        void *metal_layer = SDL_RenderGetMetalLayer(renderer);
        if (metal_layer == nullptr) {
            std::cerr << "[swapchain-migration] SDL_RenderGetMetalLayer returned null (renderer "
                         "may not be Metal-backed) -- staying on the existing present path\n";
        } else {
            ge_gpu_backend_set_native_window(metal_layer);
        }
    }

    // A call here once forced this renderer's CAMetalLayer.drawableSize to
    // match Rendering.InternalResolutionMode instead of the window's own
    // real size, purely so Apple's Metal HUD would display that number.
    // Reverted: it took that snapshot once, at window-creation time, fully
    // decoupled from whatever the window's actual size later is -- and once
    // window size itself became configurable (Display.Fullscreen/
    // ResolutionMode actually doing something, see resolve_window_size()),
    // the two can now genuinely differ (e.g. a tiny PSP-native 480x272
    // window against a Desktop-sized internal render), and SDL_RenderCopy's
    // destination rect math is computed against the REAL drawable, not the
    // faked one. The result was confirmed directly: only a small corner of
    // the frame visible in a small window, and letterbox bars in windowed
    // mode. A HUD overlay showing the wrong number is a cosmetic annoyance;
    // this was actually broken rendering, so it loses.
    SDL_SetRelativeMouseMode(SDL_TRUE);
    // SDL2 leaves text input active by default even though this window never
    // has a text field. With it active, macOS's own input method treats a
    // held letter key as "hold for accented characters" and pops its own
    // candidate picker up in a corner of the screen -- exactly what a
    // keyboard-driven game does constantly (holding a movement key), and it
    // steals that keystroke from the game while it's showing. Game input is
    // read straight from the keyboard state elsewhere, not through SDL's
    // text-input/IME events, so there's nothing to lose by turning it off.
    SDL_StopTextInput();

    state.window = window;
    state.renderer = renderer;
    publish_output_surface(state);
    state.ready.store(true, std::memory_order_release);
}

void display_window_set_status(const char *status) {
    if (!display_window_enabled()) return;
    WindowState &state = window_state();
    std::lock_guard<std::mutex> guard(state.title_mutex);
    state.pending_title = std::string("VCSNative - ") + status;
}

void display_window_set_aspect_lock(bool locked) noexcept {
    window_state().aspect_lock.store(locked, std::memory_order_relaxed);
}

void display_window_present(const psprecomp::GuestMemory &memory, const FramebufferDescription &description) {
    if (!display_window_enabled()) return;
    WindowState &state = window_state();
    if (!state.ready.load(std::memory_order_acquire)) return;
    std::vector<std::uint8_t> rgb;
    try {
        rgb = decode_framebuffer_rgb(memory, description);
    } catch (const std::exception &) {
        // A transient framebuffer pointer outside EDRAM must never take the
        // host down; the previous frame simply stays on screen.
        return;
    }
    const std::size_t pixel_count = static_cast<std::size_t>(description.width) * description.height;
    std::vector<std::uint32_t> packed(pixel_count);
    for (std::size_t index = 0; index < pixel_count; ++index) {
        const std::uint32_t red = rgb[index * 3u + 0u];
        const std::uint32_t green = rgb[index * 3u + 1u];
        const std::uint32_t blue = rgb[index * 3u + 2u];
        packed[index] = (red << 16u) | (green << 8u) | blue;
    }
    publish_pixels(state, std::move(packed), description.width, description.height);
}

void display_window_present_rgba(std::span<const std::byte> rgba, std::uint32_t width, std::uint32_t height) {
    if (!display_window_enabled() || width == 0u || height == 0u) return;
    const std::size_t pixel_count = static_cast<std::size_t>(width) * height;
    if (rgba.size() < pixel_count * 4u) return;
    WindowState &state = window_state();
    if (!state.ready.load(std::memory_order_acquire)) return;
    // Reused across calls via publish_pixels_reuse()'s swap instead of
    // allocating a fresh pixel_count-sized vector every vblank -- this runs
    // at full internal resolution (e.g. 1920x1080, ~8MB) every frame.
    static thread_local std::vector<std::uint32_t> packed;
    packed.resize(pixel_count);
    for (std::size_t index = 0; index < pixel_count; ++index) {
        std::uint32_t source = 0u;
        std::memcpy(&source, rgba.data() + index * 4u, sizeof(source));
        packed[index] =
            (source & 0x0000FF00u) | ((source & 0x000000FFu) << 16u) | ((source >> 16u) & 0x000000FFu);
    }
    publish_pixels_reuse(state, packed, width, height);
}

DisplayWindowSurface display_window_surface() {
    WindowState &state = window_state();
    if (!state.ready.load(std::memory_order_acquire) || state.window == nullptr) return {};
    int width = 0;
    int height = 0;
    SDL_GetRendererOutputSize(state.renderer, &width, &height);
    // No separate "instance" handle needed here: SDL_Vulkan_CreateSurface()
    // only wants the SDL_Window* plus the VkInstance the Vulkan backend owns
    // itself, unlike Win32 where vkCreateWin32SurfaceKHR also wants HINSTANCE.
    return {state.window, nullptr, static_cast<std::uint32_t>(std::max(0, width)),
            static_cast<std::uint32_t>(std::max(0, height))};
}

HostInputState display_window_input() {
    // The buttons and the analog stick are fetched by separate callers within
    // one controller poll, and the mouse deltas can only be drained once -- so
    // the reading is cached for a few milliseconds and both callers get the
    // same one. Shorter than a frame, so nothing here is ever perceptibly old.
    static std::mutex cache_mutex;
    static HostInputState cached{};
    static std::chrono::steady_clock::time_point cached_at{};
    const std::lock_guard<std::mutex> guard(cache_mutex);
    const auto now = std::chrono::steady_clock::now();
    if (cached_at.time_since_epoch().count() != 0 &&
        now - cached_at < std::chrono::milliseconds(4))
        return cached;
    cached_at = now;
    cached = HostInputState{};

    HostInputState input{};
    const auto publish = [&]() -> HostInputState & { cached = input; return cached; };
    if (!display_window_enabled()) return publish();
    WindowState &state = window_state();
    if (!state.ready.load(std::memory_order_acquire)) return publish();

    // The mouse keeps accumulating while the window is not focused, so the
    // deltas are drained either way. Leaving them to pile up made the camera
    // whip round on the frame focus came back.
    const std::int32_t mouse_dx = state.mouse_dx.exchange(0, std::memory_order_relaxed);
    const std::int32_t mouse_dy = state.mouse_dy.exchange(0, std::memory_order_relaxed);
    const std::int32_t wheel = state.wheel.exchange(0, std::memory_order_relaxed);
    if (!state.focused.load(std::memory_order_relaxed)) return publish();

    const std::uint8_t *keys = SDL_GetKeyboardState(nullptr);
    bool keyboard_or_mouse_active = std::abs(mouse_dx) + std::abs(mouse_dy) > 3 || wheel != 0 ||
        key_down(keys, kMoveForward) || key_down(keys, kMoveBack) ||
        key_down(keys, kMoveLeft) || key_down(keys, kMoveRight);
    for (const KeyBinding &binding : kKeyBindings)
        if (key_down(keys, binding.scancode)) { input.buttons |= binding.psp_button; keyboard_or_mouse_active = true; }

    const Uint32 mouse_buttons = SDL_GetMouseState(nullptr, nullptr);
    if (mouse_buttons != 0u) keyboard_or_mouse_active = true;
    if (mouse_buttons & SDL_BUTTON(SDL_BUTTON_LEFT)) input.buttons |= kPspCircle;
    if (mouse_buttons & SDL_BUTTON(SDL_BUTTON_RIGHT)) input.buttons |= kPspRTrigger;
    if (mouse_buttons & SDL_BUTTON(SDL_BUTTON_MIDDLE)) input.buttons |= kPspLTrigger;

    const bool driving = vcs_player_in_vehicle();
    int move_x = 0;
    int move_y = 0;
    if (key_down(keys, kMoveLeft)) move_x -= 1;
    if (key_down(keys, kMoveRight)) move_x += 1;
    if (!driving) {
        if (key_down(keys, kMoveForward)) move_y -= 1;
        if (key_down(keys, kMoveBack)) move_y += 1;
    } else {
        if (key_down(keys, SDL_SCANCODE_UP)) move_y -= 1;
        if (key_down(keys, SDL_SCANCODE_DOWN)) move_y += 1;
    }
    input.accelerate = key_down(keys, kMoveForward);
    input.brake = key_down(keys, kMoveBack);
    const int reach = key_down(keys, kWalkModifier) ? 60 : 127;
    input.analog_x = static_cast<std::uint8_t>(std::clamp(128 + move_x * reach, 0, 255));
    input.analog_y = static_cast<std::uint8_t>(std::clamp(128 + move_y * reach, 0, 255));

    static int wheel_hold = 0;
    static std::uint32_t wheel_button = 0u;
    if (wheel != 0) {
        wheel_button = wheel > 0 ? kPspLeft : kPspRight;
        wheel_hold = 4;
    }
    if (wheel_hold > 0) {
        --wheel_hold;
        input.buttons |= wheel_button;
    }

    const ControlsConfiguration &controls = vcs_configuration().controls;
    // The mouse is deliberately not turned into an axis here. This poll runs about eleven times per
    // frame and each one only sees the motion since the previous poll, so a per-poll axis was
    // overwritten with zero by the next poll before the game read it and most movement was lost. The
    // SDL_MOUSEMOTION handler adds raw motion to the camera's own accumulator instead
    // (vcs_camera_add_mouse_motion), which converts it once per frame when the game reads the axis.
    // Only a deflected controller stick is forwarded from here.

    if (SDL_GameController *pad = state.controller.load(std::memory_order_acquire);
        pad != nullptr && SDL_GameControllerGetAttached(pad)) {
        const auto pressed = [pad](SDL_GameControllerButton b) { return SDL_GameControllerGetButton(pad, b) != 0; };
        bool pad_active = false;
        for (int b = 0; b < SDL_CONTROLLER_BUTTON_MAX; ++b)
            if (pressed(static_cast<SDL_GameControllerButton>(b))) { pad_active = true; break; }
        for (int a = 0; a < SDL_CONTROLLER_AXIS_MAX && !pad_active; ++a)
            if (std::abs(static_cast<int>(SDL_GameControllerGetAxis(pad, static_cast<SDL_GameControllerAxis>(a)))) > 12000) pad_active = true;
        if (pad_active) vcs_prompt_note_input(true);
        if (pressed(SDL_CONTROLLER_BUTTON_A)) input.buttons |= kPspCross;
        if (pressed(SDL_CONTROLLER_BUTTON_X)) input.buttons |= kPspSquare;
        if (pressed(SDL_CONTROLLER_BUTTON_Y)) input.buttons |= kPspTriangle;
        if (pressed(SDL_CONTROLLER_BUTTON_B)) input.buttons |= kPspCircle;
        if (pressed(SDL_CONTROLLER_BUTTON_LEFTSHOULDER)) input.buttons |= kPspLTrigger;
        if (pressed(SDL_CONTROLLER_BUTTON_RIGHTSHOULDER)) input.buttons |= kPspRTrigger;
        if (pressed(SDL_CONTROLLER_BUTTON_START)) input.buttons |= kPspStart;
        if (pressed(SDL_CONTROLLER_BUTTON_BACK)) input.buttons |= kPspSelect;
        if (pressed(SDL_CONTROLLER_BUTTON_DPAD_UP)) input.buttons |= kPspUp;
        if (pressed(SDL_CONTROLLER_BUTTON_DPAD_DOWN)) input.buttons |= kPspDown;
        if (pressed(SDL_CONTROLLER_BUTTON_DPAD_LEFT)) input.buttons |= kPspLeft;
        if (pressed(SDL_CONTROLLER_BUTTON_DPAD_RIGHT)) input.buttons |= kPspRight;

        const Sint16 left_trigger = SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_TRIGGERLEFT);
        const Sint16 right_trigger = SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_TRIGGERRIGHT);
        constexpr Sint16 kTriggerThreshold = 8192;
        // On foot the triggers aim/look-behind (San Andreas layout); in a
        // vehicle they must not, since aiming suppresses the throttle. See
        // the long comment on the Win32 path above for why this matters.
        if (!driving) {
            if (left_trigger > kTriggerThreshold) input.buttons |= kPspLTrigger;
            if (right_trigger > kTriggerThreshold) input.buttons |= kPspRTrigger;
        }
        if (right_trigger > kTriggerThreshold) input.accelerate = true;
        if (left_trigger > kTriggerThreshold) input.brake = true;

        const float lx = axis_with_deadzone(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTX));
        const float ly = axis_with_deadzone(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTY));
        if (lx != 0.0f || ly != 0.0f) {
            input.analog_x = stick_to_psp(lx, false);
            input.analog_y = stick_to_psp(ly, false);  // SDL and the PSP both have Y growing downward
        }
        float camera_x = axis_with_deadzone(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_RIGHTX));
        float camera_y = axis_with_deadzone(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_RIGHTY));
        // SDL's stick Y grows downward; the camera axis (like -mouse_dy above) grows upward.
        camera_y = -camera_y;
        if (controls.invert_camera_y) camera_y = -camera_y;
        if (camera_x != 0.0f || camera_y != 0.0f) {
            input.camera_x = std::clamp(static_cast<int>(std::lround(camera_x * 127.0f)), -127, 127);
            input.camera_y = std::clamp(static_cast<int>(std::lround(camera_y * 127.0f)), -127, 127);
        }
    }
    if (keyboard_or_mouse_active) vcs_prompt_note_input(false);
    return publish();
}

std::uint32_t display_window_buttons() { return display_window_input().buttons; }

void display_window_analog(std::uint8_t &x, std::uint8_t &y) {
    const HostInputState input = display_window_input();
    x = input.analog_x;
    y = input.analog_y;
}

bool display_window_close_requested() {
    return window_state().close_requested.load(std::memory_order_relaxed);
}

bool display_window_debug_dump_requested() {
    if (!display_window_enabled()) return false;
    WindowState &state = window_state();
    if (!state.ready.load(std::memory_order_acquire) || !state.focused.load(std::memory_order_relaxed))
        return false;
    static bool was_down = false;
    const std::uint8_t *keys = SDL_GetKeyboardState(nullptr);
    const bool down = keys != nullptr && keys[SDL_SCANCODE_F9] != 0;
    const bool pressed_this_poll = down && !was_down;
    was_down = down;
    return pressed_this_poll;
}

// Called from the worker thread once runtime.run() returns. Actual teardown
// happens on the main thread inside display_window_pump_events(), since SDL
// window/renderer objects must be destroyed on the thread that owns them.
void display_window_shutdown() {
    if (!display_window_enabled()) return;
    WindowState &state = window_state();
    if (!state.ready.load(std::memory_order_acquire)) return;
    display_window_set_status("stopped (close this window)");
    state.shutdown_requested.store(true, std::memory_order_release);
    const char *hold = VCS_ENV("PSPRECOMP_WINDOW_HOLD");
    if (hold != nullptr && std::string(hold) == "0")
        state.close_requested.store(true, std::memory_order_release);
    while (!state.destroyed.load(std::memory_order_acquire))
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
}

void display_window_pump_events() {
    WindowState &state = window_state();
    if (!state.ready.load(std::memory_order_acquire) || state.destroyed.load(std::memory_order_acquire)) return;

    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
            state.close_requested.store(true, std::memory_order_release);
            break;
        case SDL_WINDOWEVENT:
            if (event.window.event == SDL_WINDOWEVENT_CLOSE) {
                state.close_requested.store(true, std::memory_order_release);
            } else if (event.window.event == SDL_WINDOWEVENT_FOCUS_GAINED) {
                state.focused.store(true, std::memory_order_relaxed);
                SDL_SetRelativeMouseMode(SDL_TRUE);
            } else if (event.window.event == SDL_WINDOWEVENT_FOCUS_LOST) {
                state.focused.store(false, std::memory_order_relaxed);
                SDL_SetRelativeMouseMode(SDL_FALSE);
            } else if (event.window.event == SDL_WINDOWEVENT_SIZE_CHANGED ||
                       event.window.event == SDL_WINDOWEVENT_RESIZED) {
                publish_output_surface(state);
            }
            break;
        case SDL_MOUSEMOTION:
            state.mouse_dx.fetch_add(event.motion.xrel, std::memory_order_relaxed);
            state.mouse_dy.fetch_add(event.motion.yrel, std::memory_order_relaxed);
            vcs_camera_add_mouse_motion(event.motion.xrel, event.motion.yrel);
            break;
        case SDL_MOUSEWHEEL:
            state.wheel.fetch_add(event.wheel.y, std::memory_order_relaxed);
            break;
        case SDL_CONTROLLERDEVICEADDED:
            if (state.controller.load(std::memory_order_acquire) == nullptr)
                state.controller.store(SDL_GameControllerOpen(event.cdevice.which), std::memory_order_release);
            break;
        case SDL_CONTROLLERDEVICEREMOVED:
            if (SDL_GameController *pad = state.controller.load(std::memory_order_acquire);
                pad != nullptr && !SDL_GameControllerGetAttached(pad)) {
                SDL_GameControllerClose(pad);
                state.controller.store(nullptr, std::memory_order_release);
            }
            break;
        default:
            break;
        }
    }

    {
        std::lock_guard<std::mutex> guard(state.title_mutex);
        if (!state.pending_title.empty()) {
            SDL_SetWindowTitle(state.window, state.pending_title.c_str());
            state.pending_title.clear();
        }
    }

    if (state.frame_pending.exchange(false, std::memory_order_acq_rel)) {
        std::vector<std::uint32_t> pixels;
        std::uint32_t width = 0;
        std::uint32_t height = 0;
        {
            std::lock_guard<std::mutex> guard(state.mutex);
            pixels = state.pixels;
            width = state.width;
            height = state.height;
        }
        if (width != 0u && height != 0u) {
            int existing_w = 0;
            int existing_h = 0;
            if (state.texture != nullptr)
                SDL_QueryTexture(state.texture, nullptr, nullptr, &existing_w, &existing_h);
            if (state.texture == nullptr || existing_w != static_cast<int>(width) ||
                existing_h != static_cast<int>(height)) {
                if (state.texture != nullptr) SDL_DestroyTexture(state.texture);
                state.texture = SDL_CreateTexture(state.renderer, SDL_PIXELFORMAT_RGB888,
                                                  SDL_TEXTUREACCESS_STREAMING, static_cast<int>(width),
                                                  static_cast<int>(height));
            }
            if (state.texture != nullptr) {
                SDL_UpdateTexture(state.texture, nullptr, pixels.data(), static_cast<int>(width) * 4);
                SDL_RenderClear(state.renderer);
                int output_w = 0;
                int output_h = 0;
                SDL_GetRendererOutputSize(state.renderer, &output_w, &output_h);
                SDL_Rect destination{0, 0, output_w, output_h};
                const bool preserve_aspect = state.aspect_lock.load(std::memory_order_relaxed) ||
                    state.configuration.aspect_mode == DisplayAspectMode::Preserve;
                if (preserve_aspect && output_w != 0 && output_h != 0) {
                    const float source_aspect = static_cast<float>(width) / static_cast<float>(height);
                    const float output_aspect = static_cast<float>(output_w) / static_cast<float>(output_h);
                    if (output_aspect > source_aspect) {
                        destination.w = static_cast<int>(output_h * source_aspect);
                        destination.h = output_h;
                    } else {
                        destination.w = output_w;
                        destination.h = static_cast<int>(output_w / source_aspect);
                    }
                    destination.x = (output_w - destination.w) / 2;
                    destination.y = (output_h - destination.h) / 2;
                }
                SDL_RenderCopy(state.renderer, state.texture, nullptr, &destination);
                SDL_RenderPresent(state.renderer);
            }
        }
    }

    if (state.shutdown_requested.load(std::memory_order_acquire) &&
        state.close_requested.load(std::memory_order_relaxed)) {
        if (SDL_GameController *pad = state.controller.exchange(nullptr, std::memory_order_acq_rel);
            pad != nullptr)
            SDL_GameControllerClose(pad);
        if (state.texture != nullptr) SDL_DestroyTexture(state.texture);
        if (state.renderer != nullptr) SDL_DestroyRenderer(state.renderer);
        if (state.window != nullptr) SDL_DestroyWindow(state.window);
        state.texture = nullptr;
        state.renderer = nullptr;
        state.window = nullptr;
        state.destroyed.store(true, std::memory_order_release);
    }
}

} // namespace vcs
