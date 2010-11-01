#!/bin/sh
set -x
DIR=`dirname $0` &&
#----------------- class_sample_language
${DIR}/class_sample_language/makefile-macosx/clean.command &&
rm -fr ${DIR}/class_sample_language/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/class_sample_language/xcode-project && rm -fr build
#----------------- dangling_else_solution
${DIR}/dangling_else_solution/makefile-macosx/clean.command &&
rm -fr ${DIR}/dangling_else_solution/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/dangling_else_solution/xcode-project && rm -fr build
#----------------- SLR_expression
${DIR}/SLR_expression/makefile-macosx/clean.command &&
rm -fr ${DIR}/SLR_expression/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/SLR_expression/xcode-project && rm -fr build
#----------------- LL1_expression
${DIR}/LL1_expression/makefile-macosx/clean.command &&
rm -fr ${DIR}/LL1_expression/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/LL1_expression/xcode-project && rm -fr build
#----------------- LR1_grammar
${DIR}/LR1_grammar/makefile-macosx/clean.command &&
rm -fr ${DIR}/LR1_grammar/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/LR1_grammar/xcode-project && rm -fr build
#----------------- XML Parsing
${DIR}/xml_parsing/makefile-macosx/clean.command &&
rm -fr ${DIR}/xml_parsing/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/xml_parsing/xcode-project && rm -fr build
echo "------------ SUCCESS ----------------------------"
