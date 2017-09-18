#!/bin/bash -ex

source define.sh

${TIMECOMMAND_PREP} gg-run make -j64

export GG_MAXJOBS=64
${TIMECOMMAND} gg-reduce ${__TARGETS?"not set"}
