#!/bin/bash -ex

source define.sh

export PATH=/usr/lib/ccache:$PATH
export CCACHE_PREFIX=icecc

${TIMECOMMAND} make -j64
