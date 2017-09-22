#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

export GG_GCC_OPENMP_SUPPORT=1

gg-init
${TIMECOMMAND_PREP0} gg-run make -j${LARGE_CORES}

export GG_MAXJOBS=${LARGE_CORES}
${TIMECOMMAND} gg-reduce ${__TARGETS?"not set"}
