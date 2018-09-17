#!/bin/bash -ex

git submodule update --init -- source/

cd source/
./fetch-submodules.sh
