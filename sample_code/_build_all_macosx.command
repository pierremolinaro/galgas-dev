#!/bin/sh
set -x
DIR=`dirname $0` &&
#----------------- Assignment language
galgas -v --Werror ${DIR}/assignment_language/galgas_sources/all_assignment_language.gProject &&
${DIR}/assignment_language/makefile_macosx/build.command &&
${DIR}/assignment_language/makefile_macosx/asl -v ${DIR}/assignment_language/example.assignment_language &&
gcc ${DIR}/assignment_language/example.c -o ${DIR}/assignment_language/example &&
${DIR}/assignment_language/example &&
#----------------- LBB
galgas -v --Werror ${DIR}/lbb/galgas_sources/all_lbb.gProject &&
${DIR}/lbb/makefile_macosx/build.command &&
#----------------- class_sample_language
galgas -v --Werror ${DIR}/class_sample_language/galgas_sources/all_class_sample_language.gProject &&
${DIR}/class_sample_language/makefile_macosx/build.command &&
time ${DIR}/class_sample_language/makefile_macosx/class_sample_language ${DIR}/class_sample_language/samples/100000-classes.class_sample_language &&
cd /Volumes/dev-svn/galgas/sample_code/class_sample_language/samples &&
time gcc -c 100000-classes.cpp -o 100000-classes.o &&
#----------------- dangling_else_solution
galgas -v --Werror ${DIR}/dangling_else_solution/galgas_sources/all_dangling_else_solution.gProject &&
${DIR}/dangling_else_solution/makefile_macosx/build.command &&
#----------------- SLR_expression
galgas -v --Werror ${DIR}/SLR_expression/galgas_sources/all_SLR_expression.gProject &&
${DIR}/SLR_expression/makefile_macosx/build.command &&
#----------------- LL1_expression
galgas -v --Werror ${DIR}/LL1_expression/galgas_sources/all_LL1_expression.gProject &&
${DIR}/LL1_expression/makefile_macosx/build.command &&
#----------------- LR1_grammar
galgas -v --Werror ${DIR}/LR1_grammar/galgas_sources/all_LR1_grammar.gProject &&
${DIR}/LR1_grammar/makefile_macosx/build.command &&
#----------------- XML Parsing
galgas -v --Werror ${DIR}/xml_parsing/galgas_sources/all_xml_parsing.gProject &&
${DIR}/xml_parsing/makefile_macosx/build.command &&
${DIR}/xml_parsing/makefile_macosx/xml_parsing --help &&
${DIR}/xml_parsing/makefile_macosx/xml_parsing ${DIR}/xml_parsing/example.xml_file &&
${DIR}/xml_parsing/makefile_macosx/xml_parsing ${DIR}/xml_parsing/utf8test.xml_file &&
echo "------------ SUCCESS ----------------------------"
