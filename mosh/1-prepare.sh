#!/bin/bash -ex

git submodule update --init -- source/

pushd source/
./autogen.sh
popd

rm -rf build/
mkdir -p build

pushd build/
../source/configure
gg-init
popd
