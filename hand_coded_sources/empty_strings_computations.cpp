//---------------------------------------------------------------------------*
//                                                                           *
// Routines for computing empty string derivations                           *
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

#include "files/C_html_file_write.h"
#include "bdd/C_bdd_set1.h"

//---------------------------------------------------------------------------*

#include "empty_strings_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//---------------------------------------------------------------------------*

static C_bdd_set1
computeNonterminalSymbolsHavingEmptyDerivation (const cPureBNFproductionsList & inProductionRules,
                                                const C_bdd_descriptor & inDescriptor) { 
  C_bdd_set1 nonterminalSymbolsHavingEmptyDerivation (inDescriptor) ;
  C_bdd_set1 temp (inDescriptor);
  for (sint32 i=0 ; i<inProductionRules.getLength () ; i++) {
    const cProduction & p = inProductionRules (i COMMA_HERE) ;
    if (p.aDerivation.getCount () == 0L) {
      temp.init (C_bdd::kEqual, (uint32) p.aNumeroNonTerminalGauche) ;
      nonterminalSymbolsHavingEmptyDerivation |= temp ;
    }
  }

  return nonterminalSymbolsHavingEmptyDerivation ;
}
  
//---------------------------------------------------------------------------*

static void
printNonterminalSymbolsHavingEmptyDerivation (const C_bdd_set1 & inNonterminalSymbolsHavingEmptyDerivation,
                                              C_html_file_write & inHTMLfile,
                                              const cVocabulary & inVocabulary) {
  TC_unique_dyn_array <bool> nonTerminalArray ;
  inNonterminalSymbolsHavingEmptyDerivation.getArray (nonTerminalArray) ;
  const uint32 n = inNonterminalSymbolsHavingEmptyDerivation.getValuesCount () ;
  inHTMLfile.outputRawData ("<p><a name=\"empty_strings\"></a>") ;
  inHTMLfile << n << " nonterminal symbols have a empty production :\n" ;
  inHTMLfile.outputRawData ("</p>") ;
  bool exists = false ;
  for (sint32 i=0 ; (i<nonTerminalArray.getCount ()) && ! exists ; i++) {
    exists = nonTerminalArray (i COMMA_HERE) ;
  }
  if (exists) {
    inHTMLfile.outputRawData ("<table class=\"result\">") ;
    sint32 index = 0 ;
    for (sint32 i=0 ; i<nonTerminalArray.getCount () ; i++) {
      if (nonTerminalArray (i COMMA_HERE)) {
        inHTMLfile.outputRawData ("<tr class=\"result_line\"><td>") ;
        inHTMLfile << index ;
        index ++ ;
        inHTMLfile.outputRawData ("</td><td><code>") ;
        inVocabulary.printInFile (inHTMLfile, i COMMA_HERE) ;
        inHTMLfile.outputRawData ("</code></td></tr>\n") ;
      }
    }
    inHTMLfile.outputRawData ("</table>") ;
  }
}

//---------------------------------------------------------------------------*

static C_bdd_set1
computeNonterminalDerivingInEmptyString (const cPureBNFproductionsList & inProductionRules,
                                         const C_bdd_descriptor & inDescriptor,
                                         TC_unique_dyn_array <bool> & vocabulaireSeDerivantEnVide, 
                                         const sint32 inAllSymbolsCount,
                                         sint32 & outIterationsCount) {
  { TC_unique_dyn_array <bool> tempo (inAllSymbolsCount COMMA_HERE) ;
    M_SWAP (tempo, vocabulaireSeDerivantEnVide, TC_unique_dyn_array <bool>) ;
    for (sint32 i=0 ; i<inAllSymbolsCount ; i++) {
      vocabulaireSeDerivantEnVide (i COMMA_HERE) = false ;
    }
  }

  const sint32 nombreDeProductions = inProductionRules.getLength () ;
  TC_unique_dyn_array <bool> productionTraitee (nombreDeProductions COMMA_HERE) ;
  { for (sint32 i=0 ; i<nombreDeProductions ; i++) {
      productionTraitee (i COMMA_HERE) = false ;
    }
  }

  outIterationsCount = 0 ;
  bool onProgresse = true ;
  while (onProgresse) {
    onProgresse = false ;
    outIterationsCount ++ ;
    for (sint32 i=0 ; i<nombreDeProductions ; i++) {
      const cProduction & p = inProductionRules (i COMMA_HERE) ;
      if (! productionTraitee (i COMMA_HERE)) {
        const sint32 n = p.aDerivation.getCount () ;
        bool estVide = true ;
        for (sint32 j=0 ; (j<n) && estVide ; j++) {
          estVide = vocabulaireSeDerivantEnVide (p.aDerivation (j COMMA_HERE) COMMA_HERE) ;
        }
        if (estVide) {
          vocabulaireSeDerivantEnVide (p.aNumeroNonTerminalGauche COMMA_HERE) = true ;
          productionTraitee (i COMMA_HERE) = true ;
          onProgresse = true ;
        }
      }
    }
  }
  
//--- Contruire le bdd
  C_bdd_set1 nonTerminauxSeDerivantEnVide (inDescriptor) ;
  C_bdd_set1 temp (inDescriptor) ;
  for (sint32 i=0 ; i<inAllSymbolsCount ; i++) {
    if (vocabulaireSeDerivantEnVide (i COMMA_HERE)) {
      temp.init (C_bdd::kEqual, (uint32) i) ;
      nonTerminauxSeDerivantEnVide |= temp ;
    }
  }

  return nonTerminauxSeDerivantEnVide ;
}

//---------------------------------------------------------------------------*

static void
printNonterminalDerivingInEmptyString (const C_bdd_set1 & inVocabularyDerivingToEmpty_BDD,
                                       const C_bdd_set1 & inNonTerminalHavingEmptyDerivation,
                                       C_html_file_write & inHTMLfile,
                                       const cVocabulary & inVocabulary,
                                       const sint32 inIterationsCount) { 
  inHTMLfile.outputRawData ("<p>") ;
  inHTMLfile << "Nonterminal symbols deriving indirectly in empty string : calculus in "
             << inIterationsCount
             << " iterations.\n" ;
  inHTMLfile.outputRawData ("</p>") ;
  const uint32 t = inVocabularyDerivingToEmpty_BDD.getValuesCount () ;
  const C_bdd_set1 newNonterminal = inVocabularyDerivingToEmpty_BDD & ~ inNonTerminalHavingEmptyDerivation ;
  const uint32 n = newNonterminal.getValuesCount () ;
  if (n == 0L) {
    inHTMLfile.outputRawData ("<p>") ;
    inHTMLfile << "No more than those deriving directly to the empty string.\n" ;
    inHTMLfile.outputRawData ("</p>") ;
  }else{
    inHTMLfile.outputRawData ("<p>") ;
    inHTMLfile << n << " nonterminal symbol(s) in addition to those deriving directly to the empty string :\n" ;
    inHTMLfile.outputRawData ("</p>") ;
    TC_unique_dyn_array <bool> nonTerminalArray ;
    newNonterminal.getArray (nonTerminalArray) ;
    sint32 index = 0 ;
    inHTMLfile.outputRawData ("<table class=\"result\">") ;
    for (sint32 i=0 ; i<nonTerminalArray.getCount () ; i++) {
      if (nonTerminalArray (i COMMA_HERE)) {
        inHTMLfile.outputRawData ("<tr class=\"result_line\"><td>") ;
        inHTMLfile << index ;
        index ++ ;
        inHTMLfile.outputRawData ("</td><td><code>") ;
        inVocabulary.printInFile (inHTMLfile, i COMMA_HERE) ;
        inHTMLfile.outputRawData ("</code></td></tr>") ;
      }
    }
    inHTMLfile.outputRawData ("</table>") ;
  }
  co << t << ".\n" ;
  co.flush () ;
}

//---------------------------------------------------------------------------*

void
empty_strings_computations (const cPureBNFproductionsList & inPureBNFproductions,
                            C_html_file_write & inHTMLfile,
                            const cVocabulary & inVocabulary,
                            TC_unique_dyn_array <bool> & outVocabularyDerivingToEmpty_Array,
                            C_bdd_set1 & outVocabularyDerivingToEmpty_BDD) {
//--- Console display
  co << "  Searching for nonterminal symbols deriving in empty string... " ;
//--- Print in BNF file
  inHTMLfile.writeTitleComment ("Searching for nonterminal symbols deriving in empty string", "title") ;

//--- Compute BDD for nonterminal symbols having an empty derivation
  const C_bdd_set1 nonTerminalHavingEmptyDerivation 
    = computeNonterminalSymbolsHavingEmptyDerivation (inPureBNFproductions,
                                                      outVocabularyDerivingToEmpty_BDD.getDescriptor ()) ; 
  printNonterminalSymbolsHavingEmptyDerivation (nonTerminalHavingEmptyDerivation,
                                                inHTMLfile, inVocabulary) ;

//--- Compute non terminal symbol deriving in empty string
  sint32 iterationCount = 0 ;
  outVocabularyDerivingToEmpty_BDD 
     = computeNonterminalDerivingInEmptyString (inPureBNFproductions,
                                                outVocabularyDerivingToEmpty_BDD.getDescriptor (),
                                                outVocabularyDerivingToEmpty_Array,
                                                inVocabulary.getAllSymbolsCount (),
                                                iterationCount) ;

  printNonterminalDerivingInEmptyString (outVocabularyDerivingToEmpty_BDD,
                                         nonTerminalHavingEmptyDerivation,
                                         inHTMLfile,
                                         inVocabulary,
                                         iterationCount) ;
}

//---------------------------------------------------------------------------*
