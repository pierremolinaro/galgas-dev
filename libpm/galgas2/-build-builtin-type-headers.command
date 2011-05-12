#!/bin/sh
#set -x
#--- Builtin type headers 
DIR=`dirname $0` &&
/Volumes/dev-svn/galgas/project-xcode-galgas/build/Default/galgasDebugI386 -v --Werror --generate-predefined-types=$DIR
