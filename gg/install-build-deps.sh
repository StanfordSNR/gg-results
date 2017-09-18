#!/bin/bash -ex

# install protobuf
pushd deps/protobuf
./autogen.sh
./configure
make -j$(nproc)
sudo make install
sudo ldconfig
popd

# install libcrypto++-dev
pushd deps/cryptopp
make -j$(nproc)
sudo make install
sudo ldconfig
popd

# install python3.6
sudo add-apt-repository -y ppa:jonathonf/python-3.6
sudo apt-get update -qq
sudo apt-get install -y python3.6
curl https://bootstrap.pypa.io/get-pip.py | sudo python3.6 -
sudo pip3.6 install protobuf
sudo pip3.6 install boto3
