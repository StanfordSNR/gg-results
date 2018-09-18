#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

export PATH=/usr/lib/icecc/bin:$PATH

pushd out/Release
${TIMECOMMAND} ninja -j${ICECC_CORES} chrome
popd
