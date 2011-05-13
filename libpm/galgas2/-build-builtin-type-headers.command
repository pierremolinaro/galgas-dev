#!/bin/sh
#set -x
#--- Builtin type headers 
DIR=`dirname $0` &&
cd $DIR/../../makefile_macosx && make --warn-undefined-variables galgas_debug -j `sysctl -n hw.ncpu` 
$DIR/../../makefile_macosx/galgas_debug -v --Werror --generate-predefined-types=$DIR
