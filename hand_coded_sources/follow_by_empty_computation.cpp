//-----------------------------------------------------------------------------*
//                                                                             *
//  Routines for computing followed by empty strings symbols                   *
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

#include "follow_by_empty_computation.h"
#include "files/C_HTML_FileWrite.h"
#include "bdd/C_Relation.h"

//-----------------------------------------------------------------------------*

#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//-----------------------------------------------------------------------------*

static void
computeNonterminalFollowedByEmpty (const cPureBNFproductionsList & inProductionRules,
                                   const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                                   const cVocabulary & inVocabulary,
                                   C_Relation & outVocabularyFollowedByEmpty,
                                   int32_t & outIterationsCount) {
  const int32_t allSymbolsCount = inVocabulary.getAllSymbolsCount () ;
  TC_UniqueArray <bool> vocabularyFollowedByEmpty_Array (allSymbolsCount, false COMMA_HERE) ;
  vocabularyFollowedByEmpty_Array.setObjectAtIndex (true, inVocabulary.getStartSymbol () COMMA_HERE) ;

  const int32_t productionsCount = inProductionRules.length () ;
  TC_UniqueArray <bool> productionIsHandled (productionsCount, false COMMA_HERE) ;

  outIterationsCount = 0 ;
  bool loop = true ;
  while (loop) {
    loop = false ;
    outIterationsCount ++ ;
    for (int32_t i=0 ; i<productionsCount ; i++) {
      const cProduction & p = inProductionRules (i COMMA_HERE) ;
      if (! productionIsHandled (i COMMA_HERE)) {
        if (vocabularyFollowedByEmpty_Array (p.leftNonTerminalIndex () COMMA_HERE)) {
          const int32_t n = p.derivationLength () ;
          bool followedByEmpty = true ;
          for (int32_t j=n-1 ; (j>=0) && followedByEmpty ; j--) {
            vocabularyFollowedByEmpty_Array (p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) = true ;
            followedByEmpty = inVocabularyDerivingToEmpty_Array (p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) ;
          }
          productionIsHandled (i COMMA_HERE) = true ;
          loop = true ;
        }
      }
    }
  }
  
//--- Contruire le bdd, limite aux seuls non terminaux
  for (int32_t i=inVocabulary.getTerminalSymbolsCount () ; i<allSymbolsCount ; i++) {
    if (vocabularyFollowedByEmpty_Array (i COMMA_HERE)) {
      outVocabularyFollowedByEmpty.orWith (C_Relation (outVocabularyFollowedByEmpty.configuration (), 0, C_BDD::kEqual, (uint32_t) i COMMA_HERE) COMMA_HERE) ;
    }
  }
}

//-----------------------------------------------------------------------------*
 
static void
displayNonterminalSymbolsFollowedByEmpty (const C_Relation & inVocabularyFollowedByEmpty,
                                          C_HTML_FileWrite * inHTMLfile,
                                          const cVocabulary & inVocabulary,
                                          const int32_t inIterationsCount,
                                          const bool inVerboseOptionOn) { 
  const uint64_t n = inVocabularyFollowedByEmpty.value64Count () ;

  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p><a name=\"follow_by_empty\"></a>") ;
    *inHTMLfile << "Calculus completed in "
                << cStringWithSigned (inIterationsCount)
                << " iterations.\n" ;
    inHTMLfile->outputRawData ("</p><p>") ;
    if (n == 1) {
      *inHTMLfile << "One nonterminal symbol (the start symbol) can be followed by the empty string.\n" ;
    }else{
      inHTMLfile->appendUnsigned (n) ;
       inHTMLfile->appendCString (" nonterminal symbols (including the start symbol) can be followed by the empty string.\n") ;
    }
    inHTMLfile->outputRawData ("</p>") ;
    TC_UniqueArray <uint64_t> array ;
    inVocabularyFollowedByEmpty.getValueArray (array) ;
    inHTMLfile->outputRawData ("<table class=\"result\">") ;
    for (int32_t i=0 ; i < array.count () ; i++) {
      inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
      const uint64_t symbol = array (i COMMA_HERE) ;
      inVocabulary.printInFile (*inHTMLfile, (int32_t) symbol COMMA_HERE) ;
      inHTMLfile->outputRawData ("</code></td></tr>") ;
    }
    inHTMLfile->outputRawData ("</table>") ;
  }
  if (inVerboseOptionOn) {
    co.appendUnsigned (n) ;
    co << ".\n" ;
    co.flush () ;
  }
}

//-----------------------------------------------------------------------------*

void
follow_by_empty_computations (const cPureBNFproductionsList & inPureBNFproductions,
                              C_HTML_FileWrite * inHTMLfile,
                              const cVocabulary & inVocabulary,
                              const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                              C_Relation & outVocabularyFollowedByEmpty,
                              const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    co << "  Nonterminal symbols followed by empty string... " ;
    co.flush () ;
  }
//--- Print in BNF file
  if (inHTMLfile != NULL) {
    inHTMLfile->appendCppTitleComment ("Nonterminal symbol set followed by empty string", "title") ;
  }

//--- Compute nonterminal symbols followed by empty 
  int32_t iterationsCount = 0 ;
  computeNonterminalFollowedByEmpty (inPureBNFproductions,
                                     inVocabularyDerivingToEmpty_Array,
                                     inVocabulary,
                                     outVocabularyFollowedByEmpty,
                                     iterationsCount) ;

//--- Display nonterminal symbols followed by empty 
 displayNonterminalSymbolsFollowedByEmpty (outVocabularyFollowedByEmpty,
                                           inHTMLfile,
                                           inVocabulary,
                                           iterationsCount,
                                           inVerboseOptionOn) ; 
}

//-----------------------------------------------------------------------------*
