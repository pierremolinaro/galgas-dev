#!/bin/sh
set -x
cd `dirname $0` &&
#--- Compile 
galgas -v predefined_types.ggs &&
#--- Use sed for renaming header file
sed "s/UINT64LIST/uint64list/g" GALGAS_OUTPUT/predefined_types.h > GALGAS_OUTPUT/temp &&
sed "s/STRINGLIST/stringlist/g" GALGAS_OUTPUT/temp > predefined_types.h &&
#--- Use sed for renaming implementation file
sed "s/UINT64LIST/uint64list/g" GALGAS_OUTPUT/predefined_types.cpp > GALGAS_OUTPUT/temp &&
sed "s/STRINGLIST/stringlist/g" GALGAS_OUTPUT/temp > predefined_types.cpp &&
#---Remove temp file
rm GALGAS_OUTPUT/temp
#--- Copy files (only if needed)
for f in predefined_types.cpp predefined_types.h ; do
  if [ ! -e ../../libpm/galgas/${f} ]; then
    echo COPY ${f}
    cp ${f} ../../libpm/galgas/${f}
  else
    cmp --quiet ../../libpm/galgas/${f} ${f} || {
      echo COPY ${f}
      cp ${f} ../../libpm/galgas/${f}
    }
  fi
done
