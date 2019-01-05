#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

gg-init
tar xf ../data/remotes.tar.gz -C ../data

for i in $(seq 1 1)
do
  REMOTE=GG_REMOTE_$i
  curl --fail http://${!REMOTE}:9924/reset
done

export GG_GCC_BUILD_DIR=$(readlink -f .)
export GG_CACHE_DIR=$(readlink -f ../data/)

cat >headers.gg.txt <<EOL
.h
.c
.inc
EOL

${TIMECOMMAND_PREP0} gg-build-infer make -j${SMALL_CORES}
${TIMECOMMAND} gg-force --jobs ${LARGE_CORES} --engine remote=${GG_REMOTE_1} --timeout 4 ${__TARGETS?"not set"}

rm -rf ../data/remotes/
