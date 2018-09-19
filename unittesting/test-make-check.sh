#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

export LIBVPX_TEST_DATA_PATH=$(readlink -f ../data)
${TIMECOMMAND} ../bin/test_libvpx
