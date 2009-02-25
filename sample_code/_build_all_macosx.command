#!/bin/sh
set -x
DIR=`dirname $0` &&
LIBPM_PATH_ENV_VAR="$DIR/../../libpm" && export LIBPM_PATH_ENV_VAR &&
#----------------- class_sample_language
galgas -v --Werror ${DIR}/class_sample_language/galgas_sources/all_class_sample_language.ggs &&
cd ${DIR}/class_sample_language/makefile_macosx && make --warn-undefined-variables all &&
#----------------- dangling_else_solution
galgas -v --Werror ${DIR}/dangling_else_solution/galgas_sources/all_dangling_else_solution.ggs &&
cd ${DIR}/dangling_else_solution/makefile_macosx && make --warn-undefined-variables all &&
#----------------- SLR_expression
galgas -v --Werror ${DIR}/SLR_expression/galgas_sources/all_SLR_expression.ggs &&
cd ${DIR}/SLR_expression/makefile_macosx && make --warn-undefined-variables all &&
#----------------- LL1_expression
galgas -v --Werror ${DIR}/LL1_expression/galgas_sources/all_LL1_expression.ggs &&
cd ${DIR}/LL1_expression/makefile_macosx && make --warn-undefined-variables all &&
#----------------- LR1_grammar
galgas -v --Werror ${DIR}/LR1_grammar/galgas_sources/all_LR1_grammar.ggs &&
cd ${DIR}/LR1_grammar/makefile_macosx && make --warn-undefined-variables all &&
echo "------------ SUCCESS ----------------------------"
