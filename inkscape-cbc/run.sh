#!/bin/bash -ex

source ${BASH_SOURCE%/*}/define.sh

RESULTS_DIR=../../results/inkscape-cbc
mkdir -p $RESULTS_DIR

i=$1
j=$(($i-1))
TARGET=src/inkscape
FORCE_ARGS="--status --engine lambda --jobs 2000 --timeout 2"
TIMECOMMAND="/usr/bin/time --verbose --output=$RESULTS_DIR/%d.%s.log --"

export GG_GCC_OPENMP_SUPPORT=1
TT=`printf "$TIMECOMMAND" $j 4-gg-put`
DIST_HASH=`$TT gg-put inkscape.ggdist.tar.gz 2>&1 | cut -d ' ' -f 4`

git clean -xffd
git reset --hard

git checkout $(git rev-list INKSCAPE_0_92_2..INKSCAPE_0_92_3 --reverse | sed -n ${i}p)

gg-init
TT=`printf "$TIMECOMMAND" $i 1-gg-get`
$TT gg-get $DIST_HASH
tar --skip-old-files -z -v -x -f .gg/blobs/$DIST_HASH >/dev/null 2>/dev/null
rm .gg/blobs/$DIST_HASH

TT=`printf "$TIMECOMMAND" $i 2-gg-remodel`
$TT gg-remodel $TARGET

tar cvf __targets_backup.tar $TARGET
TT=`printf "$TIMECOMMAND" $i 3-gg-force`
$TT gg-force $FORCE_ARGS $TARGET
tar xvf __targets_backup.tar

gg-list-dist $TARGET | tar zvcf inkscape.ggdist.tar.gz -T - >/dev/null 2>/dev/null
