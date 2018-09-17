#!/bin/bash -ex

apt-get source chromium-browser
mv chromium-browser-*/ source/
rm -rf chromium-browser_*

pushd source/
patch -p1 <../gcc.patch
popd
