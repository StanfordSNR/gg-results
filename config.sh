#!/bin/bash -ex

export SMALL_CORES=4
export LARGE_CORES=64
export ICECC_CORES=$(($SMALL_CORES+$LARGE_CORES))
export LAMBDA_CORES=1000
