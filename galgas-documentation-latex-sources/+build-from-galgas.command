#!/bin/sh
set -x
DIR=`dirname $0` &&
cd $DIR/../makefile-macosx && python build.py release &&
PATH=$DIR/../makefile-macosx:$PATH &&
cd $DIR &&
#--- Obtenir la description des grammaires en tex
../makefile-macosx/galgas --emit-syntax-diagrams ../+galgas.galgasProject &&
cp ../build/tex/galgas3Grammar.tex ../galgas-documentation-latex-sources/chapitre-grammaires/galgas3Grammar.tex &&
cp ../build/tex/galgas3ProjectGrammar.tex ../galgas-documentation-latex-sources/chapitre-grammaires/galgas3ProjectGrammar.tex &&
cp ../build/tex/templateGrammar.tex ../galgas-documentation-latex-sources/chapitre-grammaires/templateGrammar.tex &&
#--- Reconstruire la table des mots réservés et celle des délimiteurs
../makefile-macosx/galgas --output-keyword-list-file=galgasScanner:galgasKeyWordList:5:\\ggs!:!:partie-utilisation/included-keyword-list.tex &&
../makefile-macosx/galgas --output-keyword-list-file=galgasScanner:galgasDelimitorsList:15:\\ggs0:0:partie-utilisation/included-delimiter-list.tex
