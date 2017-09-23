#!/bin/bash -ex

apt-get source inkscape=0.92.1-1

mv inkscape-0.92.1/ source/

pushd source/
patch -p1 <../gcc7.patch
popd
