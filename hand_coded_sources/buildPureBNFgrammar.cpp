//--------------------------------------------------------------------------------------------------
//
//  Routines for building pure BNF grammar (without 'select' and 'repeat')                       
//
//  Copyright (C) 1999, ..., 2023 Pierre Molinaro.
//                                           
//  MIT License
//                                           
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute,
// sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//                                           
//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "HTMLString.h"

//--------------------------------------------------------------------------------------------------

#include "buildPureBNFgrammar.h"
#include "PureBNFproductionsList.h"
#include "GrammarVocabulary.h"
#include "grammarCompilation.h"

//--------------------------------------------------------------------------------------------------

#include <stdlib.h>

//--------------------------------------------------------------------------------------------------

static void fixNewNonterminalSymbolsForList (const GGS_syntaxInstructionListForGrammarAnalysis & inList,
                                             GrammarVocabulary & ioVocabulary,
                                             const String & inSyntaxComponentName,
                                             int32_t & ioCount) {
  UpEnumerator_syntaxInstructionListForGrammarAnalysis currentInstruction (inList) ;
  while (currentInstruction.hasCurrentObject ()) {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) currentInstruction.current_mInstruction (HERE).ptr () ;
    macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    if (p == nullptr) {
      printf ("NULL pointer in '%s', line %d\n", __FILE__, __LINE__) ;
      exit (1) ;
    }else{
      p->fixNewNonterminalSymbols (ioVocabulary, inSyntaxComponentName, ioCount) ;
    }
    currentInstruction.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::fixNewNonterminalSymbols (GrammarVocabulary & ioVocabulary,
                                                                         const String & inSyntaxComponentName,
                                                                         int32_t & ioCount) const {
  ioVocabulary.addNonTerminalSymbol ("select_",
                                     inSyntaxComponentName,
                                     ioCount,
                                     true) ;
  ioCount ++ ;

  UpEnumerator_branchListForGrammarAnalysis currentBranch (mProperty_mRepeatBranchList) ;
  while (currentBranch.hasCurrentObject ()) {
    fixNewNonterminalSymbolsForList (currentBranch.current_mSyntaxInstructionList (HERE),
                                     ioVocabulary,
                                     inSyntaxComponentName,
                                     ioCount) ;
    currentBranch.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::fixNewNonterminalSymbols (GrammarVocabulary & ioVocabulary,
                                                                         const String & inSyntaxComponentName,
                                                                         int32_t & ioCount) const {
  ioVocabulary.addNonTerminalSymbol ("select_",
                                     inSyntaxComponentName,
                                     ioCount,
                                     true) ;
  ioCount ++ ;

  UpEnumerator_branchListForGrammarAnalysis currentBranch (mProperty_mSelectBranchList) ;
  while (currentBranch.hasCurrentObject ()) {
    fixNewNonterminalSymbolsForList (currentBranch.current_mSyntaxInstructionList (HERE),
                                     ioVocabulary,
                                     inSyntaxComponentName,
                                     ioCount) ;
    currentBranch.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonTerminalInstructionForGrammarAnalysis::
fixNewNonterminalSymbols (GrammarVocabulary & /* ioVocabulary */,
                          const String & /* inSyntaxComponentName */,
                          int32_t & /* ioCount */) const {
}

//--------------------------------------------------------------------------------------------------

void cPtr_terminalInstructionForGrammarAnalysis::
fixNewNonterminalSymbols (GrammarVocabulary & /* ioVocabulary */,
                          const String & /* inSyntaxComponentName */,
                          int32_t & /* ioCount */) const {
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//--------------------------------------------------------------------------------------------------

void cPtr_terminalInstructionForGrammarAnalysis::
buildRightDerivation (const int32_t /* inTerminalSymbolsCount */,
                      const int32_t /* inOriginalGrammarSymbolCount */,
                      GenericUniqueArray <int32_t> & ioInstructionsList) const {
  ioInstructionsList.appendObject ((int32_t) mProperty_mTerminalSymbolIndex.uintValue ()) ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonTerminalInstructionForGrammarAnalysis::
buildRightDerivation (const int32_t inTerminalSymbolsCount,
                      const int32_t /* inOriginalGrammarSymbolCount */,
                      GenericUniqueArray <int32_t> & ioInstructionsList) const {

  ioInstructionsList.appendObject ((int32_t) (mProperty_mNonterminalSymbolIndex.uintValue () + (uint32_t) inTerminalSymbolsCount)) ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::
buildRightDerivation (const int32_t /* inTerminalSymbolsCount */,
                      const int32_t inOriginalGrammarSymbolCount,
                      GenericUniqueArray <int32_t> & ioInstructionsList) const {
  const int32_t idx = ((int32_t) mProperty_mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount ;
  ioInstructionsList.appendObject ((int32_t) idx) ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::
buildRightDerivation (const int32_t inTerminalSymbolsCount,
                      const int32_t inOriginalGrammarSymbolCount,
                      GenericUniqueArray <int32_t> & ioInstructionsList) const {
  UpEnumerator_branchListForGrammarAnalysis firstBranch (mProperty_mRepeatBranchList) ;
  UpEnumerator_syntaxInstructionListForGrammarAnalysis instruction (firstBranch.current_mSyntaxInstructionList (HERE)) ;
  while (instruction.hasCurrentObject ()) {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) instruction.current_mInstruction (HERE).ptr () ;
    macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    if (p == nullptr) {
      printf ("NULL pointer in '%s', line %d\n", __FILE__, __LINE__) ;
      exit (1) ;
    }else{
      p->buildRightDerivation (inTerminalSymbolsCount, inOriginalGrammarSymbolCount, ioInstructionsList) ;
    }
    instruction.gotoNextObject () ;
  }
  const int32_t idx = ((int32_t) mProperty_mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount ;
  ioInstructionsList.appendObject ((int32_t) idx) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::
buildSelectAndRepeatProductions (const int32_t inTerminalSymbolsCount,
                                 const int32_t inOriginalGrammarSymbolCount,
                                 const String & inSyntaxComponentName,
                                 PureBNFproductionsList & ioProductions) const {
// A ; choix X ou Y ou Z ... fin choix ; B
//  'aNumeroNonTerminauxRepeter' designe le nouveau non terminal 'choix_xx_xx', note <W>,
//     et on engendre les productions :
//          <W> = X
//          <W> = Y
//          <W> = Z, ...
//     la production analysee devient : A ; <W> ; B

 UpEnumerator_branchListForGrammarAnalysis currentBranch (mProperty_mSelectBranchList) ;
  while (currentBranch.hasCurrentObject ()) {
    GenericUniqueArray <int32_t> derivation ;
    UpEnumerator_syntaxInstructionListForGrammarAnalysis instruction (currentBranch.current_mSyntaxInstructionList (HERE)) ;
    while (instruction.hasCurrentObject ()) {
      cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) instruction.current_mInstruction (HERE).ptr () ;
      macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      if (p == nullptr) {
        printf ("NULL pointer in '%s', line %d\n", __FILE__, __LINE__) ;
        exit (1) ;
      }else{
        p->buildRightDerivation (inTerminalSymbolsCount, inOriginalGrammarSymbolCount, derivation) ;
      }
      instruction.gotoNextObject () ;
    }
    GrammarProduction p (inSyntaxComponentName,
                   mProperty_mStartLocation.startLocation ().lineNumber (),
                   mProperty_mStartLocation.startLocation ().columnNumber (),
                   ((int32_t) mProperty_mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount,
                   derivation,
                   0) ;
    ioProductions.mProductionArray.appendObjectUsingSwap (p) ;
    currentBranch.gotoNextObject () ;
  }

//--- Construire les productions issues des instructions choix et repeter
  currentBranch.rewind () ;
  while (currentBranch.hasCurrentObject ()) {
    UpEnumerator_syntaxInstructionListForGrammarAnalysis instruction (currentBranch.current_mSyntaxInstructionList (HERE)) ;
    while (instruction.hasCurrentObject ()) {
      cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) instruction.current_mInstruction (HERE).ptr () ;
      macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      if (p == nullptr) {
        printf ("NULL pointer in '%s', line %d\n", __FILE__, __LINE__) ;
        exit (1) ;
      }else{
        p->buildSelectAndRepeatProductions (inTerminalSymbolsCount,
                                            inOriginalGrammarSymbolCount,
                                            inSyntaxComponentName,
                                            ioProductions) ;
      }
      instruction.gotoNextObject () ;
    }
    currentBranch.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::
buildSelectAndRepeatProductions (const int32_t inTerminalSymbolsCount,
                                 const int32_t inOriginalGrammarSymbolCount,
                                 const String & inSyntaxComponentName,
                                 PureBNFproductionsList & ioProductions) const {
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
  { GrammarProduction p (inSyntaxComponentName,
                   mProperty_mStartLocation.startLocation ().lineNumber (),
                   mProperty_mStartLocation.startLocation ().columnNumber (),
                   ((int32_t) mProperty_mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount) ;
    ioProductions.mProductionArray.appendObjectUsingSwap (p) ;
  }

//--- Insert a new production for every 'while' branch
  UpEnumerator_branchListForGrammarAnalysis currentBranch (mProperty_mRepeatBranchList) ;
  currentBranch.gotoNextObject () ;
  while (currentBranch.hasCurrentObject ()) {
    GenericUniqueArray <int32_t> derivation ;
  //--- insert branch instructions
    UpEnumerator_syntaxInstructionListForGrammarAnalysis instruction (currentBranch.current_mSyntaxInstructionList (HERE)) ;
    while (instruction.hasCurrentObject ()) {
      const cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) (instruction.current_mInstruction (HERE).ptr ()) ;
      macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      if (p == nullptr) {
        printf ("NULL pointer in '%s', line %d\n", __FILE__, __LINE__) ;
        exit (1) ;
      }else{
        p->buildRightDerivation (inTerminalSymbolsCount, inOriginalGrammarSymbolCount, derivation) ;
      }
      instruction.gotoNextObject () ;
    }
  //--- insert sequence from X
    UpEnumerator_branchListForGrammarAnalysis firstBranch (mProperty_mRepeatBranchList) ;
    UpEnumerator_syntaxInstructionListForGrammarAnalysis firstBranchInstruction (firstBranch.current_mSyntaxInstructionList (HERE)) ;
    while (firstBranchInstruction.hasCurrentObject ()) {
      cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) firstBranchInstruction.current_mInstruction (HERE).ptr () ;
      macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      if (p == nullptr) {
        printf ("NULL pointer in '%s', line %d\n", __FILE__, __LINE__) ;
        exit (1) ;
      }else{
        p->buildRightDerivation (inTerminalSymbolsCount, inOriginalGrammarSymbolCount, derivation) ;
      }
      firstBranchInstruction.gotoNextObject () ;
    }
  //--- insert <T> production call
    const int32_t idx = ((int32_t) mProperty_mAddedNonTerminalSymbolIndex.uintValue ()) + inOriginalGrammarSymbolCount ;
    derivation.appendObject ((int32_t) idx) ;
    GrammarProduction p (inSyntaxComponentName,
                   mProperty_mStartLocation.startLocation ().lineNumber (),
                   mProperty_mStartLocation.startLocation ().columnNumber (),
                   idx,
                   derivation,
                   0) ;
    ioProductions.mProductionArray.appendObjectUsingSwap (p) ;
    currentBranch.gotoNextObject () ;
  }

//--- Construire les productions issues des instructions choix et repeter
  currentBranch.rewind () ;
  while (currentBranch.hasCurrentObject ()) {
    UpEnumerator_syntaxInstructionListForGrammarAnalysis instruction (currentBranch.current_mSyntaxInstructionList (HERE)) ;
    while (instruction.hasCurrentObject ()) {
      cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) instruction.current_mInstruction (HERE).ptr () ;
      macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      if (p == nullptr) {
        printf ("NULL pointer in '%s', line %d\n", __FILE__, __LINE__) ;
        exit (1) ;
      }else{
        p->buildSelectAndRepeatProductions (inTerminalSymbolsCount,
                                            inOriginalGrammarSymbolCount,
                                            inSyntaxComponentName,
                                            ioProductions) ;
      }
      instruction.gotoNextObject () ;
    }
    currentBranch.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void cPtr_terminalInstructionForGrammarAnalysis::
buildSelectAndRepeatProductions (const int32_t /* inTerminalSymbolsCount */,
                                 const int32_t /* inOriginalGrammarSymbolCount */,
                                 const String & /* inSyntaxComponentName */,
                                 PureBNFproductionsList  & /* ioProductions */) const {
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonTerminalInstructionForGrammarAnalysis::
buildSelectAndRepeatProductions (const int32_t /* inTerminalSymbolsCount */,
                                 const int32_t /* inOriginalGrammarSymbolCount */,
                                 const String & /* inSyntaxComponentName */,
                                 PureBNFproductionsList  & /* ioProductions */) const {
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//--------------------------------------------------------------------------------------------------

void
buildPureBNFgrammar (const GGS_syntaxComponentListForGrammarAnalysis & inSyntaxComponentsList,
                     GrammarVocabulary & ioVocabulary,
                     PureBNFproductionsList & ioProductions) {
//--- Fix new non terminal symbols index and names
  UpEnumerator_syntaxComponentListForGrammarAnalysis currentComponent (inSyntaxComponentsList) ;
  while (currentComponent.hasCurrentObject ()) {
    UpEnumerator_productionRuleListForGrammarAnalysis currentRule (currentComponent.current_mProductionRulesList (HERE)) ;
    int32_t count = 0 ;
    while (currentRule.hasCurrentObject ()) {
      fixNewNonterminalSymbolsForList (currentRule.current_mInstructionList (HERE),
                                       ioVocabulary,
                                       currentComponent.current_mSyntaxComponentName (HERE).mProperty_string.stringValue (),
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
    UpEnumerator_productionRuleListForGrammarAnalysis currentRule (currentComponent.current_mProductionRulesList (HERE)) ;
    while (currentRule.hasCurrentObject ()) {
      GenericUniqueArray <int32_t> derivation ;
      UpEnumerator_syntaxInstructionListForGrammarAnalysis instruction (currentRule.current_mInstructionList (HERE)) ;
      while (instruction.hasCurrentObject ()) {
        cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) instruction.current_mInstruction (HERE).ptr () ;
        macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
        if (p == nullptr) {
          printf ("NULL pointer in '%s', line %d\n", __FILE__, __LINE__) ;
          exit (1) ;
        }else{
          p->buildRightDerivation (terminalSymbolsCount, orginalGrammarSymbolCount, derivation) ;
        }
        instruction.gotoNextObject () ;
      }
      GrammarProduction p (currentComponent.current_mSyntaxComponentName (HERE).mProperty_string.stringValue (),
                     currentRule.current_mLeftNonterminalSymbol (HERE).mProperty_location.startLocation ().lineNumber (),
                     currentRule.current_mLeftNonterminalSymbol (HERE).mProperty_location.startLocation ().columnNumber (),
                     terminalSymbolsCount + (int32_t) currentRule.current_mLeftNonterminalSymbolIndex (HERE).uintValue (),
                     derivation,
                     currentRule.current_mProductionIndex (HERE).uintValue ()) ;
      ioProductions.mProductionArray.appendObjectUsingSwap (p) ;
      currentRule.gotoNextObject () ;
    }
    currentComponent.gotoNextObject () ;
  }

//--- Build pure BNF productions from 'repeat' and 'select' instructions
  currentComponent.rewind () ;
  while (currentComponent.hasCurrentObject ()) {
    UpEnumerator_productionRuleListForGrammarAnalysis currentRule (currentComponent.current_mProductionRulesList (HERE)) ;
    while (currentRule.hasCurrentObject ()) {
      UpEnumerator_syntaxInstructionListForGrammarAnalysis instruction (currentRule.current_mInstructionList (HERE)) ;
      while (instruction.hasCurrentObject ()) {
        cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) instruction.current_mInstruction (HERE).ptr () ;
        macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
        if (p == nullptr) {
          printf ("NULL pointer in '%s', line %d\n", __FILE__, __LINE__) ;
          exit (1) ;
        }else{
          p->buildSelectAndRepeatProductions (terminalSymbolsCount,
                                              orginalGrammarSymbolCount,
                                              currentComponent.current_mSyntaxComponentName (HERE).mProperty_string.stringValue (),
                                              ioProductions) ;
        }
        instruction.gotoNextObject () ;
      }
      currentRule.gotoNextObject () ;
    }
    currentComponent.gotoNextObject () ;
  }

//--- Augment grammar by a new non terminal symbol (denoted <>), and...
  ioVocabulary.addAugmentedSymbol () ;
//--- ... add the production <> -> <start_symbol>
  { GenericUniqueArray <int32_t> derivation ;
    derivation.appendObject ((int32_t) ioVocabulary.getStartSymbol ()) ;
    GrammarProduction p ("",
                   0,
                   0,
                   ioVocabulary.getAllSymbolsCount () - 1,
                   derivation,
                   0) ;
    ioProductions.mProductionArray.appendObjectUsingSwap (p) ;
  }
//--- Build productions arraies
  ioProductions.buildProductionsArray (ioVocabulary.getTerminalSymbolsCount (),
                                       ioVocabulary.getNonTerminalSymbolsCount ()) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//--------------------------------------------------------------------------------------------------

void
printPureBNFgrammarInBNFfile (HTMLString & inHTMLfile,
                              const GrammarVocabulary & inVocabulary,
                              const PureBNFproductionsList & inProductions) {
  const int32_t productionsCount = inProductions.mProductionArray.count () ;
  inHTMLfile.addRawData ("<p><a name=\"pure_bnf\"></a>") ;
  inHTMLfile.appendCString ("Listing of the ") ;
  inHTMLfile.appendSigned (productionsCount) ;
  inHTMLfile.appendCString (" BNF production") ;
  inHTMLfile.appendString ((productionsCount > 1) ? "s" : "") ;
  inHTMLfile.appendCString (" :") ;
  inHTMLfile.addRawData ("</p>\n<table class=\"result\">") ;
  for (int32_t i=0 ; i<productionsCount ; i++) {
    const GrammarProduction & p = inProductions.mProductionArray (i COMMA_HERE) ;
    inHTMLfile.addRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    inHTMLfile.addRawData ("<a name=\"pure_bnf_") ;
    inHTMLfile.appendSigned (i) ;
    inHTMLfile.addRawData ("\">") ;
    inHTMLfile.appendSigned (i) ;
    inHTMLfile.addRawData ("</a></td><td class=\"result_line\">") ;
    inHTMLfile.appendCString ("rule ") ;
    inHTMLfile.addRawData ("<code>") ;
    inVocabulary.printInFile (inHTMLfile, p.leftNonTerminalIndex () COMMA_HERE) ;
    inHTMLfile.addRawData ("</code>") ;
    if (i == (productionsCount - 1)) {
      inHTMLfile.addRawData ("<br>") ;
      inHTMLfile.appendCString ("(added production)") ;
    }else{
      inHTMLfile.addRawData ("<br>") ;
      inHTMLfile.appendCString ("file '") ;
      inHTMLfile.appendString (p.sourceFileName ()) ;
      inHTMLfile.appendCString ("'") ;
      inHTMLfile.addRawData ("<br>") ;
      inHTMLfile.appendCString ("line ") ;
      inHTMLfile.appendSigned (p.lineDefinition ()) ;
    }
    inHTMLfile.addRawData ("</td><td><code>") ;
    for (int32_t d=0 ; d<p.derivationLength () ; d++) {
      if (d != 0) {
        inHTMLfile.addRawData ("<br>") ;
      }
      inVocabulary.printInFile (inHTMLfile, p.derivationAtIndex (d COMMA_HERE) COMMA_HERE) ;
    }
    inHTMLfile.addRawData ("</code></td></tr>") ;
  }
//--- Print vocabulary
  inHTMLfile.addRawData ("</table><p><a name=\"vocabulary\"></a></p>"
                            "<table class=\"result\">"
                            "<tr><td class=\"result_title\"colspan=\"2\">") ;
  inHTMLfile.appendCString ("Vocabulary") ;
  inHTMLfile.addRawData ("</td></tr>\n") ;
  for (int32_t s=0 ; s<inVocabulary.getAllSymbolsCount () ; s++) {
    inHTMLfile.addRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
    inHTMLfile.appendSigned (s) ;
    inHTMLfile.addRawData ("</td><td><code>") ;
    inVocabulary.printInFile (inHTMLfile, s COMMA_HERE) ;
    inHTMLfile.addRawData ("</code></td></tr>\n") ;
  }
    inHTMLfile.addRawData ("</table>") ;
}

//--------------------------------------------------------------------------------------------------

void PureBNFproductionsList::buildProductionsArray (const int32_t inTerminalSymbolsCount,
                                                     const int32_t inNonTerminalSymbolsCount) {
  const int32_t nombreProductions = mProductionArray.count () ;

//--- Construire les tableaux d'indices
  { GenericUniqueArray <int32_t> temp (inNonTerminalSymbolsCount, -1 COMMA_HERE) ;
    swap (tableauIndicePremiereProduction, temp) ;
  }
  { GenericUniqueArray <int32_t> temp (inNonTerminalSymbolsCount, -1 COMMA_HERE) ;
    swap (tableauIndiceDerniereProduction, temp) ;
  }

//--- Construire le tableau indiquant si une production a ete traitee et le tableau des indirections
  GenericUniqueArray <bool> productionTraitee (nombreProductions, false COMMA_HERE) ;
  { GenericUniqueArray <int32_t> temp (nombreProductions, -1 COMMA_HERE) ;
    swap (tableauIndirectionProduction, temp) ;
  }

//--- Parcourir les productions
  int32_t indiceIndirection = 0 ;
  for (int32_t i=0 ; i<nombreProductions ; i++) {
    GrammarProduction & p = mProductionArray (i COMMA_HERE) ;
    if (! productionTraitee (i COMMA_HERE)) {
      productionTraitee.setObjectAtIndex (true, i COMMA_HERE) ;
      const int32_t g = ((int32_t) p.leftNonTerminalIndex ()) - inTerminalSymbolsCount ;
      tableauIndicePremiereProduction.setObjectAtIndex (indiceIndirection, g COMMA_HERE) ;
      tableauIndirectionProduction.setObjectAtIndex (i, indiceIndirection COMMA_HERE) ;
      for (int32_t j=i+1 ; j<nombreProductions ; j++) {
        GrammarProduction & pj = mProductionArray (j COMMA_HERE) ;
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

//--------------------------------------------------------------------------------------------------
