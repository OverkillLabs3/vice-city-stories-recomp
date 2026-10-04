# VCSNative 1.0.0

First public build of GTA Vice City Stories for PC, made by statically recompiling the PSP game to
x64. Bring your own game files: this release contains no game data.

## New

- Native Windows build on the Vulkan graphics backend, and a native macOS build for Apple Silicon
  through MoltenVK
- Settings launcher (`VCSLauncher.exe`) with Window, Rendering, Quality, Controls, Addons and
  Performance pages. It edits both ini files in place, keeps comments and line endings, and installs
  or removes the optional texture pack
- Keyboard and mouse controls with raw mouse look, and the game's own prompts rewritten to show your
  keys and mouse buttons, switching to Xbox button names when a controller is connected
- Correct framing and HUD layout at 16:9, 21:9, 32:9, 4:3, 16:10, 5:4 and tall windows, following
  live resizes
- 60 fps frame pacing with audio as a second clock reference, plus a guard that drops stale audio
  instead of letting it drift
- Graphics: hardware transform and culling, display lists on their own thread, non-blocking texture
  uploads, SMAA and FXAA, colour grading, sky palette, dither, sharpening, CloudWorks volumetric
  clouds, Project2DFX distant lights
- Cutscene audio fixed: ATRAC3+ streams with 280 and 376 byte frames were misread as ATRAC3, which
  silenced the second half of every cutscene
- Texture cache fix: a palette-animating texture was re-created every frame, growing graphics memory
  past 10 GB until the picture went black. Identical textures are now shared and replacement memory
  is capped to a fraction of the card's video memory
- Startup CPU feature check with a plain-language message instead of an illegal-instruction crash,
  and app-local Visual C++ runtime so nothing has to be installed

## Known limitations

- Bloom is composited on the CPU and therefore only applies when frame presentation is set to CPU
  readback; with the default GPU swapchain it has no visible effect
- Developed and tested on NVIDIA hardware. AMD, Intel, Optimus laptops, mixed-DPI multi-monitor and
  HDR displays are untested
- Missions, cutscene soak and save-game handling have had less testing than the opening areas

## Install

Unzip `VCSNative-Windows.zip` into a folder you can write to, put your `PSP_DATA` folder next to the
exes, and start `VCSLauncher.exe`. The optional texture pack is a separate asset on this release.
Full instructions are in `README_WINDOWS.txt` inside the download.
