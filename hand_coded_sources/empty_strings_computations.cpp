//-----------------------------------------------------------------------------*
//                                                                             *
// Routines for computing empty string derivations                             *
//                                                                             *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                   *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                      *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                             *
//  This program is free software; you can redistribute it and/or modify it    *
//  under the terms of the GNU General Public License as published by the      *
//  Free Software Foundation.                                                  *
//                                                                             *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//  more details.                                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

#include "files/C_HTML_FileWrite.h"
#include "bdd/C_Relation.h"

#include "bdd/C_BDD_Set1.h"

//-----------------------------------------------------------------------------*

#include "empty_strings_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//-----------------------------------------------------------------------------*

/*static C_BDD_Set1
EXcomputeNonterminalSymbolsHavingEmptyDerivation (const cPureBNFproductionsList & inProductionRules,
                                                  const C_BDD_Descriptor & inDescriptor) { 
  C_BDD_Set1 nonterminalSymbolsHavingEmptyDerivation (inDescriptor) ;
  C_BDD_Set1 temp (inDescriptor);
  for (int32_t i=0 ; i<inProductionRules.length () ; i++) {
    const cProduction & p = inProductionRules (i COMMA_HERE) ;
    if (p.derivationLength () == 0) {
      temp.init (C_BDD::kEqual, (uint32_t) p.leftNonTerminalIndex ()) ;
      nonterminalSymbolsHavingEmptyDerivation |= temp ;
    }
  }

  return nonterminalSymbolsHavingEmptyDerivation ;
}
*/
//-----------------------------------------------------------------------------*

static C_Relation
computeNonterminalSymbolsHavingEmptyDerivation (const cPureBNFproductionsList & inProductionRules,
                                                const C_RelationConfiguration & inConfiguration) { 
  C_Relation nonterminalSymbolsHavingEmptyDerivation (inConfiguration, false) ;
  for (int32_t i=0 ; i<inProductionRules.length () ; i++) {
    const cProduction & p = inProductionRules (i COMMA_HERE) ;
    if (p.derivationLength () == 0) {
      nonterminalSymbolsHavingEmptyDerivation.orWith (C_Relation (inConfiguration, 0, C_BDD::kEqual, (uint32_t) p.leftNonTerminalIndex () COMMA_HERE) COMMA_HERE) ;
    }
  }

  return nonterminalSymbolsHavingEmptyDerivation ;
}
  
//-----------------------------------------------------------------------------*

static void
printNonterminalSymbolsHavingEmptyDerivation (const C_Relation & inNonterminalSymbolsHavingEmptyDerivation,
                                              C_HTML_FileWrite & inHTMLfile) {
  TC_UniqueArray <uint64_t> valueArray ;
  inNonterminalSymbolsHavingEmptyDerivation.getValueArray (valueArray) ;
  const int32_t n = valueArray.count () ;
  inHTMLfile.outputRawData ("<p><a name=\"empty_strings\"></a>") ;
  if (n == 0) {
    inHTMLfile << " no nonterminal symbols has a empty production.\n" ;
  }else if (n == 1) {
    inHTMLfile << " 1 nonterminal symbols has a empty production:\n" ;
  }else{
    inHTMLfile.appendSigned (n) ;
    inHTMLfile << " nonterminal symbols have a empty production:\n" ;
  }
  inHTMLfile.outputRawData ("</p>") ;
  if (n > 0) {
    inHTMLfile.outputRawData ("<table class=\"result\">") ;
    for (int32_t i=0 ; i<valueArray.count () ; i++) {
      inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
      inHTMLfile.appendSigned (i) ;
      inHTMLfile.outputRawData ("</td><td><code>") ;
      inHTMLfile << inNonterminalSymbolsHavingEmptyDerivation.configuration().constantNameForVariableAndValue(0, (uint32_t) valueArray (i COMMA_HERE) COMMA_HERE) ;
      inHTMLfile.outputRawData ("</code></td></tr>\n") ;
    }
    inHTMLfile.outputRawData ("</table>") ;
  }
}

//-----------------------------------------------------------------------------*

static C_Relation
computeNonterminalDerivingInEmptyString (const cPureBNFproductionsList & inProductionRules,
                                         const C_Relation & inNonTerminalHavingEmptyDerivation,
                                         TC_UniqueArray <bool> & outVocabulaireSeDerivantEnVide, 
                                         const uint32_t inAllSymbolsCount,
                                         int32_t & outIterationsCount) {
  const int32_t productionCount = inProductionRules.length () ;
  
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
      const cProduction & p = inProductionRules (i COMMA_HERE) ;
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

//-----------------------------------------------------------------------------*

/*static C_BDD_Set1
computeNonterminalDerivingInEmptyStringEX (const cPureBNFproductionsList & inProductionRules,
                                         const C_BDD_Descriptor & inDescriptor,
                                         TC_UniqueArray <bool> & vocabulaireSeDerivantEnVide, 
                                         const uint32_t inAllSymbolsCount,
                                         int32_t & outIterationsCount) {
  { TC_UniqueArray <bool> tempo ((int32_t) inAllSymbolsCount, false COMMA_HERE) ;
    swap (tempo, vocabulaireSeDerivantEnVide) ;
  }

  const int32_t nombreDeProductions = inProductionRules.length () ;
  TC_UniqueArray <bool> productionTraitee (nombreDeProductions, false COMMA_HERE) ;

  outIterationsCount = 0 ;
  bool onProgresse = true ;
  while (onProgresse) {
    onProgresse = false ;
    outIterationsCount ++ ;
    for (int32_t i=0 ; i<nombreDeProductions ; i++) {
      const cProduction & p = inProductionRules (i COMMA_HERE) ;
      if (! productionTraitee (i COMMA_HERE)) {
        const int32_t n = p.derivationLength () ;
        bool estVide = true ;
        for (int32_t j=0 ; (j<n) && estVide ; j++) {
          estVide = vocabulaireSeDerivantEnVide (p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) ;
        }
        if (estVide) {
          vocabulaireSeDerivantEnVide (p.leftNonTerminalIndex () COMMA_HERE) = true ;
          productionTraitee (i COMMA_HERE) = true ;
          onProgresse = true ;
        }
      }
    }
  }
  
//--- Contruire le bdd
  C_BDD_Set1 nonTerminauxSeDerivantEnVide (inDescriptor) ;
  C_BDD_Set1 temp (inDescriptor) ;
  for (uint32_t i=0 ; i<inAllSymbolsCount ; i++) {
    if (vocabulaireSeDerivantEnVide ((int32_t) i COMMA_HERE)) {
      temp.init (C_BDD::kEqual, i) ;
      nonTerminauxSeDerivantEnVide |= temp ;
    }
  }

  return nonTerminauxSeDerivantEnVide ;
}
*/
//-----------------------------------------------------------------------------*

static void
printNonterminalDerivingInEmptyString (const C_Relation & inVocabularyDerivingToEmpty,
                                       const C_Relation & inNonTerminalHavingEmptyDerivation,
                                       C_HTML_FileWrite * inHTMLfile,
                                       const int32_t inIterationsCount,
                                       const bool inVerboseOptionOn) { 
  const uint64_t t = inVocabularyDerivingToEmpty.value64Count () ;
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p>") ;
    *inHTMLfile << "Nonterminal symbols deriving indirectly in empty string : calculus in " ;
    inHTMLfile->appendSigned (inIterationsCount) ;
    *inHTMLfile << " iterations.\n" ;
    inHTMLfile->outputRawData ("</p>") ;
    const C_Relation newNonterminal = inVocabularyDerivingToEmpty.andOp (~ inNonTerminalHavingEmptyDerivation COMMA_HERE) ;
    const uint64_t n = newNonterminal.value64Count () ;
    if (n == 0) {
      inHTMLfile->outputRawData ("<p>") ;
      *inHTMLfile << "No more than those deriving directly to the empty string.\n" ;
      inHTMLfile->outputRawData ("</p>") ;
    }else{
      inHTMLfile->outputRawData ("<p>") ;
      inHTMLfile->appendUnsigned (n) ;
      inHTMLfile->appendCString (" nonterminal symbol(s) in addition to those deriving directly to the empty string :\n") ;
      inHTMLfile->outputRawData ("</p>") ;
      TC_UniqueArray <uint64_t> nonTerminalArray ;
      newNonterminal.getValueArray (nonTerminalArray) ;
      int32_t index = 0 ;
      inHTMLfile->outputRawData ("<table class=\"result\">") ;
      for (int32_t i=0 ; i<nonTerminalArray.count () ; i++) {
        if (nonTerminalArray (i COMMA_HERE)) {
          inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
          *inHTMLfile << cStringWithSigned (index) ;
          index ++ ;
          inHTMLfile->outputRawData ("</td><td><code>") ;
          *inHTMLfile << newNonterminal.configuration().constantNameForVariableAndValue(0, (uint32_t) nonTerminalArray (i COMMA_HERE) COMMA_HERE) ;
          inHTMLfile->outputRawData ("</code></td></tr>") ;
        }
      }
      inHTMLfile->outputRawData ("</table>") ;
    }
  }
  if (inVerboseOptionOn) {
    co.appendUnsigned (t) ;
    co << ".\n" ;
    co.flush () ;
  }
}

//-----------------------------------------------------------------------------*

C_Relation
empty_strings_computations (const cPureBNFproductionsList & inPureBNFproductions,
                            C_HTML_FileWrite * inHTMLfile,
                            TC_UniqueArray <bool> & outVocabularyDerivingToEmpty_Array,
                      //      C_BDD_Set1 & outVocabularyDerivingToEmpty_BDD,
                            const C_RelationConfiguration & inVocabularyConfiguration,
                            const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    co << "  Searching for nonterminal symbols deriving in empty string... " ;
    co.flush () ;
  }
//--- Print in BNF file
  if (inHTMLfile != NULL) {
    inHTMLfile->appendCppTitleComment ("Searching for nonterminal symbols deriving in empty string", "title") ;
  }

//--- Compute BDD for nonterminal symbols having an empty derivation
/*  const C_BDD_Set1 nonTerminalHavingEmptyDerivationEX 
    = EXcomputeNonterminalSymbolsHavingEmptyDerivation (inPureBNFproductions,
                                                        outVocabularyDerivingToEmpty_BDD.getDescriptor()) ; */

  const C_Relation nonTerminalHavingEmptyDerivation
    = computeNonterminalSymbolsHavingEmptyDerivation (inPureBNFproductions,
                                                      inVocabularyConfiguration) ;
/*  if (nonTerminalHavingEmptyDerivation.bdd () != nonTerminalHavingEmptyDerivationEX.bdd ()) {
    printf ("*** nonTerminalHavingEmptyDerivation.bdd () != nonTerminalHavingEmptyDerivationEX.bdd () ***\n") ;
    exit (1) ;
  }*/
  if (inHTMLfile != NULL) {
    printNonterminalSymbolsHavingEmptyDerivation (nonTerminalHavingEmptyDerivation, *inHTMLfile) ;
  }

//--- Compute non terminal symbol deriving in empty string
  const uint32_t allSymbolCount = inVocabularyConfiguration.constantCountForVariable (0 COMMA_HERE) ;

  int32_t iterationCount = 0 ;
/*  outVocabularyDerivingToEmpty_BDD 
     = computeNonterminalDerivingInEmptyStringEX (inPureBNFproductions,
                                                outVocabularyDerivingToEmpty_BDD.getDescriptor (),
                                                outVocabularyDerivingToEmpty_Array,
                                                allSymbolCount,
                                                iterationCount) ; */

  const C_Relation vocabularyDerivingToEmpty 
     = computeNonterminalDerivingInEmptyString (inPureBNFproductions,
                                                nonTerminalHavingEmptyDerivation,
                                                outVocabularyDerivingToEmpty_Array,
                                                allSymbolCount,
                                                iterationCount) ;
/*  if (vocabularyDerivingToEmpty.bdd() != outVocabularyDerivingToEmpty_BDD.bdd()) {
    printf ("*** outVocabularyDerivingToEmpty.bdd() != outVocabularyDerivingToEmpty_BDD.bdd() ***\n") ;
    exit (1) ;
  }*/

  printNonterminalDerivingInEmptyString (vocabularyDerivingToEmpty,
                                         nonTerminalHavingEmptyDerivation,
                                         inHTMLfile,
                                         iterationCount,
                                         inVerboseOptionOn) ;
  return vocabularyDerivingToEmpty ;
}

//-----------------------------------------------------------------------------*
