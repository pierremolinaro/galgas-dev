#!/bin/sh
set -x
DIR=`dirname $0` &&
#----------------- Pascal
${DIR}/pascal/makefile_macosx/clean.command &&
rm -fr ${DIR}/pascal/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/pascal/project_xcode && rm -fr build
#----------------- class_sample_language
${DIR}/class_sample_language/makefile_macosx/clean.command &&
rm -fr ${DIR}/class_sample_language/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/class_sample_language/project_xcode && rm -fr build
rm -f ${DIR}/class_sample_language/samples/*.o &&
rm -f ${DIR}/class_sample_language/samples/*.cpp &&
#----------------- dangling_else_solution
${DIR}/dangling_else_solution/makefile_macosx/clean.command &&
rm -fr ${DIR}/dangling_else_solution/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/dangling_else_solution/project_xcode && rm -fr build
#----------------- SLR_expression
${DIR}/SLR_expression/makefile_macosx/clean.command &&
rm -fr ${DIR}/SLR_expression/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/SLR_expression/project_xcode && rm -fr build
#----------------- LL1_expression
${DIR}/LL1_expression/makefile_macosx/clean.command &&
rm -fr ${DIR}/LL1_expression/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/LL1_expression/project_xcode && rm -fr build
#----------------- LR1_grammar
${DIR}/LR1_grammar/makefile_macosx/clean.command &&
rm -fr ${DIR}/LR1_grammar/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/LR1_grammar/project_xcode && rm -fr build
#----------------- XML Parsing
${DIR}/xml_parsing/makefile_macosx/clean.command &&
rm -fr ${DIR}/xml_parsing/galgas_sources/GALGAS_OUTPUT &&
cd ${DIR}/xml_parsing/project_xcode && rm -fr build
echo "------------ SUCCESS ----------------------------"
