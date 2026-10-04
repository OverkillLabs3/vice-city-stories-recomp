@echo off
setlocal EnableExtensions
rem Removes a texture pack installed by INSTALL_TEXTURE_PACK.bat (only the files it installed).
rem Optional argument: the Textures folder to remove from (default: Textures beside this script).

set "DEST=%~dp0Textures"
if not "%~1"=="" set "DEST=%~1"
if not exist "%DEST%\.installed-texture-pack" (
  echo No installed texture pack found in %DEST%
  exit /b 1
)
powershell -NoProfile -ExecutionPolicy Bypass -Command "& { $d='%DEST%'; $m=Join-Path $d '.installed-texture-pack'; Get-Content -LiteralPath $m | ForEach-Object { if ($_ -match '^[0-9a-f]{16}\.png$' -or $_ -eq 'VCSNative-TexturePack.txt') { Remove-Item -LiteralPath (Join-Path $d $_) -ErrorAction SilentlyContinue } }; Remove-Item -LiteralPath $m; Write-Host 'Texture pack removed.' }"
exit /b %errorlevel%
