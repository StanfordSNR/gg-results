#!/bin/bash -ex

sudo apt-get install -y gcc-7 g++-7 protobuf-compiler libprotobuf-dev \
                        libcrypto++-dev libcap-dev libkeyutils-dev \
                        libncurses5-dev libboost-dev libssl-dev autopoint help2man \
                        libhiredis-dev texinfo automake libtool pkg-config \
                        python-minimal

curl https://bootstrap.pypa.io/get-pip.py | sudo python3
sudo pip3 install protobuf
sudo pip3 install boto3
