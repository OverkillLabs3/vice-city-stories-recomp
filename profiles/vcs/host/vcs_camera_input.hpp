#pragma once

#include <cstdint>

namespace vcs {

// The second analog stick the PSP does not have.
//
// VCS reads its camera axes through two pad calls, and the PSP pad has one
// stick, so there is no register a mouse or a right stick could arrive in.
// ThirteenAG's WidescreenFixesPack solves this on real hardware by rewriting
// those two calls in the game's code (the DualAnalogPatch, itself after
// TheFloW's remastered controls); this port does the same thing in the AOT
// output, in generated_unit_0098.cpp around 0x0898E098.
//
// Kept in its own header so the one edit inside generated/ stays a pair of
// small, obvious calls rather than anything that has to be understood.
[[nodiscard]] bool vcs_camera_hook_enabled() noexcept;

// -127..127, zero at rest, in the same units the pad axis they replace used.
[[nodiscard]] int vcs_camera_axis_x() noexcept;
[[nodiscard]] int vcs_camera_axis_y() noexcept;

// Configured outdoor follow-ped upper pitch, converted from INI degrees to
// radians for the guest camera routine.
[[nodiscard]] float vcs_ped_camera_up_limit_radians() noexcept;

// Called once per controller poll with the host's right stick (the mouse does NOT go through here).
void vcs_camera_set_axes(int x, int y) noexcept;

// Raw mouse motion in device counts, added the moment the platform layer receives it (any thread).
//
// The controller is polled far more often than the game reads the camera (about eleven times per
// frame), and a poll only sees the motion that arrived since the previous one. Turning each poll's
// motion straight into an axis made the axis a per-poll value that later polls in the same frame
// overwrote with zero before the game read it, so most mouse movement never reached the camera.
// Instead the motion accumulates here and is converted once per frame, at the moment the game reads
// the axis, so none of it is lost and a fast flick is the sum of everything since the last frame.
void vcs_camera_add_mouse_motion(int dx, int dy) noexcept;

// Converts the motion accumulated since the previous frame into this frame's camera axis values.
// Called once per displayed frame from the vblank wait.
void vcs_camera_begin_frame() noexcept;

// Diagnostic for the stall at full upward pitch.
//
// The camera reads sit behind a guard on the pad's Mode field: the game skips
// them entirely unless Mode is in [0,4). If pitching all the way up moves Mode
// out of that window, both axes would stop responding at once and only come
// back on the way down -- which is exactly the reported symptom. Reports each
// distinct value once, under PSPRECOMP_CAMERA_DIAG, so pitching up and reading
// the log answers it instead of another guess.
void vcs_camera_note_mode(int mode) noexcept;

// Marks a point the camera code reached, so a stall can be located instead of
// guessed at. `site` is the address the label came from. Under
// PSPRECOMP_CAMERA_DIAG this prints a periodic tally: if the axis reads stop
// being reached while the player is still moving the mouse, some branch above
// diverted; if they keep being reached with live values and the view does not
// move, the input arrives and is discarded further down.
void vcs_camera_note_site(unsigned site) noexcept;

// The value the Y accessor returns, paired with the axis that produced it.
void vcs_camera_note_return(int value) noexcept;

} // namespace vcs
