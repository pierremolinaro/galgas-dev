#!/bin/sh
set -x
cd `dirname $0` &&
#--- Compile 
galgas -v --Werror predefined_types.ggs &&
#--- Use sed for renaming header file
sed "s/UINT64LIST/uint64list/g" GALGAS_OUTPUT/predefined_types.h > GALGAS_OUTPUT/temp &&
sed "s/LSTRINGLIST/lstringlist/g" GALGAS_OUTPUT/temp > GALGAS_OUTPUT/temp2 &&
sed "s/STRINGLIST/stringlist/g" GALGAS_OUTPUT/temp2 > predefined_types.h &&
#--- Use sed for renaming implementation file
sed "s/UINT64LIST/uint64list/g" GALGAS_OUTPUT/predefined_types.cpp > GALGAS_OUTPUT/temp &&
sed "s/LSTRINGLIST/lstringlist/g" GALGAS_OUTPUT/temp > GALGAS_OUTPUT/temp2 &&
sed "s/STRINGLIST/stringlist/g" GALGAS_OUTPUT/temp2 > predefined_types.cpp &&
#---Remove temp files
rm GALGAS_OUTPUT/temp &&
rm GALGAS_OUTPUT/temp2 &&
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
