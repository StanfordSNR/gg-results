#!/bin/bash -ex

source define.sh

export PATH=/usr/lib/ccache:$PATH

gg-run make -j64

export GG_MAXJOBS=64
${TIMECOMMAND_PREP} gg-reduce ${__TARGETS?"not set"}
make clean
${TIMECOMMAND} gg-reduce ${__TARGETS?"not set"}
