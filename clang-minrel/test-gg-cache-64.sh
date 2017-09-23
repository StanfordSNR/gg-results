#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

export GG_MAXJOBS=${LARGE_CORES}

gg-init
${TIMECOMMAND_PREP0} gg-run make -j${LARGE_CORES} ${__MAKE_TARGETS}
${TIMECOMMAND_PREP1} gg-reduce ${__GG_TARGETS}

make clean

${TIMECOMMAND_PREP2} gg-run make -j${LARGE_CORES} ${__MAKE_TARGETS}
${TIMECOMMAND} gg-reduce ${__GG_TARGETS}
