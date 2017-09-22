#!/bin/bash -ex

pushd gg
./0-install-deps.sh
./1-fetch.sh
./2-build.sh
popd
