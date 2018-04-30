#!/bin/bash -ex

sudo apt-get build-dep -y inkscape

sudo apt-get install -y libsoup2.4-dev libgtkmm-3.0-dev \
                        libgdk3.0-cil-dev libgdl-3-dev
