#!/bin/sh
set -x
DIR=`dirname $0` &&
#----------------- Assignment language
galgas -v --Werror ${DIR}/assignment_language/galgas_sources/+asl.galgasProject &&
${DIR}/assignment_language/makefile-macosx/build.py &&
${DIR}/assignment_language/makefile-macosx/asl -v ${DIR}/assignment_language/example.assignment_language &&
gcc ${DIR}/assignment_language/example.c -o ${DIR}/assignment_language/example &&
${DIR}/assignment_language/example &&
#----------------- LBB
galgas -v --Werror ${DIR}/lbb/galgas_sources/all_lbb.galgasProject &&
${DIR}/lbb/makefile-macosx/build.py &&
#----------------- class_sample_language
galgas -v --Werror ${DIR}/class_sample_language/galgas_sources/all_class_sample_language.galgasProject &&
${DIR}/class_sample_language/makefile-macosx/build.py &&
time ${DIR}/class_sample_language/makefile-macosx/class_sample_language ${DIR}/class_sample_language/samples/100000-classes.class_sample_language &&
cd /Volumes/dev-svn/galgas/sample_code/class_sample_language/samples &&
time gcc -c 100000-classes.cpp -o 100000-classes.o &&
#----------------- dangling_else_solution
galgas -v --Werror ${DIR}/dangling_else_solution/galgas_sources/all_dangling_else_solution.galgasProject &&
${DIR}/dangling_else_solution/makefile-macosx/build.py &&
#----------------- SLR_expression
galgas -v --Werror ${DIR}/SLR_expression/galgas_sources/all_SLR_expression.galgasProject &&
${DIR}/SLR_expression/makefile-macosx/build.py &&
#----------------- LL1_expression
galgas -v --Werror ${DIR}/LL1_expression/galgas_sources/all_LL1_expression.galgasProject &&
${DIR}/LL1_expression/makefile-macosx/build.py &&
#----------------- LR1_grammar
galgas -v --Werror ${DIR}/LR1_grammar/galgas_sources/all_LR1_grammar.galgasProject &&
${DIR}/LR1_grammar/makefile-macosx/build.py &&
#----------------- XML Parsing
galgas -v --Werror ${DIR}/xml_parsing/galgas_sources/all_xml_parsing.galgasProject &&
${DIR}/xml_parsing/makefile-macosx/build.py &&
${DIR}/xml_parsing/makefile-macosx/xml_parsing --help &&
${DIR}/xml_parsing/makefile-macosx/xml_parsing ${DIR}/xml_parsing/example.xml_file &&
${DIR}/xml_parsing/makefile-macosx/xml_parsing ${DIR}/xml_parsing/utf8test.xml_file &&
echo "------------ SUCCESS ----------------------------"
