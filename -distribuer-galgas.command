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
#-------------------- Supprimer le script de distribution
rm ${TEMP_DIR}/galgas/-distribuer-galgas.command &&
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
sed "s/GALGAS_BETA_VERSION/${VERSION_GALGAS}/g" ${DIR}/temp > ${DIR}/galgas/project-xcode-galgas/English.lproj/InfoPlist.strings &&
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
#-------------------- Copier changeLog
mv ${DIR}/galgas/changeLog.html ${DIR}/changeLog.html &&
#-------------------- VŽrifier les programmes d'exemple
${DIR}/galgas/sample_code/-build-all-macosx.command &&
rm -fr ${DIR}/galgas/sample_code &&
#-------------------- ExŽcuter les tests
${DIR}/galgas/testsuite/_run_testsuite.command &&
rm -fr ${DIR}/galgas/testsuite &&
#-------------------- VŽrifier la crŽation de projet
GALGAS_DEBUG_TOOL=${DIR}/galgas/makefile-macosx/galgas-debug &&
TEST_PROJECT_NAME=TEST &&
CREATE_PROJECT_TEST_DIR=${DIR}/galgas/${TEST_PROJECT_NAME} &&
echo "---------------- CREATE PROJECT --------------------------" &&
cd ${DIR} && ${GALGAS_DEBUG_TOOL} --create-project=${CREATE_PROJECT_TEST_DIR} &&
echo "---------------- GALGAS COMPILE --------------------------" &&
${GALGAS_DEBUG_TOOL} -v --Werror ${CREATE_PROJECT_TEST_DIR}/+${TEST_PROJECT_NAME}.galgasProject &&
echo "---------------- XCODE BUILD --------------------------" &&
cd ${CREATE_PROJECT_TEST_DIR}/xcode-project && xcodebuild -alltargets &&
echo "---------------- MAKE i386 Linux --------------------------" &&
cd ${CREATE_PROJECT_TEST_DIR}/makefile-x86linux32-on-macosx && python ./build.py &&
echo "---------------- MAKE x86_64 Linux --------------------------" &&
cd ${CREATE_PROJECT_TEST_DIR}/makefile-x86linux64-on-macosx && python ./build.py &&
echo "---------------- MAKE Unix --------------------------" &&
cd ${CREATE_PROJECT_TEST_DIR}/makefile-unix && python ./build.py &&
echo "---------------- MAKE win32 --------------------------" &&
cd ${CREATE_PROJECT_TEST_DIR}/makefile-win32-on-macosx && python ./build.py &&
echo "---------------- MAKE --------------------------" &&
cd ${CREATE_PROJECT_TEST_DIR}/makefile-macosx && python ./build.py &&
echo "---------------- EXECUTE NORMAL --------------------------" &&
cd ${CREATE_PROJECT_TEST_DIR}/makefile-macosx && ./${TEST_PROJECT_NAME} --help &&
echo "---------------- EXECUTE DEBUG --------------------------" &&
cd ${CREATE_PROJECT_TEST_DIR}/makefile-macosx && ./${TEST_PROJECT_NAME}-debug --help &&
echo "---------------- REMOVE PROJECT --------------------------" &&
cd ${DIR} &&
rm -fr ${CREATE_PROJECT_TEST_DIR} &&
echo "---------------- SUCCES --------------------------"
#-------------------- Construire la documentation Latex
sed "s/GALGASCURRENTVERSION/${VERSION_GALGAS}/g" ${DIR}/galgas/galgas-documentation-latex-sources/galgas-book.tex > ${DIR}/temp &&
cp ${DIR}/temp ${DIR}/galgas/galgas-documentation-latex-sources/galgas-book.tex &&
rm ${DIR}/temp &&
${DIR}/galgas/galgas-documentation-latex-sources/-build.command &&
cd ${DIR} && cp galgas/galgas-documentation-latex-sources/galgas-book.pdf galgas-book.pdf &&
rm -fr ${DIR}/galgas/galgas-documentation-latex-sources &&
#-------------------- Creer l'archive de l'executable windows (release et debug)
cd ${DIR}/galgas/makefile-win32-on-macosx/ && python ./build.py &&
cp ${DIR}/galgas/makefile-win32-on-macosx/galgas.exe ${DIR}/galgas.exe &&
cd ${DIR} && bzip2 -9 galgas.exe &&
cp ${DIR}/galgas/makefile-win32-on-macosx/galgas-debug.exe ${DIR}/galgas-debug.exe &&
cd ${DIR} && bzip2 -9 galgas-debug.exe &&
rm -fr ${DIR}/galgas/makefile-win32-on-macosx &&
rm -fr ${DIR}/galgas/build/cli-objects &&
#-------------------- Creer l'archive de l'executable x86 linux 32 (release et debug)
cd ${DIR}/galgas/makefile-x86linux32-on-macosx/ && python ./build.py &&
cd ${DIR}/galgas/makefile-x86linux32-on-macosx && zip -9 galgas.zip galgas &&
cp ${DIR}/galgas/makefile-x86linux32-on-macosx/galgas.zip ${DIR}/galgas-x86-linux32.zip &&
cd ${DIR}/galgas/makefile-x86linux32-on-macosx && zip -9 galgas-debug.zip galgas-debug &&
cp ${DIR}/galgas/makefile-x86linux32-on-macosx/galgas-debug.zip ${DIR}/galgas-debug-x86-linux32.zip &&
rm -fr ${DIR}/galgas/makefile-x86linux32-on-macosx &&
rm -fr ${DIR}/galgas/build/cli-objects &&
#-------------------- Creer l'archive de l'executable x86 linux 64 (release et debug)
cd ${DIR}/galgas/makefile-x86linux64-on-macosx/ && python ./build.py &&
cd ${DIR}/galgas/makefile-x86linux64-on-macosx && zip -9 galgas.zip galgas &&
cp ${DIR}/galgas/makefile-x86linux64-on-macosx/galgas.zip ${DIR}/galgas-x86-linux64.zip &&
cd ${DIR}/galgas/makefile-x86linux64-on-macosx && zip -9 galgas-debug.zip galgas-debug &&
cp ${DIR}/galgas/makefile-x86linux64-on-macosx/galgas-debug.zip ${DIR}/galgas-debug-x86-linux64.zip &&
rm -fr ${DIR}/galgas/makefile-x86linux64-on-macosx &&
rm -fr ${DIR}/galgas/build/cli-objects &&
#-------------------- Recompiler le projet Xcode
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
