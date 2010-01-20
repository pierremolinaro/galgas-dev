#!/bin/sh
#set -x
#--- Builtin type headers 
DIR=`dirname $0` &&
galgas -v --Werror --generate-builtin-type-headers=$DIR/../../libpm/galgas2
