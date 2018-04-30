#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

pushd ~/gg-scanner/scripts
./run_scanner_tf.sh 14 75
popd
