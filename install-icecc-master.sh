#!/bin/bash -ex

sudo apt-get install -y icecc
sudo service icecc-scheduler restart
sudo service iceccd restart
