#!/bin/bash -ex

source define.sh

export PATH=/usr/lib/icecc/bin:$PATH

${TIMECOMMAND} make -j${LARGE_CORES}
