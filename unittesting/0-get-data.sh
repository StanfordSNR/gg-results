#!/bin/bash -ex

mkdir data/

wget https://s3-us-west-2.amazonaws.com/gg-experiments/libvpx/testdata.tar.gz

pushd data/
tar xvf testdata.tar.gz
popd
