#!/bin/sh
set -x
DIR=`dirname $0` &&
GALGAS=`dirname $0`/makefile-macosx/galgas-debug &&
TEST=TEST_GALGAS &&
rm -fr ${DIR}/${TEST} &&
echo "---------------- BUILD GALGAS --------------------------" &&
cd ${DIR}/makefile-macosx && python ./build.py &&
echo "---------------- CREATE PROJECT --------------------------" &&
cd ${DIR} && ${GALGAS} --note-file-access --create-project=${TEST} &&
echo "---------------- GALGAS COMPILE --------------------------" &&
${GALGAS} --new-code-generation -v --Werror ${DIR}/${TEST}/+${TEST}.galgasProject &&
echo "---------------- XCODE BUILD --------------------------" &&
cd ${DIR}/${TEST}/xcode-project && xcodebuild -alltargets &&
echo "---------------- MAKE i386 Linux --------------------------" &&
cd ${DIR}/${TEST}/makefile-x86linux32-on-macosx && python ./build.py &&
echo "---------------- MAKE x86_64 Linux --------------------------" &&
cd ${DIR}/${TEST}/makefile-x86linux64-on-macosx && python ./build.py &&
echo "---------------- MAKE Unix --------------------------" &&
cd ${DIR}/${TEST}/makefile-unix && python ./build.py &&
echo "---------------- MAKE win32 --------------------------" &&
cd ${DIR}/${TEST}/makefile-win32-on-macosx && python ./build.py &&
echo "---------------- MAKE --------------------------" &&
cd ${DIR}/${TEST}/makefile-macosx && python ./build.py &&
echo "---------------- EXECUTE NORMAL --------------------------" &&
cd ${DIR}/${TEST}/makefile-macosx &&
./${TEST} --help &&
echo "---------------- EXECUTE DEBUG --------------------------" &&
cd ${DIR}/${TEST}/makefile-macosx &&
./${TEST}-debug --help &&
echo "---------------- REMOVE PROJECT --------------------------" &&
cd ${DIR} &&
rm -fr ${DIR}/${TEST} &&
echo "---------------- SUCCES --------------------------"
