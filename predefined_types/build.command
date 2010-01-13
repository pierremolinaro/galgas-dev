#!/bin/sh
set -x
DIR=`dirname $0` &&
#--- Compile 
galgas -v --Werror --generate-builtin-type-headers=$DIR

#--- Copy files (only if needed)
#for f in predefined_types.cpp predefined_types.h ; do
#  if [ ! -e ../../libpm/galgas/${f} ]; then
#    echo COPY ${f}
#    cp ${f} ../../libpm/galgas/${f}
#  else
#    cmp --quiet ../../libpm/galgas/${f} ${f} || {
#      echo COPY ${f}
#      cp ${f} ../../libpm/galgas/${f}
#    }
#  fi
#done
