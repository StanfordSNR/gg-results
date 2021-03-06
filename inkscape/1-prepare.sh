#!/bin/bash -ex

SOURCE_ROOT=../source/
CMAKE_COMMAND="cmake -DWITH_OPENMP=OFF -DCMAKE_BUILD_TYPE=MINSIZEREL -DWITH_NLS=OFF ${SOURCE_ROOT}"

git submodule update --init -- source/

rm -rf build/
mkdir -p build

pushd build/

case "${__TEST_TYPE}" in
  MAKE)
    ${CMAKE_COMMAND}
    ;;

  ICECC)
    CXX="g++" CC="gcc" PATH=/usr/lib/icecc/bin:$PATH ${CMAKE_COMMAND}
    ;;

  GG)
    gg-init
    CXX="g++" CC="gcc" GG_BYPASS=1 gg-infer ${CMAKE_COMMAND}
    ;;

  CCACHE)
    CXX="g++" CC="gcc" PATH=/usr/lib/ccache:$PATH ${CMAKE_COMMAND}
    ;;
esac

popd
