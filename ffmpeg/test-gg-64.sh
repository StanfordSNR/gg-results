#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

${TIMECOMMAND_PREP0} gg-run make -j${LARGE_CORES}

export GG_MAXJOBS=${LARGE_CORES}
${TIMECOMMAND} gg-reduce ${__TARGETS?"not set"}