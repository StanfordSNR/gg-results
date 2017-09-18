#!/bin/bash -ex

${TIMECOMMAND_PREP} gg-run make -j${CORES}
GG_MAXJOBS=${CORES} ${TIMECOMMAND} gg-reduce src/frontend/mosh-server src/frontend/mosh-client
