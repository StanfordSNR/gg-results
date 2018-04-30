#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

export GG_METAINFER=1

gg-init
${TIMECOMMAND_PREP0} gg-infer make -j${SMALL_CORES}
${TIMECOMMAND} gg-remodel ${__TARGETS?"not set"}
