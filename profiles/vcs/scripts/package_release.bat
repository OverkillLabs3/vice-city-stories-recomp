@echo off
setlocal EnableExtensions EnableDelayedExpansion
rem Package the built Windows release into a folder the player drops PSP_DATA into, plus a zip to
rem attach to a GitHub release. Run after scripts\build_release.bat.
rem Output: out\vcs-release\dist\VCSNative\  and  out\vcs-release\dist\VCSNative-Windows.zip

for %%I in ("%~dp0..\..\..") do set "REPO=%%~fI"
set "BUILD=%REPO%\out\vcs-release"
set "BIN=%BUILD%\bin\Release"
set "PROFILE=%REPO%\profiles\vcs"
set "DIST=%BUILD%\dist"
set "PKG=%DIST%\VCSNative"
set "ZIP=%DIST%\VCSNative-Windows.zip"

if not exist "%BIN%\VCSNative.exe" goto :NO_BUILD

echo [1/3] Assembling %PKG%
if exist "%PKG%" rmdir /s /q "%PKG%"
mkdir "%PKG%"
copy /Y "%BIN%\VCSNative.exe"   "%PKG%\" >nul
if exist "%BIN%\VCSLauncher.exe" copy /Y "%BIN%\VCSLauncher.exe" "%PKG%\" >nul
copy /Y "%BIN%\*.dll"            "%PKG%\" >nul
copy /Y "%BIN%\VCSNative.ini"    "%PKG%\" >nul
copy /Y "%BIN%\ProperShaders.ini" "%PKG%\" >nul
copy /Y "%BIN%\VCSProject2DFX_Lights.bin" "%PKG%\" >nul
copy /Y "%BIN%\COPYING.LGPLv2.1" "%PKG%\" >nul
copy /Y "%BIN%\PROJECT2DFX_ATTRIBUTION.md" "%PKG%\" >nul
copy /Y "%BIN%\PROJECT2DFX_LICENSE.txt" "%PKG%\" >nul
copy /Y "%BIN%\CLOUDWORKS_ATTRIBUTION.md" "%PKG%\" >nul
copy /Y "%PROFILE%\resources\release\README_WINDOWS.txt" "%PKG%\README_WINDOWS.txt" >nul
copy /Y "%PROFILE%\third_party\vcruntime\README.txt" "%PKG%\VCRUNTIME_NOTICE.txt" >nul
copy /Y "%PROFILE%\scripts\INSTALL_TEXTURE_PACK.bat" "%PKG%\" >nul
copy /Y "%PROFILE%\scripts\UNINSTALL_TEXTURE_PACK.bat" "%PKG%\" >nul

echo [2/3] Zipping
if exist "%ZIP%" del /q "%ZIP%"
rem Windows' own bsdtar, by full path: a GNU tar earlier on PATH reads "C:\..." as a remote host.
rem -a picks the format from the .zip extension.
"%SystemRoot%\System32\tar.exe" -a -c -f "%ZIP%" -C "%DIST%" "VCSNative"
if errorlevel 1 goto :ZIP_FAIL

echo [3/3] Contents
dir /b "%PKG%"
for %%F in ("%ZIP%") do echo ZIP: %%~fF (%%~zF bytes)
echo PACKAGE OK: %PKG%
exit /b 0

:NO_BUILD
echo ERROR: %BIN%\VCSNative.exe is missing. Run profiles\vcs\BUILD_VCS.bat first.
exit /b 1
:ZIP_FAIL
echo ERROR: could not create %ZIP%. Needs %SystemRoot%\System32\tar.exe (Windows 10/11).
exit /b 2
