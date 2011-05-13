#!/bin/sh
DIR=`dirname $0` &&
cd ${DIR}/build/Release &&
#--- build archive
ARCHIVE=cocoa_galgas_updater &&
rm -f ${DIR}/${ARCHIVE}.app.tar.bz2 &&
#rm -fr cocoagalgasupdater.app &&
#cp -r cocoa_galgas_updater.app cocoagalgasupdater.app &&
tar cv ${ARCHIVE}.app | bzip2 -9 > ${DIR}/${ARCHIVE}.app.tar.bz2 &&
#--- Done !
echo DONE !

