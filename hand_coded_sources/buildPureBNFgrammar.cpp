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

//---------------------------------------------------------------------------*

static void
fixNewNonterminalSymbolsForList (const GGS_L_ruleSyntaxSignature & inList,
                                 cVocabulary & ioVocabulary,
                                 const C_String & inSyntaxComponentName,
                                 sint32 & ioCount) {
  GGS_L_ruleSyntaxSignature::element_type * currentInstruction = inList.firstObject () ;
  while (currentInstruction != NULL) {
    macroValidPointer (currentInstruction) ;
    currentInstruction->mInstruction ()->fixNewNonterminalSymbols (ioVocabulary, inSyntaxComponentName, ioCount) ;
    currentInstruction = currentInstruction->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_T_repeatInstruction_forGrammarComponent::
fixNewNonterminalSymbols (cVocabulary & ioVocabulary,
                          const C_String & inSyntaxComponentName,
                          sint32 & ioCount) {
  mAddedNonterminalmSymbolIndex.mValue = (uint32) ioVocabulary.getNonTerminalSymbolsCount () ;

  ioVocabulary.addNonTerminalSymbol ("select_repeat_",
                                     inSyntaxComponentName,
                                     ioCount,
                                     true) ;
  ioCount ++ ;

  GGS_L_branchList_ForGrammarComponent::element_type * currentBranch = mRepeatList.firstObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    fixNewNonterminalSymbolsForList (currentBranch->mInstructionsList,
                                     ioVocabulary,
                                     inSyntaxComponentName,
                                     ioCount) ;
    currentBranch = currentBranch->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_T_selectInstruction_forGrammarComponent::
fixNewNonterminalSymbols (cVocabulary & ioVocabulary,
                          const C_String & inSyntaxComponentName,
                          sint32 & ioCount) {
  mAddedNonterminalmSymbolIndex.mValue = (uint32) ioVocabulary.getNonTerminalSymbolsCount () ;

  ioVocabulary.addNonTerminalSymbol ("select_",
                                     inSyntaxComponentName,
                                     ioCount,
                                     true) ;
  ioCount ++ ;

  GGS_L_branchList_ForGrammarComponent::element_type * currentBranch = mSelectList.firstObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    fixNewNonterminalSymbolsForList (currentBranch->mInstructionsList,
                                     ioVocabulary,
                                     inSyntaxComponentName,
                                     ioCount) ;
    currentBranch = currentBranch->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_T_nonterminalInstruction_forGrammarComponent::
fixNewNonterminalSymbols (cVocabulary & /* ioVocabulary */,
                          const C_String & /* inSyntaxComponentName */,
                          sint32 & /* ioCount */) {
}

//---------------------------------------------------------------------------*

void cPtr_T_terminalInstruction_forGrammarComponent::
fixNewNonterminalSymbols (cVocabulary & /* ioVocabulary */,
                          const C_String & /* inSyntaxComponentName */,
                          sint32 & /* ioCount */) {
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_T_terminalInstruction_forGrammarComponent::
buildRightDerivation (const sint32 /* inTerminalSymbolsCount */,
                      TC_UniqueArray <sint16> & ioInstructionsList) {
  ioInstructionsList.addObject ((sint16) mTerminalSymbolIndex.mValue) ;
}

//---------------------------------------------------------------------------*

void cPtr_T_nonterminalInstruction_forGrammarComponent::
buildRightDerivation (const sint32 inTerminalSymbolsCount,
                      TC_UniqueArray <sint16> & ioInstructionsList) {

  ioInstructionsList.addObject ((sint16) (mNonterminalSymbolIndex.mValue
                                           + inTerminalSymbolsCount)) ;
}

//---------------------------------------------------------------------------*

void cPtr_T_selectInstruction_forGrammarComponent::
buildRightDerivation (const sint32 inTerminalSymbolsCount,
                      TC_UniqueArray <sint16> & ioInstructionsList) {
  ioInstructionsList.addObject ((sint16) (mAddedNonterminalmSymbolIndex.mValue
                                           + inTerminalSymbolsCount)) ;
}

//---------------------------------------------------------------------------*

void cPtr_T_repeatInstruction_forGrammarComponent::
buildRightDerivation (const sint32 inTerminalSymbolsCount,
                      TC_UniqueArray <sint16> & ioInstructionsList) {
  GGS_L_branchList_ForGrammarComponent::element_type * firstBranch = mRepeatList.firstObject () ;
  macroValidPointer (firstBranch) ;
  GGS_L_ruleSyntaxSignature::element_type * instruction = firstBranch->mInstructionsList.firstObject () ;
  while (instruction != NULL) {
    instruction->mInstruction ()->buildRightDerivation (inTerminalSymbolsCount, ioInstructionsList) ;
    instruction = instruction->nextObject () ;
  }
  ioInstructionsList.addObject ((sint16) (mAddedNonterminalmSymbolIndex.mValue
                                           + inTerminalSymbolsCount)) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------*

void cPtr_T_selectInstruction_forGrammarComponent::
buildSelectAndRepeatProductions (const sint32 inTerminalSymbolsCount,
                                 const C_String & inSyntaxComponentName,
                                 cPureBNFproductionsList & ioProductions) {
// A ; choix X ou Y ou Z ... fin choix ; B
//  'aNumeroNonTerminauxRepeter' désigne le nouveau non terminal 'choix_xx_xx', noté <W>,
//     et on engendre les productions :
//          <W> = X
//          <W> = Y
//          <W> = Z, ...
//     la production analysée devient : A ; <W> ; B

 GGS_L_branchList_ForGrammarComponent::element_type * currentBranch = mSelectList.firstObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    TC_UniqueArray <sint16> derivation ;
    GGS_L_ruleSyntaxSignature::element_type * instruction = currentBranch->mInstructionsList.firstObject () ;
    while (instruction != NULL) {
       instruction->mInstruction ()->buildRightDerivation (inTerminalSymbolsCount, derivation) ;
       instruction = instruction->nextObject () ;
    }
    cProduction p ;
    p.mSourceFileName = inSyntaxComponentName ;
    p.aLigneDefinition = mStartLocation.currentLineNumber () ;
    p.aColonneDefinition = mStartLocation.currentColumnNumber () ;
    p.aNumeroNonTerminalGauche = ((sint32) mAddedNonterminalmSymbolIndex.mValue) + inTerminalSymbolsCount ;
    swap (p.aDerivation, derivation) ;
    ioProductions.insertByExchange (p) ;
    currentBranch = currentBranch->nextObject () ;
  }

//--- Construire les productions issues des instructions choix et repeter
  currentBranch = mSelectList.firstObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    GGS_L_ruleSyntaxSignature::element_type * instruction = currentBranch->mInstructionsList.firstObject () ;
    while (instruction != NULL) {
      instruction->mInstruction ()->buildSelectAndRepeatProductions (inTerminalSymbolsCount,
                                                                     inSyntaxComponentName,
                                                                     ioProductions) ;
      instruction = instruction->nextObject () ;
    }
    currentBranch = currentBranch->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_T_repeatInstruction_forGrammarComponent::
buildSelectAndRepeatProductions (const sint32 inTerminalSymbolsCount,
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
    p.aLigneDefinition = mStartLocation.currentLineNumber () ;
    p.aColonneDefinition = mStartLocation.currentColumnNumber () ;
    p.aNumeroNonTerminalGauche = ((sint32) mAddedNonterminalmSymbolIndex.mValue) + inTerminalSymbolsCount ;
    ioProductions.insertByExchange (p) ;
  }

//--- Insert a new production for every 'while' branch
  GGS_L_branchList_ForGrammarComponent::element_type * firstBranch = mRepeatList.firstObject () ;
  macroValidPointer (firstBranch) ;
  GGS_L_branchList_ForGrammarComponent::element_type * currentBranch = firstBranch->nextObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    TC_UniqueArray <sint16> derivation ;
  //--- insert branch instructions
    GGS_L_ruleSyntaxSignature::element_type * instruction = currentBranch->mInstructionsList.firstObject () ;
    while (instruction != NULL) {
       instruction->mInstruction ()->buildRightDerivation (inTerminalSymbolsCount, derivation) ;
       instruction = instruction->nextObject () ;
    }
  //--- insert sequence from X
    instruction = firstBranch->mInstructionsList.firstObject () ;
    while (instruction != NULL) {
      instruction->mInstruction ()->buildRightDerivation (inTerminalSymbolsCount, derivation) ;
      instruction = instruction->nextObject () ;
    }
  //--- insert <T> production call
    derivation.addObject ((sint16) (mAddedNonterminalmSymbolIndex.mValue + inTerminalSymbolsCount)) ;
    cProduction p ;
    p.mSourceFileName = inSyntaxComponentName ;
    p.aLigneDefinition = mStartLocation.currentLineNumber () ;
    p.aColonneDefinition = mStartLocation.currentColumnNumber () ;
    p.aNumeroNonTerminalGauche = ((sint32) mAddedNonterminalmSymbolIndex.mValue) + inTerminalSymbolsCount ;
    swap (p.aDerivation, derivation) ;
    ioProductions.insertByExchange (p) ;
    currentBranch = currentBranch->nextObject () ;
  }

//--- Construire les productions issues des instructions choix et repeter
  currentBranch = mRepeatList.firstObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    GGS_L_ruleSyntaxSignature::element_type * instruction = currentBranch->mInstructionsList.firstObject () ;
    while (instruction != NULL) {
      macroValidPointer (instruction) ;
      instruction->mInstruction ()->buildSelectAndRepeatProductions (inTerminalSymbolsCount,
                                                                     inSyntaxComponentName,
                                                                     ioProductions) ;
      instruction = instruction->nextObject () ;
    }
    currentBranch = currentBranch->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_T_terminalInstruction_forGrammarComponent::
buildSelectAndRepeatProductions (const sint32 /* inTerminalSymbolsCount */,
                                 const C_String & /* inSyntaxComponentName */,
                                 cPureBNFproductionsList  & /* ioProductions */) {
}

//---------------------------------------------------------------------------*

void cPtr_T_nonterminalInstruction_forGrammarComponent::
buildSelectAndRepeatProductions (const sint32 /* inTerminalSymbolsCount */,
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
buildPureBNFgrammar (const GGS_L_syntaxComponents_ForGrammar & inSyntaxComponentsList,
                     cVocabulary & ioVocabulary,
                     cPureBNFproductionsList & ioProductions) {
//--- Fix new non terminal symbols index and names
  GGS_L_syntaxComponents_ForGrammar::element_type * currentComponent = inSyntaxComponentsList.firstObject () ;
  while (currentComponent != NULL) {
    macroValidPointer (currentComponent) ;
    GGS_L_productionRules_ForGrammarComponent::element_type * currentRule = currentComponent->mProductionRulesList.firstObject () ;
    sint32 count = 0 ;
    while (currentRule != NULL) {
      macroValidPointer (currentRule) ;
      fixNewNonterminalSymbolsForList (currentRule->mInstructionsList,
                                       ioVocabulary,
                                       currentComponent->mSyntaxComponentName,
                                       count) ;
      currentRule = currentRule->nextObject () ;
    }
    currentComponent = currentComponent->nextObject () ;
  }

//--- Build pure BNF productions from original grammar productions
  const sint32 terminalSymbolsCount = ioVocabulary.getTerminalSymbolsCount () ;
  currentComponent = inSyntaxComponentsList.firstObject () ;
  while (currentComponent != NULL) {
    macroValidPointer (currentComponent) ;
    GGS_L_productionRules_ForGrammarComponent::element_type * currentRule = currentComponent->mProductionRulesList.firstObject () ;
    while (currentRule != NULL) {
      macroValidPointer (currentRule) ;
      TC_UniqueArray <sint16> derivation ;
      GGS_L_ruleSyntaxSignature::element_type * instruction = currentRule->mInstructionsList.firstObject () ;
      while (instruction != NULL) {
        macroValidPointer (instruction) ;
        instruction->mInstruction ()->buildRightDerivation (terminalSymbolsCount, derivation) ;
        instruction = instruction->nextObject () ;
      }
      cProduction p ;
      p.mSourceFileName = currentComponent->mSyntaxComponentName ;
      p.aLigneDefinition = currentRule->mLeftNonterminalSymbol.currentLineNumber () ;
      p.aColonneDefinition = currentRule->mLeftNonterminalSymbol.currentColumnNumber () ;
      p.aNumeroNonTerminalGauche = terminalSymbolsCount
                                 + (sint32) currentRule->mLeftNonterminalSymbolIndex.mValue ;
      swap (p.aDerivation, derivation) ;
      ioProductions.insertByExchange (p) ;
      currentRule = currentRule->nextObject () ;
    }
    currentComponent = currentComponent->nextObject () ;
  }

//--- Build pure BNF productions from 'repeat' and 'select' instructions
  currentComponent = inSyntaxComponentsList.firstObject () ;
  while (currentComponent != NULL) {
    macroValidPointer (currentComponent) ;
    GGS_L_productionRules_ForGrammarComponent::element_type * currentRule = currentComponent->mProductionRulesList.firstObject () ;
    while (currentRule != NULL) {
      macroValidPointer (currentRule) ;
      GGS_L_ruleSyntaxSignature::element_type * instruction = currentRule->mInstructionsList.firstObject () ;
      while (instruction != NULL) {
        macroValidPointer (instruction) ;
        instruction->mInstruction ()->buildSelectAndRepeatProductions (terminalSymbolsCount,
                                                     currentComponent->mSyntaxComponentName,
                                                                              ioProductions) ;
        instruction = instruction->nextObject () ;
      }
      currentRule = currentRule->nextObject () ;
    }
    currentComponent = currentComponent->nextObject () ;
  }

//--- Augment grammar by a new non terminal symbol (denoted <>), and...
  ioVocabulary.addAugmentedSymbol () ;
//--- ... add the production <> -> <start_symbol>
  { cProduction p ;
    p.aLigneDefinition = 0 ;
    p.aColonneDefinition = 0 ;
    p.aNumeroNonTerminalGauche = ioVocabulary.getAllSymbolsCount () - 1 ;
    TC_UniqueArray <sint16> derivation ;
    derivation.addObject ((sint16) ioVocabulary.getStartSymbol ()) ;
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
  const sint32 productionsCount = inProductions.length () ;
  inHTMLfile.outputRawData ("<p><a name=\"pure_bnf\"></a>") ;
  inHTMLfile << "Listing of the "
             << productionsCount
             << " BNF productions :" ;
  inHTMLfile.outputRawData ("</p>\n<table class=\"result\">") ;
  for (sint32 i=0 ; i<productionsCount ; i++) {
    const cProduction & p = inProductions (i COMMA_HERE) ;
    inHTMLfile.outputRawData ("<tr class=\"result_line\"><td>") ;
    inHTMLfile.outputRawData ("<a name=\"pure_bnf_") ;
    inHTMLfile << i ;
    inHTMLfile.outputRawData ("\">") ;
    inHTMLfile << i ;
    inHTMLfile.outputRawData ("</a></td><td>") ;
    inHTMLfile << "rule " ;
    inHTMLfile.outputRawData ("<code>") ;
    inVocabulary.printInFile (inHTMLfile, p.aNumeroNonTerminalGauche COMMA_HERE) ;
    inHTMLfile.outputRawData ("</code><br>") ;
    if (i == (productionsCount - 1)) {
      inHTMLfile << " (added production)\n" ;
    }else{
      inHTMLfile << "file '"
                << p.mSourceFileName
                << "', line "
                << p.aLigneDefinition ;
    }
    inHTMLfile.outputRawData ("</td><td><code>") ;
    for (sint32 d=0 ; d<p.aDerivation.count () ; d++) {
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
  for (sint32 s=0 ; s<inVocabulary.getAllSymbolsCount () ; s++) {
    inHTMLfile.outputRawData ("<tr class=\"result_line\"><td>") ;
    inHTMLfile << s ;
    inHTMLfile.outputRawData ("</td><td><code>") ;
    inVocabulary.printInFile (inHTMLfile, s COMMA_HERE) ;
    inHTMLfile.outputRawData ("</code></td></tr>\n") ;
  }
    inHTMLfile.outputRawData ("</table>") ;
}

//---------------------------------------------------------------------------*

void cPureBNFproductionsList::
buildProductionsArray (const sint32 inTerminalSymbolsCount,
                       const sint32 inNonTerminalSymbolsCount) {
  const sint32 nombreProductions = length () ;

//--- Construire les tableaux d'indices
  { TC_UniqueArray <sint32> temp (inNonTerminalSymbolsCount, -1 COMMA_HERE) ;
    swap (tableauIndicePremiereProduction, temp) ;
  }
  { TC_UniqueArray <sint32> temp (inNonTerminalSymbolsCount, -1 COMMA_HERE) ;
    swap (tableauIndiceDerniereProduction, temp) ;
  }

//--- Construire le tableau indiquant si une production a été traitée et le tableau des indirections
  TC_UniqueArray <bool> productionTraitee (nombreProductions, false COMMA_HERE) ;
  { TC_UniqueArray <sint32> temp (nombreProductions, -1 COMMA_HERE) ;
    swap (tableauIndirectionProduction, temp) ;
  }

//--- Parcourir les productions
  sint16 indiceIndirection = 0 ;
  for (sint32 i=0 ; i<nombreProductions ; i++) {
    cProduction & p = this->operator () (i COMMA_HERE) ;
    if (! productionTraitee (i COMMA_HERE)) {
      productionTraitee (i COMMA_HERE) = true ;
      const sint32 g = ((sint32) p.aNumeroNonTerminalGauche) - inTerminalSymbolsCount ;
      tableauIndicePremiereProduction (g COMMA_HERE) = indiceIndirection ;
      tableauIndirectionProduction (indiceIndirection COMMA_HERE) = i ;
      for (sint32 j=i+1 ; j<nombreProductions ; j++) {
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
