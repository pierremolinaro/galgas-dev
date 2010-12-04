#!/bin/sh
set -x
DIR=`dirname $0`
cd $DIR &&
rm -f *.pdf *.aux *.dvi *.log *.toc *.out &&
pdflatex galgas-book.tex &&
pdflatex galgas-book.tex &&
rm -f *.aux *.dvi *.log *.toc *.out &&
echo "---------------- SUCCES --------------------------"