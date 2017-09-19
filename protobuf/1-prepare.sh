#!/bin/bash -ex

# for protobuf, we don't try to an out-of-source build.

git submodule update --init -- source/

rm -rf build/
cp -R source/ build/

pushd build/
./autogen.sh
./configure --disable-shared --with-protoc=/usr/bin/protoc
gg-init
popd
