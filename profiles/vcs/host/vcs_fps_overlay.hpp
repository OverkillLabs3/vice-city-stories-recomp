#pragma once

#include <cstdint>

namespace vcs {

struct GeGpuDrawDescriptor;

// Records render targets touched during the current guest frame. The overlay
// is emitted only when that same frame actually touched the displayed target,
// so enabling it cannot turn VCS's intentionally repeated vblanks into new GPU
// frames.
void fps_overlay_observe_draw(const GeGpuDrawDescriptor &draw,
                              std::uint32_t vertex_weight) noexcept;

// Draws a small native 5x7 counter into the current displayed target. Call
// once per vblank loop iteration, before that vblank's GE frame is finished
// -- this only queues the glyph geometry, it does not affect the measured
// rate (see fps_overlay_note_presented_frame() below).
void fps_overlay_render_frame(std::uint32_t selected_framebuffer) noexcept;

// Marks that this vblank actually produced a new displayed frame (call only
// when ge_gpu_backend_finish_color_frame() returned true) and folds it into
// the measured rate. VCS's own game loop can tick its vblank faster than the
// display actually refreshes (Timing.FrameRate targets up to 120, and VCS
// only fills the displayed framebuffer on every *other* vblank besides), so
// counting fps_overlay_render_frame() calls themselves -- one per vblank
// tick, whether or not that tick produced a new visible frame -- read a
// number well above the real, vsync-locked, on-screen rate (confirmed live:
// this counter showed ~90 while Metal HUD, measuring actual presents, held
// steady at the real 60). Separated from render_frame() so counting can be
// gated on an actually-presented frame while the glyph draw itself still
// happens every vblank (so whichever vblank does end up presented carries
// an up-to-date overlay).
void fps_overlay_note_presented_frame() noexcept;

} // namespace vcs
