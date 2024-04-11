#!/bin/sh
set -x
DIR=`dirname $0` &&
cd $DIR/../makefile-unix && /usr/bin/python3 build.py release &&
PATH=$DIR/../makefile-unix:$PATH &&
cd $DIR &&
#--- Obtenir la description des grammaires en tex
# ../makefile-unix/galgas --emit-syntax-diagrams ../+galgas.galgasProject &&
# cp ../build/tex/galgas3Grammar.tex $DIR/chapitre-grammaires/galgas3Grammar.tex &&
# cp ../build/tex/galgas3ProjectGrammar.tex $DIR/chapitre-grammaires/galgas3ProjectGrammar.tex &&
# cp ../build/tex/templateGrammar.tex $DIR/chapitre-grammaires/templateGrammar.tex &&
#--- Reconstruire la table des mots réservés et celle des délimiteurs (galgas 3)
../makefile-unix/galgas --output-keyword-list-file=galgasScanner3:galgasKeyWordList:5:\\ggst!:!:partie-utilisation/included-keyword-list-3.tex &&
../makefile-unix/galgas --output-keyword-list-file=galgasScanner3:galgasDelimitorsList:10:\\ggst0:0:partie-utilisation/included-delimiter-list-3.tex &&
../makefile-unix/galgas --output-keyword-list-file=galgasScanner3:attributeKeyWordList:3:\\ggst!%:!:partie-utilisation/included-attribute-list-3.tex &&
#--- Reconstruire la table des mots réservés et celle des délimiteurs (galgas 4)
../makefile-unix/galgas --output-keyword-list-file=galgasScanner4:galgasKeyWordList:5:\\ggsq!:!:partie-utilisation/included-keyword-list-4.tex &&
../makefile-unix/galgas --output-keyword-list-file=galgasScanner4:galgasDelimitorsList:10:\\ggsq0:0:partie-utilisation/included-delimiter-list-4.tex &&
../makefile-unix/galgas --output-keyword-list-file=galgasScanner4:attributeKeyWordList:2:\\ggsq!%:!:partie-utilisation/included-attribute-list-4.tex
