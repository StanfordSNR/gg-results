#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

gg-init
./gen_vid_thunks.py -l li25-static

${TIMECOMMAND_PREP0} ./gen_thunks.sh
${TIMECOMMAND} gg-force --engine lambda --timeout 20 --status --jobs ${LAMBDA_CORES} ${__TARGETS?"not set"}
