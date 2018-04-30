#!/bin/bash -ex

case "${__TEST_TYPE}" in
SCANNER)
  ;;

*)
  git submodule update --init -- source/

  rm -rf build/
  cp -R source/ build/

  pushd build/
  rm -rf .git
  cp ../../gg/source/examples/viddec/gen_vid_thunks.py .
  cp ../../gg/build/examples/viddec/gen_vid_thunks{,25} .
  popd
  ;;
esac
