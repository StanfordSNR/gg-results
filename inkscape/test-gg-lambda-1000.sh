#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

# Purge gg-job-server cache
curl --fail http://${GG_RUNNER_SERVER}/cgi-bin/gg/reset.cgi

export GG_GCC_OPENMP_SUPPORT=1

gg-init
${TIMECOMMAND_PREP0} gg-run make -j${SMALL_CORES}

export GG_LAMBDA=1
export GG_REMOTE=1
export GG_MAXJOBS=${LAMBDA_CORES}

${TIMECOMMAND} gg-reduce ${__TARGETS?"not set"}
