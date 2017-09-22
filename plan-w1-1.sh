#!/bin/bash -x

./run-test llvm-minrel make-64 3
./run-test llvm-minrel gg-64 3
./run-test llvm-minrel ccache-64 3
./run-test llvm-minrel gg-cache-64 3
./run-test llvm-minrel make 3
