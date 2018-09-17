#!/bin/bash -ex

rm -rf build/
mkdir build/

pushd build/
../source/configure --disable-doc --disable-libpulse --disable-x86asm --disable-debug --disable-sdl2
popd
