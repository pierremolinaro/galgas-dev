#!/bin/sh
set -x
DIR=`dirname $0`
cd $DIR &&
rm -f *.pdf *.aux *.dvi *.log */*.log *.toc *.out *.lof *.lot *.i* &&
#--- First pass
pdflatex --file-line-error galgas-book.tex &&
touch ref.idx &&
touch ref.lof &&
touch ref.lot &&
touch ref.toc &&
iteration=0 &&
while [ `cmp -s ref.lof galgas-book.lof ; echo $?` -ne 0 ] \
   || [ `cmp -s ref.lot galgas-book.lot ; echo $?` -ne 0 ] \
   || [ `cmp -s ref.toc galgas-book.toc ; echo $?` -ne 0 ] \
   || [ `cmp -s ref.idx galgas-book.idx ; echo $?` -ne 0 ]
do
  cp galgas-book.idx ref.idx &&
  cp galgas-book.lof ref.lof &&
  cp galgas-book.lot ref.lot &&
  cp galgas-book.toc ref.toc &&
  makeindex -s galgas-book-new-commands/style-indexes.ist galgas-book.idx &&
  pdflatex --file-line-error galgas-book.tex &&
  iteration=$((iteration+=1))
done &&
rm -f *.aux *.log *.toc *.out *.lof *.lot *.i* &&
echo "---------------- SUCCES $iteration iterations"