#!/bin/sh

DIR=`dirname $0` &&

echo "-------- INSTALLING galgas" &&
cd ${DIR}/makefile-macosx && make install -j `sysctl -n hw.ncpu` &&
echo "---------------- SUCCES --------------------------"
