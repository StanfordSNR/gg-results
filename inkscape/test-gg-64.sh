#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

gg-init
${TIMECOMMAND_PREP0} gg-infer make -j${LARGE_CORES} ${__MAKE_TARGETS}
${TIMECOMMAND} gg-force --jobs ${LARGE_CORES} ${__GG_TARGETS?"not set"}
