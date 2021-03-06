#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

gg-init
tar xf ../data/remotes.tar.gz -C ../data

for i in $(seq 1 8)
do
  REMOTE=GG_REMOTE_$i
  curl --fail http://${!REMOTE}:9924/reset
done

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
${TIMECOMMAND} gg-force ${REMOTE_ENGINES} --timeout 4 ${__GG_TARGETS?"not set"}

rm -rf ../data/remotes/
