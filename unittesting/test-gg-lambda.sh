#!/bin/bash

source ${BASH_SOURCE%/*}/define.sh

gg-init
export GG_CACHE_DIR=$(readlink -f .ggcache)

mkdir .ggcache/
tar xf ../remotes.tar.gz -C .ggcache/

GTEST_BIN_DIR=../../gg/build/examples/gtest

${TIMECOMMAND_PREP0} ${GTEST_BIN_DIR}/gtest-create-thunks ../annotations.txt -w ${GTEST_BIN_DIR}/gtest-wrapper -d ../data/ -b ../bin/test_libvpx -e LIBVPX_TEST_DATA_PATH=.

${TIMECOMMAND} gg-force ${LARGE_LAMBDA_ENGINES} --timeout 30 *.test
