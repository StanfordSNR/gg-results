#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

gg-init
${TIMECOMMAND_PREP0} gg-infer make -j${LARGE_CORES}
${TIMECOMMAND_PREP1} gg-force --jobs ${LARGE_CORES} ${__TARGETS?"not set"}

make clean
${TIMECOMMAND_PREP2} gg-infer make -j${LARGE_CORES}
${TIMECOMMAND} gg-force --jobs ${LARGE_CORES} ${__TARGETS?"not set"}
