#!/bin/sh

DIR=`dirname $0` &&

echo "-------- INSTALLING galgas" &&
cd ${DIR}/makefile-macosx && python build.py install-release &&
echo "---------------- SUCCES --------------------------"
