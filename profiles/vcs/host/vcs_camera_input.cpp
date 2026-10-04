#include "vcs_camera_input.hpp"

#include "vcs_config.hpp"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>

namespace vcs {
namespace {

// Read by the guest thread and written by the controller poll. Relaxed is
// enough: a camera axis one frame stale is not observable, and tearing between
// the two axes is not either.
std::atomic<int> g_axis_x{0};
std::atomic<int> g_axis_y{0};

// Mouse motion accumulated since the game last read the camera, in raw counts.
std::atomic<int> g_mouse_dx{0};
std::atomic<int> g_mouse_dy{0};

// The value the game sees for this frame, fixed by vcs_camera_begin_frame(). Every read inside one
// frame returns the same number, and the motion behind it is consumed exactly once, on the frame
// boundary rather than on a timer (a timer latch let some frames take two frames' worth of motion and
// others none, which is what made fast movement snap).
std::atomic<int> g_frame_x{0};
std::atomic<int> g_frame_y{0};
double g_carry_x = 0.0, g_carry_y = 0.0;  // only touched from vcs_camera_begin_frame()

// The axis the game reads is a turn rate: it multiplies it by a per-frame constant and adds it to the
// angle. Feeding it counts * gain therefore turns the camera by an amount proportional to how far the
// mouse moved, which is what a raw-input camera does. No curve, no ceiling at the stick's 127: a
// flick simply turns further. Sensitivity 12 (the default) is about 3.3 axis units per count.
constexpr double kUnitsPerCountAtDefault = 3.3;
constexpr int kMaxAxis = 4000;  // far beyond any real flick; only guards the guest's 16-bit math

int convert(std::atomic<int> &pending, double &carry) noexcept {
    const int counts = pending.exchange(0, std::memory_order_relaxed);
    const double sensitivity = static_cast<double>(vcs_configuration().controls.mouse_sensitivity);
    const double total = counts * kUnitsPerCountAtDefault * (sensitivity / 12.0) + carry;
    const double whole = std::round(total);
    carry = total - whole;  // slow movement adds up instead of being rounded away
    return static_cast<int>(std::clamp(whole, -static_cast<double>(kMaxAxis), static_cast<double>(kMaxAxis)));
}

} // namespace

bool vcs_camera_hook_enabled() noexcept {
    // Off unless configured: with the hook on, the game's own camera conditions
    // are bypassed, so a session that wants stock PSP behaviour must be able to
    // have it.
    static const bool value = [] {
        const VcsConfiguration &config = vcs_configuration();
        return config.initialized && config.controls.camera_stick;
    }();
    return value;
}

void vcs_camera_add_mouse_motion(int dx, int dy) noexcept {
    if (dx != 0) g_mouse_dx.fetch_add(dx, std::memory_order_relaxed);
    if (dy != 0) g_mouse_dy.fetch_add(dy, std::memory_order_relaxed);
}

void vcs_camera_begin_frame() noexcept {
    // Runs once per displayed frame, so the mouse motion is consumed even while a menu or a cutscene
    // is up: nothing piles up to arrive as one lurch when gameplay resumes.
    g_frame_x.store(convert(g_mouse_dx, g_carry_x), std::memory_order_relaxed);
    // Positive means "look up". Raw mouse Y grows downwards, so it is negated; InvertCameraY flips it.
    // Pitch keeps the stick's own range: its speed builds up inside the game's camera code, which is
    // written for -127..127 and stops short of its up and down limits only when fed values in that range.
    const int y = std::clamp(convert(g_mouse_dy, g_carry_y), -127, 127);
    g_frame_y.store(vcs_configuration().controls.invert_camera_y ? y : -y, std::memory_order_relaxed);
}

int vcs_camera_axis_x() noexcept {
    // A deflected controller stick wins over the mouse.
    if (const int stick = g_axis_x.load(std::memory_order_relaxed); stick != 0) return stick;
    return g_frame_x.load(std::memory_order_relaxed);
}

int vcs_camera_axis_y() noexcept {
    const int mouse = g_frame_y.load(std::memory_order_relaxed);
    int y = g_axis_y.load(std::memory_order_relaxed);
    if (y == 0) y = mouse;  // a deflected stick wins; the mouse was drained above either way
    // What the host is handing over, sampled while the player reports the
    // camera stuck. This decides between the two possible stories without
    // another guess: values still arriving while the view refuses to move
    // means the guest is rejecting them, and values collapsing to zero means
    // the fault is on this side of the boundary.
    static const bool diag = std::getenv("PSPRECOMP_CAMERA_DIAG") != nullptr;
    if (diag) {
        static int calls = 0;
        if ((calls++ % 30) == 0)
            std::fprintf(stderr, "[camera] axis x=%d y=%d\n",
                         g_axis_x.load(std::memory_order_relaxed), y);
    }
    return y;
}

float vcs_ped_camera_up_limit_radians() noexcept {
    constexpr float kDegreesToRadians = 0.01745329251994329577f;
    const VcsConfiguration &config = vcs_configuration();
    return static_cast<float>(config.controls.ped_camera_up_limit_degrees) *
           kDegreesToRadians;
}

void vcs_camera_set_axes(int x, int y) noexcept {
    // Halved, because the accessor being replaced halves too.
    //
    // The stock function at 0x0898BB4C computes DPADRIGHT - DPADLEFT and then
    // shifts right by one before returning -- the value the camera logic was
    // written against is half the deflection, not the deflection. Handing over
    // the full range made every frame add twice the pitch the code expects,
    // which walks the camera past the angles the game covers; one stall was
    // photographed with the view pointing straight down at the player, which
    // VCS never does on its own.
    // The ceiling is applied where the curve is shaped, in display_window.cpp,
    // so slow movement keeps its full resolution and only the peak is held
    // down. Halving everything here instead cost all the precision at the
    // bottom of the range and made the camera crawl.
    g_axis_x.store(std::clamp(x, -127, 127), std::memory_order_relaxed);
    g_axis_y.store(std::clamp(y, -127, 127), std::memory_order_relaxed);
}

void vcs_camera_note_return(int value) noexcept {
    static const bool diag = std::getenv("PSPRECOMP_CAMERA_DIAG") != nullptr;
    if (!diag) return;
    // What the Y accessor actually hands back, against what went in. Logged
    // only while the axis is deflected, so looking up and looking down produce
    // two comparable runs of lines and the asymmetry between them is visible.
    const int in = g_axis_y.load(std::memory_order_relaxed);
    if (in == 0) return;
    static int calls = 0;
    if ((calls++ % 20) == 0)
        std::fprintf(stderr, "[camera] Y in=%d out=%d %s\n", in, value,
                     in > 0 ? "(olhando para cima)" : "(olhando para baixo)");
}

void vcs_camera_note_site(unsigned site) noexcept {
    static const bool diag = std::getenv("PSPRECOMP_CAMERA_DIAG") != nullptr;
    if (!diag) return;
    // Four sites, tallied and dumped once a second or so. Which counters keep
    // rising during a stall is the whole answer.
    static std::atomic<unsigned> counts[4]{};
    static std::atomic<unsigned> ticks{0};
    const unsigned index = site & 3u;
    counts[index].fetch_add(1u, std::memory_order_relaxed);
    if ((ticks.fetch_add(1u, std::memory_order_relaxed) % 240u) == 0u) {
        std::fprintf(stderr,
                     "[camera] enterX=%u readX=%u enterY=%u readY=%u  axis x=%d y=%d\n",
                     counts[0].load(std::memory_order_relaxed),
                     counts[1].load(std::memory_order_relaxed),
                     counts[2].load(std::memory_order_relaxed),
                     counts[3].load(std::memory_order_relaxed),
                     g_axis_x.load(std::memory_order_relaxed),
                     g_axis_y.load(std::memory_order_relaxed));
    }
}

void vcs_camera_note_mode(int mode) noexcept {
    static const bool diag = std::getenv("PSPRECOMP_CAMERA_DIAG") != nullptr;
    if (!diag) return;
    // One line per distinct value: the guard is evaluated every frame, and the
    // interesting event is the value changing while the player pitches up.
    static std::atomic<int> last{-9999};
    const int previous = last.exchange(mode, std::memory_order_relaxed);
    if (previous != mode)
        std::fprintf(stderr, "[camera] pad Mode %d -> %d  (camera reads need 0..3)\n",
                     previous, mode);
}

} // namespace vcs
