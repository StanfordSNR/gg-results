#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

gg-init
./gen_vid_thunks.py -l li-static

${TIMECOMMAND_PREP0} ./gen_thunks.sh
${TIMECOMMAND} gg-force --jobs ${LARGE_CORES} ${__TARGETS?"not set"}
