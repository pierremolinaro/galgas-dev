//---------------------------------------------------------------------------*
//                                                                           *
//  Routines for computing useful symbols of the pure BNF grammar            *
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//   more details.                                                           *
//                                                                           *
//---------------------------------------------------------------------------*

#include "files/C_html_file_write.h"
#include "bdd/C_bdd_set2.h"

//---------------------------------------------------------------------------*

#include "useful_symbols_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//---------------------------------------------------------------------------*

static void
computeUsefulSymbols (const cPureBNFproductionsList & inPureBNFproductions,
                      C_bdd_set1 & outUsefulSymbols,
                      const uint16 inStartSymbolIndex,
                      sint32 & outIterationsCount) {
//--- Traverse all productions for getting direct accessibility
  C_bdd_set2 accessibility (outUsefulSymbols.getDescriptor (), outUsefulSymbols.getDescriptor ()) ;
  C_bdd_set2 leftNonterminal (outUsefulSymbols.getDescriptor (), outUsefulSymbols.getDescriptor ()) ;
  C_bdd_set2 rightVocabulary (outUsefulSymbols.getDescriptor (), outUsefulSymbols.getDescriptor ()) ;
  C_bdd_set2 rightSymbol (outUsefulSymbols.getDescriptor (), outUsefulSymbols.getDescriptor ()) ;
  for (sint32 i=0 ; i<inPureBNFproductions.getLength () ; i++) {
    const cProduction & p = inPureBNFproductions (i COMMA_HERE) ;
    if (p.aDerivation.count () > 0) {
      rightVocabulary.clear () ;
      for (sint32 j=0 ; j<p.aDerivation.count () ; j++) {
        rightSymbol.initDimension2 (C_bdd::kEqual, (uint16) p.aDerivation (j COMMA_HERE)) ;
        rightVocabulary |= rightSymbol ;
      }
      leftNonterminal.initDimension1 (C_bdd::kEqual,(uint16) p.aNumeroNonTerminalGauche) ;
      accessibility |= leftNonterminal & rightVocabulary ;
    }
  } 
//--- Compute useful vocabulary
  C_bdd_set1 initialValue (outUsefulSymbols) ;
  initialValue.init (C_bdd::kEqual, inStartSymbolIndex) ;
  outUsefulSymbols = accessibility.getAccessibility (initialValue, outIterationsCount) ;
}

//---------------------------------------------------------------------------*

static bool
displayUnusefulSymbols (const C_bdd_set1 & inUsefulSymbols,
                        C_html_file_write & inHTMLfile,
                        const cVocabulary & inVocabulary,
                        const sint32 nombreIterations) {
  bool warning = false ;
  inHTMLfile.outputRawData ("<p><a name=\"useful_symbols\"></a>") ;
  inHTMLfile << "Calculus completed in "
             << nombreIterations
             << " iterations.\n" ;
  inHTMLfile.outputRawData ("</p>") ;
//--- Get index of last non terminal to check (don't check augmented symbol '<>')
  const uint32 lastNonterminalToCheck = (uint32) (inVocabulary.getAllSymbolsCount () - 2) ;

  C_bdd_set1 unusefulSymbols = (~ inUsefulSymbols) ;
  C_bdd_set1 temp (unusefulSymbols) ;
  temp.init (C_bdd::kLowerOrEqual, lastNonterminalToCheck) ;
  unusefulSymbols &= temp ;
  temp.init (C_bdd::kStrictGreater, (uint32) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ; // Don't display 'empty string' symbol
  unusefulSymbols &= temp ;

  const uint32 n = unusefulSymbols.getValuesCount () ;
  inHTMLfile.outputRawData ("<p>") ;
  if (n == 0L) {
    inHTMLfile.outputRawData ("<span class=\"success\">") ;
    inHTMLfile << "All terminal and nonterminal symbols are useful.\n\n" ;
    inHTMLfile.outputRawData ("</span>") ;
    co << "all, ok.\n" ;
  }else{
    inHTMLfile.outputRawData ("<span class=\"warning\">") ;
    inHTMLfile << "The vocabulary has "
               << n
               << " unuseful element(s) : \n" ;
    TCUniqueArray <bool> array ;
    unusefulSymbols.getArray (array) ;
    const sint32 symbolsCount = inVocabulary.getAllSymbolsCount () ;
    inHTMLfile.outputRawData ("<code>") ;
    for (sint32 symbol=0 ; symbol < symbolsCount ; symbol++) {
      if (array (symbol COMMA_HERE)) {
        inHTMLfile.outputRawData ("<br>") ;
        inVocabulary.printInFile (inHTMLfile, symbol COMMA_HERE) ;
      }
    }
    inHTMLfile.outputRawData ("</code></span>") ;
    co << "warning.\n" ;
    warning = true ;
  }
  inHTMLfile.outputRawData ("</p>") ;
  co.flush () ;
  return warning ;
}

//---------------------------------------------------------------------------*

void
useful_symbols_computations (const cPureBNFproductionsList & inPureBNFproductions,
                             const cVocabulary & inVocabulary,
                             C_html_file_write & inHTMLfile,
                             C_bdd_set1 & outUsefulSymbols,
                             bool & outWarningFlag) {
//--- Console display
  co << "  Searching for useful nonterminal symbols... " ;
//--- Print in BNF file
  inHTMLfile.writeTitleComment ("Useful terminal and nonterminal symbols", "title") ;
  sint32 iterationsCount = 0 ;
  computeUsefulSymbols (inPureBNFproductions,
                        outUsefulSymbols,
                        (uint16) inVocabulary.getStartSymbol (),
                        iterationsCount) ;
  const bool warning = displayUnusefulSymbols (outUsefulSymbols,
                                               inHTMLfile,
                                               inVocabulary,
                                               iterationsCount) ;
  
  outWarningFlag |= warning ;
}

//---------------------------------------------------------------------------*
