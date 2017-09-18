#!/bin/bash -ex

source define.sh

export PATH=/usr/lib/ccache:$PATH

${TIMECOMMAND_PREP} make -j64
make clean
${TIMECOMMAND} make -j64
