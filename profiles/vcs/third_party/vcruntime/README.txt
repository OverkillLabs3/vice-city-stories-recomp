Microsoft Visual C++ runtime (x64), app-local copy
==================================================

msvcp140.dll, msvcp140_atomic_wait.dll, vcruntime140.dll and vcruntime140_1.dll are the unmodified,
Microsoft-signed files from the Visual C++ Redistributable for Visual Studio 2015-2022 (x64), taken from
Microsoft's official installer (https://aka.ms/vs/17/release/vc_redist.x64.exe, built 2025-06-11).

They are shipped next to VCSNative.exe so the game starts on a Windows PC that does not have the Visual C++
Redistributable installed ("app-local deployment", which Microsoft allows for these redistributable files).
Windows prefers a newer system-wide copy when one is present. They are Microsoft's software and remain under
Microsoft's licence terms for the Visual C++ Redistributable; they are not covered by this project's licence.
