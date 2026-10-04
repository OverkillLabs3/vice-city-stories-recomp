#pragma once

#include <cstdint>
#include <filesystem>
#include <string>
#include <vector>

namespace vcs {

enum class DisplayResolutionMode : std::uint8_t {
    PspNative,
    Custom,
    Desktop,
};

enum class DisplayAspectMode : std::uint8_t {
    Preserve,
    Stretch,
};

enum class DisplayUpscaleFilter : std::uint8_t {
    Nearest,
    Bilinear,
};

enum class InternalResolutionMode : std::uint8_t {
    PspNative,
    Scale,
    Custom,
    Desktop,
};

enum class RenderingBackend : std::uint8_t {
    Software,
    DirectX12,
};

struct DisplayConfiguration {
    // The native PSP output remains the default so framebuffer hashes and
    // visual regressions are directly comparable with earlier stages.
    bool enabled{true};
    DisplayResolutionMode resolution_mode{DisplayResolutionMode::PspNative};
    std::uint32_t custom_width{480u};
    std::uint32_t custom_height{272u};
    bool fullscreen{false};
    DisplayAspectMode aspect_mode{DisplayAspectMode::Preserve};
    DisplayUpscaleFilter upscale_filter{DisplayUpscaleFilter::Nearest};
    bool integer_scale{false};
    // Native in-game overlay. This counts completed VCS render frames in wall
    // time (30 is full speed), rather than merely echoing the PSP's 60 Hz
    // vblank clock.
    bool show_fps{false};
};

struct PresentationRectangle {
    std::int32_t x{};
    std::int32_t y{};
    std::int32_t width{};
    std::int32_t height{};
};

struct DisplaySurfaceDimensions {
    std::uint32_t width{480u};
    std::uint32_t height{272u};
};

[[nodiscard]] DisplaySurfaceDimensions resolve_display_surface_dimensions(
    const DisplayConfiguration &configuration) noexcept;

[[nodiscard]] PresentationRectangle calculate_presentation_rectangle(
    std::uint32_t client_width, std::uint32_t client_height,
    std::uint32_t source_width, std::uint32_t source_height,
    DisplayAspectMode aspect_mode, bool integer_scale) noexcept;

struct InternalResolutionDimensions {
    std::uint32_t width{480u};
    std::uint32_t height{272u};
};

struct RenderingConfiguration {
    // PSP-native remains authoritative by default. Higher modes allocate a
    // genuinely larger render target; they are not presentation upscalers.
    RenderingBackend backend{RenderingBackend::Software};
    InternalResolutionMode internal_resolution_mode{InternalResolutionMode::PspNative};
    std::uint32_t internal_scale{2u};
    std::uint32_t internal_width{960u};
    std::uint32_t internal_height{544u};
    // Anisotropic sampling of the game's own mip chain, 1 to 16. The PSP had
    // none, so 1 is what the parity presets keep. Only applies to the DirectX 12
    // backend, and only to mipmapped world textures.
    std::uint32_t anisotropic_filtering{1u};
    // Multisample count for the 3D render target: 1, 2, 4, 8 or 16. Unlike the
    // other image-quality options this defaults to on, because it is the one
    // that fixes geometric aliasing at the source rather than after the fact.
    // Clamped down to what the adapter reports for the colour and depth
    // formats actually in use.
    std::uint32_t msaa{4u};
    // Depth buffer precision in bits: 16, 24 or 32.
    //
    // 16 is what the PSP had, but the console rasterized at 480x272; at desktop
    // resolution far fewer surfaces fit in each of those 65536 steps and
    // distant geometry -- fences, billboards -- fights visibly. 24 fixes that
    // and is the default. 32 is float, which spends its precision next to the
    // near plane and is not recommended: it gave nearby bodywork enough
    // resolution to start resolving a small difference in Z between two passes
    // over the same panel, and the cars came out speckled.
    std::uint32_t depth_precision{24u};
    // Open-world texture working set.  A small entry limit makes the cache
    // repeatedly evict and re-decode city textures even while plenty of VRAM
    // remains available.
    std::uint32_t texture_cache_entries{8192u};
    std::uint32_t texture_cache_mb{256u};
    // Stage 39's hardware-transform frontend, which moves world/view/projection
    // and viewport onto the GPU for most projected draws.
    //
    // Generated/reflection UVs are supported by this path as well, keeping all
    // passes of vehicle bodywork on the same depth transform.
    bool hardware_transform{false};
    // Stage 44.6: enable the native Direct3D 12 GE path. It includes decoded
    // PSP textures, persistent framebuffer feedback, direct swapchain present,
    // depth precision selection and native MSAA/resolve.
    bool dx12_ge_color{false};
    // Confirmed a permanent no-op on the Vulkan backend previously (DX12-
    // only, and DX12's own implementation was never wired up either).
    // Now drives a single-pass FXAA implementation instead, simpler and
    // safer than true SMAA (which needs precomputed area/search lookup
    // textures and three render passes), for a similar practical result
    // (smoothed jagged polygon edges). Kept under the same key/field name
    // for config compatibility; the .ini and launcher UI both label it FXAA
    // now so it isn't misrepresented as the real SMAA algorithm.
    bool smaa{false};
    // Unsharp-mask sharpening of the final composited frame (see the same
    // shaders/color_grade.frag pass ColorGrading uses -- this and color
    // grading share one GPU pass; either alone is enough to trigger it,
    // and each is applied independent of the other being on). 0 = off/
    // identity. PSP textures are low resolution, so this can only sharpen
    // existing detail, not invent detail that was never captured.
    float sharpen{0.0f};
    bool experimental_gpu_color_preview{false};
    bool gpu_geometry_debug_colors{false};
    std::uint64_t dump_gpu_frame_vblank{0u};
};

[[nodiscard]] InternalResolutionDimensions resolve_internal_resolution(
    const RenderingConfiguration &configuration) noexcept;

struct AudioConfiguration {
    bool enabled{true};
    // Percent of the guest's own volume. 100 reproduces the PSP mix.
    std::uint32_t volume{100u};
    // Keep a compact queue-health log beside the executable. This is cheap
    // (one line every two seconds) and makes intermittent underruns observable.
    bool diagnostics{true};
    std::uint32_t prebuffer_blocks{6u};
    std::uint32_t recovery_prebuffer_blocks{12u};
};

struct TimingConfiguration {
    // Native VCS renders every other 59.94 Hz vblank (30 FPS). 60 removes that
    // skip; 120/240 also raise the virtual display cadence so they are real
    // game-frame targets rather than duplicated presentation frames.
    // Locked to 60 -- see apply_timing_key() in vcs_config.cpp.
    std::uint32_t frame_rate{60u};
    bool realtime_speed_diagnostics{false};
    std::uint64_t realtime_speed_interval_vblanks{120u};
};

struct DiagnosticsConfiguration {
    // Optional text log beside the executable. Used for startup failures,
    // DirectX 12 device/present errors, missing-asset reports and other host
    // faults that may not stay visible on a closed console window.
    bool log_to_file{false};
    std::string log_file{"VCSNative.log"};
    bool flush_every_line{true};
};

// Widescreen / ultrawide frustum, after ThirteenAG's WidescreenFixesPack
// (MIT, Copyright (c) 2018 ThirteenAG) -- specifically the VCS WidescreenFix
// plugin. See host/ge_renderer.cpp for how the same correction
// is expressed here and why it cannot be a memory patch in this port.
//
// Off by default: PSP parity stays the baseline for visual regressions.
struct WidescreenConfiguration {
    bool enabled{false};
    // 0/0 means "auto": derive the ratio from the presentation surface.
    std::uint32_t aspect_x{0u};
    std::uint32_t aspect_y{0u};
};

// Experimental single-pass bloom on the Vulkan backend (see
// ge_gpu_backend_vulkan.cpp's bloom_* state). [SimulateHDR] previously only
// existed as a DX12 placeholder (vcs_hdr_post_dx12_stub.cpp is a permanent
// no-op there) -- Threshold/Intensity are new keys, parsed here rather than
// through hdr_post_configure() so the implementation is not gated behind a
// stub that always reports disabled.
struct BloomConfiguration {
    bool enabled{false};
    // Fraction of luminance (0..1) above which a pixel starts contributing
    // to the glow; higher = only the brightest highlights bloom.
    float threshold{0.8f};
    // Multiplies the extracted/blurred glow before it's added back. Kept
    // moderate by default -- this is additive light, easy to blow out.
    float intensity{0.6f};
};

// Parametric color grading (see shaders/color_grade.frag) -- not a real
// LUT-texture lookup (no .cube/strip asset exists in this project), but
// reaches the same practical goal via brightness/contrast/saturation/tint
// math. Defaults are all identity (no visual change) so turning Enabled on
// with no other tuning is a genuine no-op, same convention has_saved
// elsewhere in this file.
struct ColorGradingConfiguration {
    bool enabled{false};
    float saturation{1.0f};
    float contrast{1.0f};
    float brightness{0.0f};
    float tint_r{1.0f};
    float tint_g{1.0f};
    float tint_b{1.0f};
};

// Texture replacement and upscaling. Replacement PNGs live in <directory> named
// <content hash>.png and must be exactly 2x/4x/8x the game's texture size.
struct TexturesConfiguration {
    bool mipmaps{true};           // generate a full mip chain for every texture
    bool replacement{true};
    bool detail{true};            // procedural sub-texel detail where a texture is heavily magnified
    bool dump_originals{false};   // write each new game texture to <directory>/originals
    bool upscale{false};          // conservative built-in upscaler for textures without a replacement
    std::uint32_t upscale_scale{0u};   // 0 = automatic by texture size
    float upscale_sharpen{0.25f};
    std::string directory{"Textures"};
};

// Color-only ProperShaders-style post effects, all read from ProperShaders.ini
// and all off by default. They ride the existing grading pass.
struct PostFxConfiguration {
    bool dither_enabled{false};    // [Dither] Enabled
    float dither_strength{1.0f};   // [Dither] Strength
    bool cas_enabled{false};       // [CAS] Enabled
    float cas_sharpness{0.3f};     // [CAS] Sharpness
    bool vhs_enabled{false};       // [VHS] Enabled
    float vhs_wiggle{0.03f};
    float vhs_smear{1.0f};
    float vhs_speed{25.0f};
    bool sky_palette_enabled{false};   // [SkyPalette] Enabled
    float sky_palette_strength{0.85f}; // [SkyPalette] Strength
    bool time_of_day_enabled{false};   // [TimeOfDayGrade] Enabled
    float time_of_day_strength{0.35f};  // [TimeOfDayGrade] Strength
};

// Standalone ProperShaders.ini feature. Values normally supplied by the San
// Andreas timecycle/weather integration remain explicit placeholders until the
// equivalent VCS guest hooks exist. Keeping the inputs separate is important:
// collapsing the three decks and lighting state into one "coverage" value
// materially changes CloudWorks' appearance.
struct VolumetricCloudsConfiguration {
    bool enabled{false};
    std::uint32_t downscale_div{2u};
    std::uint32_t layers{2u};
    std::uint32_t shadow_steps{8u};
    float coverage_low{0.52f};
    float coverage_mid{0.34f};
    float coverage_high{0.20f};
    float opacity{1.0f};
    float speed{0.0f};
    float brightness{1.0f};
    float random_seed{0.0f};
    float sun_direction_x{0.38f};
    float sun_direction_y{-0.28f};
    float sun_direction_z{0.88f};
    float sun_color_r{1.0f};
    float sun_color_g{0.94f};
    float sun_color_b{0.86f};
    float cloud_base_color_r{0.86f};
    float cloud_base_color_g{0.82f};
    float cloud_base_color_b{0.90f};
    float atmosphere_density{0.0f};
    float mist{0.50f};
    float fog_color_r{0.72f};
    float fog_color_g{0.80f};
    float fog_color_b{0.92f};
    float fog_start{4500.0f};
    float day_progression{0.88f};
    float temporal_blend{0.50f};
    float temporal_denoise{1.0f};
    float temporal_clamp{1.0f};
};

// The aspect the game itself builds its projection with.  VCS loads the
// constant 0x3FE38E39 -- exactly 16/9 -- and everything is relative to it.
inline constexpr float kGameNativeAspectRatio = 16.0f / 9.0f;

struct ControlsConfiguration {
    // Mouse and right-stick camera. Needs the guest-side hook, which bypasses
    // the game's own camera conditions, so it is opt-in.
    bool camera_stick{true};
    // Stick deflection per raw mouse count. The axis saturates at 127, so this
    // sets how far the mouse travels before the camera is already turning as
    // fast as the game will turn it -- past that point the value is pinned and
    // every difference in how fast you moved is thrown away, which reads as the
    // camera stepping rather than sweeping. 12 keeps a normal flick
    // proportional; the ceiling on turn speed is the game's, not this number's.
    std::uint32_t mouse_sensitivity{50u};
    bool invert_camera_y{false};
    // Safe stop for upward input on the outdoor on-foot camera. Stock VCS's
    // actual clamp remains at 45 degrees; this prevents reaching it without
    // changing vehicle or interior cameras.
    std::uint32_t ped_camera_up_limit_degrees{45u};
    // ThirteenAG's ModernControlScheme: accelerate on R, brake on L.
    //
    // Off, and not merely as a conservative default. Stock VCS accelerates on
    // Cross and brakes on Square -- measured, the accessors load pad offsets
    // 0x2A and 0x26 -- which is what San Andreas does on a pad, so leaving this
    // off is the San Andreas-parity setting and turning it on is the GTA IV/V
    // one. The original PSP configuration also leaves it disabled.
    bool modern_control_scheme{false};
    // Rewrite the game's control prompts ("press X", "L button") into the
    // keyboard and mouse controls bound to those buttons.
    bool keyboard_prompts{true};
};

struct VcsConfiguration {
    ControlsConfiguration controls{};
    TexturesConfiguration textures{};
    DisplayConfiguration display{};
    RenderingConfiguration rendering{};
    AudioConfiguration audio{};
    TimingConfiguration timing{};
    DiagnosticsConfiguration diagnostics{};
    WidescreenConfiguration widescreen{};
    BloomConfiguration bloom{};
    ColorGradingConfiguration color_grading{};
    VolumetricCloudsConfiguration volumetric_clouds{};
    // ProperShaders.ini [SMAA] Enabled: real three-pass SMAA 1x (Vulkan backend),
    // replacing FXAA. Off by default.
    bool smaa_1x{false};
    PostFxConfiguration postfx{};
    std::filesystem::path source_path{};
    // Where the executable lives. Saves go beside it rather than into the game
    // data, so a player who points the runtime at a read-only or shared copy of
    // the game still has somewhere to write, and so nobody has to go looking
    // inside the extracted disc for their progress.
    std::filesystem::path executable_directory{};
    bool initialized{false};
    bool loaded_from_file{false};
    std::vector<std::string> warnings{};
};

// Parses one INI without modifying the process-global configuration. Exposed
// for deterministic tests and small configuration tools.
[[nodiscard]] VcsConfiguration load_vcs_configuration(const std::filesystem::path &path);

// Loads PSPRECOMP_CONFIG when set, otherwise <executable_dir>/VCSNative.ini.
// Missing files are not errors: defaults deliberately reproduce PSP 480x272.
void initialize_vcs_configuration(const std::filesystem::path &executable_directory);

[[nodiscard]] const VcsConfiguration &vcs_configuration();
[[nodiscard]] const char *display_resolution_mode_name(DisplayResolutionMode mode) noexcept;
[[nodiscard]] const char *display_aspect_mode_name(DisplayAspectMode mode) noexcept;
[[nodiscard]] const char *display_upscale_filter_name(DisplayUpscaleFilter filter) noexcept;
[[nodiscard]] const char *internal_resolution_mode_name(InternalResolutionMode mode) noexcept;
[[nodiscard]] const char *rendering_backend_name(RenderingBackend backend) noexcept;

// Resolved widescreen ratio, or 0 when the correction is off.  "auto" resolves
// against the surface the game is actually presented on.
[[nodiscard]] float resolve_widescreen_aspect_ratio(
    const VcsConfiguration &configuration,
    std::uint32_t surface_width, std::uint32_t surface_height) noexcept;

// How much wider than its own 16:9 projection the game is being shown at.
// 1 when the correction is off or the target already is 16:9, in which case
// nothing anywhere has to compensate for anything.
//
// The world is widened by this much (the guest builds its projection with the
// resolved aspect instead of 16/9), and the 2D interface -- which is authored
// in a 480-wide screen space that knows nothing about any of this -- is shrunk
// by the same amount so the stretch to the window cancels out.
[[nodiscard]] float widescreen_stretch_factor(
    const VcsConfiguration &configuration,
    std::uint32_t surface_width, std::uint32_t surface_height) noexcept;

// How far the 2D interface is pulled in towards the middle of the screen. This is the stretch factor
// above, but never below 1: a surface narrower than 16:9 narrows the guest's projection, and dividing
// the interface by a factor under 1 would push it outwards, off the screen.
[[nodiscard]] float widescreen_hud_factor(
    const VcsConfiguration &configuration,
    std::uint32_t surface_width, std::uint32_t surface_height) noexcept;

// The area of the window the game picture really occupies (the whole client area when the picture is
// stretched, the letterboxed rectangle when its proportions are kept), in pixels. The platform layer
// publishes it whenever the window is created or resized, and every widescreen calculation (the
// guest's projection and the interface correction) reads it through resolve_display_surface_dimensions(),
// so both follow the real output instead of a size guessed from the configuration. Until the first
// publish (and after publishing 0 x 0, which clears it) the configured size is used. Sizes too small
// to be a real window are ignored, so a minimised window keeps the last real size.
void publish_live_display_surface(std::uint32_t width, std::uint32_t height) noexcept;

} // namespace vcs
