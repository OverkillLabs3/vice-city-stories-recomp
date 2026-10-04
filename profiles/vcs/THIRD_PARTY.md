# VCS profile third-party notices

The VCS profile includes components that are distributed under licenses separate from the PSPRecomp framework:

- FFmpeg runtime libraries and import libraries: LGPL 2.1 or later. The bundled notice is `third_party/ffmpeg/COPYING.LGPLv2.1`.
- SMAA shader resources: see `third_party/smaa/LICENSE.txt`.
- Project2DFX-derived VCS LOD-light data/behavior reference by ThirteenAG: MIT. See `third_party/project2dfx/LICENSE.txt` and `third_party/project2dfx/ATTRIBUTION.md`.
- HDR shader material under `shaders/hdr`: see `shaders/hdr/LICENSE_SIMULATEHDR.txt`.
- CloudWorks Alpha 4.0 volumetric-cloud density/noise model by Brian Tu (RTU):
  CC BY-NC-SA 3.0. See `third_party/cloudworks/ATTRIBUTION.md`.

Commercial GTA assets and executables are not part of the repository.
- Microsoft Visual C++ runtime DLLs (`msvcp140.dll`, `msvcp140_atomic_wait.dll`, `vcruntime140.dll`, `vcruntime140_1.dll`), unmodified and Microsoft-signed, shipped app-local next to the Windows build so it starts without the Visual C++ Redistributable installed. Microsoft licence terms apply; see `third_party/vcruntime/README.txt`.
- The macOS app bundles, unmodified apart from install-name changes: FFmpeg 7.1.2 (LGPL 2.1 or later, built without GPL components by `scripts/build_ffmpeg_macos.sh`), SDL2 (through sdl2-compat) and SDL3 (zlib licence), the Khronos Vulkan loader and MoltenVK (Apache 2.0). Their licence texts are inside the app in `Contents/Resources/Licenses`.
