#!/bin/sh
set -x
DIR=`dirname $0` &&
GALGAS=`dirname $0`/makefile-unix/galgas-debug &&
TEST=TEST_GALGAS &&
rm -fr ${DIR}/${TEST} &&
rm -fr ${DIR}/${TEST} &&
rm -fr ${DIR}/${TEST} &&
echo "---------------- BUILD GALGAS --------------------------" &&
cd ${DIR}/makefile-unix && /usr/bin/python3 ./build.py &&
echo "---------------- CREATE PROJECT --------------------------" &&
cd ${DIR} && ${GALGAS} --create-project=${TEST} &&
echo "---------------- GALGAS COMPILE --------------------------" &&
${GALGAS} --output-html-grammar-file --Werror ${DIR}/${TEST}/+${TEST}.galgasProject &&
echo "---------------- XCODE BUILD --------------------------" &&
cd ${DIR}/${TEST}/xcode-project && /Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild -alltargets &&
echo "---------------- MAKE i386 Linux --------------------------" &&
cd ${DIR}/${TEST}/makefile-x86linux32-on-macosx && /usr/bin/python3 ./build.py &&
echo "---------------- MAKE x86_64 Linux --------------------------" &&
cd ${DIR}/${TEST}/makefile-x86linux64-on-macosx && /usr/bin/python3 ./build.py &&
echo "---------------- MAKE Unix --------------------------" &&
cd ${DIR}/${TEST}/makefile-unix && /usr/bin/python3 ./build.py &&
echo "---------------- MAKE win32 --------------------------" &&
cd ${DIR}/${TEST}/makefile-win32-on-macosx && /usr/bin/python3 ./build.py &&
echo "---------------- MAKE --------------------------" &&
cd ${DIR}/${TEST}/makefile-unix && /usr/bin/python3 ./build.py &&
echo "---------------- EXECUTE NORMAL --------------------------" &&
cd ${DIR}/${TEST}/makefile-unix &&
./${TEST} --help &&
echo "---------------- EXECUTE DEBUG --------------------------" &&
cd ${DIR}/${TEST}/makefile-unix &&
./${TEST}-debug --help &&
echo "---------------- REMOVE PROJECT --------------------------" &&
cd ${DIR} &&
rm -fr ${DIR}/${TEST} &&
echo "---------------- SUCCES --------------------------"
