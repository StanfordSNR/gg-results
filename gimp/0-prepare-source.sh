#!/bin/bash -ex

VERSION=2.8.20
apt-get source gimp=$VERSION
mv gimp-$VERSION/ source/
rm -rf gimp_*
