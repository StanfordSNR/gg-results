#!/bin/bash -ex

mkdir -p data/

if [ ! -f testdata.tar.gz ]; then
  wget https://s3-us-west-2.amazonaws.com/gg-experiments/libvpx/testdata.tar.gz
fi

pushd data/
tar xvf ../testdata.tar.gz
popd
