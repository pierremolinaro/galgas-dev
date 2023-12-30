//--------------------------------------------------------------------------------------------------
//
// Routines for computing empty string derivations
//
//  Copyright (C) 1999, ..., 2016 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public  *
//  License as published by the Free Software Foundation.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#include "HTMLString.h"
#include "C_Relation.h"

//--------------------------------------------------------------------------------------------------

#include "empty_strings_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//--------------------------------------------------------------------------------------------------

static C_Relation
computeNonterminalSymbolsHavingEmptyDerivation (const cPureBNFproductionsList & inProductionRules,
                                                const C_RelationConfiguration & inConfiguration) {
  C_Relation nonterminalSymbolsHavingEmptyDerivation (inConfiguration, false) ;
  for (int32_t i=0 ; i<inProductionRules.mProductionArray.count () ; i++) {
    const cProduction & p = inProductionRules.mProductionArray (i COMMA_HERE) ;
    if (p.derivationLength () == 0) {
      nonterminalSymbolsHavingEmptyDerivation.orWith (C_Relation (inConfiguration, 0, C_BDD::kEqual, (uint32_t) p.leftNonTerminalIndex () COMMA_HERE) COMMA_HERE) ;
    }
  }

  return nonterminalSymbolsHavingEmptyDerivation ;
}

//--------------------------------------------------------------------------------------------------

static void
printNonterminalSymbolsHavingEmptyDerivation (const C_Relation & inNonterminalSymbolsHavingEmptyDerivation,
                                              HTMLString & inHTMLfile) {
  TC_UniqueArray <uint64_t> valueArray ;
  inNonterminalSymbolsHavingEmptyDerivation.getValueArray (valueArray) ;
  const int32_t n = valueArray.count () ;
  inHTMLfile.addRawData ("<p><a name=\"empty_strings\"></a>") ;
  if (n == 0) {
    inHTMLfile.addString (" no nonterminal symbols has a empty production.\n") ;
  }else if (n == 1) {
    inHTMLfile.addString (" 1 nonterminal symbols has a empty production:\n") ;
  }else{
    inHTMLfile.addSigned (n) ;
    inHTMLfile.addString (" nonterminal symbols have a empty production:\n") ;
  }
  inHTMLfile.addRawData ("</p>") ;
  if (n > 0) {
    inHTMLfile.addRawData ("<table class=\"result\">") ;
    for (int32_t i=0 ; i<valueArray.count () ; i++) {
      inHTMLfile.addRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
      inHTMLfile.addSigned (i) ;
      inHTMLfile.addRawData ("</td><td><code>") ;
      inHTMLfile.addString (inNonterminalSymbolsHavingEmptyDerivation.configuration().constantNameForVariableAndValue(0, (uint32_t) valueArray (i COMMA_HERE) COMMA_HERE)) ;
      inHTMLfile.addRawData ("</code></td></tr>\n") ;
    }
    inHTMLfile.addRawData ("</table>") ;
  }
}

//--------------------------------------------------------------------------------------------------

static C_Relation
computeNonterminalDerivingInEmptyString (const cPureBNFproductionsList & inProductionRules,
                                         const C_Relation & inNonTerminalHavingEmptyDerivation,
                                         TC_UniqueArray <bool> & outVocabulaireSeDerivantEnVide,
                                         const uint32_t inAllSymbolsCount,
                                         int32_t & outIterationsCount) {
  const int32_t productionCount = inProductionRules.mProductionArray.count () ;

  { TC_UniqueArray <bool> tempo ((int32_t) inAllSymbolsCount, false COMMA_HERE) ;
    swap (tempo, outVocabulaireSeDerivantEnVide) ;
  }

  TC_UniqueArray <bool> productionTraitee (productionCount, false COMMA_HERE) ;

  outIterationsCount = 0 ;
  bool onProgresse = true ;
  while (onProgresse) {
    onProgresse = false ;
    outIterationsCount ++ ;
    for (int32_t i=0 ; i<productionCount ; i++) {
      const cProduction & p = inProductionRules.mProductionArray (i COMMA_HERE) ;
      if (! productionTraitee (i COMMA_HERE)) {
        const int32_t n = p.derivationLength () ;
        bool estVide = true ;
        for (int32_t j=0 ; (j<n) && estVide ; j++) {
          estVide = outVocabulaireSeDerivantEnVide (p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) ;
        }
        if (estVide) {
          outVocabulaireSeDerivantEnVide (p.leftNonTerminalIndex () COMMA_HERE) = true ;
          productionTraitee (i COMMA_HERE) = true ;
          onProgresse = true ;
        }
      }
    }
  }

//--- Contruire le bdd
  C_Relation result = inNonTerminalHavingEmptyDerivation ;
  for (uint32_t i=0 ; i<inAllSymbolsCount ; i++) {
    if (outVocabulaireSeDerivantEnVide ((int32_t) i COMMA_HERE)) {
      result.orWith (C_Relation (inNonTerminalHavingEmptyDerivation.configuration(), 0, C_BDD::kEqual, i COMMA_HERE) COMMA_HERE) ;
    }
  }

  return result ;
}

//--------------------------------------------------------------------------------------------------

static void
printNonterminalDerivingInEmptyString (const C_Relation & inVocabularyDerivingToEmpty,
                                       const C_Relation & inNonTerminalHavingEmptyDerivation,
                                       HTMLString & ioHTMLFileContents,
                                       const bool inPopulateHTMLstring,
                                       const int32_t inIterationsCount,
                                       const bool inVerboseOptionOn) {
  const uint64_t t = inVocabularyDerivingToEmpty.value64Count () ;
  if (inPopulateHTMLstring) {
    ioHTMLFileContents.addRawData ("<p>") ;
    ioHTMLFileContents.addString ("Nonterminal symbols deriving indirectly in empty string : calculus in ") ;
    ioHTMLFileContents.addSigned (inIterationsCount) ;
    ioHTMLFileContents.addString (" iterations.\n") ;
    ioHTMLFileContents.addRawData ("</p>") ;
    const C_Relation newNonterminal = inVocabularyDerivingToEmpty.andOp (~ inNonTerminalHavingEmptyDerivation COMMA_HERE) ;
    const uint64_t n = newNonterminal.value64Count () ;
    if (n == 0) {
      ioHTMLFileContents.addRawData ("<p>") ;
      ioHTMLFileContents.addString ("No more than those deriving directly to the empty string.\n") ;
      ioHTMLFileContents.addRawData ("</p>") ;
    }else{
      ioHTMLFileContents.addRawData ("<p>") ;
      ioHTMLFileContents.addUnsigned (n) ;
      ioHTMLFileContents.addString (" nonterminal symbol(s) in addition to those deriving directly to the empty string :\n") ;
      ioHTMLFileContents.addRawData ("</p>") ;
      TC_UniqueArray <uint64_t> nonTerminalArray ;
      newNonterminal.getValueArray (nonTerminalArray) ;
      int32_t index = 0 ;
      ioHTMLFileContents.addRawData ("<table class=\"result\">") ;
      for (int32_t i=0 ; i<nonTerminalArray.count () ; i++) {
        if (nonTerminalArray (i COMMA_HERE)) {
          ioHTMLFileContents.addRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
          ioHTMLFileContents.addSigned (index) ;
          index ++ ;
          ioHTMLFileContents.addRawData ("</td><td><code>") ;
          ioHTMLFileContents.addString (newNonterminal.configuration().constantNameForVariableAndValue(0, (uint32_t) nonTerminalArray (i COMMA_HERE) COMMA_HERE)) ;
          ioHTMLFileContents.addRawData ("</code></td></tr>") ;
        }
      }
      ioHTMLFileContents.addRawData ("</table>") ;
    }
  }
  if (inVerboseOptionOn) {
    gCout.addUnsigned (t) ;
    gCout.addString (".\n") ;
    gCout.flush () ;
  }
}

//--------------------------------------------------------------------------------------------------

C_Relation
empty_strings_computations (const cPureBNFproductionsList & inPureBNFproductions,
                            HTMLString & ioHTMLFileContents,
                            const bool inPopulateHTMLstring,
                            TC_UniqueArray <bool> & outVocabularyDerivingToEmpty_Array,
                            const C_RelationConfiguration & inVocabularyConfiguration,
                            const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    gCout.addString ("  Nonterminal symbols deriving in empty... ") ;
    gCout.flush () ;
  }
//--- Print in BNF file
  if (inPopulateHTMLstring) {
    ioHTMLFileContents.addCppTitleComment ("Searching for nonterminal symbols deriving in empty string", "title") ;
  }

  const C_Relation nonTerminalHavingEmptyDerivation
    = computeNonterminalSymbolsHavingEmptyDerivation (inPureBNFproductions,
                                                      inVocabularyConfiguration) ;
  if (inPopulateHTMLstring) {
    printNonterminalSymbolsHavingEmptyDerivation (nonTerminalHavingEmptyDerivation, ioHTMLFileContents) ;
  }

//--- Compute non terminal symbol deriving in empty string
  const uint32_t allSymbolCount = inVocabularyConfiguration.constantCountForVariable (0 COMMA_HERE) ;

  int32_t iterationCount = 0 ;
  const C_Relation vocabularyDerivingToEmpty
     = computeNonterminalDerivingInEmptyString (inPureBNFproductions,
                                                nonTerminalHavingEmptyDerivation,
                                                outVocabularyDerivingToEmpty_Array,
                                                allSymbolCount,
                                                iterationCount) ;

  printNonterminalDerivingInEmptyString (vocabularyDerivingToEmpty,
                                         nonTerminalHavingEmptyDerivation,
                                         ioHTMLFileContents,
                                         inPopulateHTMLstring,
                                         iterationCount,
                                         inVerboseOptionOn) ;
  return vocabularyDerivingToEmpty ;
}

//--------------------------------------------------------------------------------------------------
