#!/bin/bash -ex

source define.sh

export PATH=/usr/lib/ccache:$PATH
export GG_MAXJOBS=${LARGE_CORES}

${TIMECOMMAND_PREP0} gg-run make -j${LARGE_CORES}
${TIMECOMMAND_PREP1} gg-reduce ${__TARGETS?"not set"}

make clean

${TIMECOMMAND_PREP2} gg-run make -j${LARGE_CORES}
${TIMECOMMAND} gg-reduce ${__TARGETS?"not set"}
