#!/bin/sh

LIBPM_PATH_ENV_VAR="`dirname $0`/../../libpm" && export LIBPM_PATH_ENV_VAR &&
GALGAS_TOOL=`dirname $0`/../project_xcode/build/Default/cocoaGalgasI386.app/Contents/Resources/galgasI386 &&
cd `dirname $0` && $GALGAS_TOOL galgas_sources/all_testsuite.ggs -v --Werror &&
cd `dirname $0`/makefile_macosx && make --warn-undefined-variables all -j 2 &&
echo "*** Running test suite" &&
cd `dirname $0` && makefile_macosx/testsuite > results.txt &&
if [ "`cat results.txt`" != "`cat results_reference.txt`" ]; then
  opendiff results.txt results_reference.txt
else
  echo "*** Running test suite (debug mode)" &&
  cd `dirname $0` && makefile_macosx/testsuite_debug &&
  echo "*** SUCCESS "
fi
