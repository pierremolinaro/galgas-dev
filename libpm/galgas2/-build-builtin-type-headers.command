#!/bin/sh
#set -x
#--- Builtin type headers 
DIR=`dirname $0` &&
cd $DIR/../../makefile-macosx && ./build+debug.py &&
$DIR/../../makefile-macosx/galgas-debug -v --Werror --generate-predefined-types=$DIR
