# Building from source

## Windows

Requirements:

- Visual Studio 2022 with the "Desktop development with C++" workload. The
  **C++ ClangCL for Windows** component is strongly recommended: it compiles the generated game code
  with clang-cl, which inlines the guest memory and VFPU helpers that MSVC will not, and the
  difference is roughly 18 ms frames against 16.7 ms. The build falls back to plain MSVC when it is
  absent.
- CMake 3.20 or newer (the one bundled with Visual Studio is fine)
- The [Vulkan SDK](https://vulkan.lunarg.com/). Installing it sets `VULKAN_SDK` and provides `glslc`,
  which compiles the shaders. Without it the build silently falls back to the older DirectX 12
  backend, which has none of the graphics stack, the texture pipeline or the performance work. Watch
  for this line during configure:

  ```text
  -- VCS graphics backend: VULKAN
  ```

1. Build the game, the launcher, the tests and the graphics probes:

   ```bat
   profiles\vcs\BUILD_VCS.bat
   ```

   This configures into `out\vcs-release`, compiles, runs the five regression suites and runs the
   device and GE compatibility and production probes. Objects are kept, so a second run only
   recompiles what changed. A clean first build takes 20 to 40 minutes on an 8-core machine, most of
   it in the 236 generated units and the link-time code generation pass.

2. Package the result into a folder that runs on any PC and a zip you can share:

   ```bat
   profiles\vcs\scripts\package_release.bat
   ```

   Output: `out\vcs-release\dist\VCSNative\` and `out\vcs-release\dist\VCSNative-Windows.zip`. It
   copies the game, the launcher, the FFmpeg and Visual C++ runtime DLLs, both ini files, the
   Project2DFX light data and every licence notice, plus `README_WINDOWS.txt` with the player
   instructions. Debug symbols are left out.

Framework only, without a game profile:

```bat
cmake -S . -B out\framework -DPSPRECOMP_PROFILE=""
cmake --build out\framework --config Release
ctest --test-dir out\framework -C Release --output-on-failure
```

Development rebuilds: `profiles\vcs\BUILD_VCS_FAST.bat` (generated code at `-O2`, no link-time
optimization). Compile parallelism is picked from your free memory because the generated units are
large; override it with `PSPRECOMP_JOBS=<n>`.

## macOS (Apple Silicon)

Requirements: macOS 13 or later, Xcode command line tools (for `swiftc`), and

```sh
brew install cmake vulkan-headers vulkan-loader molten-vk shaderc sdl2
```

One command builds everything and produces a ready-to-play app:

```sh
profiles/vcs/scripts/build_macos.sh
```

It builds an LGPL FFmpeg (downloaded from ffmpeg.org, so no GPL code ends up in the app), the game
and the SwiftUI launcher, then assembles **`out/vcs/dist/VCSNative.app`**: one self-contained, signed
app with FFmpeg, SDL, the Vulkan loader and MoltenVK inside it, and
`out/vcs/dist/VCSNative-macOS.zip` to share.

## Game files

No commercial game executable or asset is included, and PSPRecomp does not ship an EBOOT decryption
implementation. Build and test hosts expect `PSP_DATA/PSP_GAME/SYSDIR/EBOOT_DECRYPTED.ELF` next to
the executable, prepared from your own copy. `profiles/vcs/tools/prepare_game.ps1` copies an extracted
UMD and a decrypted executable into the profile's ignored `game/` directory.

## Tests

`ctest` runs five suites: the recompiler framework, the profile behaviour suite, the configuration
suite (which locks the frame rate and checks the widescreen and HUD maths), the audio resampler and
the bootstrap path resolution. `vcs_dx12_probe` and `vcs_dx12_ge_probe` check the device, swapchain
and GE pipelines and run as part of `BUILD_VCS.bat`.
