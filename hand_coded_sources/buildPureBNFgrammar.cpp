//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for building pure BNF grammar (without 'select' and 'repeat')   *
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "files/C_HTML_FileWrite.h"

//---------------------------------------------------------------------------*

#include "buildPureBNFgrammar.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"
#include "common_semantics.h"

#include <stdlib.h>

//---------------------------------------------------------------------------*

static void
fixNewNonterminalSymbolsForList (const GGS_syntaxInstructionListForGrammarAnalysis & inList,
                                 cVocabulary & ioVocabulary,
                                 const C_String & inSyntaxComponentName,
                                 PMSInt32 & ioCount) {
  GGS_syntaxInstructionListForGrammarAnalysis::cEnumerator currentInstruction (inList, true) ;
  while (currentInstruction.hasCurrentObject ()) {
    currentInstruction._mInstruction (HERE) (HERE)->fixNewNonterminalSymbols (ioVocabulary, inSyntaxComponentName, ioCount) ;
    currentInstruction.next () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_repeatInstructionForGrammarAnalysis::
fixNewNonterminalSymbols (cVocabulary & ioVocabulary,
                          const C_String & inSyntaxComponentName,
                          PMSInt32 & ioCount) {
  ioVocabulary.addNonTerminalSymbol ("select_",
                                     inSyntaxComponentName,
                                     ioCount,
                                     true) ;
  ioCount ++ ;

  GGS_branchListForGrammarAnalysis::cEnumerator currentBranch (mRepeatBranchList, true) ;
  while (currentBranch.hasCurrentObject ()) {
    fixNewNonterminalSymbolsForList (currentBranch._mSyntaxInstructionList (HERE),
                                     ioVocabulary,
                                     inSyntaxComponentName,
                                     ioCount) ;
    currentBranch.next () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_selectInstructionForGrammarAnalysis::
fixNewNonterminalSymbols (cVocabulary & ioVocabulary,
                          const C_String & inSyntaxComponentName,
                          PMSInt32 & ioCount) {
  ioVocabulary.addNonTerminalSymbol ("select_",
                                     inSyntaxComponentName,
                                     ioCount,
                                     true) ;
  ioCount ++ ;

  GGS_branchListForGrammarAnalysis::cEnumerator currentBranch (mSelectBranchList, true) ;
  while (currentBranch.hasCurrentObject ()) {
    fixNewNonterminalSymbolsForList (currentBranch._mSyntaxInstructionList (HERE),
                                     ioVocabulary,
                                     inSyntaxComponentName,
                                     ioCount) ;
    currentBranch.next () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_nonTerminalInstructionForGrammarAnalysis::
fixNewNonterminalSymbols (cVocabulary & /* ioVocabulary */,
                          const C_String & /* inSyntaxComponentName */,
                          PMSInt32 & /* ioCount */) {
}

//---------------------------------------------------------------------------*

void cPtr_terminalInstructionForGrammarAnalysis::
fixNewNonterminalSymbols (cVocabulary & /* ioVocabulary */,
                          const C_String & /* inSyntaxComponentName */,
                          PMSInt32 & /* ioCount */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_terminalInstructionForGrammarAnalysis::
buildRightDerivation (const PMSInt32 /* inTerminalSymbolsCount */,
                      const PMSInt32 /* inOriginalGrammarSymbolCount */,
                      TC_UniqueArray <PMSInt16> & ioInstructionsList) {
  ioInstructionsList.addObject ((PMSInt16) mTerminalSymbolIndex.uintValue ()) ;
}

//---------------------------------------------------------------------------*

void cPtr_nonTerminalInstructionForGrammarAnalysis::
buildRightDerivation (const PMSInt32 inTerminalSymbolsCount,
                      const PMSInt32 /* inOriginalGrammarSymbolCount */,
                      TC_UniqueArray <PMSInt16> & ioInstructionsList) {

  ioInstructionsList.addObject ((PMSInt16) (mNonterminalSymbolIndex.uintValue ()
                                           + inTerminalSymbolsCount)) ;
}

//---------------------------------------------------------------------------*

void cPtr_selectInstructionForGrammarAnalysis::
buildRightDerivation (const PMSInt32 /* inTerminalSymbolsCount */,
                      const PMSInt32 inOriginalGrammarSymbolCount,
                      TC_UniqueArray <PMSInt16> & ioInstructionsList) {
  const PMSInt32 idx = ((PMSInt32) mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount ;
  ioInstructionsList.addObject ((PMSInt16) idx) ;
}

//---------------------------------------------------------------------------*

void cPtr_repeatInstructionForGrammarAnalysis::
buildRightDerivation (const PMSInt32 inTerminalSymbolsCount,
                      const PMSInt32 inOriginalGrammarSymbolCount,
                      TC_UniqueArray <PMSInt16> & ioInstructionsList) {
  GGS_branchListForGrammarAnalysis::cEnumerator firstBranch (mRepeatBranchList, true) ;
  GGS_syntaxInstructionListForGrammarAnalysis::cEnumerator instruction (firstBranch._mSyntaxInstructionList (HERE), true) ;
  while (instruction.hasCurrentObject ()) {
    instruction._mInstruction (HERE) (HERE)->buildRightDerivation (inTerminalSymbolsCount, inOriginalGrammarSymbolCount, ioInstructionsList) ;
    instruction.next () ;
  }
  const PMSInt32 idx = ((PMSInt32) mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount ;
  ioInstructionsList.addObject ((PMSInt16) idx) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_selectInstructionForGrammarAnalysis::
buildSelectAndRepeatProductions (const PMSInt32 inTerminalSymbolsCount,
                                 const PMSInt32 inOriginalGrammarSymbolCount,
                                 const C_String & inSyntaxComponentName,
                                 cPureBNFproductionsList & ioProductions) {
// A ; choix X ou Y ou Z ... fin choix ; B
//  'aNumeroNonTerminauxRepeter' designe le nouveau non terminal 'choix_xx_xx', note <W>,
//     et on engendre les productions :
//          <W> = X
//          <W> = Y
//          <W> = Z, ...
//     la production analysee devient : A ; <W> ; B

 GGS_branchListForGrammarAnalysis::cEnumerator currentBranch (mSelectBranchList, true) ;
  while (currentBranch.hasCurrentObject ()) {
    TC_UniqueArray <PMSInt16> derivation ;
    GGS_syntaxInstructionListForGrammarAnalysis::cEnumerator instruction (currentBranch._mSyntaxInstructionList (HERE), true) ;
    while (instruction.hasCurrentObject ()) {
       instruction._mInstruction (HERE) (HERE)->buildRightDerivation (inTerminalSymbolsCount, inOriginalGrammarSymbolCount, derivation) ;
       instruction.next () ;
    }
    cProduction p ;
    p.mSourceFileName = inSyntaxComponentName ;
    p.aLigneDefinition = mStartLocation.lineNumber () ;
    p.aColonneDefinition = mStartLocation.columnNumber () ;
    const PMSInt32 idx = ((PMSInt32) mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount ;
    p.aNumeroNonTerminalGauche = idx ;
    swap (p.aDerivation, derivation) ;
    ioProductions.insertByExchange (p) ;
    currentBranch.next () ;
  }

//--- Construire les productions issues des instructions choix et repeter
  currentBranch.rewind () ;
  while (currentBranch.hasCurrentObject ()) {
    GGS_syntaxInstructionListForGrammarAnalysis::cEnumerator instruction (currentBranch._mSyntaxInstructionList (HERE), true) ;
    while (instruction.hasCurrentObject ()) {
      instruction._mInstruction (HERE) (HERE)->buildSelectAndRepeatProductions (inTerminalSymbolsCount,
                                                                     inOriginalGrammarSymbolCount,
                                                                     inSyntaxComponentName,
                                                                     ioProductions) ;
      instruction.next () ;
    }
    currentBranch.next () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_repeatInstructionForGrammarAnalysis::
buildSelectAndRepeatProductions (const PMSInt32 inTerminalSymbolsCount,
                                 const PMSInt32 inOriginalGrammarSymbolCount,
                                 const C_String & inSyntaxComponentName,
                                 cPureBNFproductionsList & ioProductions) {
//--- How the sequence 'A ; repeat X while Y while Z ... end repeat ; B' is translated into pure BNF productions
// A new non terminal, call it <T> is created (in fact, in the BNF file, this non terminal has a mangled
// name from source file, location line and column : <select_repeat_SOURCEFILE_LINE_COLUMN>)
//
// The sequence is translated into 'A ; X ; <T> ; B'.
//
// 1 empty production is added :
//         <T> -> .
//
// Every while branch gives a new production :
//         <T> -> Y X <T>
//         <T> -> Z X <T>
//         ...

//--- Insert empty production <T>=.
  { cProduction p ;
    p.mSourceFileName = inSyntaxComponentName ;
    p.aLigneDefinition = mStartLocation.lineNumber () ;
    p.aColonneDefinition = mStartLocation.columnNumber () ;
    const PMSInt32 idx = ((PMSInt32) mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount ;
    p.aNumeroNonTerminalGauche = idx ;
    ioProductions.insertByExchange (p) ;
  }

//--- Insert a new production for every 'while' branch
  GGS_branchListForGrammarAnalysis::cEnumerator currentBranch (mRepeatBranchList, true) ;
  currentBranch.next () ;
  while (currentBranch.hasCurrentObject ()) {
    TC_UniqueArray <PMSInt16> derivation ;
  //--- insert branch instructions
    GGS_syntaxInstructionListForGrammarAnalysis::cEnumerator instruction (currentBranch._mSyntaxInstructionList (HERE), true) ;
    while (instruction.hasCurrentObject ()) {
       instruction._mInstruction (HERE) (HERE)->buildRightDerivation (inTerminalSymbolsCount, inOriginalGrammarSymbolCount, derivation) ;
       instruction.next () ;
    }
  //--- insert sequence from X
    GGS_branchListForGrammarAnalysis::cEnumerator firstBranch (mRepeatBranchList, true) ;
    GGS_syntaxInstructionListForGrammarAnalysis::cEnumerator firstBranchInstruction (firstBranch._mSyntaxInstructionList (HERE), true) ;
//    instruction = firstBranch->mInstructionList.firstObject () ;
    while (firstBranchInstruction.hasCurrentObject ()) {
      firstBranchInstruction._mInstruction (HERE) (HERE)->buildRightDerivation (inTerminalSymbolsCount, inOriginalGrammarSymbolCount, derivation) ;
      firstBranchInstruction.next () ;
    }
  //--- insert <T> production call
    const PMSInt32 idx = ((PMSInt32) mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount ;
    derivation.addObject ((PMSInt16) idx) ;
    cProduction p ;
    p.mSourceFileName = inSyntaxComponentName ;
    p.aLigneDefinition = mStartLocation.lineNumber () ;
    p.aColonneDefinition = mStartLocation.columnNumber () ;
    p.aNumeroNonTerminalGauche = idx ;
    swap (p.aDerivation, derivation) ;
    ioProductions.insertByExchange (p) ;
    currentBranch.next () ;
  }

//--- Construire les productions issues des instructions choix et repeter
  currentBranch.rewind () ;
  while (currentBranch.hasCurrentObject ()) {
    GGS_syntaxInstructionListForGrammarAnalysis::cEnumerator instruction (currentBranch._mSyntaxInstructionList (HERE), true) ;
    while (instruction.hasCurrentObject ()) {
      instruction._mInstruction (HERE) (HERE)->buildSelectAndRepeatProductions (inTerminalSymbolsCount,
                                                                     inOriginalGrammarSymbolCount,
                                                                     inSyntaxComponentName,
                                                                     ioProductions) ;
      instruction.next () ;
    }
    currentBranch.next () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_terminalInstructionForGrammarAnalysis::
buildSelectAndRepeatProductions (const PMSInt32 /* inTerminalSymbolsCount */,
                                 const PMSInt32 /* inOriginalGrammarSymbolCount */,
                                 const C_String & /* inSyntaxComponentName */,
                                 cPureBNFproductionsList  & /* ioProductions */) {
}

//---------------------------------------------------------------------------*

void cPtr_nonTerminalInstructionForGrammarAnalysis::
buildSelectAndRepeatProductions (const PMSInt32 /* inTerminalSymbolsCount */,
                                 const PMSInt32 /* inOriginalGrammarSymbolCount */,
                                 const C_String & /* inSyntaxComponentName */,
                                 cPureBNFproductionsList  & /* ioProductions */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void
buildPureBNFgrammar (const GGS_syntaxComponentListForGrammarAnalysis & inSyntaxComponentsList,
                     cVocabulary & ioVocabulary,
                     cPureBNFproductionsList & ioProductions) {
//--- Fix new non terminal symbols index and names
  GGS_syntaxComponentListForGrammarAnalysis::cEnumerator currentComponent (inSyntaxComponentsList, true) ;
  while (currentComponent.hasCurrentObject ()) {
    GGS_productionRuleListForGrammarAnalysis::cEnumerator currentRule (currentComponent._mProductionRulesList (HERE), true) ;
    PMSInt32 count = 0 ;
    while (currentRule.hasCurrentObject ()) {
      fixNewNonterminalSymbolsForList (currentRule._mInstructionList (HERE),
                                       ioVocabulary,
                                       currentComponent._mSyntaxComponentName (HERE),
                                       count) ;
      currentRule.next () ;
    }
    currentComponent.next () ;
  }

//--- Build pure BNF productions from original grammar productions
  const PMSInt32 terminalSymbolsCount = ioVocabulary.getTerminalSymbolsCount () ;
  const PMSInt32 orginalGrammarSymbolCount = ioVocabulary.originalGrammarSymbolsCount () ;
  currentComponent.rewind () ;
  while (currentComponent.hasCurrentObject ()) {
    GGS_productionRuleListForGrammarAnalysis::cEnumerator currentRule (currentComponent._mProductionRulesList (HERE), true) ;
    while (currentRule.hasCurrentObject ()) {
      TC_UniqueArray <PMSInt16> derivation ;
      GGS_syntaxInstructionListForGrammarAnalysis::cEnumerator instruction (currentRule._mInstructionList (HERE), true) ;
      while (instruction .hasCurrentObject ()) {
        instruction._mInstruction (HERE) (HERE)->buildRightDerivation (terminalSymbolsCount, orginalGrammarSymbolCount, derivation) ;
        instruction.next () ;
      }
      cProduction p ;
      p.mSourceFileName = currentComponent._mSyntaxComponentName (HERE) ;
      p.aLigneDefinition = currentRule._mLeftNonterminalSymbol (HERE).lineNumber () ;
      p.aColonneDefinition = currentRule._mLeftNonterminalSymbol (HERE).columnNumber () ;
      p.mProductionIndex = currentRule._mProductionIndex (HERE).uintValue () ;
      p.aNumeroNonTerminalGauche = terminalSymbolsCount
                                 + (PMSInt32) currentRule._mLeftNonterminalSymbolIndex (HERE).uintValue () ;
      swap (p.aDerivation, derivation) ;
      ioProductions.insertByExchange (p) ;
      currentRule.next () ;
    }
    currentComponent.next () ;
  }

//--- Build pure BNF productions from 'repeat' and 'select' instructions
  currentComponent.rewind () ;
  while (currentComponent.hasCurrentObject ()) {
    GGS_productionRuleListForGrammarAnalysis::cEnumerator currentRule (currentComponent._mProductionRulesList (HERE), true) ;
    while (currentRule.hasCurrentObject ()) {
      GGS_syntaxInstructionListForGrammarAnalysis::cEnumerator instruction (currentRule._mInstructionList (HERE), true) ;
      while (instruction.hasCurrentObject ()) {
        instruction._mInstruction (HERE) (HERE)->buildSelectAndRepeatProductions (terminalSymbolsCount,
                                                     orginalGrammarSymbolCount,
                                                     currentComponent._mSyntaxComponentName (HERE),
                                                                              ioProductions) ;
        instruction.next () ;
      }
      currentRule.next () ;
    }
    currentComponent.next () ;
  }

//--- Augment grammar by a new non terminal symbol (denoted <>), and...
  ioVocabulary.addAugmentedSymbol () ;
//--- ... add the production <> -> <start_symbol>
  { cProduction p ;
    p.aLigneDefinition = 0 ;
    p.aColonneDefinition = 0 ;
    p.aNumeroNonTerminalGauche = ioVocabulary.getAllSymbolsCount () - 1 ;
    TC_UniqueArray <PMSInt16> derivation ;
    derivation.addObject ((PMSInt16) ioVocabulary.getStartSymbol ()) ;
    swap (p.aDerivation, derivation) ;
    ioProductions.insertByExchange (p) ;
  }
//--- Build productions arraies
  ioProductions.buildProductionsArray (ioVocabulary.getTerminalSymbolsCount (),
                                       ioVocabulary.getNonTerminalSymbolsCount ()) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void
printPureBNFgrammarInBNFfile (C_HTML_FileWrite & inHTMLfile,
                              const cVocabulary & inVocabulary,
                              const cPureBNFproductionsList & inProductions) {
  const PMSInt32 productionsCount = inProductions.length () ;
  inHTMLfile.outputRawData ("<p><a name=\"pure_bnf\"></a>") ;
  inHTMLfile << "Listing of the " ;
  inHTMLfile.appendSigned (productionsCount) ;
  inHTMLfile << " BNF production"
             << ((productionsCount > 1) ? "s" : "")
             << " :" ;
  inHTMLfile.outputRawData ("</p>\n<table class=\"result\">") ;
  for (PMSInt32 i=0 ; i<productionsCount ; i++) {
    const cProduction & p = inProductions (i COMMA_HERE) ;
    inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    inHTMLfile.outputRawData ("<a name=\"pure_bnf_") ;
    inHTMLfile.appendSigned (i) ;
    inHTMLfile.outputRawData ("\">") ;
    inHTMLfile.appendSigned (i) ;
    inHTMLfile.outputRawData ("</a></td><td class=\"result_line\">") ;
    inHTMLfile << "rule " ;
    inHTMLfile.outputRawData ("<code>") ;
    inVocabulary.printInFile (inHTMLfile, p.aNumeroNonTerminalGauche COMMA_HERE) ;
    inHTMLfile.outputRawData ("</code>") ;
    if (i == (productionsCount - 1)) {
      inHTMLfile.outputRawData ("<br>") ;
      inHTMLfile << "(added production)" ;
    }else{
      inHTMLfile.outputRawData ("<br>") ;
      inHTMLfile << "file '"
                 << p.mSourceFileName
                 << "'" ;
      inHTMLfile.outputRawData ("<br>") ;
      inHTMLfile << "line " ;
      inHTMLfile.appendSigned (p.aLigneDefinition) ;
    }
    inHTMLfile.outputRawData ("</td><td><code>") ;
    for (PMSInt32 d=0 ; d<p.aDerivation.count () ; d++) {
      if (d != 0) {
        inHTMLfile.outputRawData ("<br>") ;
      }
      inVocabulary.printInFile (inHTMLfile, p.aDerivation (d COMMA_HERE) COMMA_HERE) ;
    }
    inHTMLfile.outputRawData ("</code></td></tr>") ;
  }
//--- Print vocabulary
  inHTMLfile.outputRawData ("</table><p><a name=\"vocabulary\"></a></p>"
                            "<table class=\"result\">"
                            "<tr><td class=\"result_title\"colspan=\"2\">") ;
  inHTMLfile << "Vocabulary" ;
  inHTMLfile.outputRawData ("</td></tr>\n") ;
  for (PMSInt32 s=0 ; s<inVocabulary.getAllSymbolsCount () ; s++) {
    inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    inHTMLfile.appendSigned (s) ;
    inHTMLfile.outputRawData ("</td><td><code>") ;
    inVocabulary.printInFile (inHTMLfile, s COMMA_HERE) ;
    inHTMLfile.outputRawData ("</code></td></tr>\n") ;
  }
    inHTMLfile.outputRawData ("</table>") ;
}

//---------------------------------------------------------------------------*

void cPureBNFproductionsList::
buildProductionsArray (const PMSInt32 inTerminalSymbolsCount,
                       const PMSInt32 inNonTerminalSymbolsCount) {
  const PMSInt32 nombreProductions = length () ;

//--- Construire les tableaux d'indices
  { TC_UniqueArray <PMSInt32> temp (inNonTerminalSymbolsCount, -1 COMMA_HERE) ;
    swap (tableauIndicePremiereProduction, temp) ;
  }
  { TC_UniqueArray <PMSInt32> temp (inNonTerminalSymbolsCount, -1 COMMA_HERE) ;
    swap (tableauIndiceDerniereProduction, temp) ;
  }

//--- Construire le tableau indiquant si une production a ete traitee et le tableau des indirections
  TC_UniqueArray <bool> productionTraitee (nombreProductions, false COMMA_HERE) ;
  { TC_UniqueArray <PMSInt32> temp (nombreProductions, -1 COMMA_HERE) ;
    swap (tableauIndirectionProduction, temp) ;
  }

//--- Parcourir les productions
  PMSInt16 indiceIndirection = 0 ;
  for (PMSInt32 i=0 ; i<nombreProductions ; i++) {
    cProduction & p = this->operator () (i COMMA_HERE) ;
    if (! productionTraitee (i COMMA_HERE)) {
      productionTraitee (i COMMA_HERE) = true ;
      const PMSInt32 g = ((PMSInt32) p.aNumeroNonTerminalGauche) - inTerminalSymbolsCount ;
      tableauIndicePremiereProduction (g COMMA_HERE) = indiceIndirection ;
      tableauIndirectionProduction (indiceIndirection COMMA_HERE) = i ;
      for (PMSInt32 j=i+1 ; j<nombreProductions ; j++) {
        cProduction & pj = this->operator () (j COMMA_HERE) ;
        if (p.aNumeroNonTerminalGauche == pj.aNumeroNonTerminalGauche) {
          indiceIndirection ++ ;
          tableauIndirectionProduction (indiceIndirection COMMA_HERE) = j ;
          productionTraitee (j COMMA_HERE) = true ;
        }
      }
      tableauIndiceDerniereProduction (g COMMA_HERE) = indiceIndirection ;
      indiceIndirection ++ ;
    }
  }
}

//---------------------------------------------------------------------------*
