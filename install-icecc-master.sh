#!/bin/bash -ex

sudo apt-get install -y icecc
sudo service icecc-scheduler start
sudo service iceccd start
