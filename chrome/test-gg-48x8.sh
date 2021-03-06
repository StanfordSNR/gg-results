#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

for i in $(seq 1 8)
do
  REMOTE=GG_REMOTE_$i
  curl --fail http://${!REMOTE}:9924/reset
done

BUILD_ROOT_DIR=`pwd`

# prepare the caches
rm -rf ../temp-cache
cp -R ../data ../temp-cache
export GG_CACHE_DIR=$(readlink -f ../temp-cache)

tar xf ${GG_CACHE_DIR}/remotes.tar.gz -C ${GG_CACHE_DIR}

pushd out/Release
gg-init

export GG_GCC_BUILD_DIR=$(readlink -f .)

cat >headers.gg.txt <<EOL
.h
.c
.hh
.cc
.cpp
.hxx
.hpp
EOL

# (1) build the basic tools like torque and flatc
TARGETS="torque genmacro genperf genversion genmodule genstring re2c \
         character_data_generator transport_security_state_generator protoc \
         protoc_plugin brotli flatc top_domain_generator"

${TIMECOMMAND_PREP0} gg-build-infer ninja -j${SMALL_CORES} ${TARGETS}
${TIMECOMMAND_PREP1} gg-force ${REMOTE_ENGINES} --timeout 4 ${TARGETS}

echo "stage 1: done."
sleep 10

# (2) build yasm and mksnapshot
TARGETS="mksnapshot yasm"
${TIMECOMMAND_PREP2} gg-build-infer ninja -j${SMALL_CORES} ${TARGETS}
${TIMECOMMAND_PREP3} gg-force ${REMOTE_ENGINES} --timeout 4 ${TARGETS}

echo "stage 2: done."
sleep 10

# (3) run ninja to generate the extra source & headers
${TIMECOMMAND_PREP4} /bin/bash -c "${BUILD_ROOT_DIR}/../data/gen-targets.sh |
  xargs -- gg-infer ninja -j${SMALL_CORES} -k0"

echo "stage 3: done."
sleep 10

# (4) create blueprints for generated headers
pushd gen/
${TIMECOMMAND_PREP5} gg-create-blueprints -f ${BUILD_ROOT_DIR}/../data/gen-includes.txt -t /dev/shm -o /dev/shm/file-list.txt .
${TIMECOMMAND_PREP6} /bin/bash -c 'until ( cat /dev/shm/file-list.txt | gg-put ); do : ; done'
popd

echo "stage 4: done."
sleep 10

# (5) now we're ready to build v8_context_snapshot_generator
unset GG_GCC_BUILD_DIR

${TIMECOMMAND_PREP7} gg-build-infer ninja -j${SMALL_CORES} v8_context_snapshot_generator
${TIMECOMMAND_PREP8} gg-force ${REMOTE_ENGINES} --timeout 30 --timeout-multiplier 3 v8_context_snapshot_generator *.so

echo "stage 5: done."
sleep 10

# (6) and for my next trick, i'm gonna build chrome
${TIMECOMMAND_PREP9} gg-build-infer ninja -j${SMALL_CORES} chrome
${TIMECOMMAND} gg-force ${REMOTE_ENGINES} --timeout 30 --timeout-multiplier 3 chrome

echo "stage 6: done."

popd

rm -rf ${GG_CACHE_DIR}
