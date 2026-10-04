# VCSNative 1.0.0

First public build of GTA Vice City Stories for PC, made by statically recompiling the PSP game to
x64. Bring your own game files: this release contains no game data.

## The Vice City look

This is the part that makes it feel like Vice City on a big screen rather than a PSP on a desk, and
all of it is on by default:

- **Vice neon colour grade.** A preset tuned for the classic Miami look: saturation lifted into the
  1.15-1.30 band (high enough to make the neon read, low enough that it never goes cartoonish), with
  a slight warm-red push, neutral green and a mild blue in the shadows. It replaces the PSP's flat,
  washed-out daytime palette with the sunset-neon tone the game is remembered for. Switch and the
  individual controls are on the launcher's Quality page (`[ColorGrading]` in `VCSNative.ini`).
- **Sky palette remap.** The PSP's skies are a handful of banded gradients. This remaps them into a
  hazy gradient with a warm horizon, so the skyline, the sea and the sunsets finally sit in the same
  colour space as the neon grade instead of fighting it. On by default at 0.85 strength
  (`[SkyPalette]` in `ProperShaders.ini`).
- **Bloom.** Streetlights, headlights, neon signage and sun glare all pick up a soft glow. This is
  what turns Vice City at night from a dark map with bright dots into a night scene.
- **CloudWorks volumetric clouds.** The raymarched cloud layer ported from ProperShaders, with the
  sun scattering through it, at about 2 ms of GPU time per frame.
- **Project2DFX distant lights.** Traffic and street lamps beyond the game's own LOD cutoff show as
  points of light, so the skyline reads at distance.

Together with the optional texture pack and SMAA or FXAA, this is the "Vice City graphics" preset:
nothing to configure, and every piece can be turned down or off separately if you prefer the
original PSP look.

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
- Developed and tested on NVIDIA hardware. AMD and Intel GPUs are untested
- Missions, cutscene soak and save-game handling have had less testing than the opening areas

## Install

### Windows

Unzip `VCSNative-Windows.zip` into a folder you can write to, put your `PSP_DATA` folder next to the
exes, and start `VCSLauncher.exe`. The optional texture pack is a separate asset on this release.
Full instructions are in `README_WINDOWS.txt` inside the download.

Needs Windows 10 or 11 (64-bit) and a Vulkan 1.1 driver, which the standard NVIDIA, AMD and Intel
driver already provides. Nothing else has to be installed: the FFmpeg and Visual C++ runtime DLLs
are in the folder. If Windows says "Windows protected your PC", choose *More info* and then
*Run anyway*.

### macOS (Apple Silicon)

Requires macOS 13 or later on an Apple Silicon Mac.

1. Unzip `VCSNative-macOS.zip` and double-click **VCSNative**. The first time, macOS asks whether you
   want to open an app downloaded from the Internet: click **Open**. If it only offers *Done*, open
   System Settings, then Privacy & Security, and click **Open Anyway**.
2. On the Window page, next to *Game folder*, click **Choose...** and pick your `PSP_DATA` folder. It
   can live anywhere, including an external drive, and nothing is copied. **Play** stays greyed out
   until the game files are found.
3. Press **Play**. Settings, saves and textures are kept in
   `~/Library/Application Support/VCSNative`, so updating the app never touches them.

The app is self-contained: FFmpeg, SDL, the Vulkan loader and MoltenVK are inside it, so there is
nothing to install. Install the optional texture pack from the launcher's Quality page.
