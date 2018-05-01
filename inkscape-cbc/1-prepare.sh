#!/bin/bash -ex

rm -rf build/
git clone source/ build

export GG_GCC_OPENMP_SUPPORT=1

TARGET=src/inkscape

pushd build/
  FORCE_ARGS="--status --engine lambda --jobs 2000 --timeout 2"

  # STEP 0: Build package version 0.
  ./autogen.sh
  CFLAGS="-O2 -s" CXXFLAGS="-O2 -s" ./configure

  #TIMECOMMAND="/usr/bin/time --verbose --output=%s"

  gg-init
  GG_METAINFER=1 gg-infer make -j${LARGE_CORES}

  tar cvf __targets_backup.tar $TARGET
  gg-force $FORCE_ARGS $TARGET
  tar xvf __targets_backup.tar

  gg-list-dist $TARGET | tar zvcf inkscape.ggdist.tar.gz -T - >/dev/null 2>/dev/null
popd
