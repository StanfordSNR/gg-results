#!/bin/bash -ex

sudo apt-get install icecc
sudo service icecc-scheduler start
sudo service iceccd start
