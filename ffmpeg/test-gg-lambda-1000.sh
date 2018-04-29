#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

# Purge gg-job-server cache
curl --fail http://${GG_RUNNER_SERVER}/cgi-bin/gg/reset.cgi

gg-init
${TIMECOMMAND_PREP0} gg-infer make -j${SMALL_CORES}
${TIMECOMMAND} gg-force --engine lambda --jobs ${LAMBDA_CORES} ${__TARGETS?"not set"}
