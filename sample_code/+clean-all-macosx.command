#!/bin/sh
set -x
DIR=`dirname $0` &&
#----------------- Assignment
${DIR}/assignment_language/makefile-macosx/clean.py &&
rm -fr ${DIR}/assignment_language/build &&
cd ${DIR}/assignment_language/xcode-project && rm -fr build
#----------------- Pascal
${DIR}/pascal/makefile-macosx/clean.py &&
rm -fr ${DIR}/pascal/build &&
cd ${DIR}/pascal/xcode-project && rm -fr build
#----------------- class_sample_language
${DIR}/class_sample_language/makefile-macosx/clean.py &&
rm -fr ${DIR}/class_sample_language/build &&
cd ${DIR}/class_sample_language/xcode-project && rm -fr build
rm -f ${DIR}/class_sample_language/samples/*.o &&
rm -f ${DIR}/class_sample_language/samples/*.cpp &&
#----------------- dangling_else_solution
${DIR}/dangling_else_solution/makefile-macosx/clean.py &&
rm -fr ${DIR}/dangling_else_solution/build &&
cd ${DIR}/dangling_else_solution/xcode-project && rm -fr build
#----------------- SLR_expression
${DIR}/SLR_expression/makefile-macosx/clean.py &&
rm -fr ${DIR}/SLR_expression/build &&
cd ${DIR}/SLR_expression/xcode-project && rm -fr build
#----------------- LL1_expression
${DIR}/LL1_expression/makefile-macosx/clean.py &&
rm -fr ${DIR}/LL1_expression/build &&
cd ${DIR}/LL1_expression/xcode-project && rm -fr build
#----------------- LR1_grammar
${DIR}/LR1_grammar/makefile-macosx/clean.py &&
rm -fr ${DIR}/LR1_grammar/build &&
cd ${DIR}/LR1_grammar/xcode-project && rm -fr build
#----------------- XML Parsing
${DIR}/xml_parsing/makefile-macosx/clean.py &&
rm -fr ${DIR}/xml_parsing/build &&
cd ${DIR}/xml_parsing/xcode-project && rm -fr build
echo "------------ SUCCESS ----------------------------"
