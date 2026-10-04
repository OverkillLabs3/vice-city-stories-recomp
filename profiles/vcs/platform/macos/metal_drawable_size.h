#pragma once

// Tiny C shim so display_window.cpp (plain C++) can set a CAMetalLayer's
// drawableSize without needing to become Objective-C++ itself. See
// metal_drawable_size.mm for why this exists: the layer SDL creates for its
// renderer backs its drawable size to the window's full HiDPI pixel size by
// default, which is the physical display resolution in fullscreen (e.g.
// 2880x1800 on this machine) -- not the game's actual internal render
// resolution (e.g. 1920x1080). Apple's own Metal HUD reads this layer's
// drawableSize directly, so without this it shows the display's resolution
// instead of what the game is actually rendering at, which is what it was
// reported as doing.
#ifdef __cplusplus
extern "C" {
#endif

// `metal_layer` must be the CAMetalLayer* returned by SDL_RenderGetMetalLayer
// (passed as void* to keep this header includable from plain C++). Safe to
// call with a null layer (no-op) in case the SDL renderer backend is not
// actually Metal-based (software fallback).
void vcs_set_metal_layer_drawable_size(void *metal_layer, double width, double height);

#ifdef __cplusplus
}
#endif
