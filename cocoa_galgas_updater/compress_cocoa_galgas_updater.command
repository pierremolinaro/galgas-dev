#!/bin/sh
DIR=`dirname $0` &&
cd ${DIR}/build/Release &&
#--- build archive
tar cv cocoa_galgas_updater.app | bzip2 -9 > ${DIR}/cocoa_galgas_updater.app.tar.bz2 &&
#--- Done !
echo DONE !

