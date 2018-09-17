#!/bin/bash -ex

git submodule update --init -- source/

pushd source/
git reset --hard
git clean -xffd
popd
