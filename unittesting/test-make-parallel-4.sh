#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

git submodule update --init ../gtest-parallel

export LIBVPX_TEST_DATA_PATH=$(readlink -f ../data)
${TIMECOMMAND} ../gtest-parallel/gtest-parallel -w ${SMALL_CORES} ../bin/test_libvpx
