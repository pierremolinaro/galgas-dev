//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Routines for building pure BNF grammar (without 'select' and 'repeat')     *
//                                                                                                                     *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                   *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                      *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                                                                     *
//  This program is free software; you can redistribute it and/or modify it    *
//  under the terms of the GNU General Public License as published by the      *
//  Free Software Foundation.                                                  *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//  more details.                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "strings/C_HTMLString.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "buildPureBNFgrammar.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"
#include "grammarCompilation.h"

//---------------------------------------------------------------------------------------------------------------------*

#include <stdlib.h>

//---------------------------------------------------------------------------------------------------------------------*

static void
fixNewNonterminalSymbolsForList (const GALGAS_syntaxInstructionListForGrammarAnalysis & inList,
                                 cVocabulary & ioVocabulary,
                                 const C_String & inSyntaxComponentName,
                                 int32_t & ioCount) {
  cEnumerator_syntaxInstructionListForGrammarAnalysis currentInstruction (inList, kEnumeration_up) ;
  while (currentInstruction.hasCurrentObject ()) {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) currentInstruction.current_mInstruction (HERE).ptr () ;
    macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    p->fixNewNonterminalSymbols (ioVocabulary, inSyntaxComponentName, ioCount) ;
    currentInstruction.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_repeatInstructionForGrammarAnalysis::
fixNewNonterminalSymbols (cVocabulary & ioVocabulary,
                          const C_String & inSyntaxComponentName,
                          int32_t & ioCount) {
  ioVocabulary.addNonTerminalSymbol ("select_",
                                     inSyntaxComponentName,
                                     ioCount,
                                     true) ;
  ioCount ++ ;

  cEnumerator_branchListForGrammarAnalysis currentBranch (mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (currentBranch.hasCurrentObject ()) {
    fixNewNonterminalSymbolsForList (currentBranch.current_mSyntaxInstructionList (HERE),
                                     ioVocabulary,
                                     inSyntaxComponentName,
                                     ioCount) ;
    currentBranch.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_selectInstructionForGrammarAnalysis::
fixNewNonterminalSymbols (cVocabulary & ioVocabulary,
                          const C_String & inSyntaxComponentName,
                          int32_t & ioCount) {
  ioVocabulary.addNonTerminalSymbol ("select_",
                                     inSyntaxComponentName,
                                     ioCount,
                                     true) ;
  ioCount ++ ;

  cEnumerator_branchListForGrammarAnalysis currentBranch (mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (currentBranch.hasCurrentObject ()) {
    fixNewNonterminalSymbolsForList (currentBranch.current_mSyntaxInstructionList (HERE),
                                     ioVocabulary,
                                     inSyntaxComponentName,
                                     ioCount) ;
    currentBranch.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_nonTerminalInstructionForGrammarAnalysis::
fixNewNonterminalSymbols (cVocabulary & /* ioVocabulary */,
                          const C_String & /* inSyntaxComponentName */,
                          int32_t & /* ioCount */) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_terminalInstructionForGrammarAnalysis::
fixNewNonterminalSymbols (cVocabulary & /* ioVocabulary */,
                          const C_String & /* inSyntaxComponentName */,
                          int32_t & /* ioCount */) {
}

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_terminalInstructionForGrammarAnalysis::
buildRightDerivation (const int32_t /* inTerminalSymbolsCount */,
                      const int32_t /* inOriginalGrammarSymbolCount */,
                      TC_UniqueArray <int16_t> & ioInstructionsList) {
  ioInstructionsList.addObject ((int16_t) mAttribute_mTerminalSymbolIndex.uintValue ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_nonTerminalInstructionForGrammarAnalysis::
buildRightDerivation (const int32_t inTerminalSymbolsCount,
                      const int32_t /* inOriginalGrammarSymbolCount */,
                      TC_UniqueArray <int16_t> & ioInstructionsList) {

  ioInstructionsList.addObject ((int16_t) (mAttribute_mNonterminalSymbolIndex.uintValue () + (uint32_t) inTerminalSymbolsCount)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_selectInstructionForGrammarAnalysis::
buildRightDerivation (const int32_t /* inTerminalSymbolsCount */,
                      const int32_t inOriginalGrammarSymbolCount,
                      TC_UniqueArray <int16_t> & ioInstructionsList) {
  const int32_t idx = ((int32_t) mAttribute_mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount ;
  ioInstructionsList.addObject ((int16_t) idx) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_repeatInstructionForGrammarAnalysis::
buildRightDerivation (const int32_t inTerminalSymbolsCount,
                      const int32_t inOriginalGrammarSymbolCount,
                      TC_UniqueArray <int16_t> & ioInstructionsList) {
  cEnumerator_branchListForGrammarAnalysis firstBranch (mAttribute_mRepeatBranchList, kEnumeration_up) ;
  cEnumerator_syntaxInstructionListForGrammarAnalysis instruction (firstBranch.current_mSyntaxInstructionList (HERE), kEnumeration_up) ;
  while (instruction.hasCurrentObject ()) {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) instruction.current_mInstruction (HERE).ptr () ;
    macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    p->buildRightDerivation (inTerminalSymbolsCount, inOriginalGrammarSymbolCount, ioInstructionsList) ;
    instruction.gotoNextObject () ;
  }
  const int32_t idx = ((int32_t) mAttribute_mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount ;
  ioInstructionsList.addObject ((int16_t) idx) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_selectInstructionForGrammarAnalysis::
buildSelectAndRepeatProductions (const int32_t inTerminalSymbolsCount,
                                 const int32_t inOriginalGrammarSymbolCount,
                                 const C_String & inSyntaxComponentName,
                                 cPureBNFproductionsList & ioProductions) {
// A ; choix X ou Y ou Z ... fin choix ; B
//  'aNumeroNonTerminauxRepeter' designe le nouveau non terminal 'choix_xx_xx', note <W>,
//     et on engendre les productions :
//          <W> = X
//          <W> = Y
//          <W> = Z, ...
//     la production analysee devient : A ; <W> ; B

 cEnumerator_branchListForGrammarAnalysis currentBranch (mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (currentBranch.hasCurrentObject ()) {
    TC_UniqueArray <int16_t> derivation ;
    cEnumerator_syntaxInstructionListForGrammarAnalysis instruction (currentBranch.current_mSyntaxInstructionList (HERE), kEnumeration_up) ;
    while (instruction.hasCurrentObject ()) {
      cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) instruction.current_mInstruction (HERE).ptr () ;
      macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      p->buildRightDerivation (inTerminalSymbolsCount, inOriginalGrammarSymbolCount, derivation) ;
      instruction.gotoNextObject () ;
    }
    cProduction p (inSyntaxComponentName,
                   mAttribute_mStartLocation.startLocation ().lineNumber (),
                   mAttribute_mStartLocation.startLocation ().columnNumber (),
                   ((int32_t) mAttribute_mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount,
                   derivation,
                   0) ;
//    p.mSourceFileName = inSyntaxComponentName ;
//    p.mDefinitionLine = mAttribute_mStartLocation.startLocation ().lineNumber () ;
//    p.mColumnDefinition = mAttribute_mStartLocation.startLocation ().columnNumber () ;
//    const int32_t idx = ((int32_t) mAttribute_mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount ;
//    p.mLeftNonTerminalIndex = idx ;
//    swap (p.mDerivation, derivation) ;
    ioProductions.insertByExchange (p) ;
    currentBranch.gotoNextObject () ;
  }

//--- Construire les productions issues des instructions choix et repeter
  currentBranch.rewind () ;
  while (currentBranch.hasCurrentObject ()) {
    cEnumerator_syntaxInstructionListForGrammarAnalysis instruction (currentBranch.current_mSyntaxInstructionList (HERE), kEnumeration_up) ;
    while (instruction.hasCurrentObject ()) {
      cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) instruction.current_mInstruction (HERE).ptr () ;
      macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      p->buildSelectAndRepeatProductions (inTerminalSymbolsCount,
                                          inOriginalGrammarSymbolCount,
                                          inSyntaxComponentName,
                                          ioProductions) ;
      instruction.gotoNextObject () ;
    }
    currentBranch.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_repeatInstructionForGrammarAnalysis::
buildSelectAndRepeatProductions (const int32_t inTerminalSymbolsCount,
                                 const int32_t inOriginalGrammarSymbolCount,
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
  { cProduction p (inSyntaxComponentName,
                   mAttribute_mStartLocation.startLocation ().lineNumber (),
                   mAttribute_mStartLocation.startLocation ().columnNumber (),
                   ((int32_t) mAttribute_mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount) ;
/*    p.mSourceFileName = inSyntaxComponentName ;
    p.mDefinitionLine = mAttribute_mStartLocation.startLocation ().lineNumber () ;
    p.mColumnDefinition = mAttribute_mStartLocation.startLocation ().columnNumber () ;
    const int32_t idx = ((int32_t) mAttribute_mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount ;
    p.mLeftNonTerminalIndex = idx ;*/
    ioProductions.insertByExchange (p) ;
  }

//--- Insert a new production for every 'while' branch
  cEnumerator_branchListForGrammarAnalysis currentBranch (mAttribute_mRepeatBranchList, kEnumeration_up) ;
  currentBranch.gotoNextObject () ;
  while (currentBranch.hasCurrentObject ()) {
    TC_UniqueArray <int16_t> derivation ;
  //--- insert branch instructions
    cEnumerator_syntaxInstructionListForGrammarAnalysis instruction (currentBranch.current_mSyntaxInstructionList (HERE), kEnumeration_up) ;
    while (instruction.hasCurrentObject ()) {
      cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) instruction.current_mInstruction (HERE).ptr () ;
      macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      p->buildRightDerivation (inTerminalSymbolsCount, inOriginalGrammarSymbolCount, derivation) ;
      instruction.gotoNextObject () ;
    }
  //--- insert sequence from X
    cEnumerator_branchListForGrammarAnalysis firstBranch (mAttribute_mRepeatBranchList, kEnumeration_up) ;
    cEnumerator_syntaxInstructionListForGrammarAnalysis firstBranchInstruction (firstBranch.current_mSyntaxInstructionList (HERE), kEnumeration_up) ;
//    instruction = firstBranch->mInstructionList.firstObject () ;
    while (firstBranchInstruction.hasCurrentObject ()) {
      cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) firstBranchInstruction.current_mInstruction (HERE).ptr () ;
      macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      p->buildRightDerivation (inTerminalSymbolsCount, inOriginalGrammarSymbolCount, derivation) ;
      firstBranchInstruction.gotoNextObject () ;
    }
  //--- insert <T> production call
    const int32_t idx = ((int32_t) mAttribute_mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount ;
    derivation.addObject ((int16_t) idx) ;
    cProduction p (inSyntaxComponentName,
                   mAttribute_mStartLocation.startLocation ().lineNumber (),
                   mAttribute_mStartLocation.startLocation ().columnNumber (),
                   idx,
                   derivation,
                   0) ;
/*    p.mSourceFileName = inSyntaxComponentName ;
    p.mDefinitionLine = mAttribute_mStartLocation.startLocation ().lineNumber () ;
    p.mColumnDefinition = mAttribute_mStartLocation.startLocation ().columnNumber () ;
    p.mLeftNonTerminalIndex = idx ;
    swap (p.mDerivation, derivation) ;*/
    ioProductions.insertByExchange (p) ;
    currentBranch.gotoNextObject () ;
  }

//--- Construire les productions issues des instructions choix et repeter
  currentBranch.rewind () ;
  while (currentBranch.hasCurrentObject ()) {
    cEnumerator_syntaxInstructionListForGrammarAnalysis instruction (currentBranch.current_mSyntaxInstructionList (HERE), kEnumeration_up) ;
    while (instruction.hasCurrentObject ()) {
      cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) instruction.current_mInstruction (HERE).ptr () ;
      macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      p->buildSelectAndRepeatProductions (inTerminalSymbolsCount,
                                          inOriginalGrammarSymbolCount,
                                          inSyntaxComponentName,
                                          ioProductions) ;
      instruction.gotoNextObject () ;
    }
    currentBranch.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_terminalInstructionForGrammarAnalysis::
buildSelectAndRepeatProductions (const int32_t /* inTerminalSymbolsCount */,
                                 const int32_t /* inOriginalGrammarSymbolCount */,
                                 const C_String & /* inSyntaxComponentName */,
                                 cPureBNFproductionsList  & /* ioProductions */) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_nonTerminalInstructionForGrammarAnalysis::
buildSelectAndRepeatProductions (const int32_t /* inTerminalSymbolsCount */,
                                 const int32_t /* inOriginalGrammarSymbolCount */,
                                 const C_String & /* inSyntaxComponentName */,
                                 cPureBNFproductionsList  & /* ioProductions */) {
}

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------------------------------------------------*

void
buildPureBNFgrammar (const GALGAS_syntaxComponentListForGrammarAnalysis & inSyntaxComponentsList,
                     cVocabulary & ioVocabulary,
                     cPureBNFproductionsList & ioProductions) {
//--- Fix new non terminal symbols index and names
  cEnumerator_syntaxComponentListForGrammarAnalysis currentComponent (inSyntaxComponentsList, kEnumeration_up) ;
  while (currentComponent.hasCurrentObject ()) {
    cEnumerator_productionRuleListForGrammarAnalysis currentRule (currentComponent.current_mProductionRulesList (HERE), kEnumeration_up) ;
    int32_t count = 0 ;
    while (currentRule.hasCurrentObject ()) {
      fixNewNonterminalSymbolsForList (currentRule.current_mInstructionList (HERE),
                                       ioVocabulary,
                                       currentComponent.current_mSyntaxComponentName (HERE).mAttribute_string.stringValue (),
                                       count) ;
      currentRule.gotoNextObject () ;
    }
    currentComponent.gotoNextObject () ;
  }

//--- Build pure BNF productions from original grammar productions
  const int32_t terminalSymbolsCount = ioVocabulary.getTerminalSymbolsCount () ;
  const int32_t orginalGrammarSymbolCount = ioVocabulary.originalGrammarSymbolsCount () ;
  currentComponent.rewind () ;
  while (currentComponent.hasCurrentObject ()) {
    cEnumerator_productionRuleListForGrammarAnalysis currentRule (currentComponent.current_mProductionRulesList (HERE), kEnumeration_up) ;
    while (currentRule.hasCurrentObject ()) {
      TC_UniqueArray <int16_t> derivation ;
      cEnumerator_syntaxInstructionListForGrammarAnalysis instruction (currentRule.current_mInstructionList (HERE), kEnumeration_up) ;
      while (instruction .hasCurrentObject ()) {
        cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) instruction.current_mInstruction (HERE).ptr () ;
        macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
        p->buildRightDerivation (terminalSymbolsCount, orginalGrammarSymbolCount, derivation) ;
        instruction.gotoNextObject () ;
      }
      cProduction p (currentComponent.current_mSyntaxComponentName (HERE).mAttribute_string.stringValue (),
                     currentRule.current_mLeftNonterminalSymbol (HERE).mAttribute_location.startLocation ().lineNumber (),
                     currentRule.current_mLeftNonterminalSymbol (HERE).mAttribute_location.startLocation ().columnNumber (),
                     terminalSymbolsCount + (int32_t) currentRule.current_mLeftNonterminalSymbolIndex (HERE).uintValue (),
                     derivation,
                     currentRule.current_mProductionIndex (HERE).uintValue ()) ;
/*      p.mSourceFileName = currentComponent.current_mSyntaxComponentName (HERE).mAttribute_string.stringValue () ;
      p.mDefinitionLine = currentRule.current_mLeftNonterminalSymbol (HERE).mAttribute_location.startLocation ().lineNumber () ;
      p.mColumnDefinition = currentRule.current_mLeftNonterminalSymbol (HERE).mAttribute_location.startLocation ().columnNumber () ;
      p.mProductionIndex = currentRule.current_mProductionIndex (HERE).uintValue () ;
      p.mLeftNonTerminalIndex = terminalSymbolsCount
                                 + (int32_t) currentRule.current_mLeftNonterminalSymbolIndex (HERE).uintValue () ;
      swap (p.mDerivation, derivation) ;*/
      ioProductions.insertByExchange (p) ;
      currentRule.gotoNextObject () ;
    }
    currentComponent.gotoNextObject () ;
  }

//--- Build pure BNF productions from 'repeat' and 'select' instructions
  currentComponent.rewind () ;
  while (currentComponent.hasCurrentObject ()) {
    cEnumerator_productionRuleListForGrammarAnalysis currentRule (currentComponent.current_mProductionRulesList (HERE), kEnumeration_up) ;
    while (currentRule.hasCurrentObject ()) {
      cEnumerator_syntaxInstructionListForGrammarAnalysis instruction (currentRule.current_mInstructionList (HERE), kEnumeration_up) ;
      while (instruction.hasCurrentObject ()) {
        cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) instruction.current_mInstruction (HERE).ptr () ;
        macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
        p->buildSelectAndRepeatProductions (terminalSymbolsCount,
                                            orginalGrammarSymbolCount,
                                            currentComponent.current_mSyntaxComponentName (HERE).mAttribute_string.stringValue (),
                                            ioProductions) ;
        instruction.gotoNextObject () ;
      }
      currentRule.gotoNextObject () ;
    }
    currentComponent.gotoNextObject () ;
  }

//--- Augment grammar by a new non terminal symbol (denoted <>), and...
  ioVocabulary.addAugmentedSymbol () ;
//--- ... add the production <> -> <start_symbol>
  { TC_UniqueArray <int16_t> derivation ;
    derivation.addObject ((int16_t) ioVocabulary.getStartSymbol ()) ;
    cProduction p ("",
                   0,
                   0,
                   ioVocabulary.getAllSymbolsCount () - 1,
                   derivation,
                   0) ;
/*    p.mDefinitionLine = 0 ;
    p.mColumnDefinition = 0 ;
    p.mLeftNonTerminalIndex = ioVocabulary.getAllSymbolsCount () - 1 ;
    swap (p.mDerivation, derivation) ;*/
    ioProductions.insertByExchange (p) ;
  }
//--- Build productions arraies
  ioProductions.buildProductionsArray (ioVocabulary.getTerminalSymbolsCount (),
                                       ioVocabulary.getNonTerminalSymbolsCount ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------------------------------------------------*

void
printPureBNFgrammarInBNFfile (C_HTMLString & inHTMLfile,
                              const cVocabulary & inVocabulary,
                              const cPureBNFproductionsList & inProductions) {
  const int32_t productionsCount = inProductions.length () ;
  inHTMLfile.outputRawData ("<p><a name=\"pure_bnf\"></a>") ;
  inHTMLfile << "Listing of the " ;
  inHTMLfile.appendSigned (productionsCount) ;
  inHTMLfile << " BNF production"
             << ((productionsCount > 1) ? "s" : "")
             << " :" ;
  inHTMLfile.outputRawData ("</p>\n<table class=\"result\">") ;
  for (int32_t i=0 ; i<productionsCount ; i++) {
    const cProduction & p = inProductions (i COMMA_HERE) ;
    inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    inHTMLfile.outputRawData ("<a name=\"pure_bnf_") ;
    inHTMLfile.appendSigned (i) ;
    inHTMLfile.outputRawData ("\">") ;
    inHTMLfile.appendSigned (i) ;
    inHTMLfile.outputRawData ("</a></td><td class=\"result_line\">") ;
    inHTMLfile << "rule " ;
    inHTMLfile.outputRawData ("<code>") ;
    inVocabulary.printInFile (inHTMLfile, p.leftNonTerminalIndex () COMMA_HERE) ;
    inHTMLfile.outputRawData ("</code>") ;
    if (i == (productionsCount - 1)) {
      inHTMLfile.outputRawData ("<br>") ;
      inHTMLfile << "(added production)" ;
    }else{
      inHTMLfile.outputRawData ("<br>") ;
      inHTMLfile << "file '"
                 << p.sourceFileName ()
                 << "'" ;
      inHTMLfile.outputRawData ("<br>") ;
      inHTMLfile << "line " ;
      inHTMLfile.appendSigned (p.lineDefinition ()) ;
    }
    inHTMLfile.outputRawData ("</td><td><code>") ;
    for (int32_t d=0 ; d<p.derivationLength () ; d++) {
      if (d != 0) {
        inHTMLfile.outputRawData ("<br>") ;
      }
      inVocabulary.printInFile (inHTMLfile, p.derivationAtIndex (d COMMA_HERE) COMMA_HERE) ;
    }
    inHTMLfile.outputRawData ("</code></td></tr>") ;
  }
//--- Print vocabulary
  inHTMLfile.outputRawData ("</table><p><a name=\"vocabulary\"></a></p>"
                            "<table class=\"result\">"
                            "<tr><td class=\"result_title\"colspan=\"2\">") ;
  inHTMLfile << "Vocabulary" ;
  inHTMLfile.outputRawData ("</td></tr>\n") ;
  for (int32_t s=0 ; s<inVocabulary.getAllSymbolsCount () ; s++) {
    inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    inHTMLfile.appendSigned (s) ;
    inHTMLfile.outputRawData ("</td><td><code>") ;
    inVocabulary.printInFile (inHTMLfile, s COMMA_HERE) ;
    inHTMLfile.outputRawData ("</code></td></tr>\n") ;
  }
    inHTMLfile.outputRawData ("</table>") ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cPureBNFproductionsList::
buildProductionsArray (const int32_t inTerminalSymbolsCount,
                       const int32_t inNonTerminalSymbolsCount) {
  const int32_t nombreProductions = length () ;

//--- Construire les tableaux d'indices
  { TC_UniqueArray <int32_t> temp (inNonTerminalSymbolsCount, -1 COMMA_HERE) ;
    swap (tableauIndicePremiereProduction, temp) ;
  }
  { TC_UniqueArray <int32_t> temp (inNonTerminalSymbolsCount, -1 COMMA_HERE) ;
    swap (tableauIndiceDerniereProduction, temp) ;
  }

//--- Construire le tableau indiquant si une production a ete traitee et le tableau des indirections
  TC_UniqueArray <bool> productionTraitee (nombreProductions, false COMMA_HERE) ;
  { TC_UniqueArray <int32_t> temp (nombreProductions, -1 COMMA_HERE) ;
    swap (tableauIndirectionProduction, temp) ;
  }

//--- Parcourir les productions
  int16_t indiceIndirection = 0 ;
  for (int32_t i=0 ; i<nombreProductions ; i++) {
    cProduction & p = this->operator () (i COMMA_HERE) ;
    if (! productionTraitee (i COMMA_HERE)) {
      productionTraitee.setObjectAtIndex (true, i COMMA_HERE) ;
      const int32_t g = ((int32_t) p.leftNonTerminalIndex ()) - inTerminalSymbolsCount ;
      tableauIndicePremiereProduction.setObjectAtIndex (indiceIndirection, g COMMA_HERE) ;
      tableauIndirectionProduction.setObjectAtIndex (i, indiceIndirection COMMA_HERE) ;
      for (int32_t j=i+1 ; j<nombreProductions ; j++) {
        cProduction & pj = this->operator () (j COMMA_HERE) ;
        if (p.leftNonTerminalIndex () == pj.leftNonTerminalIndex ()) {
          indiceIndirection ++ ;
          tableauIndirectionProduction.setObjectAtIndex (j, indiceIndirection COMMA_HERE) ;
          productionTraitee.setObjectAtIndex (true, j COMMA_HERE) ;
        }
      }
      tableauIndiceDerniereProduction.setObjectAtIndex (indiceIndirection, g COMMA_HERE) ;
      indiceIndirection ++ ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
