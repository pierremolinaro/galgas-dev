#!/bin/sh
#set -x
DIR=`dirname $0` &&
HEADER_LIST="GALGAS_bool GALGAS_char GALGAS_data GALGAS_double GALGAS_function GALGAS_lbool" &&
HEADER_LIST+=" GALGAS_lchar GALGAS_ldouble GALGAS_location GALGAS_lsint_36__34_ GALGAS_lsint" &&
HEADER_LIST+=" GALGAS_lstring GALGAS_luint_36__34_ GALGAS_luint GALGAS_object GALGAS_sint_36__34_" &&
HEADER_LIST+=" GALGAS_sint GALGAS_string GALGAS_stringset GALGAS_type GALGAS_uint_36__34_ GALGAS_uint" &&
cd $DIR &&
#--- Builtin type headers 
galgas -v --Werror --generate-builtin-type-headers=generated-type-headers &&

#--- Copy files (only if needed)
for f in $HEADER_LIST ; do
  if [ ! -e ../../libpm/galgas2/${f}.h ]; then
    echo COPY ${f}.h
    cp generated-type-headers/${f}.h ../../libpm/galgas2/${f}.h
  else
    if [ "`cat ../../libpm/galgas2/${f}.h`" != "`cat generated-type-headers/${f}.h`" ]; then
      echo COPY ${f}.h
      cp generated-type-headers/${f}.h ../../libpm/galgas2/${f}.h
    fi
  fi
done

