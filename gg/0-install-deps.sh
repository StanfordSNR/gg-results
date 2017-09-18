#!/bin/bash -ex

sudo apt-get install -y libcap-dev libcajun-dev libkeyutils-dev \
                        libncurses5-dev libboost-dev libssl-dev autopoint \
                        help2man texinfo protobuf-compiler libprotobuf-dev \
                        libcrypto++-dev python

curl https://bootstrap.pypa.io/get-pip.py | sudo python3
sudo pip3 install protobuf
sudo pip3 install boto3
