#!/bin/sh
# One command from a fresh checkout to a ready-to-play macOS app (Apple Silicon).
#
#   profiles/vcs/scripts/build_macos.sh
#
# Output: out/vcs/dist/VCSNative.app (double-click it) and out/vcs/dist/VCSNative-macOS.zip (to share).
# The app is self-contained: FFmpeg, SDL, the Vulkan loader and MoltenVK are inside it, so the person who
# plays it installs nothing. Only the machine that BUILDS needs the tools below.
set -eu
HERE=$(cd "$(dirname "$0")" && pwd)
ROOT=$(cd "$HERE/../../.." && pwd)

need() { command -v "$1" >/dev/null 2>&1 || { echo "Missing build tool: $1  ($2)"; exit 1; }; }
need cmake "brew install cmake"
need swiftc "install Xcode or the Xcode command line tools: xcode-select --install"
need glslc "brew install shaderc"
need python3 "part of the Xcode command line tools"
for f in vulkan-headers vulkan-loader molten-vk sdl2 ; do
    [ -d "/opt/homebrew/opt/$f" ] || { echo "Missing build dependency: brew install $f"; exit 1; }
done

"$HERE/build_ffmpeg_macos.sh"

cd "$ROOT"
cmake -S . -B out/vcs -DPSPRECOMP_PROFILE=vcs -DCMAKE_BUILD_TYPE=Release \
    -DVCS_FFMPEG_MACOS_PREFIX="$ROOT/out/ffmpeg-lgpl"
cmake --build out/vcs -j"$(sysctl -n hw.ncpu)"

DIST="$ROOT/out/vcs/dist"
ditto -c -k --keepParent "$DIST/VCSNative.app" "$DIST/VCSNative-macOS.zip"
echo
echo "Done. Open $DIST/VCSNative.app"
echo "To share it, send $DIST/VCSNative-macOS.zip"
