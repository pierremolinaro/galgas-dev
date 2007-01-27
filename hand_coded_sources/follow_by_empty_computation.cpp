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
#include "files/C_HTML_FileWrite.h"
#include "bdd/C_BDD_Set1.h"

//---------------------------------------------------------------------------*

#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//---------------------------------------------------------------------------*

static void
computeNonterminalFollowedByEmpty (const cPureBNFproductionsList & inProductionRules,
                                   const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                                   const cVocabulary & inVocabulary,
                                   C_BDD_Set1 & outVocabularyFollowedByEmpty_BDD,
                                   sint32 & outIterationsCount) {
  const sint32 allSymbolsCount = inVocabulary.getAllSymbolsCount () ;
  TC_UniqueArray <bool> vocabularyFollowedByEmpty_Array (allSymbolsCount, false COMMA_HERE) ;
  vocabularyFollowedByEmpty_Array (inVocabulary.getStartSymbol () COMMA_HERE) = true ;

  const sint32 productionsCount = inProductionRules.length () ;
  TC_UniqueArray <bool> productionIsHandled (productionsCount, false COMMA_HERE) ;

  outIterationsCount = 0 ;
  bool loop = true ;
  while (loop) {
    loop = false ;
    outIterationsCount ++ ;
    for (sint32 i=0 ; i<productionsCount ; i++) {
      const cProduction & p = inProductionRules (i COMMA_HERE) ;
      if (! productionIsHandled (i COMMA_HERE)) {
        if (vocabularyFollowedByEmpty_Array (p.aNumeroNonTerminalGauche COMMA_HERE)) {
          const sint32 n = p.aDerivation.count () ;
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
  
//--- Contruire le bdd, limite aux seuls non terminaux
  outVocabularyFollowedByEmpty_BDD.clear () ;
  C_BDD_Set1 temp (outVocabularyFollowedByEmpty_BDD) ;
  for (sint32 i=inVocabulary.getTerminalSymbolsCount () ; i< allSymbolsCount ; i++) {
    if (vocabularyFollowedByEmpty_Array (i COMMA_HERE)) {
      temp.init (C_BDD::kEqual, (uint32) i) ;
      outVocabularyFollowedByEmpty_BDD |= temp ;
    }
  }
}

//---------------------------------------------------------------------------*
 
static void
displayNonterminalSymbolsFollowedByEmpty (const C_BDD_Set1 & inVocabularyFollowedByEmpty_BDD,
                                          C_HTML_FileWrite * inHTMLfile,
                                          const cVocabulary & inVocabulary,
                                          const sint32 inIterationsCount,
                                          const bool inVerboseOptionOn) { 
  const uint32 n = inVocabularyFollowedByEmpty_BDD.getValuesCount () ;
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p><a name=\"follow_by_empty\"></a>") ;
    *inHTMLfile << "Calculus completed in "
                << inIterationsCount
                << " iterations.\n" ;
    inHTMLfile->outputRawData ("</p><p>") ;
    if (n == 1) {
      *inHTMLfile << "One nonterminal symbol (the start symbol) can be followed by the empty string.\n" ;
    }else{
      *inHTMLfile << n << " nonterminal symbols (including the start symbol) can be followed by the empty string.\n" ;
    }
    inHTMLfile->outputRawData ("</p>") ;
    TC_UniqueArray <bool> array ;
    inVocabularyFollowedByEmpty_BDD.getArray (array) ;
    const sint32 symbolsCount = inVocabulary.getAllSymbolsCount () ;
    inHTMLfile->outputRawData ("<table class=\"result\">") ;
    for (sint32 symbol=inVocabulary.getTerminalSymbolsCount () ; symbol < symbolsCount ; symbol++) {
      if (array (symbol COMMA_HERE)) {
        inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
        inVocabulary.printInFile (*inHTMLfile, symbol COMMA_HERE) ;
        inHTMLfile->outputRawData ("</code></td></tr>") ;
      }
    }
    inHTMLfile->outputRawData ("</table>") ;
  }
  if (inVerboseOptionOn) {
    co << n << ".\n" ;
    co.flush () ;
  }
}

//---------------------------------------------------------------------------*

void
follow_by_empty_computations (const cPureBNFproductionsList & inPureBNFproductions,
                              C_HTML_FileWrite * inHTMLfile,
                              const cVocabulary & inVocabulary,
                              const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                              C_BDD_Set1 & outVocabularyFollowedByEmpty_BDD,
                              const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    co << "  Nonterminal symbols followed by empty string... " ;
    co.flush () ;
  }
//--- Print in BNF file
  if (inHTMLfile != NULL) {
    inHTMLfile->writeCppTitleComment ("Nonterminal symbol set followed by empty string", "title") ;
  }

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
                                           iterationsCount,
                                           inVerboseOptionOn) ; 
}

//---------------------------------------------------------------------------*
