//---------------------------------------------------------------------------*
//                                                                           *
//  Perform FIRST computations for pure BNF grammar.                         *                                                               *
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
#include "bdd/C_bdd_set2.h"
#include "generic_arraies/TC_grow_array2.h"

//---------------------------------------------------------------------------*

#include "FIRST_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//---------------------------------------------------------------------------*

static C_bdd_set2
computeFIRSTsets (const cPureBNFproductionsList & inProductionRules,
                  const TC_unique_dyn_array <bool> & inVocabularyDerivingInEmptyString,
                  const sint32 inTerminalSymbolsCount,
                  const C_bdd_descriptor & inDescriptor,
                  sint32 & outIterationsCount) {
//--- Compute direct firsts with each production
  C_bdd_set2 directFIRST (inDescriptor, inDescriptor) ;
  C_bdd_set2 pr (inDescriptor, inDescriptor) ;
  C_bdd_set2 temp (inDescriptor, inDescriptor) ;
  C_bdd_set2 left (inDescriptor, inDescriptor) ;
  for (sint32 i=0 ; i<inProductionRules.getLength () ; i++) {
    const cProduction & p = inProductionRules (i COMMA_HERE) ;
    const sint32 n = p.aDerivation.getCount () ;
    if (n > 0) {
      left.initDimension1 (C_bdd::kEqual, (uint32) p.aNumeroNonTerminalGauche) ;
      sint32 j = 0 ;
      pr.clear () ;
      do{
        temp.initDimension2 (C_bdd::kEqual, (uint32) p.aDerivation (j COMMA_HERE)) ;
        pr |= temp ;
        j++ ;
      }while ((j<n) && inVocabularyDerivingInEmptyString (p.aDerivation (j-1 COMMA_HERE) COMMA_HERE)) ;
      directFIRST |= left & pr ;
    }
  }


//--- Perform transitive closure of 'directFIRST'
  C_bdd_set2 FIRST = directFIRST.getTransitiveClosure (outIterationsCount) ;

//--- Delete nonterminal symbols in FIRST
  temp.initDimension2 (C_bdd::kLowerOrEqual, (uint32) (inTerminalSymbolsCount - 1)) ;
  FIRST &= temp ;

  return FIRST ;
}

//---------------------------------------------------------------------------*

static bool
displayAndCheckFIRSTsets (C_html_file_write & inHTMLfile,
                          const C_bdd_set1 & inVocabularyDerivingInEmptyString,
                          const cVocabulary & inVocabulary,
                          const C_bdd_set1 & inUsefulSymbols,
                          const C_bdd_set2 & inFIRSTsets,
                          TC_unique_dyn_array <TC_unique_grow_array <sint32> > & outFIRSTarray,
                          const sint32 inIterationsCount) {
//--- Build cartesian product 'inVocabularyDerivingInEmptyString' * 'empty string terminal symbol'
  C_bdd_set1 temp (inVocabularyDerivingInEmptyString) ;
  temp.init (C_bdd::kEqual, (uint16) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ; ;
  const C_bdd_set2 nt_x_empty = inVocabularyDerivingInEmptyString * temp ;

//--- FIRST union nt symbols deriring in empty string
  const C_bdd_set2 FIRST_with_empty = nt_x_empty | inFIRSTsets ;

//--- Display FIRST
  const sint32 m = (sint32) FIRST_with_empty.getValuesCount () ;
  inHTMLfile.outputRawData ("<p>") ;
  inHTMLfile << "Calculus completed in "
             << inIterationsCount
             << " iterations, "
             << m
             << " values ;\n"
                "'$$' means the nonterminal can be derived to empty string (see step 4).\n" ;
  inHTMLfile.outputRawData ("</p>") ;
  const sint32 symbolsCount = inVocabulary.getAllSymbolsCount () ;
  FIRST_with_empty.getArray (outFIRSTarray) ;
  inHTMLfile.outputRawData ("<table class=\"result\">") ;
  for (sint32 symbol=inVocabulary.getTerminalSymbolsCount () ; symbol < symbolsCount ; symbol++) {
    inHTMLfile.outputRawData ("<tr class=\"result_line\"><td><code>") ;
    inVocabulary.printInFile (inHTMLfile, symbol COMMA_HERE) ;
    inHTMLfile.outputRawData ("</code></td><td><code>") ;
    const sint32 length = outFIRSTarray (symbol COMMA_HERE).getCount () ;
    for (sint32 e=0 ; e<length ; e++) {
      inHTMLfile << ' ' ;
      inVocabulary.printInFile (inHTMLfile, outFIRSTarray (symbol COMMA_HERE) (e COMMA_HERE) COMMA_HERE) ;
    }
    inHTMLfile.outputRawData ("</code></td></tr>") ;
  }
  inHTMLfile.outputRawData ("</table>") ;

//--- Check FIRST
  inHTMLfile.outputRawData ("<p>") ;
  inHTMLfile << "Every useful nonterminal must :"
                " either have a non empty FIRST,"
                " either be derived to empty string,"
                " either both."
                " In any way having none : it is an error." ;
  inHTMLfile.outputRawData ("</p>") ;

//--- Ensemble des non-terminaux à vérifier
  C_bdd_set1 ntToCheck (inUsefulSymbols) ;
  ntToCheck.init (C_bdd::kGreaterOrEqual,(uint32) inVocabulary.getTerminalSymbolsCount ()) ;

//--- Get nonterminal symbols in error
  const C_bdd_set1 ntInError = ntToCheck & inUsefulSymbols & ~(FIRST_with_empty.projeterSurAxe1 ()) ; 

//--- Display nonterminal symbols in error
  const sint32 ntInErrorCount = (sint32) ntInError.getValuesCount () ;
  inHTMLfile.outputRawData ("<p>") ;
  if (ntInErrorCount == 0L) {
    inHTMLfile.outputRawData ("<span class=\"success\">") ;
    inHTMLfile << "All FIRST are correct.\n\n" ;
    inHTMLfile.outputRawData ("</span>") ;
    co << "ok.\n" ;
    co.flush () ;
  }else{
    inHTMLfile.outputRawData ("<span class=\"error\">") ;
    inHTMLfile << "Error : "
               << ntInErrorCount
               << " nonterminal symbol"
               << ((ntInErrorCount>1) ? " has" : "s have")
               << " an empty FIRST :" ;
    TC_unique_dyn_array <bool> errorArray ;
    ntInError.getArray (errorArray) ;
    inHTMLfile.outputRawData ("<code>") ;
    for (sint32 symbol=inVocabulary.getTerminalSymbolsCount () ; symbol < symbolsCount ; symbol++) {
      if (errorArray (symbol COMMA_HERE)) {
        inHTMLfile << ' ' ;
        inVocabulary.printInFile (inHTMLfile, symbol COMMA_HERE) ;
      }
    }
    inHTMLfile.outputRawData ("</code>") ;
    inHTMLfile.outputRawData ("</span>") ;
    co << "error.\n" ;
    co.flush () ;
  }
  inHTMLfile.outputRawData ("</p>") ;
  return ntInErrorCount == 0L ; 
}

//---------------------------------------------------------------------------*

void
FIRST_computations (const cPureBNFproductionsList & inPureBNFproductions,
                    C_html_file_write & inHTMLfile,
                    const cVocabulary & inVocabulary,
                    const TC_unique_dyn_array <bool> & inVocabularyDerivingToEmpty_Array,
                    const C_bdd_set1 & inVocabularyDerivingToEmpty_BDD,
                    const C_bdd_set1 & inUsefulSymbols,
                    C_bdd_set2 & outFIRSTsets,
                    TC_unique_dyn_array <TC_unique_grow_array <sint32> > & outFIRSTarray,
                    const C_bdd_descriptor & inDescriptor,
                    bool & outOk) {
//--- Console display
  co << "  Computing the FIRST sets... " ;
//--- Print in BNF file
  inHTMLfile.outputRawData ("<p><a name=\"first_sets\"></a></p>") ;
  inHTMLfile.writeTitleComment ("FIRST set", "title") ;

//--- Compute FIRST sets
  sint32 iterationsCount = 0 ;
  outFIRSTsets = computeFIRSTsets (inPureBNFproductions,
                                   inVocabularyDerivingToEmpty_Array,
                                   inVocabulary.getTerminalSymbolsCount (),
                                   inDescriptor,
                                   iterationsCount) ;

//--- Display FIRST
 outOk = displayAndCheckFIRSTsets (inHTMLfile,
                                   inVocabularyDerivingToEmpty_BDD,
                                   inVocabulary,
                                   inUsefulSymbols,
                                   outFIRSTsets,
                                   outFIRSTarray,
                                   iterationsCount) ;
}

//---------------------------------------------------------------------------*

