#!/bin/bash -ex

git submodule update --init -- source/

rm -rf build/
mkdir -p build

pushd build/
if [ -z ${__GG_TEST+x} ]; then
  cmake ../source/;
else
  gg-init
  CXX="g++" CC="gcc" GG_BYPASS=1 gg-run cmake ../source/;
fi
popd
