#!/bin/bash -ex

rm -rf build/
cp -R source/ build/

pushd build/
./autogen.sh
CFLAGS="-O2 -s" CXXFLAGS="-O2 -s" ./configure
popd
