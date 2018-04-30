#!/bin/bash -ex

case "${__TEST_TYPE}" in
MU)
  ;;

*)
  git submodule update --init -- source/

  rm -rf build/
  cp -R source/ build/

  pushd build/
  rm -rf .git
  popd
  ;;
esac
