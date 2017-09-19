#!/bin/bash -ex

source define.sh

export PATH=/usr/lib/ccache:$PATH

${TIMECOMMAND_PREP0} make -j${LARGE_CORES}
make clean
${TIMECOMMAND} make -j${LARGE_CORES}
