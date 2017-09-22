#!/bin/bash -ex

git submodule update --init -- ../ffmpeg/source/
cp -R ../llvm/source/ .

pushd source/tools
git clone https://github.com/llvm-mirror/clang --branch release_50 --depth 1
