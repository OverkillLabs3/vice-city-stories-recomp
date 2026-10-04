@echo off
setlocal EnableExtensions
rem Builds VCSLauncher.exe: a single self-contained WPF exe (needs only the .NET Framework 4.8 that
rem ships with Windows 10 and 11). Uses the Roslyn C# compiler from Visual Studio Build Tools / VS 2022.
rem Usage: build_launcher.bat [output-directory]   (default: this folder)

set "HERE=%~dp0"
set "OUT=%~1"
if "%OUT%"=="" set "OUT=%HERE%"
set "FW=%WINDIR%\Microsoft.NET\Framework64\v4.0.30319"
set "CSC="
for %%E in (BuildTools Community Professional Enterprise) do (
  if exist "%ProgramFiles(x86)%\Microsoft Visual Studio\2022\%%E\MSBuild\Current\Bin\Roslyn\csc.exe" set "CSC=%ProgramFiles(x86)%\Microsoft Visual Studio\2022\%%E\MSBuild\Current\Bin\Roslyn\csc.exe"
  if exist "%ProgramFiles%\Microsoft Visual Studio\2022\%%E\MSBuild\Current\Bin\Roslyn\csc.exe" set "CSC=%ProgramFiles%\Microsoft Visual Studio\2022\%%E\MSBuild\Current\Bin\Roslyn\csc.exe"
)
if not defined CSC (
  echo Roslyn csc.exe not found. Install Visual Studio 2022 or its Build Tools.
  exit /b 2
)
set "ICON=%HERE%..\..\resources\vcsnative.ico"
set "ICONARG="
if exist "%ICON%" set "ICONARG=/win32icon:%ICON%"

"%CSC%" /nologo /noconfig /nostdlib+ /target:winexe /optimize+ /langversion:latest /platform:anycpu ^
  /out:"%OUT%VCSLauncher.exe" /win32manifest:"%HERE%VCSLauncher.manifest" %ICONARG% ^
  /r:"%FW%\mscorlib.dll" /r:"%FW%\System.dll" /r:"%FW%\System.Core.dll" /r:"%FW%\System.Management.dll" ^
  /r:"%FW%\System.IO.Compression.dll" /r:"%FW%\System.IO.Compression.FileSystem.dll" /r:"%FW%\System.Xaml.dll" ^
  /r:"%FW%\System.Windows.Forms.dll" /r:"%FW%\System.Drawing.dll" /r:"%FW%\WPF\WindowsBase.dll" ^
  /r:"%FW%\WPF\PresentationCore.dll" /r:"%FW%\WPF\PresentationFramework.dll" ^
  "%HERE%VCSLauncher.cs"
if errorlevel 1 exit /b 1
echo Built %OUT%VCSLauncher.exe
exit /b 0
