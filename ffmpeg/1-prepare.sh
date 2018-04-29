#!/bin/bash -ex

git submodule update --init -- source/

rm -rf build/
cp -R source/ build/

pushd build/
./configure --disable-doc --disable-sdl --disable-libpulse --disable-x86asm
popd
