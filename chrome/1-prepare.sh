#!/bin/bash -ex

rm -rf build/
cp -R source/ build/

pushd build/
dh_testdir -a
dh_update_autotools_config -a
debian/rules override_dh_auto_configure
popd
