#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

export PATH=/usr/lib/icecc/bin:$PATH

${TIMECOMMAND} ninja -j${ICECC_LARGE_CORES} chrome
