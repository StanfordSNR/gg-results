#!/bin/bash -ex

pushd source/
./autogen.sh
popd

rm -rf build/
mkdir -p build

pushd build/
../source/configure
popd

cd build/
gg-init
