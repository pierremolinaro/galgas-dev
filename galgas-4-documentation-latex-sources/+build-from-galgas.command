#!/bin/sh
set -x
DIR=`dirname $0` &&
cd $DIR/../makefile-unix && /usr/bin/python3 build.py release &&
PATH=$DIR/../makefile-unix:$PATH &&
cd $DIR &&
#--- Obtenir la description des grammaires en tex
../makefile-unix/galgas --emit-syntax-diagrams ../+galgas.galgasProject &&
cp ../build/tex/galgas3Grammar.tex $DIR/chapitre-grammaires/galgas3Grammar.tex &&
cp ../build/tex/galgas3ProjectGrammar.tex $DIR/chapitre-grammaires/galgas3ProjectGrammar.tex &&
cp ../build/tex/templateGrammar.tex $DIR/chapitre-grammaires/templateGrammar.tex &&
#--- Reconstruire la table des mots réservés et celle des délimiteurs
../makefile-unix/galgas --output-keyword-list-file=galgasScanner4:galgasKeyWordList:5:\\ggs!:!:partie-utilisation/included-keyword-list.tex &&
../makefile-unix/galgas --output-keyword-list-file=galgasScanner4:galgasDelimitorsList:15:\\ggs0:0:partie-utilisation/included-delimiter-list.tex &&
../makefile-unix/galgas --output-keyword-list-file=galgasScanner4:attributeKeyWordList:2:\\ggs!%:!:partie-utilisation/included-attribute-list.tex