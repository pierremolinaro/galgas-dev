#!/bin/sh
DIR=`dirname $0` &&
cd ${DIR}/build/Release &&
#--- build archive
rm -f ${DIR}/cocoagalgasupdater.app.tar.bz2
rm -fr cocoagalgasupdater.app
cp -r cocoa_galgas_updater.app cocoagalgasupdater.app
tar cv cocoagalgasupdater.app | bzip2 -9 > ${DIR}/cocoagalgasupdater.app.tar.bz2 &&
#--- Done !
echo DONE !

