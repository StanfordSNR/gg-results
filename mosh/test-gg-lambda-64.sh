#!/bin/bash -ex

source define.sh

${TIMECOMMAND_PREP0} gg-run make -j${SMALL_CORES}

export GG_LAMBDA=1
export GG_REMOTE=1
export GG_MAXJOBS=${LARGE_CORES}

${TIMECOMMAND} gg-reduce ${__TARGETS?"not set"}
