#!/bin/bash -ex

export SMALL_CORES=4
export LARGE_CORES=48
export ICECC_CORES=$(($LARGE_CORES+1))
export LAMBDA_CORES=2000
