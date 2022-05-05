#!/bin/sh
set -x
DIR=`dirname $0` &&
cd $DIR &&
rm -f galgas-book.aux galgas-book.idx galgas-book.lof galgas-book.lot galgas-book.toc &&
rm -f galgas-book.log galgas-book.ilg galgas-book.ind galgas-book.out galgas-book.synctex.gz &&
rm -f ref.* temp.galgas temp.galgas.tex &&
echo "---------------- SUCCES $iteration iterations"
