#!/bin/bash -ex

export SMALL_CORES=4
export LARGE_CORES=48
export ICECC_CORES=$(($LARGE_CORES+1))
export ICECC_LARGE_CORES=$((8*$LARGE_CORES+1))
export LAMBDA_CORES=2000
export LAMBDA_MEDIUM_CORES=1000
export LAMBDA_SMALL_CORES=500

export LAMBDA_ENGINES="--jobs ${LAMBDA_CORES} --engine lambda=us-west-2 --engine lambda=us-east-1 --jobs ${LAMBDA_MEDIUM_CORES} --engine lambda=us-west-1 --engine lambda=us-east-2"

export LARGE_LAMBDA_ENGINES="--jobs 2500 --engine lambda=us-west-2 --engine lambda=us-east-1 --jobs 1500 --engine lambda=us-west-1 --engine lambda=us-east-2"

export REMOTE_ENGINES="--jobs ${LARGE_CORES} --engine remote=${GG_REMOTE_1} --engine remote=${GG_REMOTE_2} --engine remote=${GG_REMOTE_3} --engine remote=${GG_REMOTE_4} --engine remote=${GG_REMOTE_5} --engine remote=${GG_REMOTE_6} --engine remote=${GG_REMOTE_7} --engine remote=${GG_REMOTE_8}"

export FALLBACK_ENGINES="--jobs 4 --fallback-engine remote=${GG_REMOTE_FALLBACK}"
