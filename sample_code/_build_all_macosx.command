#!/bin/sh
set -x
DIR=`dirname $0` &&
LIBPM_PATH_ENV_VAR="$DIR/../../libpm" && export LIBPM_PATH_ENV_VAR &&
#----------------- class_sample_language
galgas --new-code-generation -v --Werror ${DIR}/class_sample_language/galgas_sources/all_class_sample_language.gProject &&
cd ${DIR}/class_sample_language/makefile_macosx && make -j 2 --warn-undefined-variables all &&
time ${DIR}/class_sample_language/makefile_macosx/class_sample_language ${DIR}/class_sample_language/samples/100000-classes.class_sample_language &&
#----------------- dangling_else_solution
galgas --new-code-generation -v --Werror ${DIR}/dangling_else_solution/galgas_sources/all_dangling_else_solution.gProject &&
cd ${DIR}/dangling_else_solution/makefile_macosx && make -j 2 --warn-undefined-variables all &&
#----------------- SLR_expression
galgas --new-code-generation -v --Werror ${DIR}/SLR_expression/galgas_sources/all_SLR_expression.gProject &&
cd ${DIR}/SLR_expression/makefile_macosx && make -j 2 --warn-undefined-variables all &&
#----------------- LL1_expression
galgas --new-code-generation -v --Werror ${DIR}/LL1_expression/galgas_sources/all_LL1_expression.gProject &&
cd ${DIR}/LL1_expression/makefile_macosx && make -j 2 --warn-undefined-variables all &&
#----------------- LR1_grammar
galgas --new-code-generation -v --Werror ${DIR}/LR1_grammar/galgas_sources/all_LR1_grammar.gProject &&
cd ${DIR}/LR1_grammar/makefile_macosx && make -j 2 --warn-undefined-variables all &&
#----------------- XML Parsing
galgas --new-code-generation -v --Werror ${DIR}/xml_parsing/galgas_sources/all_xml_parsing.gProject &&
cd ${DIR}/xml_parsing/makefile_macosx && make -j 2 --warn-undefined-variables all &&
${DIR}/xml_parsing/makefile_macosx/xml_parsing --help &&
${DIR}/xml_parsing/makefile_macosx/xml_parsing ${DIR}/xml_parsing/example.xml_file &&
${DIR}/xml_parsing/makefile_macosx/xml_parsing ${DIR}/xml_parsing/utf8test.xml_file &&
echo "------------ SUCCESS ----------------------------"
