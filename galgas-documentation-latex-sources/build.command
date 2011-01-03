#!/bin/sh
set -x
DIR=`dirname $0`
cd $DIR &&
rm -f *.pdf *.aux *.dvi *.log *.toc *.out *.lof *.lot *.i* &&
pdflatex galgas-book.tex &&
pdflatex galgas-book.tex &&
makeindex -s galgas-book-new-commands/style-indexes.ist galgas-book.idx &&
pdflatex galgas-book.tex &&
pdflatex galgas-book.tex &&
rm -f *.aux *.dvi *.log *.toc *.out *.lof *.lot *.i* &&
echo "---------------- SUCCES --------------------------"