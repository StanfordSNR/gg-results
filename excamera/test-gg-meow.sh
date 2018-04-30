#!/bin/bash -ex

MYIP=$(dig +short myip.opendns.com @resolver1.opendns.com)

source ${BASH_SOURCE%/*}/define.sh

${TIMECOMMAND} gg-force --no-download --engine meow=${MYIP}:9925 --jobs ${LAMBDA_CORES} ${__TARGETS?"not set"}
