//---------------------------------------------------------------------------*
//                                                                           *
//  Perform FIRST computations for pure BNF grammar.                         *
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
#include "bdd/C_BDD_Set2.h"
#include "generic_arraies/TC_Array2.h"

//---------------------------------------------------------------------------*

#include "FIRST_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//---------------------------------------------------------------------------*

static C_BDD_Set2
computeFIRSTsets (const cPureBNFproductionsList & inProductionRules,
                  const uint16 inBDDBitCount,
                  const TC_UniqueArray <bool> & inVocabularyDerivingInEmptyString,
                  const sint32 inTerminalSymbolsCount,
                  const C_BDD_Descriptor & inDescriptor,
                  sint32 & outIterationsCount) {
//--- Compute direct firsts with each production
  C_BDD_Set2 ex_directFIRST (inDescriptor, inDescriptor) ;
  C_BDD_Set2 ex_pr (inDescriptor, inDescriptor) ;
  C_BDD_Set2 temp (inDescriptor, inDescriptor) ;
  C_BDD_Set2 ex_left (inDescriptor, inDescriptor) ;
  C_BDD directFIRST ;
  for (sint32 i=0 ; i<inProductionRules.length () ; i++) {
    const cProduction & p = inProductionRules (i COMMA_HERE) ;
    const sint32 n = p.aDerivation.count () ;
    if (n > 0) {
      const C_BDD left = C_BDD::varCompareConst (0, inBDDBitCount, C_BDD::kEqual, (uint32) p.aNumeroNonTerminalGauche) ;
      ex_left.initDimension1 (C_BDD::kEqual, (uint32) p.aNumeroNonTerminalGauche) ;
      sint32 j = 0 ;
      ex_pr.clear () ;
      C_BDD pr ;
      do{
        temp.initDimension2 (C_BDD::kEqual, (uint32) p.aDerivation (j COMMA_HERE)) ;
        ex_pr |= temp ;
        pr |= C_BDD::varCompareConst (inBDDBitCount, inBDDBitCount, C_BDD::kEqual, (uint32) p.aDerivation (j COMMA_HERE)) ;
        j++ ;
      }while ((j<n) && inVocabularyDerivingInEmptyString (p.aDerivation (j-1 COMMA_HERE) COMMA_HERE)) ;
      ex_directFIRST |= ex_left & ex_pr ;
      directFIRST |= left & pr ;
    }
  }
  if (! directFIRST.isEqualToBDD (ex_directFIRST.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }


//--- Perform transitive closure of 'directFIRST'
  C_BDD_Set2 ex_FIRST = ex_directFIRST.getTransitiveClosure (outIterationsCount) ;
  C_BDD FIRST = directFIRST.transitiveClosure (inBDDBitCount, NULL) ;
  if (! FIRST.isEqualToBDD (ex_FIRST.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }

//--- Delete nonterminal symbols in FIRST
  temp.initDimension2 (C_BDD::kLowerOrEqual, (uint32) (inTerminalSymbolsCount - 1)) ;
  ex_FIRST &= temp ;
  FIRST &= C_BDD::varCompareConst (inBDDBitCount,
                                   inBDDBitCount,
                                   C_BDD::kLowerOrEqual,
                                   (uint32) (inTerminalSymbolsCount - 1)) ;
  if (! FIRST.isEqualToBDD (ex_FIRST.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }

  return ex_FIRST ;
}

//---------------------------------------------------------------------------*

static bool
displayAndCheckFIRSTsets (C_HTML_FileWrite * inHTMLfile,
                          const uint16 inBDDBitCount,
                          const C_BDD_Set1 & inVocabularyDerivingInEmptyString,
                          const cVocabulary & inVocabulary,
                          const C_BDD_Set1 & inUsefulSymbols,
                          const C_BDD_Set2 & inFIRSTsets,
                          TC_UniqueArray <TC_UniqueArray <sint32> > & outFIRSTarray,
                          const sint32 inIterationsCount,
                          const bool inVerboseOptionOn) {
  const sint32 symbolsCount = inVocabulary.getAllSymbolsCount () ;
//--- Build cartesian product 'inVocabularyDerivingInEmptyString' * 'empty string terminal symbol'
  C_BDD_Set1 temp (inVocabularyDerivingInEmptyString) ;
  temp.init (C_BDD::kEqual, (uint16) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ; ;
  const C_BDD_Set2 ex_nt_x_empty = inVocabularyDerivingInEmptyString * temp ;

  const C_BDD emptyStringTerminalSymbolIndex =
    C_BDD::varCompareConst (inBDDBitCount,
                            inBDDBitCount,
                            C_BDD::kEqual,
                            (uint32) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ; 
  const C_BDD nt_x_empty = inVocabularyDerivingInEmptyString.bdd () & emptyStringTerminalSymbolIndex ;
  if (! nt_x_empty.isEqualToBDD (ex_nt_x_empty.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    printf ("nt_x_empty   : %s\n", nt_x_empty.queryStringValue ().cString ()) ;
    printf ("ex_nt_x_empty: %s\n", ex_nt_x_empty.bdd ().queryStringValue ().cString ()) ;
  }

//--- FIRST union nt symbols deriring in empty string
  const C_BDD_Set2 ex_FIRST_with_empty = ex_nt_x_empty | inFIRSTsets ;
  const C_BDD FIRST_with_empty = nt_x_empty | inFIRSTsets.bdd () ;
  if (! FIRST_with_empty.isEqualToBDD (ex_FIRST_with_empty.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }

//--- Compute FIRST array
  ex_FIRST_with_empty.getArray (outFIRSTarray) ;

  TC_UniqueArray <TC_UniqueArray <sint32> > FIRSTArray ;
  FIRST_with_empty.getArray2 (FIRSTArray, (uint32) inVocabulary.getAllSymbolsCount(), inBDDBitCount, inBDDBitCount) ;
  if (outFIRSTarray != FIRSTArray) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }

//--- Display FIRST
  const sint32 mm = (sint32) FIRST_with_empty.valueCount (inBDDBitCount) ;
  const sint32 m = (sint32) ex_FIRST_with_empty.getValuesCount () ;
  if (mm != m) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p>") ;
    *inHTMLfile << "Calculus completed in "
                << inIterationsCount
                << " iterations, "
                << m
                << " values ;\n"
                   "'$$' means the nonterminal can be derived to empty string (see step 4).\n" ;
    inHTMLfile->outputRawData ("</p>") ;
    inHTMLfile->outputRawData ("<table class=\"result\">") ;
    for (sint32 symbol=inVocabulary.getTerminalSymbolsCount () ; symbol < symbolsCount ; symbol++) {
      inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
      inVocabulary.printInFile (*inHTMLfile, symbol COMMA_HERE) ;
      inHTMLfile->outputRawData ("</code></td><td><code>") ;
      const sint32 length = outFIRSTarray (symbol COMMA_HERE).count () ;
      for (sint32 e=0 ; e<length ; e++) {
        *inHTMLfile << ' ' ;
        inVocabulary.printInFile (*inHTMLfile, outFIRSTarray (symbol COMMA_HERE) (e COMMA_HERE) COMMA_HERE) ;
      }
      inHTMLfile->outputRawData ("</code></td></tr>") ;
    }
    inHTMLfile->outputRawData ("</table>") ;
  }
//----------------------------------------------- Check FIRST

//--- Ensemble des non-terminaux a verifier
  C_BDD_Set1 ex_ntToCheck (inUsefulSymbols) ;
  ex_ntToCheck.init (C_BDD::kGreaterOrEqual,(uint32) inVocabulary.getTerminalSymbolsCount ()) ;

  const C_BDD ntToCheck = C_BDD::varCompareConst (0,
                                                  inBDDBitCount,
                                                  C_BDD::kGreaterOrEqual,
                                                  (uint32) inVocabulary.getTerminalSymbolsCount ()) ; 

//--- Get nonterminal symbols in error
  const C_BDD_Set1 ex_ntInError = ex_ntToCheck & inUsefulSymbols & ~(ex_FIRST_with_empty.projeterSurAxe1 ()) ; 
  const C_BDD ntInError = ntToCheck & inUsefulSymbols.bdd () & ~(FIRST_with_empty.existsOnBitsAfterNumber (inBDDBitCount)) ; 
  if (! ntInError.isEqualToBDD (ex_ntInError.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }
  const sint32 ntInErrorCount2 = (sint32) ntInError.valueCount (inBDDBitCount) ;
  const sint32 ntInErrorCount = (sint32) ex_ntInError.getValuesCount () ;
  if (ntInErrorCount2 != ntInErrorCount) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
  }

//--- Display nonterminal symbols in error
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p>") ;
    *inHTMLfile << "Every useful nonterminal must :"
                   " either have a non empty FIRST,"
                   " either be derived to empty string,"
                   " either both."
                   " In any way having none : it is an error." ;
    inHTMLfile->outputRawData ("</p>") ;
    inHTMLfile->outputRawData ("<p>") ;
    if (ntInErrorCount == 0L) {
      inHTMLfile->outputRawData ("<span class=\"success\">") ;
      *inHTMLfile << "All FIRST are correct.\n\n" ;
      inHTMLfile->outputRawData ("</span>") ;
    }else{
      inHTMLfile->outputRawData ("<span class=\"error\">") ;
      *inHTMLfile << "Error : "
                  << ntInErrorCount
                  << " nonterminal symbol"
                  << ((ntInErrorCount>1) ? " has" : "s have")
                  << " an empty FIRST :" ;
      TC_UniqueArray <bool> errorArray2 ;
      ntInError.getBoolArray (errorArray2, (uint32) inVocabulary.getAllSymbolsCount(), inBDDBitCount) ;
      TC_UniqueArray <bool> errorArray ;
      ex_ntInError.getArray (errorArray) ;
      if (errorArray != errorArray2) {
        printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
      }
      inHTMLfile->outputRawData ("<code>") ;
      for (sint32 symbol=inVocabulary.getTerminalSymbolsCount () ; symbol < symbolsCount ; symbol++) {
        if (errorArray (symbol COMMA_HERE)) {
          *inHTMLfile << ' ' ;
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

//---------------------------------------------------------------------------*

void
FIRST_computations (const cPureBNFproductionsList & inPureBNFproductions,
                    const uint16 inBDDBitCount,
                    C_HTML_FileWrite * inHTMLfile,
                    const cVocabulary & inVocabulary,
                    const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                    const C_BDD_Set1 & inVocabularyDerivingToEmpty_BDD,
                    const C_BDD_Set1 & inUsefulSymbols,
                    C_BDD_Set2 & outFIRSTsets,
                    TC_UniqueArray <TC_UniqueArray <sint32> > & outFIRSTarray,
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
    inHTMLfile->writeCppTitleComment ("FIRST set", "title") ;
  }

//--- Compute FIRST sets
  sint32 iterationsCount = 0 ;
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

//---------------------------------------------------------------------------*

