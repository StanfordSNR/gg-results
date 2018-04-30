#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

gg-init
${TIMECOMMAND_PREP0} gg-infer make -j${SMALL_CORES} ${__MAKE_TARGETS}
${TIMECOMMAND} gg-force --engine lambda --jobs ${LAMBDA_CORES} --timeout 2 ${__GG_TARGETS?"not set"}
