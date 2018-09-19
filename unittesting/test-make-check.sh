#!/bin/bash -ex

export LIBVPX_TEST_DATA_PATH=$(readlink -f ../data)
${TIMECOMMAND} ../bin/test_libvpx
