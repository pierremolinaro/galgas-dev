#!/bin/sh

LIBPM_PATH_ENV_VAR="`dirname $0`/../../libpm" && export LIBPM_PATH_ENV_VAR &&
GALGAS_TOOL=`dirname $0`/../makefile_macosx/galgas &&
cd `dirname $0` && $GALGAS_TOOL galgas_sources/all_testsuite.gProject -v --Werror &&
cd `dirname $0`/makefile_macosx && make --warn-undefined-variables all -j 2 &&
echo "*** Running test suite" &&
cd `dirname $0` && makefile_macosx/testsuite > results.txt &&
if [ "`cat results.txt`" != "`cat results_reference.txt`" ]; then
  opendiff results.txt results_reference.txt
  echo "*************************"
  echo "*        FAILURE        *"
  echo "*************************"
else
  echo "*** Running test suite (debug mode)" &&
  cd `dirname $0` && makefile_macosx/testsuite_debug &&
  echo "*************************"
  echo "*        SUCCESS        *"
  echo "*************************"
fi
