#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

gg-init
tar xf ../data/remotes.tar.gz -C ../data

export GG_GCC_BUILD_DIR=$(readlink -f .)
export GG_CACHE_DIR=$(readlink -f ../data/)

cat >headers.gg.txt <<EOL
.h
.hh
.c
.cc
.cpp
.xpm
EOL

${TIMECOMMAND_PREP0} gg-build-infer make -j${SMALL_CORES} ${__MAKE_TARGETS}
${TIMECOMMAND} gg-force ${LAMBDA_ENGINES} --timeout 4 ${__GG_TARGETS?"not set"}

rm -rf ../data/remotes/
