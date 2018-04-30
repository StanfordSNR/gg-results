#!/bin/bash -ex

sudo apt-get install -y icecc

read -p "icecc master ip address: " ICECC_MASTER
sudo sed -i "s/^ICECC_SCHEDULER_HOST=\"\"/ICECC_SCHEDULER_HOST=\"${ICECC_MASTER}\"/" /etc/icecc/icecc.conf

sudo service iceccd restart
