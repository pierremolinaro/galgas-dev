#!/bin/sh
set -x
DIR=`dirname $0` &&
#----------------- class_sample_language
rm -fr ${DIR}/class_sample_language/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/class_sample_language/makefile_macosx && make clean --warn-undefined-variables &&
#----------------- dangling_else_solution
rm -fr ${DIR}/dangling_else_solution/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/dangling_else_solution/makefile_macosx && make clean --warn-undefined-variables &&
#----------------- SLR_expression
rm -fr ${DIR}/SLR_expression/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/SLR_expression/makefile_macosx && make clean --warn-undefined-variables &&
#----------------- LL1_expression
rm -fr ${DIR}/LL1_expression/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/LL1_expression/makefile_macosx && make clean --warn-undefined-variables &&
#----------------- LR1_grammar
rm -fr ${DIR}/LR1_grammar/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/LR1_grammar/makefile_macosx && make clean --warn-undefined-variables &&
echo "------------ SUCCESS ----------------------------"
