#!/bin/bash -x

export GG_S3_BUCKET=gg-ec2-us-west-2

./run-test ffmpeg-minrel icecc-make-64 5
./run-test ffmpeg-minrel gg-ec2-64 5
./run-test clang-minrel icecc-make-64 5
./run-test clang-minrel gg-ec2-64 5

sleep 300

mv results/ results.0/
./run-test ffmpeg-minrel gg-ec2-64 5
./run-test clang-minrel gg-ec2-64 5
