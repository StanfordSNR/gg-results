#!/bin/bash -ex

export PATH=/usr/lib/ccache:$PATH
${TIMECOMMAND} make -j64
