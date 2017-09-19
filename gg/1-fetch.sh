#!/bin/bash -ex

git submodule update --init -- source/

cd source/
git submodule update --init -- toolchain/
