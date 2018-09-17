#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

pushd out/Release
${TIMECOMMAND} ninja -j1 chrome
popd
