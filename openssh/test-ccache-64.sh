#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

export PATH=/usr/lib/ccache:$PATH

# clear ccache
ccache -C

${TIMECOMMAND_PREP0} make -j${LARGE_CORES} ${__TARGETS?"not set"}
make clean
${TIMECOMMAND} make -j${LARGE_CORES} ${__TARGETS?"not set"}
