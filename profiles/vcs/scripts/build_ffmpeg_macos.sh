#!/bin/sh
# Builds the LGPL FFmpeg 7.1 libraries that the macOS app bundles (Homebrew's FFmpeg is a GPL build and must
# not be redistributed inside the app). No external codec libraries are used: the game only needs FFmpeg's
# built-in demuxers and its ATRAC3+ / H.264 decoders.
#
#   build_ffmpeg_macos.sh [install-prefix]      (default: <repo>/out/ffmpeg-lgpl)
set -eu
VERSION=7.1.2
HERE=$(cd "$(dirname "$0")" && pwd)
ROOT=$(cd "$HERE/../../.." && pwd)
PREFIX=${1:-"$ROOT/out/ffmpeg-lgpl"}
SRC="$ROOT/out/ffmpeg-src"

if [ -f "$PREFIX/lib/libavcodec.61.dylib" ]; then
    echo "FFmpeg $VERSION (LGPL) already built in $PREFIX"
    exit 0
fi

mkdir -p "$SRC"
cd "$SRC"
if [ ! -d "ffmpeg-$VERSION" ]; then
    echo "Downloading FFmpeg $VERSION source from ffmpeg.org"
    curl -fL -o ffmpeg.tar.xz "https://ffmpeg.org/releases/ffmpeg-$VERSION.tar.xz"
    tar xf ffmpeg.tar.xz
fi
cd "ffmpeg-$VERSION"
./configure --prefix="$PREFIX" --enable-shared --disable-static \
    --disable-gpl --disable-version3 --disable-nonfree --disable-programs --disable-doc \
    --disable-autodetect --disable-avdevice --disable-avfilter --disable-network \
    --enable-pic --arch=arm64 \
    --extra-cflags=-mmacosx-version-min=13.0 --extra-ldflags=-mmacosx-version-min=13.0
make -j"$(sysctl -n hw.ncpu)"
make install
echo "FFmpeg $VERSION (LGPL) installed in $PREFIX"
