#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

# Purge gg-job-server cache
curl --fail http://${GG_EXECUTE_SERVER}/reset

gg-init
${TIMECOMMAND_PREP0} gg-infer make -j${SMALL_CORES}
${TIMECOMMAND} gg-force --engine remote=${GG_EXECUTE_SERVER} --jobs ${LARGE_CORES} ${__TARGETS?"not set"}
