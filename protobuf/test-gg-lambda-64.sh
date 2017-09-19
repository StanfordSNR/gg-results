#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

# Purge gg-job-server cache
curl http://${GG_RUNNER_SERVER}/clearall -X POST

gg-init
${TIMECOMMAND_PREP0} gg-run make -j${SMALL_CORES}

export GG_LAMBDA=1
export GG_REMOTE=1
export GG_MAXJOBS=${LARGE_CORES}

${TIMECOMMAND} gg-reduce ${__TARGETS?"not set"}
