#!/bin/sh
#set -x
GALGAS_TOOL=`dirname $0`/../makefile-unix/galgas-debug &&
cd `dirname $0`/../makefile-unix && /usr/bin/python3 build.py debug &&
cd `dirname $0` && $GALGAS_TOOL --generate-many-cpp-files --Werror +testsuite.galgasProject &&
cd `dirname $0`/makefile-unix && /usr/bin/python3 build.py &&
echo "*** Running test suite" &&
cd `dirname $0` && ./makefile-unix/testsuite > results.txt &&
if [ "`cat results.txt`" != "`cat results_reference.txt`" ]; then
  /Applications/Xcode.app/Contents/Developer/usr/bin/opendiff results.txt results_reference.txt
  echo "*************************"
  echo "*        FAILURE        *"
  echo "*************************"
else
  echo "*** Running test suite (debug mode)" &&
  cd `dirname $0` && ./makefile-unix/testsuite-debug -q &&
  echo "*************************"
  echo "*        SUCCESS        *"
  echo "*************************"
fi || ( echo "*************************" ; echo "*     RUN-TIME-ERROR    *" ; echo "*************************" ; exit 1 )
