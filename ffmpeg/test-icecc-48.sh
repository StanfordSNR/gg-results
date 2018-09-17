#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

export PATH=/usr/lib/icecc/bin:$PATH

${TIMECOMMAND} make -j${ICECC_CORES}
