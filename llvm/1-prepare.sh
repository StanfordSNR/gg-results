#!/bin/bash -ex

git submodule update --init -- source/

rm -rf build/
mkdir -p build

pushd build/

case "${__TEST_TYPE}" in
  MAKE)
    cmake ../source/
    ;;

  ICECC)
    CXX="g++" CC="gcc" PATH=/usr/lib/icecc/bin:$PATH cmake ../source/
    ;;

  GG)
    gg-init
    CXX="g++" CC="gcc" GG_BYPASS=1 gg-run cmake ../source/
    ;;

  CCACHE)
    CXX="g++" CC="gcc" PATH=/usr/lib/ccache:$PATH cmake ../source/
    ;;
esac

popd
