#!/bin/sh
#set -x
DIR=`dirname $0` &&
cd $DIR &&
#--- Compile predefined types
galgas -v --Werror --legacy-code-generation predefined_types.gSemantics &&
#--- Use sed for renaming header file
sed "s/UINT64LIST/uint64list/g"     GALGAS_OUTPUT/predefined_types.h > GALGAS_OUTPUT/temp &&
sed "s/LUINTLIST/luintlist/g"       GALGAS_OUTPUT/temp > GALGAS_OUTPUT/temp2 &&
sed "s/UINTLIST/uintlist/g"         GALGAS_OUTPUT/temp2 > GALGAS_OUTPUT/temp &&
sed "s/LSTRINGLIST/lstringlist/g"   GALGAS_OUTPUT/temp  > GALGAS_OUTPUT/temp2 &&
sed "s/LCHARLIST/lcharlist/g"       GALGAS_OUTPUT/temp2 > GALGAS_OUTPUT/temp &&
sed "s/CHARLIST/charlist/g"         GALGAS_OUTPUT/temp  > GALGAS_OUTPUT/temp2 &&
sed "s/STRING3LIST/string3list/g"   GALGAS_OUTPUT/temp2 > GALGAS_OUTPUT/temp &&
sed "s/STRING2LIST/string2list/g"   GALGAS_OUTPUT/temp  > GALGAS_OUTPUT/temp2 &&
sed "s/TYPELIST/typelist/g"         GALGAS_OUTPUT/temp2 > GALGAS_OUTPUT/temp &&
sed "s/FUNCTIONLIST/functionlist/g" GALGAS_OUTPUT/temp  > GALGAS_OUTPUT/temp2 &&
sed "s/OBJECTLIST/objectlist/g"     GALGAS_OUTPUT/temp2 > GALGAS_OUTPUT/temp &&
sed "s/STRINGLIST/stringlist/g"     GALGAS_OUTPUT/temp  > GALGAS_OUTPUT/temp2 &&
sed "s/2STRINGLIST/2stringlist/g"   GALGAS_OUTPUT/temp2 > predefined_types.h &&
#--- Use sed for renaming implementation file
sed "s/UINT64LIST/uint64list/g"     GALGAS_OUTPUT/predefined_types.cpp > GALGAS_OUTPUT/temp &&
sed "s/LUINTLIST/luintlist/g"       GALGAS_OUTPUT/temp  > GALGAS_OUTPUT/temp2 &&
sed "s/UINTLIST/uintlist/g"         GALGAS_OUTPUT/temp2 > GALGAS_OUTPUT/temp &&
sed "s/LSTRINGLIST/lstringlist/g"   GALGAS_OUTPUT/temp  > GALGAS_OUTPUT/temp2 &&
sed "s/LCHARLIST/lcharlist/g"       GALGAS_OUTPUT/temp2 > GALGAS_OUTPUT/temp &&
sed "s/CHARLIST/charlist/g"         GALGAS_OUTPUT/temp  > GALGAS_OUTPUT/temp2 &&
sed "s/STRING3LIST/string3list/g"   GALGAS_OUTPUT/temp2 > GALGAS_OUTPUT/temp &&
sed "s/2STRINGLIST/2stringlist/g"   GALGAS_OUTPUT/temp  > GALGAS_OUTPUT/temp2 &&
sed "s/TYPELIST/typelist/g"         GALGAS_OUTPUT/temp2 > GALGAS_OUTPUT/temp &&
sed "s/FUNCTIONLIST/functionlist/g" GALGAS_OUTPUT/temp  > GALGAS_OUTPUT/temp2 &&
sed "s/OBJECTLIST/objectlist/g"     GALGAS_OUTPUT/temp2 > GALGAS_OUTPUT/temp &&
sed "s/STRINGLIST/stringlist/g"     GALGAS_OUTPUT/temp  > GALGAS_OUTPUT/temp2 &&
sed "s/STRING2LIST/string2list/g"   GALGAS_OUTPUT/temp2 > predefined_types.cpp &&
#--- Remove temp files
rm GALGAS_OUTPUT/temp &&
rm GALGAS_OUTPUT/temp2 &&
#--- Copy files (only if needed)
COPY_LIST="predefined_types.cpp predefined_types.h" &&
for f in $COPY_LIST ; do
  if [ ! -e ../../libpm/galgas/${f} ]; then
    echo COPY ${f}
    cp ${f} ../../libpm/galgas/${f}
  else
    if [ "`cat ../../libpm/galgas/${f}`" != "`cat ${f}`" ]; then
      echo COPY ${f}
      cp ${f} ../../libpm/galgas/${f}
    fi
  fi
done
