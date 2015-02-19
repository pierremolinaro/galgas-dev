#!/bin/sh
set -x
DIR=`dirname $0` &&
#----------------- Build GALGAS command tool
cd $DIR/../makefile-macosx && python build+release.py &&
#----------------- Assignment language
$DIR/../makefile-macosx/galgas -v --Werror ${DIR}/assignment_language/+asl.galgasProject &&
python ${DIR}/assignment_language/makefile-macosx/build.py &&
${DIR}/assignment_language/makefile-macosx/asl -v ${DIR}/assignment_language/example.assignment_language &&
gcc ${DIR}/assignment_language/example.c -o ${DIR}/assignment_language/example &&
${DIR}/assignment_language/example &&
#----------------- LOGO
$DIR/../makefile-macosx/galgas -v --Werror ${DIR}/logo/+logo.galgasProject &&
python ${DIR}/logo/makefile-macosx/build.py &&
${DIR}/logo/makefile-macosx/logo -v  ${DIR}/logo/exemples-logo/carre.logo &&
${DIR}/logo/makefile-macosx/logo -v  ${DIR}/logo/exemples-logo/etoile.logo &&
${DIR}/logo/makefile-macosx/logo -v  ${DIR}/logo/exemples-logo/hexagone.logo &&
${DIR}/logo/makefile-macosx/logo -v  ${DIR}/logo/exemples-logo/octogone.logo &&
${DIR}/logo/makefile-macosx/logo -v  ${DIR}/logo/exemples-logo/pentagone.logo &&
#----------------- LBB
$DIR/../makefile-macosx/galgas -v --Werror ${DIR}/lbb/+lbb.galgasProject &&
python ${DIR}/lbb/makefile-macosx/build.py &&
#----------------- class_sample_language
$DIR/../makefile-macosx/galgas -v --Werror ${DIR}/class_sample_language/+class_sample_language.galgasProject &&
python ${DIR}/class_sample_language/makefile-macosx/build.py &&
time ${DIR}/class_sample_language/makefile-macosx/class_sample_language ${DIR}/class_sample_language/samples/100000-classes.class_sample_language &&
cd ${DIR}/class_sample_language/samples &&
time gcc -c 100000-classes.cpp -o 100000-classes.o &&
#----------------- dangling_else_solution
$DIR/../makefile-macosx/galgas -v --Werror ${DIR}/dangling_else_solution/+dangling_else_solution.galgasProject &&
python ${DIR}/dangling_else_solution/makefile-macosx/build.py &&
#----------------- SLR_expression
$DIR/../makefile-macosx/galgas -v --Werror ${DIR}/SLR_expression/+SLR_expression.galgasProject &&
python ${DIR}/SLR_expression/makefile-macosx/build.py &&
#----------------- LL1_expression
$DIR/../makefile-macosx/galgas -v --Werror ${DIR}/LL1_expression/+LL1_expression.galgasProject &&
python ${DIR}/LL1_expression/makefile-macosx/build.py &&
#----------------- LR1_grammar
$DIR/../makefile-macosx/galgas -v --Werror ${DIR}/LR1_grammar/+LR1_grammar.galgasProject &&
python ${DIR}/LR1_grammar/makefile-macosx/build.py &&
#----------------- XML Parsing
$DIR/../makefile-macosx/galgas -v --Werror ${DIR}/xml_parsing/+xml_parsing.galgasProject &&
python ${DIR}/xml_parsing/makefile-macosx/build.py &&
${DIR}/xml_parsing/makefile-macosx/xml_parsing --help &&
${DIR}/xml_parsing/makefile-macosx/xml_parsing ${DIR}/xml_parsing/example.xml_file &&
${DIR}/xml_parsing/makefile-macosx/xml_parsing ${DIR}/xml_parsing/utf8test.xml_file &&
echo "------------ SUCCESS ----------------------------"
