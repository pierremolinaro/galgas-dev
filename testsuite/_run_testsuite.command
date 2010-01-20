#!/bin/sh

LIBPM_PATH_ENV_VAR="`dirname $0`/../../libpm" && export LIBPM_PATH_ENV_VAR &&
cd `dirname $0` && galgas ./galgas_sources/all_testsuite.ggs -v --Werror &&
cd `dirname $0`/makefile_macosx && make --warn-undefined-variables all -j 2 &&
cd `dirname $0` && makefile_macosx/testsuite > results.txt &&
if [ "`cat results.txt`" != "`cat results_reference.txt`" ]; then
  opendiff results.txt results_reference.txt
else
  echo "---------- SUCCESS --------------"
fi
