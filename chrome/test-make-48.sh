#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

pushd out/Release
${TIMECOMMAND} ninja -j${LARGE_CORES} chrome
popd
