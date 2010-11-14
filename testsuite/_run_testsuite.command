#!/bin/sh

GALGAS_TOOL=`dirname $0`/../makefile-macosx/galgas_debug &&
cd `dirname $0`/../makefile-macosx && make galgas_debug -j `sysctl -n hw.ncpu` &&
cd `dirname $0` && $GALGAS_TOOL galgas_sources/all_testsuite.gProject -v --Werror &&
cd `dirname $0`/makefile-macosx && make --warn-undefined-variables all -j `sysctl -n hw.ncpu` &&
echo "*** Running test suite" &&
cd `dirname $0` && makefile-macosx/testsuite > results.txt &&
if [ "`cat results.txt`" != "`cat results_reference.txt`" ]; then
  opendiff results.txt results_reference.txt
  echo "*************************"
  echo "*        FAILURE        *"
  echo "*************************"
else
  echo "*** Running test suite (debug mode)" &&
  cd `dirname $0` && makefile-macosx/testsuite_debug &&
  echo "*************************"
  echo "*        SUCCESS        *"
  echo "*************************"
fi
