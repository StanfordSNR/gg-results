#!/bin/bash -ex

git submodule update --init -- ../ffmpeg/source/

rm -rf build/
cp -R ../ffmpeg/source/ build/

pushd build/
./configure --disable-doc --disable-sdl --disable-libpulse --disable-debug
popd
