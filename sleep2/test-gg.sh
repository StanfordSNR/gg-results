#!/bin/bash

source ${BASH_SOURCE%/*}/define.sh

mkdir -p .gg-cache
export GG_CACHE_DIR=$(readlink -f .gg-cache)

gg-init
gcc -o sleeper ../code/sleeper.c -static -s
gg-collect sleeper

for i in $(seq 1 1000)
do
  gg-create-thunk --executable $(gg-hash sleeper) --output output --placeholder ${i}.out $(gg-hash sleeper) --timeout 2000 sleeper ${i}
done

${TIMECOMMAND} gg-force ${LAMBDA_ENGINES} --timeout 1 *.out
