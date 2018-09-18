#!/bin/bash -ex

pushd source
./fetch-submodules.sh
./autogen.sh
popd

mkdir -p build

pushd build
../source/configure
make -j$(nproc)
sudo make install
popd
