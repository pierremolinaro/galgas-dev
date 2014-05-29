//-----------------------------------------------------------------------------*
//                                                                             *
//  Perform FIRST computations for pure BNF grammar.                         *
//                                                                             *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
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
#include "bdd/C_BDD_Set2.h"
#include "collections/TC_Array2.h"

//-----------------------------------------------------------------------------*

#include "FIRST_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//-----------------------------------------------------------------------------*

static C_BDD_Set2
computeFIRSTsets (const cPureBNFproductionsList & inProductionRules,
                  const uint16_t inBDDBitCount,
                  const TC_UniqueArray <bool> & inVocabularyDerivingInEmptyString,
                  const int32_t inTerminalSymbolsCount,
                  const C_BDD_Descriptor & inDescriptor,
                  int32_t & outIterationsCount) {
//--- Compute direct firsts with each production
  C_BDD_Set2 ex_directFIRST (inDescriptor, inDescriptor) ;
  C_BDD_Set2 ex_pr (inDescriptor, inDescriptor) ;
  C_BDD_Set2 temp (inDescriptor, inDescriptor) ;
  C_BDD_Set2 ex_left (inDescriptor, inDescriptor) ;
  C_BDD directFIRST ;
  for (int32_t i=0 ; i<inProductionRules.length () ; i++) {
    const cProduction & p = inProductionRules (i COMMA_HERE) ;
    const int32_t n = p.derivationLength () ;
    if (n > 0) {
      const C_BDD left = C_BDD::varCompareConst (0, inBDDBitCount, C_BDD::kEqual, (uint32_t) p.leftNonTerminalIndex ()) ;
      ex_left.initDimension1 (C_BDD::kEqual, (uint32_t) p.leftNonTerminalIndex ()) ;
      int32_t j = 0 ;
      ex_pr.clear () ;
      C_BDD pr ;
      do{
        temp.initDimension2 (C_BDD::kEqual, (uint32_t) p.derivationAtIndex (j COMMA_HERE)) ;
        ex_pr |= temp ;
        pr |= C_BDD::varCompareConst (inBDDBitCount, inBDDBitCount, C_BDD::kEqual, (uint32_t) p.derivationAtIndex (j COMMA_HERE)) ;
        j++ ;
      }while ((j<n) && inVocabularyDerivingInEmptyString (p.derivationAtIndex (j-1 COMMA_HERE) COMMA_HERE)) ;
      ex_directFIRST |= ex_left & ex_pr ;
      directFIRST |= left & pr ;
    }
  }
  if (directFIRST != ex_directFIRST.bdd ()) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    printf ("inBDDBitCount %hu\n", inBDDBitCount) ;
    printf ("directFIRST '%s'\n", directFIRST.queryStringValue (HERE).cString (HERE)) ;
    printf ("ex_directFIRST '%s'\n", ex_directFIRST.bdd ().queryStringValue (HERE).cString (HERE)) ;
  }


//--- Perform transitive closure of 'directFIRST'
  C_BDD_Set2 ex_FIRST = ex_directFIRST.getTransitiveClosure (outIterationsCount) ;
  C_BDD FIRST = directFIRST.transitiveClosure (inBDDBitCount, NULL) ;
  if (FIRST != (ex_FIRST.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }

//--- Delete nonterminal symbols in FIRST
  temp.initDimension2 (C_BDD::kLowerOrEqual, (uint32_t) (inTerminalSymbolsCount - 1)) ;
  ex_FIRST &= temp ;
  FIRST &= C_BDD::varCompareConst (inBDDBitCount,
                                   inBDDBitCount,
                                   C_BDD::kLowerOrEqual,
                                   (uint32_t) (inTerminalSymbolsCount - 1)) ;
  if (FIRST != (ex_FIRST.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }

  return ex_FIRST ;
}

//-----------------------------------------------------------------------------*

static bool
displayAndCheckFIRSTsets (C_HTML_FileWrite * inHTMLfile,
                          const uint16_t inBDDBitCount,
                          const C_BDD_Set1 & inVocabularyDerivingInEmptyString,
                          const cVocabulary & inVocabulary,
                          const C_BDD_Set1 & inUsefulSymbols,
                          const C_BDD_Set2 & inFIRSTsets,
                          TC_UniqueArray <TC_UniqueArray <int32_t> > & outFIRSTarray,
                          const int32_t inIterationsCount,
                          const bool inVerboseOptionOn) {
  const int32_t symbolsCount = inVocabulary.getAllSymbolsCount () ;
//--- Build cartesian product 'inVocabularyDerivingInEmptyString' * 'empty string terminal symbol'
  C_BDD_Set1 temp (inVocabularyDerivingInEmptyString) ;
  temp.init (C_BDD::kEqual, (uint16_t) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ;
  const C_BDD_Set2 ex_nt_x_empty = inVocabularyDerivingInEmptyString * temp ;

  const C_BDD emptyStringTerminalSymbolIndex =
    C_BDD::varCompareConst (inBDDBitCount,
                            inBDDBitCount,
                            C_BDD::kEqual,
                            (uint32_t) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ; 
  const C_BDD nt_x_empty = inVocabularyDerivingInEmptyString.bdd () & emptyStringTerminalSymbolIndex ;
  if (nt_x_empty != (ex_nt_x_empty.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    printf ("nt_x_empty   : %s\n", nt_x_empty.queryStringValue (HERE).cString (HERE)) ;
    printf ("ex_nt_x_empty: %s\n", ex_nt_x_empty.bdd ().queryStringValue (HERE).cString (HERE)) ;
  }

//--- FIRST union nt symbols deriring in empty string
  const C_BDD_Set2 ex_FIRST_with_empty = ex_nt_x_empty | inFIRSTsets ;
  const C_BDD FIRST_with_empty = nt_x_empty | inFIRSTsets.bdd () ;
  if (FIRST_with_empty != (ex_FIRST_with_empty.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }

//--- Compute FIRST array
  ex_FIRST_with_empty.getArray (outFIRSTarray) ;

  TC_UniqueArray <TC_UniqueArray <int32_t> > FIRSTArray ;
  FIRST_with_empty.getArray2 (FIRSTArray, (uint32_t) inVocabulary.getAllSymbolsCount(), inBDDBitCount, inBDDBitCount) ;
  if (outFIRSTarray != FIRSTArray) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }

//--- Display FIRST
  const int32_t m = (int32_t) ex_FIRST_with_empty.getValuesCount () ;
/*   const int32_t mm = (int32_t) FIRST_with_empty.valueCount (inBDDBitCount) ;
  if (mm != m) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }*/
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p>") ;
    *inHTMLfile << "Calculus completed in "
                << cStringWithSigned (inIterationsCount)
                << " iterations, "
                << cStringWithSigned (m)
                << " values ;\n"
                   "'$$' means the nonterminal can be derived to empty string (see step 4).\n" ;
    inHTMLfile->outputRawData ("</p>") ;
    inHTMLfile->outputRawData ("<table class=\"result\">") ;
    for (int32_t symbol=inVocabulary.getTerminalSymbolsCount () ; symbol < symbolsCount ; symbol++) {
      inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
      inVocabulary.printInFile (*inHTMLfile, symbol COMMA_HERE) ;
      inHTMLfile->outputRawData ("</code></td><td><code>") ;
      const int32_t length = outFIRSTarray (symbol COMMA_HERE).count () ;
      for (int32_t e=0 ; e<length ; e++) {
        *inHTMLfile << " " ;
        inVocabulary.printInFile (*inHTMLfile, outFIRSTarray (symbol COMMA_HERE) (e COMMA_HERE) COMMA_HERE) ;
      }
      inHTMLfile->outputRawData ("</code></td></tr>") ;
    }
    inHTMLfile->outputRawData ("</table>") ;
  }
//----------------------------------------------- Check FIRST

//--- Ensemble des non-terminaux a verifier
  C_BDD_Set1 ex_ntToCheck (inUsefulSymbols) ;
  ex_ntToCheck.init (C_BDD::kGreaterOrEqual,(uint32_t) inVocabulary.getTerminalSymbolsCount ()) ;

  const C_BDD ntToCheck = C_BDD::varCompareConst (0,
                                                  inBDDBitCount,
                                                  C_BDD::kGreaterOrEqual,
                                                  (uint32_t) inVocabulary.getTerminalSymbolsCount ()) ; 

//--- Get nonterminal symbols in error
  const C_BDD_Set1 ex_ntInError = ex_ntToCheck & inUsefulSymbols & ~(ex_FIRST_with_empty.projeterSurAxe1 ()) ; 
  const C_BDD ntInError = ntToCheck & inUsefulSymbols.bdd () & ~(FIRST_with_empty.existsOnBitsAfterNumber (inBDDBitCount)) ; 
  if (ntInError != (ex_ntInError.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }
  const int32_t ntInErrorCount2 = (int32_t) ntInError.valueCount64 (inBDDBitCount) ;
  const int32_t ntInErrorCount = (int32_t) ex_ntInError.getValuesCount () ;
  if (ntInErrorCount2 != ntInErrorCount) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }

//--- Display nonterminal symbols in error
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p>") ;
    *inHTMLfile << "Every useful nonterminal should"
                   " either have a non empty FIRST,"
                   " either be derived to empty string,"
                   " either both."
                   " In any way having none: it is an error." ;
    inHTMLfile->outputRawData ("</p>") ;
    inHTMLfile->outputRawData ("<p>") ;
    if (ntInErrorCount == 0L) {
      inHTMLfile->outputRawData ("<span class=\"success\">") ;
      *inHTMLfile << "All FIRST are correct.\n\n" ;
      inHTMLfile->outputRawData ("</span>") ;
    }else{
      inHTMLfile->outputRawData ("<span class=\"error\">") ;
      *inHTMLfile << "Error : "
                  << cStringWithSigned (ntInErrorCount)
                  << " nonterminal symbol"
                  << ((ntInErrorCount>1) ? " has" : "s have")
                  << " an empty FIRST :" ;
      TC_UniqueArray <bool> errorArray2 ;
      ntInError.getBoolArray (errorArray2, (uint32_t) inVocabulary.getAllSymbolsCount(), inBDDBitCount) ;
      TC_UniqueArray <bool> errorArray ;
      ex_ntInError.getArray (errorArray) ;
      if (errorArray != errorArray2) {
        printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
      }
      inHTMLfile->outputRawData ("<code>") ;
      for (int32_t symbol=inVocabulary.getTerminalSymbolsCount () ; symbol < symbolsCount ; symbol++) {
        if (errorArray (symbol COMMA_HERE)) {
          *inHTMLfile << " " ;
          inVocabulary.printInFile (*inHTMLfile, symbol COMMA_HERE) ;
        }
      }
      inHTMLfile->outputRawData ("</code>") ;
      inHTMLfile->outputRawData ("</span>") ;
    }
    inHTMLfile->outputRawData ("</p>") ;
  }
  if (inVerboseOptionOn) {
    if (ntInErrorCount == 0L) {
      co << "ok.\n" ;
    }else{
      co << "error.\n" ;
    }
    co.flush () ;
  }
  return ntInErrorCount == 0L ; 
}

//-----------------------------------------------------------------------------*

void
FIRST_computations (const cPureBNFproductionsList & inPureBNFproductions,
                    const uint16_t inBDDBitCount,
                    C_HTML_FileWrite * inHTMLfile,
                    const cVocabulary & inVocabulary,
                    const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                    const C_BDD_Set1 & inVocabularyDerivingToEmpty_BDD,
                    const C_BDD_Set1 & inUsefulSymbols,
                    C_BDD_Set2 & outFIRSTsets,
                    TC_UniqueArray <TC_UniqueArray <int32_t> > & outFIRSTarray,
                    const C_BDD_Descriptor & inDescriptor,
                    bool & outOk,
                    const bool inVerboseOptionOn) {
//--- Console display
  if (inVerboseOptionOn) {
    co << "  Computing the FIRST sets... " ;
    co.flush () ;
  }
//--- Print in BNF file
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p><a name=\"first_sets\"></a></p>") ;
    inHTMLfile->appendCppTitleComment ("FIRST set", "title") ;
  }

//--- Compute FIRST sets
  int32_t iterationsCount = 0 ;
  outFIRSTsets = computeFIRSTsets (inPureBNFproductions,
                                   inBDDBitCount,
                                   inVocabularyDerivingToEmpty_Array,
                                   inVocabulary.getTerminalSymbolsCount (),
                                   inDescriptor,
                                   iterationsCount) ;

//--- Display FIRST
 outOk = displayAndCheckFIRSTsets (inHTMLfile,
                                   inBDDBitCount,
                                   inVocabularyDerivingToEmpty_BDD,
                                   inVocabulary,
                                   inUsefulSymbols,
                                   outFIRSTsets,
                                   outFIRSTarray,
                                   iterationsCount,
                                   inVerboseOptionOn) ;
}

//-----------------------------------------------------------------------------*

