#!/bin/bash -ex

${TIMECOMMAND_PREP} gg-run make -j8

export GG_LAMBDA=1
export GG_MAXJOBS=1000
${TIMECOMMAND} gg-reduce src/frontend/mosh-server src/frontend/mosh-client
