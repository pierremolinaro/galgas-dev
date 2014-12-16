#!/bin/sh
set -x
#-------------------- Version GALGAS
#-------------------- Supprimer une distribution existante
TEMP_DIR=`dirname $0`/../DISTRIBUTION_GALGAS &&
rm -fr ${TEMP_DIR} &&
#-------------------- Creer le repertoire contenant la distribution
mkdir ${TEMP_DIR} &&
#-------------------- Importer galgas
svn export https://galgas.rts-software.org/svn/ ${TEMP_DIR}/galgas | grep "Exported revision" | awk '{ print $3; }' | sed "s/\.//g" > ${TEMP_DIR}/version-repository.txt &&
#-------------------- Obtenir l'annŽe
ANNEE=`date | awk '{ print $4 ; }'`
#-------------------- Obtenir le numŽro de version GALGAS
cat ${TEMP_DIR}/galgas/build/output/project_header.h | grep "PROJECT_VERSION_STRING" | awk '{ print $3; }' | sed s/\"//g > ${TEMP_DIR}/version-galgas.txt &&
#-------------------- Mettre a jour les numeros de version
VERSION_GALGAS=`cat ${TEMP_DIR}/version-galgas.txt` &&
DIR=`dirname $0`/../DISTRIBUTION_GALGAS_${VERSION_GALGAS} &&
rm -fr ${DIR} &&
mv ${TEMP_DIR} ${DIR} &&
sed "s/!AN!/${ANNEE}/g" ${DIR}/galgas/project-xcode-galgas/Info.plist > ${DIR}/temp &&
sed "s/GALGAS_BETA_VERSION/${VERSION_GALGAS}/g" ${DIR}/temp > ${DIR}/galgas/project-xcode-galgas/Info.plist &&
sed "s/!AN!/${ANNEE}/g" ${DIR}/galgas/project-xcode-galgas/English.lproj/InfoPlist.strings > ${DIR}/temp &&
sed "s/GALGAS_BETA_VERSION/${VERSION_GALGAS}/g" ${DIR}/temp < ${DIR}/galgas/project-xcode-galgas/English.lproj/InfoPlist.strings &&
{ 
  for fichier in ${DIR}/galgas/galgas-sources/*.galgas \
      ${DIR}/galgas/*.galgasProject \
      ${DIR}/galgas/build/output/*.h \
      ${DIR}/galgas/build/output/*.cpp \
      ${DIR}/galgas/build/output/*.m \
      ${DIR}/galgas/hand_coded_sources/*.h \
      ${DIR}/galgas/hand_coded_sources/*.cpp
  do
    echo $fichier
    sed "s/GALGAS_BETA_VERSION/${VERSION_GALGAS}/g" $fichier > ${DIR}/temp
    sed "s/!AN!/${ANNEE}/g" ${DIR}/temp > $fichier
  done
} &&
rm ${DIR}/temp &&
#-------------------- Creer l'archive des sources de galgas
eolc -unix -D${DIR}/galgas -Eh -Ec -Ecpp -Em -Emm -Epy -Ebat -Emke -Fmakefile &&
cd ${DIR} && tar cv galgas | bzip2 -9 > galgas-sources-lf.tar.bz2 &&
eolc -dos -D${DIR}/galgas -Eh -Ec -Ecpp -Em -Emm -Epy -Ebat -Emke -Fmakefile &&
cd ${DIR} && tar cv galgas | bzip2 -9 > galgas-sources-crlf.tar.bz2 &&
#-------------------- Construire la documentation Latex
sed "s/GALGASCURRENTVERSION/${VERSION_GALGAS}/g" ${DIR}/galgas/galgas-documentation-latex-sources/galgas-book.tex > ${DIR}/temp &&
cp ${DIR}/temp ${DIR}/galgas/galgas-documentation-latex-sources/galgas-book.tex &&
rm ${DIR}/temp &&
cd ${DIR}/galgas/galgas-documentation-latex-sources && ./build-color.command &&
cd ${DIR} && cp galgas/galgas-documentation-latex-sources/galgas-book-color.pdf galgas-book.pdf &&
#-------------------- Creer l'archive de l'executable windows (release et debug)
cd ${DIR}/galgas/makefile-win32-on-macosx/ && python ./build.py &&
cp ${DIR}/galgas/makefile-win32-on-macosx/galgas.exe ${DIR}/galgas.exe &&
cd ${DIR} && bzip2 -9 galgas.exe &&
cp ${DIR}/galgas/makefile-win32-on-macosx/galgas-debug.exe ${DIR}/galgas-debug.exe &&
cd ${DIR} && bzip2 -9 galgas-debug.exe &&
#-------------------- Creer l'archive de l'executable x86 linux 32 (release et debug)
cd ${DIR}/galgas/makefile-x86linux32-on-macosx/ && python ./build.py &&
bzip2 -9 ${DIR}/galgas/makefile-x86linux32-on-macosx/galgas &&
cp ${DIR}/galgas/makefile-x86linux32-on-macosx/galgas.bz2 ${DIR}/galgas-x86-linux32.bz2 &&
bzip2 -9 ${DIR}/galgas/makefile-x86linux32-on-macosx/galgas-debug &&
cp ${DIR}/galgas/makefile-x86linux32-on-macosx/galgas-debug.bz2 ${DIR}/galgas-debug-x86-linux32.bz2 &&
#-------------------- Creer l'archive de l'executable x86 linux 64 (release et debug)
cd ${DIR}/galgas/makefile-x86linux64-on-macosx/ && python ./build.py &&
bzip2 -9 ${DIR}/galgas/makefile-x86linux64-on-macosx/galgas &&
cp ${DIR}/galgas/makefile-x86linux64-on-macosx/galgas.bz2 ${DIR}/galgas-x86-linux64.bz2 &&
bzip2 -9 ${DIR}/galgas/makefile-x86linux64-on-macosx/galgas-debug &&
cp ${DIR}/galgas/makefile-x86linux64-on-macosx/galgas-debug.bz2 ${DIR}/galgas-debug-x86-linux64.bz2 &&
#-------------------- Copier changeLog
mv ${DIR}/galgas/changeLog.html ${DIR}/changeLog.html &&
#-------------------- Recompiler GALGAS ˆ partir de la ligne de commande
cd ${DIR}/galgas/project-xcode-galgas && xcodebuild -project galgas-distribution.xcodeproj -target "GALGAS Cocoa" -configuration Default &&
#-------------------- Creer l'archive BZ2 de cocoa galgas
cp -r ${DIR}/galgas/project-xcode-galgas/build/Default/cocoaGalgas.app ${DIR} &&
cd ${DIR} && tar cv cocoaGalgas.app | bzip2 -9 > cocoaGalgas.app.tar.bz2 &&
rm -r ${DIR}/cocoaGalgas.app &&
#-------------------- Creer l'archive de Cocoa Galgas
mkdir ${DIR}/COCOA-GALGAS &&
cp ${DIR}/galgas/AUTHORS ${DIR}/COCOA-GALGAS &&
cp ${DIR}/galgas/COPYING ${DIR}/COCOA-GALGAS &&
cp -r ${DIR}/galgas/project-xcode-galgas/build/Default/cocoaGalgas.app ${DIR}/COCOA-GALGAS &&
hdiutil create -srcfolder ${DIR}/COCOA-GALGAS ${DIR}/cocoa-galgas.dmg &&
rm -fr ${DIR}/COCOA-GALGAS &&
#-------------------- Creer l'archive de l'outil ligne de commande pour mac
mkdir ${DIR}/GALGAS-TOOL &&
cp ${DIR}/galgas/AUTHORS ${DIR}/GALGAS-TOOL &&
cp ${DIR}/galgas/COPYING ${DIR}/GALGAS-TOOL &&
cp ${DIR}/galgas/project-xcode-galgas/build/Default/cocoaGalgas.app/Contents/Resources/galgas ${DIR}/GALGAS-TOOL/galgas &&
cp ${DIR}/galgas/project-xcode-galgas/build/Default/cocoaGalgas.app/Contents/Resources/galgas ${DIR}/GALGAS-TOOL/galgasDebug &&
hdiutil create -srcfolder ${DIR}/GALGAS-TOOL ${DIR}/galgas-tool.dmg &&
rm -fr ${DIR}/GALGAS-TOOL &&
#-------------------- Supprimer les repertoires sources
cd ${DIR} &&
rm -fr ${DIR}/galgas &&
echo "-------------- SUCCES ---------------" ||
echo "-------------- ECHEC ----------------"
