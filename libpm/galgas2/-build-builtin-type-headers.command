#!/bin/sh
#set -x
#--- Builtin type headers 
DIR=`dirname $0` &&
cd $DIR/../../makefile-macosx && make --warn-undefined-variables galgas-debug -j `sysctl -n hw.ncpu` &&
$DIR/../../makefile-macosx/galgas-debug -v --Werror --generate-predefined-types=$DIR
