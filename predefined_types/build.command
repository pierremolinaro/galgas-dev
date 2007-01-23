#!/bin/sh
cd `dirname $0` &&
#--- Compile 
galgas predefined_types.ggs &&
#--- Use sed for renaming header file
sed "s/UINT64LIST/uint64list/g" GALGAS_OUTPUT/predefined_types.h > GALGAS_OUTPUT/temp &&
sed "s/STRINGLIST/stringlist/g" GALGAS_OUTPUT/temp > predefined_types.h &&
#--- Use sed for renaming implementation file
sed "s/UINT64LIST/uint64list/g" GALGAS_OUTPUT/predefined_types.cpp > GALGAS_OUTPUT/temp &&
sed "s/STRINGLIST/stringlist/g" GALGAS_OUTPUT/temp > predefined_types.cpp &&
#---Remove temp file
rm GALGAS_OUTPUT/temp
#--- Copy files
for f in predefined_types.cpp predefined_types.h ; do
  if [ ! ../../libpm/galgas/${f} -nt ${f} ]; then
    echo COPY ${f}
    cp ${f} ../../libpm/galgas/${f}
  fi
done
#--- Done !
echo DONE !

