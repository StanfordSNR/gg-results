#!/bin/bash -ex

rm -rf build/
cp -R source/ build/

pushd build/
autoreconf -fi
CFLAGS="-O2 -s" CXXFLAGS="-O2 -s" ./configure
 ./configure --disable-doc --disable-libpulse --disable-x86asm --disable-debug --disable-sdl2
popd
