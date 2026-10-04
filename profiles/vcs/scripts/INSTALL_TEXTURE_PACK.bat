@echo off
setlocal EnableExtensions
rem Installs the optional VCSNative texture pack (VCSNative-TexturePack.zip) into the Textures
rem folder next to VCSNative.exe. Windows counterpart of the macOS launcher's "Texture pack" page.
rem
rem Usage: INSTALL_TEXTURE_PACK.bat [path\to\VCSNative-TexturePack.zip]
rem With no argument it looks for VCSNative-TexturePack.zip in this folder.
rem Optional 2nd argument: the Textures folder to install into (default: Textures beside this script).

set "HERE=%~dp0"
set "ZIP=%~1"
if "%ZIP%"=="" set "ZIP=%HERE%VCSNative-TexturePack.zip"
if not exist "%ZIP%" (
  echo Texture pack zip not found: %ZIP%
  echo Usage: INSTALL_TEXTURE_PACK.bat [path\to\VCSNative-TexturePack.zip]
  exit /b 1
)
set "DEST=%HERE%Textures"
if not "%~2"=="" set "DEST=%~2"

powershell -NoProfile -ExecutionPolicy Bypass -Command "& { $ErrorActionPreference='Stop'; $zip='%ZIP%'; $dest='%DEST%'; Add-Type -AssemblyName System.IO.Compression.FileSystem; $arc=[System.IO.Compression.ZipFile]::OpenRead($zip); try { $marker=$arc.Entries | Where-Object { $_.FullName -eq 'VCSNative-TexturePack.txt' }; if(-not $marker){ throw 'This zip is not a VCSNative texture pack (marker file missing).' }; $bad=$arc.Entries | Where-Object { $_.FullName -ne 'VCSNative-TexturePack.txt' -and $_.FullName -notmatch '^[0-9a-f]{16}\.png$' }; if($bad){ throw ('Unexpected file in the zip: ' + @($bad)[0].FullName) } } finally { $arc.Dispose() }; New-Item -ItemType Directory -Force -Path $dest | Out-Null; Expand-Archive -LiteralPath $zip -DestinationPath $dest -Force; $names = @(Get-ChildItem -LiteralPath $dest -File | Where-Object { $_.Name -match '^[0-9a-f]{16}\.png$' -or $_.Name -eq 'VCSNative-TexturePack.txt' } | ForEach-Object { $_.Name }); Set-Content -LiteralPath (Join-Path $dest '.installed-texture-pack') -Value $names -Encoding ascii; Write-Host ('Texture pack installed: ' + $names.Count + ' files.') }"
if errorlevel 1 (
  echo Installation failed.
  exit /b 1
)
echo Restart the game to use the texture pack.
exit /b 0
