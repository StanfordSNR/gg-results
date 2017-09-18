#!/bin/bash -ex

# make sure source code is fetched
git submodule update --init -- source/

pushd build
../source/configure
make -j$(nproc)
sudo make install
popd
