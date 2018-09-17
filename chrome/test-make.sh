#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

${TIMECOMMAND} ninja -j1 chrome
