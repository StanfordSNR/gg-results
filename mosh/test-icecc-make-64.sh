#!/bin/bash -ex

export PATH=/usr/lib/icecc/bin:$PATH
${TIMECOMMAND} make -j64
