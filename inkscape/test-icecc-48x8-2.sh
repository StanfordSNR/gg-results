#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

export PATH=/usr/lib/icecc/bin:$PATH

${TIMECOMMAND} make -j$((${ICECC_LARGE_CORES}/2)) ${__MAKE_TARGETS}
