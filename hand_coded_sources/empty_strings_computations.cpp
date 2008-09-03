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

#include "files/C_HTML_FileWrite.h"
#include "bdd/C_BDD_Set1.h"

//---------------------------------------------------------------------------*

#include "empty_strings_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//---------------------------------------------------------------------------*

static C_BDD_Set1
computeNonterminalSymbolsHavingEmptyDerivation (const cPureBNFproductionsList & inProductionRules,
                                                const C_BDD_Descriptor & inDescriptor) { 
  C_BDD_Set1 nonterminalSymbolsHavingEmptyDerivation (inDescriptor) ;
  C_BDD_Set1 temp (inDescriptor);
  for (sint32 i=0 ; i<inProductionRules.length () ; i++) {
    const cProduction & p = inProductionRules (i COMMA_HERE) ;
    if (p.aDerivation.count () == 0L) {
      temp.init (C_BDD::kEqual, (uint32) p.aNumeroNonTerminalGauche) ;
      nonterminalSymbolsHavingEmptyDerivation |= temp ;
    }
  }

  return nonterminalSymbolsHavingEmptyDerivation ;
}
  
//---------------------------------------------------------------------------*

static void
printNonterminalSymbolsHavingEmptyDerivation (const C_BDD_Set1 & inNonterminalSymbolsHavingEmptyDerivation,
                                              C_HTML_FileWrite & inHTMLfile,
                                              const cVocabulary & inVocabulary) {
  TC_UniqueArray <bool> nonTerminalArray ;
  inNonterminalSymbolsHavingEmptyDerivation.getArray (nonTerminalArray) ;
  const uint32 n = inNonterminalSymbolsHavingEmptyDerivation.getValuesCount () ;
  inHTMLfile.outputRawData ("<p><a name=\"empty_strings\"></a>") ;
  inHTMLfile << n << " nonterminal symbols have a empty production :\n" ;
  inHTMLfile.outputRawData ("</p>") ;
  bool exists = false ;
  for (sint32 i=0 ; (i<nonTerminalArray.count ()) && ! exists ; i++) {
    exists = nonTerminalArray (i COMMA_HERE) ;
  }
  if (exists) {
    inHTMLfile.outputRawData ("<table class=\"result\">") ;
    sint32 index = 0 ;
    for (sint32 i=0 ; i<nonTerminalArray.count () ; i++) {
      if (nonTerminalArray (i COMMA_HERE)) {
        inHTMLfile.outputRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
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

static C_BDD_Set1
computeNonterminalDerivingInEmptyString (const cPureBNFproductionsList & inProductionRules,
                                         const C_BDD_Descriptor & inDescriptor,
                                         TC_UniqueArray <bool> & vocabulaireSeDerivantEnVide, 
                                         const sint32 inAllSymbolsCount,
                                         sint32 & outIterationsCount) {
  { TC_UniqueArray <bool> tempo (inAllSymbolsCount, false COMMA_HERE) ;
    swap (tempo, vocabulaireSeDerivantEnVide) ;
  }

  const sint32 nombreDeProductions = inProductionRules.length () ;
  TC_UniqueArray <bool> productionTraitee (nombreDeProductions, false COMMA_HERE) ;

  outIterationsCount = 0 ;
  bool onProgresse = true ;
  while (onProgresse) {
    onProgresse = false ;
    outIterationsCount ++ ;
    for (sint32 i=0 ; i<nombreDeProductions ; i++) {
      const cProduction & p = inProductionRules (i COMMA_HERE) ;
      if (! productionTraitee (i COMMA_HERE)) {
        const sint32 n = p.aDerivation.count () ;
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
  C_BDD_Set1 nonTerminauxSeDerivantEnVide (inDescriptor) ;
  C_BDD_Set1 temp (inDescriptor) ;
  for (sint32 i=0 ; i<inAllSymbolsCount ; i++) {
    if (vocabulaireSeDerivantEnVide (i COMMA_HERE)) {
      temp.init (C_BDD::kEqual, (uint32) i) ;
      nonTerminauxSeDerivantEnVide |= temp ;
    }
  }

  return nonTerminauxSeDerivantEnVide ;
}

//---------------------------------------------------------------------------*

static void
printNonterminalDerivingInEmptyString (const C_BDD_Set1 & inVocabularyDerivingToEmpty_BDD,
                                       const C_BDD_Set1 & inNonTerminalHavingEmptyDerivation,
                                       C_HTML_FileWrite * inHTMLfile,
                                       const cVocabulary & inVocabulary,
                                       const sint32 inIterationsCount,
                                       const bool inVerboseOptionOn) { 
  const uint32 t = inVocabularyDerivingToEmpty_BDD.getValuesCount () ;
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p>") ;
    *inHTMLfile << "Nonterminal symbols deriving indirectly in empty string : calculus in "
                << inIterationsCount
                << " iterations.\n" ;
    inHTMLfile->outputRawData ("</p>") ;
    const C_BDD_Set1 newNonterminal = inVocabularyDerivingToEmpty_BDD & ~ inNonTerminalHavingEmptyDerivation ;
    const uint32 n = newNonterminal.getValuesCount () ;
    if (n == 0L) {
      inHTMLfile->outputRawData ("<p>") ;
      *inHTMLfile << "No more than those deriving directly to the empty string.\n" ;
      inHTMLfile->outputRawData ("</p>") ;
    }else{
      inHTMLfile->outputRawData ("<p>") ;
      *inHTMLfile << n << " nonterminal symbol(s) in addition to those deriving directly to the empty string :\n" ;
      inHTMLfile->outputRawData ("</p>") ;
      TC_UniqueArray <bool> nonTerminalArray ;
      newNonterminal.getArray (nonTerminalArray) ;
      sint32 index = 0 ;
      inHTMLfile->outputRawData ("<table class=\"result\">") ;
      for (sint32 i=0 ; i<nonTerminalArray.count () ; i++) {
        if (nonTerminalArray (i COMMA_HERE)) {
          inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\">") ;
          *inHTMLfile << index ;
          index ++ ;
          inHTMLfile->outputRawData ("</td><td><code>") ;
          inVocabulary.printInFile (*inHTMLfile, i COMMA_HERE) ;
          inHTMLfile->outputRawData ("</code></td></tr>") ;
        }
      }
      inHTMLfile->outputRawData ("</table>") ;
    }
  }
  if (inVerboseOptionOn) {
    co << t << ".\n" ;
    co.flush () ;
  }
}

//---------------------------------------------------------------------------*

void
empty_strings_computations (const cPureBNFproductionsList & inPureBNFproductions,
                            C_HTML_FileWrite * inHTMLfile,
                            const cVocabulary & inVocabulary,
                            TC_UniqueArray <bool> & outVocabularyDerivingToEmpty_Array,
                            C_BDD_Set1 & outVocabularyDerivingToEmpty_BDD,
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
  const C_BDD_Set1 nonTerminalHavingEmptyDerivation 
    = computeNonterminalSymbolsHavingEmptyDerivation (inPureBNFproductions,
                                                      outVocabularyDerivingToEmpty_BDD.getDescriptor ()) ; 
  if (inHTMLfile != NULL) {
    printNonterminalSymbolsHavingEmptyDerivation (nonTerminalHavingEmptyDerivation,
                                                  *inHTMLfile, inVocabulary) ;
  }

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
                                         iterationCount,
                                         inVerboseOptionOn) ;
}

//---------------------------------------------------------------------------*
