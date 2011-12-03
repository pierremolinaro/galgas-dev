#!/bin/sh
set -x
DIR=`dirname $0` &&
BUILD_DIR=galgas-book-color-build-dir &&
cd $DIR &&
rm -f galgas-book-color.pdf &&
rm -fr $BUILD_DIR &&
mkdir $BUILD_DIR &&
#--- First pass
/usr/texbin/pdflatex --file-line-error -output-directory=$BUILD_DIR galgas-book.tex &&
touch $BUILD_DIR/ref.idx &&
touch $BUILD_DIR/ref.lof &&
touch $BUILD_DIR/ref.lot &&
touch $BUILD_DIR/ref.toc &&
iteration=0 &&
while [ `cmp -s $BUILD_DIR/ref.lof $BUILD_DIR/galgas-book.lof ; echo $?` -ne 0 ] \
   || [ `cmp -s $BUILD_DIR/ref.lot $BUILD_DIR/galgas-book.lot ; echo $?` -ne 0 ] \
   || [ `cmp -s $BUILD_DIR/ref.toc $BUILD_DIR/galgas-book.toc ; echo $?` -ne 0 ] \
   || [ `cmp -s $BUILD_DIR/ref.idx $BUILD_DIR/galgas-book.idx ; echo $?` -ne 0 ]
do
  cp $BUILD_DIR/galgas-book.idx $BUILD_DIR/ref.idx &&
  cp $BUILD_DIR/galgas-book.lof $BUILD_DIR/ref.lof &&
  cp $BUILD_DIR/galgas-book.lot $BUILD_DIR/ref.lot &&
  cp $BUILD_DIR/galgas-book.toc $BUILD_DIR/ref.toc &&
  /usr/texbin/makeindex -s galgas-book-latex-inclusions/style-indexes.ist $BUILD_DIR/galgas-book.idx &&
  /usr/texbin/pdflatex --file-line-error -output-directory=$BUILD_DIR galgas-book.tex &&
  iteration=$((iteration+=1))
done &&
cp $BUILD_DIR/galgas-book.pdf galgas-book-color.pdf &&
rm -fr $BUILD_DIR &&
echo "---------------- SUCCES $iteration iterations"