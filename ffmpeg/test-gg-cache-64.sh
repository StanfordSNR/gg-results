#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

export GG_MAXJOBS=${LARGE_CORES}

gg-init
${TIMECOMMAND_PREP0} gg-run make -j${LARGE_CORES}
${TIMECOMMAND_PREP1} gg-reduce ${__TARGETS?"not set"}

make clean

${TIMECOMMAND_PREP2} gg-run make -j${LARGE_CORES}
${TIMECOMMAND} gg-reduce ${__TARGETS?"not set"}
