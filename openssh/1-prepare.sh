#!/bin/bash -ex

git submodule update --init -- source/

rm -rf build/
cp -R source/ build/

pushd build/
autoreconf -fi
./configure
gg-init
popd
