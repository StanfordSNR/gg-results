#!/bin/bash -x

./run-test clang-minrel make-64 3
./run-test clang-minrel gg-64 3
./run-test clang-minrel ccache-64 3
./run-test clang-minrel gg-cache-64 3
./run-test clang-minrel make 3
