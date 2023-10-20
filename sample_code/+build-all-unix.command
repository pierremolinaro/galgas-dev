#!/bin/sh
set -x
DIR=`dirname $0` &&
#----------------- Build GALGAS command tool
cd $DIR/../makefile-unix && /usr/bin/python3 build+release.py &&
#----------------- Assignment language
# $DIR/../makefile-unix/galgas --generate-many-cpp-files --Werror ${DIR}/assignment_language/+asl.galgasProject &&
# /usr/bin/python3 ${DIR}/assignment_language/makefile-unix/build.py &&
# ${DIR}/assignment_language/makefile-unix/asl ${DIR}/assignment_language/example.assignment_language &&
# gcc ${DIR}/assignment_language/example.c -o ${DIR}/assignment_language/example &&
# ${DIR}/assignment_language/example &&
#----------------- LOGO
$DIR/../makefile-unix/galgas --generate-many-cpp-files --Werror ${DIR}/logo/+logo.galgasProject &&
/usr/bin/python3 ${DIR}/logo/makefile-unix/build.py &&
${DIR}/logo/makefile-unix/logo  ${DIR}/logo/exemples-logo/carre.logo &&
${DIR}/logo/makefile-unix/logo  ${DIR}/logo/exemples-logo/etoile.logo &&
${DIR}/logo/makefile-unix/logo  ${DIR}/logo/exemples-logo/hexagone.logo &&
${DIR}/logo/makefile-unix/logo  ${DIR}/logo/exemples-logo/octogone.logo &&
${DIR}/logo/makefile-unix/logo  ${DIR}/logo/exemples-logo/pentagone.logo &&
#----------------- LBB
# $DIR/../makefile-unix/galgas --generate-many-cpp-files --Werror ${DIR}/lbb/+lbb.galgasProject &&
# /usr/bin/python3 ${DIR}/lbb/makefile-unix/build.py &&
#----------------- class_sample_language
$DIR/../makefile-unix/galgas --generate-many-cpp-files --Werror ${DIR}/class_sample_language/+class_sample_language.galgasProject &&
/usr/bin/python3 ${DIR}/class_sample_language/makefile-unix/build.py &&
time ${DIR}/class_sample_language/makefile-unix/classSampleLanguage ${DIR}/class_sample_language/samples/100000-classes.class_sample_language &&
cd ${DIR}/class_sample_language/samples &&
time gcc -c 100000-classes.cpp -o 100000-classes.o &&
#----------------- dangling_else_solution
$DIR/../makefile-unix/galgas --generate-many-cpp-files --Werror ${DIR}/dangling_else_solution/+dangling_else_solution.galgasProject &&
/usr/bin/python3 ${DIR}/dangling_else_solution/makefile-unix/build.py &&
#----------------- SLR_expression
$DIR/../makefile-unix/galgas --generate-many-cpp-files --Werror ${DIR}/SLR_expression/+SLR_expression.galgasProject &&
/usr/bin/python3 ${DIR}/SLR_expression/makefile-unix/build.py &&
#----------------- LL1_expression
$DIR/../makefile-unix/galgas --generate-many-cpp-files --Werror ${DIR}/LL1_expression/+LL1_expression.galgasProject &&
/usr/bin/python3 ${DIR}/LL1_expression/makefile-unix/build.py &&
#----------------- LR1_grammar
$DIR/../makefile-unix/galgas --generate-many-cpp-files --Werror ${DIR}/LR1_grammar/+LR1_grammar.galgasProject &&
/usr/bin/python3 ${DIR}/LR1_grammar/makefile-unix/build.py &&
#----------------- XML Parsing
$DIR/../makefile-unix/galgas --generate-many-cpp-files --Werror ${DIR}/xml_parsing/+xml_parsing.galgasProject &&
/usr/bin/python3 ${DIR}/xml_parsing/makefile-unix/build.py &&
${DIR}/xml_parsing/makefile-unix/xml_parsing --help &&
${DIR}/xml_parsing/makefile-unix/xml_parsing ${DIR}/xml_parsing/example.xml_file &&
${DIR}/xml_parsing/makefile-unix/xml_parsing ${DIR}/xml_parsing/utf8test.xml_file &&
echo "------------ SUCCESS ----------------------------"
