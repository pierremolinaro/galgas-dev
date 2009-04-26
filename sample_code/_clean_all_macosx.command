#!/bin/sh
set -x
DIR=`dirname $0` &&
LIBPM_PATH_ENV_VAR="$DIR/../../libpm" && export LIBPM_PATH_ENV_VAR &&
#----------------- class_sample_language
cd ${DIR}/class_sample_language/makefile_macosx && make clean --warn-undefined-variables &&
rm -fr ${DIR}/class_sample_language/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/class_sample_language/project_xcode && rm -fr build
#----------------- dangling_else_solution
cd ${DIR}/dangling_else_solution/makefile_macosx && make clean --warn-undefined-variables &&
rm -fr ${DIR}/dangling_else_solution/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/dangling_else_solution/project_xcode && rm -fr build
#----------------- SLR_expression
cd ${DIR}/SLR_expression/makefile_macosx && make clean --warn-undefined-variables &&
rm -fr ${DIR}/SLR_expression/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/SLR_expression/project_xcode && rm -fr build
#----------------- LL1_expression
cd ${DIR}/LL1_expression/makefile_macosx && make clean --warn-undefined-variables &&
rm -fr ${DIR}/LL1_expression/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/LL1_expression/project_xcode && rm -fr build
#----------------- LR1_grammar
cd ${DIR}/LR1_grammar/makefile_macosx && make clean --warn-undefined-variables &&
rm -fr ${DIR}/LR1_grammar/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/LR1_grammar/project_xcode && rm -fr build
#----------------- XML Parsing
cd ${DIR}/xml_parsing/makefile_macosx && make clean --warn-undefined-variables &&
rm -fr ${DIR}/xml_parsing/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/xml_parsing/project_xcode && rm -fr build
echo "------------ SUCCESS ----------------------------"
