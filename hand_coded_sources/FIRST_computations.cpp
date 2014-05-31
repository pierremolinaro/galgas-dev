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
        right.orWith (C_Relation (vocabulary2Config, 1, C_BDD::kEqual, (uint64_t) p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) COMMA_HERE) ;
        j++ ;
      }while ((j<n) && inVocabularyDerivingInEmptyString (p.derivationAtIndex (j-1 COMMA_HERE) COMMA_HERE)) ;
      directFIRST.orWith (left.andOp (right COMMA_HERE) COMMA_HERE) ;
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

static bool
displayAndCheckFIRSTsets (C_HTML_FileWrite * inHTMLfile,
                          const C_Relation & inVocabularyDerivingInEmptyString,
                          const cVocabulary & inVocabulary,
                          const C_Relation & inUsefulSymbols,
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

//--- FIRST union nt symbols deriring in empty string
  const C_Relation FIRST_with_empty_relation = nt_x_empty_relation.orOp (inFIRSTsets COMMA_HERE) ;

//--- Compute FIRST array
  FIRST_with_empty_relation.getArray (outFIRSTarray COMMA_HERE) ;

//--- Display FIRST
  const uint64_t m = FIRST_with_empty_relation.value64Count() ;
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
  const uint64_t ntInErrorCount = ntInError_relation.value64Count () ;

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
    if (ntInErrorCount == 0) {
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
                    C_HTML_FileWrite * inHTMLfile,
                    const cVocabulary & inVocabulary,
                    const TC_UniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                    const C_Relation & inVocabularyDerivingToEmpty,
                    const C_Relation & inUsefulSymbols,
                    TC_UniqueArray <TC_UniqueArray <uint64_t> > & outFIRSTarray,
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
  outFIRSTsets = computeFIRSTsets (inPureBNFproductions,
                                   inVocabularyDerivingToEmpty_Array,
                                   inVocabulary.getTerminalSymbolsCount (),
                                   vocabularyConfiguration,
                                   iterationsCount) ;

//--- Display and Check FIRST
 outOk = displayAndCheckFIRSTsets (inHTMLfile,
                                  inVocabularyDerivingToEmpty,
                                   inVocabulary,
                                   inUsefulSymbols,
                                   outFIRSTsets,
                                   outFIRSTarray,
                                   iterationsCount,
                                   inVerboseOptionOn) ;
}

//-----------------------------------------------------------------------------*

