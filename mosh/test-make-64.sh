#!/bin/bash -ex

source define.sh

${TIMECOMMAND} make -j${LARGE_CORES}
