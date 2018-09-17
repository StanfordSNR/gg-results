#!/bin/bash -ex

rm -rf build/
mkdir build/

pushd build/
LDFLAGS="-s" CFLAGS="-O2" CXXFLAGS="-O2" ../source/configure
popd
