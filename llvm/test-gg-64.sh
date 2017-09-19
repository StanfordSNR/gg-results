#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

gg-init
${TIMECOMMAND_PREP0} gg-run make -j${LARGE_CORES} ${__MAKE_TARGETS}

export GG_MAXJOBS=${LARGE_CORES}
${TIMECOMMAND} gg-reduce ${__GG_TARGETS}
