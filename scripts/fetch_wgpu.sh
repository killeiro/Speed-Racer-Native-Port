#!/bin/sh
set -e
version=${1:-v29.0.1.1}
here=$(cd "$(dirname "$0")/.." && pwd)
target="$here/third_party/wgpu-native"
mkdir -p "$target"

system=$(uname -s)
arch=$(uname -m | sed 's/arm64/aarch64/')
case "$system" in
    Darwin) platform=macos; extra= ;;
    Linux) platform=linux; extra= ;;
    MINGW*|MSYS*|CYGWIN*) platform=windows; extra=-gnu ;;
    *) echo "Sistema não suportado: $system" >&2; exit 1 ;;
esac

archive="wgpu-${platform}-${arch}${extra}-release.zip"
url="https://github.com/gfx-rs/wgpu-native/releases/download/$version/$archive"
echo "Baixando $archive"
curl -fL -o "$target/wgpu.zip" "$url"

if command -v unzip >/dev/null 2>&1; then
    unzip -o -q "$target/wgpu.zip" -d "$target"
elif command -v bsdtar >/dev/null 2>&1; then
    bsdtar -xf "$target/wgpu.zip" -C "$target"
else
    echo "Preciso de unzip ou bsdtar para extrair o arquivo." >&2
    exit 1
fi

rm "$target/wgpu.zip"
echo "wgpu-native $version em $target"
