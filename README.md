# GTA Vice City Stories for PC

A native Windows and macOS build of **Grand Theft Auto: Vice City Stories** (PSP, Rockstar London,
2006), made by statically recompiling the original game code to x64 and running it on a
reimplementation of the PSP's Allegrex CPU and Graphics Engine (the
[PSPRecomp](https://github.com/jessicanataliagta/PSPRecomp) framework).

It is not an emulator running the game code: the game's MIPS program is translated to C++ ahead of
time and compiled into a normal executable. On top of that this project adds a keyboard and mouse
scheme with proper mouse look, widescreen and multi-aspect-ratio support, a Vulkan graphics stack
(SMAA, FXAA, colour grading, sky palette, volumetric clouds, an optional high-resolution texture
pack), and a settings launcher.

> **This repository and its releases contain no game data.** You need your own copy of the game, with
> its executable decrypted outside this project. Nothing here is affiliated with or endorsed by
> Rockstar Games, Take-Two Interactive or Sony.

**Status: playable release.** The game boots, plays and holds 60 fps on a desktop GPU; see
[Known issues](#known-issues) before reporting a problem.

## Download and play

1. Open the **[Releases](../../releases)** page of this repository and download the latest
   `VCSNative-Windows.zip`.
2. Unzip the whole `VCSNative` folder somewhere you can write to (not `Program Files`). It contains
   two programs:
   - **`VCSNative.exe`**: the game.
   - **`VCSLauncher.exe`**: a settings window with a Play button; keep it next to the game.
3. Have your game files ready in a folder called `PSP_DATA`, containing
   `PSP_GAME\SYSDIR\EBOOT_DECRYPTED.ELF` and `PSP_GAME\USRDIR`. Put it next to the two exes, or pick
   it in the launcher: the game data can live anywhere, including an external drive, and nothing is
   copied.
4. Double-click **`VCSLauncher.exe`** and press **Play**. If Windows shows "Windows protected your
   PC", choose *More info* and then *Run anyway*.

That is all: no installer, nothing else to download, no extra runtime to install. The Visual C++
runtime and the FFmpeg libraries are inside the folder.

Settings are written to `VCSNative.ini` and `ProperShaders.ini` next to the game; both are editable
by hand and the launcher preserves comments and layout.

### Requirements

- Windows 10 or 11, 64-bit, with a Vulkan 1.1 driver (the standard NVIDIA, AMD or Intel driver
  includes one)
- A CPU with AVX2, FMA, BMI1/BMI2, LZCNT, F16C, MOVBE and POPCNT. The game checks at startup and
  tells you which one is missing instead of crashing
- macOS 13 or later on Apple Silicon for the Mac build
- The game is limited by the processor, not the graphics card. On a Ryzen 7 5800X3D a frame costs
  about 7 ms of CPU with the frame limiter off

### macOS

Unzip `VCSNative-macOS.zip`, double-click **VCSNative** and choose your `PSP_DATA` folder on the
Window page. The app is self-contained (FFmpeg, SDL, the Vulkan loader and MoltenVK are inside it).
Settings, saves and textures live in `~/Library/Application Support/VCSNative`.

## What is in it

| | |
|---|---|
| **Keyboard and mouse** | Full keyboard and mouse controls with raw mouse look: accumulated per frame, no smoothing, no acceleration. The cursor stays inside the game window. The game's own on-screen prompts show your keys and mouse buttons instead of PSP symbols, and switch to Xbox button names when you pick up a controller. |
| **60 fps, evenly spaced** | The vblank clock is paced to 59.94 Hz against a 60 Hz display, with audio used as a second reference so long scenes do not drift. Frame pacing holds p99 around 18 ms in busy areas. |
| **Any aspect ratio** | Correct framing and HUD layout at 16:9, 21:9, 32:9, 4:3, 16:10, 5:4 and tall windows, windowed or fullscreen, and the picture follows live resizes. Optional integer scaling and aspect-preserving letterboxing. |
| **Vulkan graphics stack** | Hardware transform and culling, GPU texture uploads that do not stall the game, display-list recording on its own thread, SMAA (three-pass) or FXAA, bloom, colour grading, sky palette remap, dither, contrast adaptive sharpening and CloudWorks volumetric clouds. Most of it is switchable in the launcher. |
| **Texture pack** | An optional, separate download: 7,000 plus upscaled game and HUD textures, installed and uninstalled from the launcher's Quality page, with a VRAM-aware memory budget. |
| **Camera options** | Camera on right stick, invert Y, mouse sensitivity and an adjustable on-foot look-up limit. |
| **Audio fixes** | Correct ATRAC3+ playback (cutscene dialogue was silent or double-speed without it), a resampler that follows the hardware clock, and a drift guard that drops stale audio instead of letting it fall further behind. |
| **Draw distance** | World and model detail sliders, with the values that make vehicles despawn blocked in the launcher. |
| **Project2DFX lights** | Distant vehicle and street lights drawn beyond the game's own LOD cutoff. |
| **Settings launcher** | Window, Rendering, Quality, Controls, Addons and Performance pages. It also reports your display refresh rate and warns when it is not a multiple of 60. |

## Known issues

- **Bloom** is composited on the CPU, so it only has a visible effect when frame presentation is set
  to CPU readback. With the default GPU swapchain it stays off.
- **Missions and save games** have had less testing than the opening areas. Please attach
  `VCSNative.log` to any report.
- **Untested hardware paths:** multiple monitors with mixed DPI, HDR displays, Optimus or
  PowerXpress laptops, and AMD and Intel GPUs (developed on NVIDIA).
- **No HDR or wide-gamut output.**
- Frame pacing on a display running at something other than 60/120 Hz can look uneven without
  variable refresh rate; the launcher says so on its Performance page.
- The PSP's analog stick "hold" behavior in some mini-games is mapped to the keys as configured and
  has not been compared against the original button-for-button.

## How it works

PSPRecomp reads the decrypted MIPS executable, analyzes its functions and control flow, emits C++
translation units for the guest code, and links them into a native host runtime. There is no
interpreter and no JIT at run time. The recompiler framework and the game profile are separated: the
title-specific addresses, HLE behaviour and generated code all live under `profiles/vcs`, and the
framework builds without any profile selected. See
[docs/ARCHITECTURE.md](docs/ARCHITECTURE.md).

## Building from source

See [BUILDING.md](BUILDING.md). The short version: Visual Studio 2022 with the ClangCL toolset,
CMake and the Vulkan SDK on Windows, then `profiles\vcs\BUILD_VCS.bat` followed by
`profiles\vcs\scripts\package_release.bat`.

## Creating another profile

The framework is reusable. See [docs/PROFILE_GUIDE.md](docs/PROFILE_GUIDE.md).

## Credits

- **Jessica Natalia** ([@jessicanataliagta](https://github.com/jessicanataliagta)) created PSPRecomp,
  the VCS profile and the DirectX 12 host this build stands on. The recompiler framework and the game
  profile itself are her work.
- FFmpeg (LGPL 2.1 or later), SMAA, Project2DFX light data and behaviour reference, CloudWorks
  volumetric cloud model, stb. See [profiles/vcs/THIRD_PARTY.md](profiles/vcs/THIRD_PARTY.md) and
  [docs/SOURCE_PROVENANCE.md](docs/SOURCE_PROVENANCE.md).

## License

The PSPRecomp framework code is distributed under the MIT License; see [LICENSE](LICENSE). Individual
profile components keep their own licences and notices.
