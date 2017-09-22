#!/bin/bash -x

./run-test llvm-minrel gg-lambda-64 5
sleep 120
./run-test llvm-minrel gg-lambda-1000 5
sleep 120
./run-test ffmpeg-minrel gg-lambda-64 5
sleep 120
./run-test ffmpeg-minrel gg-lambda-1000 5
sleep 120
./run-test clang-minrel gg-lambda-64 5
sleep 120
./run-test clang-minrel gg-lambda-1000 5
sleep 120

mv results/ results.0/

./run-test llvm-minrel gg-lambda-64 5
sleep 120
./run-test llvm-minrel gg-lambda-1000 5
sleep 120
./run-test ffmpeg-minrel gg-lambda-64 5
sleep 120
./run-test ffmpeg-minrel gg-lambda-1000 5
sleep 120
./run-test clang-minrel gg-lambda-64 5
sleep 120
./run-test clang-minrel gg-lambda-1000 5
sleep 120
