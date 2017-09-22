#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

# Purge gg-job-server cache
curl --fail http://${GG_RUNNER_SERVER}/cgi-bin/gg/reset.cgi

export GG_REMOTE=1
export GG_MAXJOBS=${LARGE_CORES}

gg-init
${TIMECOMMAND_PREP0} gg-run make -j${SMALL_CORES} ${__MAKE_TARGETS}

${TIMECOMMAND} gg-reduce ${__GG_TARGETS}
