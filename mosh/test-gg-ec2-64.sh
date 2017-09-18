#!/bin/bash -ex

${TIMECOMMAND_PREP} gg-run make -j8

export GG_REMOTE=1
export GG_MAXJOBS=64
${TIMECOMMAND} gg-reduce src/frontend/mosh-server src/frontend/mosh-client
