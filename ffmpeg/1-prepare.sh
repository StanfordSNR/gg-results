#!/bin/bash -ex

git submodule update --init -- source/

rm -rf build/
cp -R source/ build/

pushd build/
./configure --disable-doc
gg-init
popd
