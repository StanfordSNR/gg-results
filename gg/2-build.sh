#!/bin/bash -ex

pushd source
./autogen.sh
popd

mkdir -p build

pushd build
../source/configure
make -j$(nproc)
sudo make install
popd
