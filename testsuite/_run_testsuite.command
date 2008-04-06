#!/bin/sh
cd `dirname $0`/makefile_macosx &&
make --warn-undefined-variables all &&
cd `dirname $0` && makefile_macosx/testsuite > results.txt &&
cmp results.txt results_reference.txt &&
echo "---------- SUCCESS --------------" ||
echo "---------- FAILURE --------------"
