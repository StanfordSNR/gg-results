#!/bin/bash -ex

sudo apt-get install -y icecc

sudo sed -i 's/ICECC_MAX_JOBS=""/ICECC_MAX_JOBS="1"/' /etc/icecc/icecc.conf

sudo service icecc-scheduler restart
sudo service iceccd restart
