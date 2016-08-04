#!/bin/sh
set -x
DIR=`dirname $0` &&
cd $DIR/../makefile-macosx && python build.py release &&
PATH=$DIR/../makefile-macosx:$PATH &&
cd $DIR &&
#--- Obtenir la description des grammaires en tex
../makefile-macosx/galgas --output-grammar-rule-list-in-tex-files ../+galgas.galgasProject &&
cp ../build/tex/galgas3Grammar.tex ../galgas-documentation-latex-sources/chapitre-grammaires/galgas3Grammar.tex &&
cp ../build/tex/galgas3ProjectGrammar.tex ../galgas-documentation-latex-sources/chapitre-grammaires/galgas3ProjectGrammar.tex &&
cp ../build/tex/templateGrammar.tex ../galgas-documentation-latex-sources/chapitre-grammaires/templateGrammar.tex &&
#--- Reconstruire la table des mots réservés et celle des délimiteurs
../makefile-macosx/galgas --output-keyword-list-file=galgas3Scanner:galgasKeyWordList:5:\\ggs!:!:partie-utilisation/included-keyword-list.tex &&
../makefile-macosx/galgas --output-keyword-list-file=galgas3Scanner:galgasDelimitorsList:15:\\ggs0:0:partie-utilisation/included-delimiter-list.tex &&
#--- Compilation LaTex
rm -f galgas-book.pdf ref.* galgas-book.ilg galgas-book.ind &&
rm -f galgas-book.aux galgas-book.idx galgas-book.lof galgas-book.lot galgas-book.toc &&
rm -f galgas-book.log galgas-book.out galgas-book.synctex.gz &&
#--- First pass
PDF_LATEX=`which xelatex` &&
MAKE_INDEX=`which makeindex` &&
$PDF_LATEX --file-line-error --shell-escape galgas-book.tex &&
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
  $MAKE_INDEX -s $DIR/galgas-book-latex-inclusions/style-indexes.ist galgas-book.idx &&
  $PDF_LATEX --file-line-error --shell-escape galgas-book.tex &&
  iteration=$((iteration+=1))
done &&
rm -f galgas-book.aux galgas-book.idx galgas-book.lof galgas-book.lot galgas-book.toc &&
rm -f galgas-book.log galgas-book.ilg galgas-book.ind galgas-book.out galgas-book.synctex.gz &&
rm -f ref.* temp.galgas temp.galgas.tex &&
echo "---------------- SUCCES $iteration iterations"
