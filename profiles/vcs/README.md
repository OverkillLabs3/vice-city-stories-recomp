# VCS profile

This profile builds `VCSNative.exe` for the supported GTA: Vice City Stories PSP executable. It contains the title-specific generated AOT corpus, HLE/profile code, DX12 renderer integration, audio/input support and configuration required by the current native build.

## Quick build on Windows

Run `BUILD_VCS.bat` from this directory for the normal performance build. Generated AOT stays at the maximum MSVC optimization level with AVX2, compiler `/MP`, MSBuild `/m` and persistent incremental objects. Host/runtime code may use whole-program optimization, but the 234 generated AOT translation units are explicitly compiled with `/GL-` so the final linker does not have to hold the entire generated corpus as LTCG IR. The current runtime fast paths remain enabled.

`BUILD_VCS_FAST.bat` remains the corresponding fast incremental pipeline: generated AOT at O2 with LTCG disabled. No separate experimental max-performance build is used.

The launchers automatically locate CMake from PATH, Visual Studio 2022 (including the bundled CMake component), `vswhere`, or a standard standalone CMake installation. `BUILD_VCS_FAST.bat` remains the quickest development/debug-oriented build.

## Source layout

```text
config/       VCS profile configuration and executable metadata
data/         Redistributable generated profile data
generated/    AOT C++ generated from the supported executable
host/         VCS HLE, bootstrap, renderer, audio, input and native fast paths
scripts/      Maintained Windows build/run/benchmark scripts
tests/        Profile regression tests
tools/        VCS-specific generator and maintenance tools
third_party/  Bundled dependencies and license notices
progress/     Local working notes; ignored by Git
```

## Supported executable

The profile targets the ULUS-10160 PSP release currently used by the generated corpus. No EBOOT or commercial game asset is included.

## Prepare local game data

The runtime expects a decrypted ELF and the game's `PSP_GAME/USRDIR` data from your own copy. This repository does not include decryption code.

Use:

```powershell
.\profiles\vcs\tools\prepare_game.ps1 `
  -ExtractedUmdRoot D:\VCS_EXTRACTED `
  -DecryptedElf D:\local\EBOOT_DECRYPTED.ELF
```

The default destination is `profiles/vcs/game`, which is ignored by Git.

## Build on Windows

Fast development build:

```text
profiles\vcs\scripts\build_fast.bat
```

Optimized release build:

```text
profiles\vcs\scripts\build_release.bat
```

Run with the default local game directory:

```text
profiles\vcs\scripts\play.bat
```

Or pass a game root explicitly:

```text
profiles\vcs\scripts\play.bat D:\VCS_GAME_ROOT
```

For an uncapped CPU/GE measurement, run `VCSNative.exe` with `PSPRECOMP_FRAME_LIMIT=0`
and `PSPRECOMP_FRAME_TIME_DIAG=1`.

### Windows link memory

The generated VCS corpus is intentionally excluded from MSVC whole-program IR in the normal release build. Later AOT cross-unit optimizations make whole-program analysis of all generated units unnecessarily expensive in linker memory. This does not disable per-unit `/Ox`; it only prevents those generated units from being deferred to link-time code generation. Host/runtime LTCG remains available, and the release linker prints LTCG status while it runs.

## Windows: Vulkan build, launcher and texture pack

`BUILD_VCS.bat` picks everything itself: the Vulkan backend when the Vulkan SDK (`glslc`) is installed (otherwise the
older DirectX 12 backend with a warning), and **clang-cl for the generated AOT corpus and the software geometry
pipeline** when the ClangCL toolset of Visual Studio is present (otherwise plain MSVC). Clang matters: MSVC's per-function
inline limit leaves the enormous generated functions full of real calls for every guest load/store, which costs about
2.5x in frame time (18-22 ms vs 7 ms per frame on the same machine). `-DPSPRECOMP_VCS_CLANG_AOT=OFF` forces MSVC.
Install the "C++ Clang tools for Windows" component to get it.

The build also produces **`VCSLauncher.exe`** next to `VCSNative.exe` (a self-contained WPF app, no dependencies beyond
the .NET Framework 4.8 that ships with Windows; built with the Roslyn compiler from the same Visual Studio install, sources
in `launcher/windows`). It edits `VCSNative.ini` and `ProperShaders.ini` in place, installs and removes the texture pack,
and starts the game with the chosen GPU, present mode, swapchain and worker-thread switches. Keep it in the same folder as
`VCSNative.exe`; `PSP_DATA` goes there too (or the launcher asks for it).

Texture pack: `scripts\INSTALL_TEXTURE_PACK.bat <VCSNative-TexturePack.zip> [<Textures folder>]` (or the launcher's Quality page).

## Resolution configuration

`profiles/vcs/config/VCSNative.ini` exposes both the presentation resolution and the internal render resolution.

`[Display] ResolutionMode` accepts `PSP`, `Desktop` or `Custom`. `Custom` uses `Width` and `Height`. With `Fullscreen=true`, VCSNative uses a borderless desktop-sized window; custom width/height still define the logical output surface used by the presentation/widescreen configuration.

`[Rendering] InternalResolutionMode` accepts `PSP`, `Scale`, `Desktop` or `Custom`. `Scale` uses `InternalScale`; `Custom` uses `InternalWidth` and `InternalHeight`. These settings control the native render target independently from the presentation window.

## Regenerate VCS AOT code

The VCS profile keeps an address-aware generator target separate from the generic framework generator:

```text
vcs_recomp
```

Its source lives in `profiles/vcs/tools/vcs_codegen_main.cpp`. Profile-only lowering and measured native leaves belong there or under `host/`; they do not belong in the root PSPRecomp generator/runtime.

## Development history

Local working notes can live under `profiles/vcs/progress`. That directory is ignored by the
repository, so development history never ends up in the published source tree.
