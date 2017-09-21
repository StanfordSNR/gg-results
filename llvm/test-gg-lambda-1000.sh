#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

# Purge gg-job-server cache
curl http://${GG_RUNNER_SERVER}/cgi-bin/gg/reset.cgi{GG_RUNNER_SERVER}/clearall -X POST

gg-init
${TIMECOMMAND_PREP0} gg-run make -j${SMALL_CORES} ${__MAKE_TARGETS}

export GG_LAMBDA=1
export GG_REMOTE=1
export GG_MAXJOBS=${LAMBDA_CORES}

${TIMECOMMAND} gg-reduce ${__GG_TARGETS}
