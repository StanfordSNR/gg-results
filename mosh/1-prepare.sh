#!/bin/bash -ex

pushd source/
./autogen.sh
popd

rm -rf build/
mkdir -p build

# clear ccache cache
ccache -C

pushd build/
../source/configure
popd
