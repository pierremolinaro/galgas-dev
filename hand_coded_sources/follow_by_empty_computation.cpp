//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for computing followed by empty strings symbols                 *
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

#include "follow_by_empty_computation.h"
#include "files/C_html_file_write.h"
#include "bdd/C_bdd_set1.h"

//---------------------------------------------------------------------------*

#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//---------------------------------------------------------------------------*

static void
computeNonterminalFollowedByEmpty (const cPureBNFproductionsList & inProductionRules,
                                   const TC_unique_dyn_array <bool> & inVocabularyDerivingToEmpty_Array,
                                   const cVocabulary & inVocabulary,
                                   C_bdd_set1 & outVocabularyFollowedByEmpty_BDD,
                                   sint32 & outIterationsCount) {
  const sint32 allSymbolsCount = inVocabulary.getAllSymbolsCount () ;
  TC_unique_dyn_array <bool> vocabularyFollowedByEmpty_Array (allSymbolsCount COMMA_HERE) ;
  { for (sint32 i=0 ; i< allSymbolsCount ; i++) {
      vocabularyFollowedByEmpty_Array (i COMMA_HERE) = false ;
    }
  }
  vocabularyFollowedByEmpty_Array (inVocabulary.getStartSymbol () COMMA_HERE) = true ;

  const sint32 productionsCount = inProductionRules.getLength () ;
  TC_unique_dyn_array <bool> productionIsHandled (productionsCount COMMA_HERE) ;
  { for (sint32 i=0 ; i<productionsCount ; i++) {
      productionIsHandled (i COMMA_HERE) = false ;
    }
  }

  outIterationsCount = 0 ;
  bool loop = true ;
  while (loop) {
    loop = false ;
    outIterationsCount ++ ;
    for (sint32 i=0 ; i<productionsCount ; i++) {
      const cProduction & p = inProductionRules (i COMMA_HERE) ;
      if (! productionIsHandled (i COMMA_HERE)) {
        if (vocabularyFollowedByEmpty_Array (p.aNumeroNonTerminalGauche COMMA_HERE)) {
          const sint32 n = p.aDerivation.getCount () ;
          bool followedByEmpty = true ;
          for (sint32 j=n-1 ; (j>=0) && followedByEmpty ; j--) {
            vocabularyFollowedByEmpty_Array (p.aDerivation (j COMMA_HERE) COMMA_HERE) = true ;
            followedByEmpty = inVocabularyDerivingToEmpty_Array (p.aDerivation (j COMMA_HERE) COMMA_HERE) ;
          }
          productionIsHandled (i COMMA_HERE) = true ;
          loop = true ;
        }
      }
    }
  }
  
//--- Contruire le bdd, limité aux seuls non terminaux
  outVocabularyFollowedByEmpty_BDD.clear () ;
  C_bdd_set1 temp (outVocabularyFollowedByEmpty_BDD) ;
  for (sint32 i=inVocabulary.getTerminalSymbolsCount () ; i< allSymbolsCount ; i++) {
    if (vocabularyFollowedByEmpty_Array (i COMMA_HERE)) {
      temp.init (C_bdd::kEqual, (uint32) i) ;
      outVocabularyFollowedByEmpty_BDD |= temp ;
    }
  }
}

//---------------------------------------------------------------------------*
 
static void
displayNonterminalSymbolsFollowedByEmpty (const C_bdd_set1 & inVocabularyFollowedByEmpty_BDD,
                                          C_html_file_write & inHTMLfile,
                                          const cVocabulary & inVocabulary,
                                          const sint32 inIterationsCount) { 
  inHTMLfile.outputRawData ("<p><a name=\"follow_by_empty\"></a>") ;
  inHTMLfile << "Calculus completed in "
             << inIterationsCount
             << " iterations.\n" ;
  inHTMLfile.outputRawData ("</p><p>") ;
  const uint32 n = inVocabularyFollowedByEmpty_BDD.getValuesCount () ;
  if (n == 1) {
    inHTMLfile << "One nonterminal symbol (the start symbol) can be followed by the empty string.\n" ;
  }else{
    inHTMLfile << n << " nonterminal symbols (including the start symbol) can be followed by the empty string.\n" ;
  }
  inHTMLfile.outputRawData ("</p>") ;
  TC_unique_dyn_array <bool> array ;
  inVocabularyFollowedByEmpty_BDD.getArray (array) ;
  const sint32 symbolsCount = inVocabulary.getAllSymbolsCount () ;
  inHTMLfile.outputRawData ("<table class=\"result\">") ;
  for (sint32 symbol=inVocabulary.getTerminalSymbolsCount () ; symbol < symbolsCount ; symbol++) {
    if (array (symbol COMMA_HERE)) {
      inHTMLfile.outputRawData ("<tr class=\"result_line\"><td><code>") ;
      inVocabulary.printInFile (inHTMLfile, symbol COMMA_HERE) ;
      inHTMLfile.outputRawData ("</code></td></tr>") ;
    }
  }
  inHTMLfile.outputRawData ("</table>") ;
  co << n << ".\n" ;
  co.flush () ;
}

//---------------------------------------------------------------------------*

void
follow_by_empty_computations (const cPureBNFproductionsList & inPureBNFproductions,
                              C_html_file_write & inHTMLfile,
                              const cVocabulary & inVocabulary,
                              const TC_unique_dyn_array <bool> & inVocabularyDerivingToEmpty_Array,
                              C_bdd_set1 & outVocabularyFollowedByEmpty_BDD) {
//--- Console display
  co << "  Nonterminal symbols followed by empty string... " ;
//--- Print in BNF file
  inHTMLfile.writeTitleComment ("Nonterminal symbol set followed by empty string", "title") ;

//--- Compute nonterminal symbols followed by empty 
  sint32 iterationsCount = 0 ;
  computeNonterminalFollowedByEmpty (inPureBNFproductions,
                                     inVocabularyDerivingToEmpty_Array,
                                     inVocabulary,
                                     outVocabularyFollowedByEmpty_BDD,
                                     iterationsCount) ;

//--- Display nonterminal symbols followed by empty 
 displayNonterminalSymbolsFollowedByEmpty (outVocabularyFollowedByEmpty_BDD,
                                           inHTMLfile,
                                           inVocabulary,
                                           iterationsCount) ; 
}

//---------------------------------------------------------------------------*
