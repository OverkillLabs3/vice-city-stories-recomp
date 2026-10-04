VCSNative for Windows (Vulkan)
==============================

Start:  double-click VCSLauncher.exe, adjust anything you like, press Play.
        (VCSNative.exe can also be started directly; it uses the saved settings.)

Game data: the game looks for a folder called PSP_DATA next to VCSNative.exe (it must contain
PSP_GAME\SYSDIR\EBOOT_DECRYPTED.ELF and PSP_GAME\USRDIR). No game files are included - use your own
legally obtained copy. If PSP_DATA is not there, pressing Play asks you to choose where it is (and
remembers the choice), so it can live on any drive.

Texture pack (optional): Launcher > Quality > Texture pack > Install..., choose VCSNative-TexturePack.zip, restart the
game. Uninstall removes only what the pack installed. INSTALL_TEXTURE_PACK.bat / UNINSTALL_TEXTURE_PACK.bat do the same
from a command line.

Requirements: Windows 10 or 11 (64-bit) and a GPU with a Vulkan 1.1 driver (the normal graphics driver from NVIDIA, AMD
or Intel includes it). Everything else the game needs is in this folder, including the Visual C++ runtime; the launcher
needs only the .NET Framework 4.8 that comes with Windows. There is nothing to install.

Setup: unzip the whole VCSNative folder somewhere you can write to (not "Program Files"), put your PSP_DATA folder right
next to VCSNative.exe and VCSLauncher.exe, and double-click VCSLauncher.exe.

Settings live in VCSNative.ini and ProperShaders.ini (both editable by hand; the launcher preserves comments).
Launcher-only choices (GPU, present mode, frame presentation, worker threads) are stored in VCSLauncher.prefs and
passed to the game as environment variables:
  PSPRECOMP_VULKAN_DEVICE=<index or part of the GPU name>      PSPRECOMP_VULKAN_PRESENT_MODE=fifo|mailbox|relaxed|immediate
  PSPRECOMP_VULKAN_SWAPCHAIN=0|1 (0 = CPU readback, slower)     PSPRECOMP_GE_ASYNC=0    PSPRECOMP_GE_PARALLEL_VERTEX_DECODE=0
  PSPRECOMP_FRAME_TIME_DIAG=1 prints frame timings to the console.

If something goes wrong: VCSNative.log (next to the exe) and the console output show what the game was doing.

Known limitation: bloom (Quality > Bloom) is composited on the CPU and is therefore only applied when Frame
presentation is set to CPU readback; with the default GPU swapchain it has no visible effect yet.
