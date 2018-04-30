#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

export GG_METAINFER=1

gg-init
${TIMECOMMAND_PREP0} gg-infer make -j${SMALL_CORES} ${__MAKE_TARGETS}
${TIMECOMMAND} gg-remodel ${__GG_TARGETS?"not set"}
