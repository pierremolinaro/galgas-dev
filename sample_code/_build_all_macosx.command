#!/bin/sh
set -x
DIR=`dirname $0` &&
#----------------- class_sample_language
galgas -v ${DIR}/class_sample_language/galgas_sources/_all_class_sample_language.ggs &&
cd ${DIR}/class_sample_language/makefile_macosx && make --warn-undefined-variables all &&
#----------------- dangling_else_solution
galgas -v ${DIR}/dangling_else_solution/galgas_sources/_all_dangling_else_solution.ggs &&
cd ${DIR}/dangling_else_solution/makefile_macosx && make --warn-undefined-variables all &&
#----------------- SLR_expression
galgas -v ${DIR}/SLR_expression/galgas_sources/_all_SLR_expression.ggs &&
cd ${DIR}/SLR_expression/makefile_macosx && make --warn-undefined-variables all &&
#----------------- LL1_expression
galgas -v ${DIR}/LL1_expression/galgas_sources/_all_LL1_expression.ggs &&
cd ${DIR}/LL1_expression/makefile_macosx && make --warn-undefined-variables all &&
#----------------- LR1_grammar
galgas -v ${DIR}/LR1_grammar/galgas_sources/_all_LR1_grammar.ggs &&
cd ${DIR}/LR1_grammar/makefile_macosx && make --warn-undefined-variables all &&
echo "------------ SUCCESS ----------------------------"
