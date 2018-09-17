#!/bin/bash -ex

VERSION=2.8.22
apt-get source gimp=$VERSION
mv gimp-$VERSION/ source/
rm -rf gimp_*

pushd source/
autoreconf -fi
popd
