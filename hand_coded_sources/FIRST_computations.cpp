//-----------------------------------------------------------------------------*
//                                                                             *
//  Perform FIRST computations for pure BNF grammar.                           *
//                                                                             *
//  Copyright (C) 1999, ..., 2014 Pierre Molinaro.                             *
//                                                                             *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                      *
//                                                                             *
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
#include "collections/TC_Array2.h"

#include "bdd/C_BDD_Set2.h"

//-----------------------------------------------------------------------------*

#include "FIRST_computations.h"
#include "cPureBNFproductionsList.h"
#include "cVocabulary.h"

//-----------------------------------------------------------------------------*

static C_Relation
computeFIRSTsets (const cPureBNFproductionsList & inProductionRules,
                  const TC_UniqueArray <bool> & inVocabularyDerivingInEmptyString,
                  const int32_t inTerminalSymbolsCount,
                  const C_RelationConfiguration & inVocabularyConfiguration,
                  int32_t & outIterationsCount) {
  C_RelationConfiguration vocabulary2Config = inVocabularyConfiguration ;
  vocabulary2Config.appendConfiguration (inVocabularyConfiguration) ;
//---------------------------------- Compute direct firsts with each production
  C_Relation directFIRST (vocabulary2Config, false) ;
  for (int32_t i=0 ; i<inProductionRules.length () ; i++) {
    const cProduction & p = inProductionRules (i COMMA_HERE) ;
    const int32_t n = p.derivationLength () ;
    if (n > 0) {
      const C_Relation left (vocabulary2Config, 0, C_BDD::kEqual, (uint64_t) p.leftNonTerminalIndex () COMMA_HERE) ;
      int32_t j = 0 ;
      C_Relation right (vocabulary2Config, false) ;
      do{
        right |= C_Relation (vocabulary2Config, 1, C_BDD::kEqual, (uint64_t) p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) ;
        j++ ;
      }while ((j<n) && inVocabularyDerivingInEmptyString (p.derivationAtIndex (j-1 COMMA_HERE) COMMA_HERE)) ;
      directFIRST |= left.andOp (right COMMA_HERE) ;
    }
  }
  
//---------------------------------- Perform transitive closure of 'directFIRST'
  C_Relation FIRST = directFIRST.transitiveClosure (& outIterationsCount) ;

//----------------------------------------- Delete nonterminal symbols in FIRST
  FIRST.andWith (C_Relation (vocabulary2Config,
                             1,
                             C_BDD::kLowerOrEqual,
                             (uint64_t) (inTerminalSymbolsCount - 1)
                             COMMA_HERE)
                 COMMA_HERE) ;

//-----------------------------------------
  return FIRST ;
}

//-----------------------------------------------------------------------------*

static C_BDD_Set2
computeFIRSTsetsEX (const cPureBNFproductionsList & inProductionRules,
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
                          const C_BDD_Set1 & inVocabularyDerivingInEmptyStringEX,
                          const C_Relation & inVocabularyDerivingInEmptyString,
                          const cVocabulary & inVocabulary,
                          const C_BDD_Set1 & inUsefulSymbolsEX,
                          const C_Relation & inUsefulSymbols,
                          const C_BDD_Set2 & inFIRSTsetsEX,
                          const C_Relation & inFIRSTsets,
                          TC_UniqueArray <TC_UniqueArray <uint64_t> > & outFIRSTarray,
                          const int32_t inIterationsCount,
                          const bool inVerboseOptionOn) {
  const int32_t symbolsCountEX = inVocabulary.getAllSymbolsCount () ;
  const int32_t symbolsCount = (int32_t) inUsefulSymbols.configuration().constantCountForVariable (0 COMMA_HERE) ;
  if (symbolsCountEX != symbolsCount) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }
  C_RelationConfiguration vocabulary2Config = inUsefulSymbols.configuration() ;
  vocabulary2Config.appendConfiguration (inUsefulSymbols.configuration()) ;
//--- Build cartesian product 'inVocabularyDerivingInEmptyString' * 'empty string terminal symbol'
  const C_Relation empty (vocabulary2Config, 1, C_BDD::kEqual, (uint64_t) inVocabulary.getEmptyStringTerminalSymbolIndex () COMMA_HERE) ;
  C_Relation vocabularyDerivingInEmptyString = inVocabularyDerivingInEmptyString ;
  vocabularyDerivingInEmptyString.appendConfiguration (inUsefulSymbols.configuration()) ;
  const C_Relation nt_x_empty_relation = vocabularyDerivingInEmptyString.andOp (empty COMMA_HERE) ;

  C_BDD_Set1 temp (inVocabularyDerivingInEmptyStringEX) ;
  temp.init (C_BDD::kEqual, (uint16_t) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ;
  const C_BDD_Set2 ex_nt_x_empty = inVocabularyDerivingInEmptyStringEX * temp ;

  const C_BDD emptyStringTerminalSymbolIndex =
    C_BDD::varCompareConst (inBDDBitCount,
                            inBDDBitCount,
                            C_BDD::kEqual,
                            (uint32_t) inVocabulary.getEmptyStringTerminalSymbolIndex ()) ; 
  const C_BDD nt_x_empty = inVocabularyDerivingInEmptyStringEX.bdd () & emptyStringTerminalSymbolIndex ;
  if (nt_x_empty != (nt_x_empty_relation.bdd ())) {
    printf ("*** nt_x_empty != (nt_x_empty_relation.bdd () ***\n") ;
    exit (1) ;
  }
  if (nt_x_empty != (ex_nt_x_empty.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    printf ("nt_x_empty   : %s\n", nt_x_empty.queryStringValue (HERE).cString (HERE)) ;
    printf ("ex_nt_x_empty: %s\n", ex_nt_x_empty.bdd ().queryStringValue (HERE).cString (HERE)) ;
  }

//--- FIRST union nt symbols deriring in empty string
  const C_Relation FIRST_with_empty_relation = nt_x_empty_relation | inFIRSTsets ;
  const C_BDD_Set2 ex_FIRST_with_empty = ex_nt_x_empty | inFIRSTsetsEX ;
  const C_BDD FIRST_with_empty = nt_x_empty | inFIRSTsetsEX.bdd () ;
  if (FIRST_with_empty != (ex_FIRST_with_empty.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }
  if (FIRST_with_empty != (FIRST_with_empty_relation.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

//--- Compute FIRST array
  TC_UniqueArray <TC_UniqueArray <uint64_t> > FIRSTarray_relation ;
  FIRST_with_empty_relation.getArray (FIRSTarray_relation COMMA_HERE) ;
  ex_FIRST_with_empty.getArray (outFIRSTarray) ;

  TC_UniqueArray <TC_UniqueArray <uint64_t> > FIRSTArray ;
  FIRST_with_empty.getArray2 (FIRSTArray, (uint32_t) inVocabulary.getAllSymbolsCount(), inBDDBitCount, inBDDBitCount) ;
  if (outFIRSTarray != FIRSTArray) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }
  if (outFIRSTarray != FIRSTarray_relation) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }

//--- Display FIRST
  const uint64_t m = FIRST_with_empty_relation.value64Count() ;
  if (m != ex_FIRST_with_empty.getValuesCount ()){
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p>") ;
    *inHTMLfile << "Calculus completed in "
                << cStringWithSigned (inIterationsCount)
                << " iterations, "
                << cStringWithUnsigned (m)
                << " values ;\n"
                   "'$$' means the nonterminal can be derived to empty string (see step 4).\n" ;
    inHTMLfile->outputRawData ("</p>") ;
    inHTMLfile->outputRawData ("<table class=\"result\">") ;
    for (int32_t symbol=inVocabulary.getTerminalSymbolsCount () ; symbol < symbolsCount ; symbol++) {
      inHTMLfile->outputRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
      *inHTMLfile << FIRST_with_empty_relation.configuration().constantNameForVariableAndValue(0, (uint32_t) symbol COMMA_HERE) ;
      inHTMLfile->outputRawData ("</code></td><td><code>") ;
      const int32_t length = outFIRSTarray (symbol COMMA_HERE).count () ;
      for (int32_t e=0 ; e<length ; e++) {
        *inHTMLfile << " " ;
        inVocabulary.printInFile (*inHTMLfile, (int32_t) outFIRSTarray (symbol COMMA_HERE) (e COMMA_HERE) COMMA_HERE) ;
      }
      inHTMLfile->outputRawData ("</code></td></tr>") ;
    }
    inHTMLfile->outputRawData ("</table>") ;
  }
//----------------------------------------------- Check FIRST
  const C_Relation ntToCheck_relation (inUsefulSymbols.configuration(),
                              0,
                              C_BDD::kGreaterOrEqual,
                              (uint64_t) inVocabulary.getTerminalSymbolsCount ()
                              COMMA_HERE) ;
//--- Get nonterminal symbols in error
  const C_Relation ntInError_relation = ntToCheck_relation
    .andOp (inUsefulSymbols COMMA_HERE)
    .andOp (~(FIRST_with_empty_relation.relationByDeletingLastVariable (HERE)) COMMA_HERE)
  ; 
  const uint64_t ntInErrorCount_relation = ntInError_relation.value64Count () ;

//--- Ensemble des non-terminaux a verifier
  C_BDD_Set1 ex_ntToCheck (inUsefulSymbolsEX) ;
  ex_ntToCheck.init (C_BDD::kGreaterOrEqual,(uint32_t) inVocabulary.getTerminalSymbolsCount ()) ;

  const C_BDD ntToCheck = C_BDD::varCompareConst (0,
                                                  inBDDBitCount,
                                                  C_BDD::kGreaterOrEqual,
                                                  (uint32_t) inVocabulary.getTerminalSymbolsCount ()) ; 

//--- Get nonterminal symbols in error
  const C_BDD_Set1 ex_ntInError = ex_ntToCheck & inUsefulSymbolsEX & ~(ex_FIRST_with_empty.projeterSurAxe1 ()) ; 
  const C_BDD ntInError = ntToCheck & inUsefulSymbolsEX.bdd () & ~(FIRST_with_empty.existsOnBitsAfterNumber (inBDDBitCount)) ; 
  if (ntInError != (ex_ntInError.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }
  if (ntInError != (ntInError_relation.bdd ())) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }
  const uint64_t ntInErrorCount2 = ntInError.valueCount64 (inBDDBitCount) ;
  const uint64_t ntInErrorCount = ex_ntInError.getValuesCount () ;
  if (ntInErrorCount2 != ntInErrorCount) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
  }
  if (ntInErrorCount_relation != ntInErrorCount) {
    printf ("\n********* FIRST SET ERROR line %d: WARN PIERRE MOLINARO ***************\n", __LINE__) ;
    exit (1) ;
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
                  << cStringWithUnsigned (ntInErrorCount)
                  << " nonterminal symbol"
                  << ((ntInErrorCount>1) ? " has" : "s have")
                  << " an empty FIRST :" ;
      TC_UniqueArray <uint64_t> errorArray_relation ;
      ntInError_relation.getValueArray (errorArray_relation) ;
      inHTMLfile->outputRawData ("<code>") ;
      for (int32_t i=0 ; i<errorArray_relation.count () ; i++) {
        const uint64_t ntInError = errorArray_relation (i COMMA_HERE) ;
        *inHTMLfile << " "
                    << ntInError_relation.configuration().constantNameForVariableAndValue (0, (uint32_t) ntInError COMMA_HERE) ;
      }
      inHTMLfile->outputRawData ("</code>") ;
      inHTMLfile->outputRawData ("</span>") ;
    }
    inHTMLfile->outputRawData ("</p>") ;
  }
  if (inVerboseOptionOn) {
    if (ntInErrorCount == 0) {
      co << "ok.\n" ;
    }else{
      co << "error.\n" ;
    }
    co.flush () ;
  }
  return ntInErrorCount == 0 ; 
}

//-----------------------------------------------------------------------------*

void
FIRST_computations (const cPureBNFproductionsList & inPureBNFproductions,
                    const uint16_t inBDDBitCount,
                    C_HTML_FileWrite * inHTMLfile,
                    const cVocabulary & inVocabulary,
                    const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                    const C_BDD_Set1 & inVocabularyDerivingToEmpty_BDD,
                    const C_Relation & inVocabularyDerivingToEmpty,
                    const C_BDD_Set1 & inUsefulSymbolsEX,
                    const C_Relation & inUsefulSymbols,
                    C_BDD_Set2 & outFIRSTsetsEX,
                    TC_UniqueArray <TC_UniqueArray <uint64_t> > & outFIRSTarray,
                    const C_BDD_Descriptor & inDescriptor,
                    C_Relation & outFIRSTsets,
                    bool & outOk,
                    const bool inVerboseOptionOn) {
  const C_RelationConfiguration vocabularyConfiguration = inUsefulSymbols.configuration () ;
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
  outFIRSTsetsEX = computeFIRSTsetsEX (inPureBNFproductions,
                                   inBDDBitCount,
                                   inVocabularyDerivingToEmpty_Array,
                                   inVocabulary.getTerminalSymbolsCount (),
                                   inDescriptor,
                                   iterationsCount) ;

  outFIRSTsets = computeFIRSTsets (inPureBNFproductions,
                                   inVocabularyDerivingToEmpty_Array,
                                   inVocabulary.getTerminalSymbolsCount (),
                                   vocabularyConfiguration,
                                   iterationsCount) ;

  if (outFIRSTsets.bdd () != outFIRSTsetsEX.bdd ()) {
    printf ("*** outFIRSTsets.bdd () != outFIRSTsetsEX.bdd () ***\n") ;
    exit (1) ;
  }
//--- Display and Check FIRST
 outOk = displayAndCheckFIRSTsets (inHTMLfile,
                                   inBDDBitCount,
                                   inVocabularyDerivingToEmpty_BDD,
                                   inVocabularyDerivingToEmpty,
                                   inVocabulary,
                                   inUsefulSymbolsEX,
                                   inUsefulSymbols,
                                   outFIRSTsetsEX,
                                   outFIRSTsets,
                                   outFIRSTarray,
                                   iterationsCount,
                                   inVerboseOptionOn) ;
}

//-----------------------------------------------------------------------------*

