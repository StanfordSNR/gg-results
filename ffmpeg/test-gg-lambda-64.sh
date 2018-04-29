#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh


gg-init
${TIMECOMMAND_PREP0} gg-infer make -j${SMALL_CORES}
${TIMECOMMAND} gg-force --engine lambda --jobs ${LARGE_CORES} ${__TARGETS?"not set"}
