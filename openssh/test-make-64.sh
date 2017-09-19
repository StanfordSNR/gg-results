#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

${TIMECOMMAND} make -j${LARGE_CORES} ${__TARGETS?"not set"}
