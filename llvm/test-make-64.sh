#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

${TIMECOMMAND} make -j${LARGE_CORES} ${__MAKE_TARGETS}
