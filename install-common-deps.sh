#!/bin/bash -ex

sudo add-apt-repository -y ppa:ubuntu-toolchain-r/test
sudo apt-get update -qq
sudo apt-get install -y gcc-7 g++-7 libcap-dev libcajun-dev libkeyutils-dev libncurses5-dev libboost-dev libssl-dev autopoint help2man texinfo automake autoconf libtool make curl unzip wget

sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-7 99
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-7 99
