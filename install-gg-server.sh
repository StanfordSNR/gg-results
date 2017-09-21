#!/bin/bash -ex

sudo apt-get install -y apache2
sudo a2enconf serve-cgi-bin
sudo a2enmod cgid
sudo service apache2 restart

cd gg/
./0-install-deps.sh
./1-fetch.sh
./2-build.sh

GG_ROOT=$(readlink -f .)
BUILD_ROOT=$(readlink -f build)

cd /var/www
sudo mkdir tmpfs
sudo mount -t tmpfs -o size=128G tmpfs ./tmpfs

cd ${GG_ROOT}/source/src/remote/
sudo -E ./install-server.py /usr/lib/cgi-bin ../../toolchain/bin ${BUILD_ROOT}/src/frontend/gg-s3-download ${BUILD_ROOT}/src/frontend/gg-execute-static
