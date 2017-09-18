#!/bin/bash -ex

source define.sh

export PATH=/usr/lib/ccache:$PATH
${TIMECOMMAND} make -j64
