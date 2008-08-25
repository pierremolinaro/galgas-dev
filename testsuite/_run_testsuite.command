#!/bin/sh
cd `dirname $0`/makefile_macosx &&
LIBPM_PATH_ENV_VAR="`dirname $0`/../../libpm" && export LIBPM_PATH_ENV_VAR &&
galgas `dirname $0`/galgas_sources/_all_testsuite.ggs &&
make --warn-undefined-variables all &&
cd `dirname $0` && makefile_macosx/testsuite > results.txt &&
cmp results.txt results_reference.txt &&
opendiff results.txt results_reference.txt &&
echo "---------- SUCCESS --------------" ||
echo "---------- FAILURE --------------"
