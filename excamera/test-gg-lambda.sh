#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

${TIMECOMMAND} gg-force --status --timeout 5 --no-download --engine lambda --jobs ${LAMBDA_CORES} ${__TARGETS?"not set"}
