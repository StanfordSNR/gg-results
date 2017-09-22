#!/bin/bash -x

./run-test ffmpeg-minrel make-64 3
./run-test ffmpeg-minrel gg-64 3
./run-test ffmpeg-minrel ccache-64 3
./run-test ffmpeg-minrel gg-cache-64 3
./run-test ffmpeg-minrel make 3
