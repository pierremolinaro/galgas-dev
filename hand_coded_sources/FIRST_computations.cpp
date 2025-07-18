//--------------------------------------------------------------------------------------------------
//
//  Perform FIRST computations for pure BNF grammar.
//
//  Copyright (C) 1999, ..., 2024 Pierre Molinaro.
//
//  MIT License
//                                           
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute,
// sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//                                           
//--------------------------------------------------------------------------------------------------

#include "HTMLString.h"
#include "BinaryDecisionDiagramRelation.h"

//--------------------------------------------------------------------------------------------------

#include "FIRST_computations.h"
#include "PureBNFproductionsList.h"
#include "GrammarVocabulary.h"

//--------------------------------------------------------------------------------------------------

static BinaryDecisionDiagramRelation
computeFIRSTsets (const PureBNFproductionsList & inProductionRules,
                  const GenericUniqueArray <bool> & inVocabularyDerivingInEmptyString,
                  const int32_t inTerminalSymbolsCount,
                  const BinaryDecisionDiagramRelationConfiguration & inVocabularyConfiguration,
                  int32_t & outIterationsCount) {
  BinaryDecisionDiagramRelationConfiguration vocabulary2Config = inVocabularyConfiguration ;
  vocabulary2Config.appendConfiguration (inVocabularyConfiguration) ;
//---------------------------------- Compute direct firsts with each production
  BinaryDecisionDiagramRelation directFIRST (vocabulary2Config, false) ;
  for (int32_t i=0 ; i<inProductionRules.mProductionArray.count () ; i++) {
    const GrammarProduction & p = inProductionRules.mProductionArray (i COMMA_HERE) ;
    const int32_t n = p.derivationLength () ;
    if (n > 0) {
      const BinaryDecisionDiagramRelation left (vocabulary2Config, 0, BinaryDecisionDiagram::kEqual, (uint64_t) p.leftNonTerminalIndex () COMMA_HERE) ;
      int32_t j = 0 ;
      BinaryDecisionDiagramRelation right (vocabulary2Config, false) ;
      do{
        right.orWith (BinaryDecisionDiagramRelation (vocabulary2Config, 1, BinaryDecisionDiagram::kEqual, (uint64_t) p.derivationAtIndex (j COMMA_HERE) COMMA_HERE) COMMA_HERE) ;
        j++ ;
      }while ((j<n) && inVocabularyDerivingInEmptyString (p.derivationAtIndex (j-1 COMMA_HERE) COMMA_HERE)) ;
      directFIRST.orWith (left.andOp (right COMMA_HERE) COMMA_HERE) ;
    }
  }

//---------------------------------- Perform transitive closure of 'directFIRST'
  BinaryDecisionDiagramRelation FIRST = directFIRST.transitiveClosure (& outIterationsCount) ;

//----------------------------------------- Delete nonterminal symbols in FIRST
  FIRST.andWith (BinaryDecisionDiagramRelation (vocabulary2Config,
                             1,
                             BinaryDecisionDiagram::kLowerOrEqual,
                             (uint64_t) (inTerminalSymbolsCount - 1)
                             COMMA_HERE)
                 COMMA_HERE) ;

//-----------------------------------------
  return FIRST ;
}

//--------------------------------------------------------------------------------------------------

static bool
displayAndCheckFIRSTsets (HTMLString & ioHTMLFileContents,
                          const bool inPopulateHTMLHelperString,
                          const BinaryDecisionDiagramRelation & inVocabularyDerivingInEmptyString,
                          const GrammarVocabulary & inVocabulary,
                          const BinaryDecisionDiagramRelation & inUsefulSymbols,
                          const BinaryDecisionDiagramRelation & inFIRSTsets,
                          GenericUniqueArray <GenericUniqueArray <uint64_t> > & outFIRSTarray,
                          const int32_t inIterationsCount,
                          const bool inVerboseOptionOn) {
  const int32_t symbolsCount = (int32_t) inUsefulSymbols.configuration().constantCountForVariable (0 COMMA_HERE) ;
  BinaryDecisionDiagramRelationConfiguration vocabulary2Config = inUsefulSymbols.configuration() ;
  vocabulary2Config.appendConfiguration (inUsefulSymbols.configuration()) ;
//--- Build cartesian product 'inVocabularyDerivingInEmptyString' * 'empty string terminal symbol'
  const BinaryDecisionDiagramRelation empty (vocabulary2Config, 1, BinaryDecisionDiagram::kEqual, (uint64_t) inVocabulary.getEmptyStringTerminalSymbolIndex () COMMA_HERE) ;
  BinaryDecisionDiagramRelation vocabularyDerivingInEmptyString = inVocabularyDerivingInEmptyString ;
  vocabularyDerivingInEmptyString.appendConfiguration (inUsefulSymbols.configuration()) ;
  const BinaryDecisionDiagramRelation nt_x_empty_relation = vocabularyDerivingInEmptyString.andOp (empty COMMA_HERE) ;

//--- FIRST union nt symbols deriring in empty string
  const BinaryDecisionDiagramRelation FIRST_with_empty_relation = nt_x_empty_relation.orOp (inFIRSTsets COMMA_HERE) ;

//--- Compute FIRST array
  FIRST_with_empty_relation.getArray (outFIRSTarray COMMA_HERE) ;

//--- Display FIRST
  const uint64_t m = FIRST_with_empty_relation.value64Count() ;
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p>") ;
    ioHTMLFileContents.appendCString ("Calculus completed in ") ;
    ioHTMLFileContents.appendSigned (inIterationsCount) ;
    ioHTMLFileContents.appendCString (" iterations, ") ;
    ioHTMLFileContents.appendUnsigned (m) ;
    ioHTMLFileContents.appendCString (" values ;\n"
                          "'$$' means the nonterminal can be derived to empty string (see step 4).\n") ;
    ioHTMLFileContents.addRawData ("</p>") ;
    ioHTMLFileContents.addRawData ("<table class=\"result\">") ;
    for (int32_t symbol=inVocabulary.getTerminalSymbolsCount () ; symbol < symbolsCount ; symbol++) {
      ioHTMLFileContents.addRawData ("<tr class=\"result_line\"><td class=\"result_line\"><code>") ;
      ioHTMLFileContents.appendString (FIRST_with_empty_relation.configuration().constantNameForVariableAndValue(0, (uint32_t) symbol COMMA_HERE)) ;
      ioHTMLFileContents.addRawData ("</code></td><td><code>") ;
      const int32_t length = outFIRSTarray (symbol COMMA_HERE).count () ;
      for (int32_t e=0 ; e<length ; e++) {
        ioHTMLFileContents.appendCString (" ") ;
        inVocabulary.printInFile (ioHTMLFileContents, (int32_t) outFIRSTarray (symbol COMMA_HERE) (e COMMA_HERE) COMMA_HERE) ;
      }
      ioHTMLFileContents.addRawData ("</code></td></tr>") ;
    }
    ioHTMLFileContents.addRawData ("</table>") ;
  }
//----------------------------------------------- Check FIRST
  const BinaryDecisionDiagramRelation ntToCheck_relation (inUsefulSymbols.configuration(),
                              0,
                              BinaryDecisionDiagram::kGreaterOrEqual,
                              (uint64_t) inVocabulary.getTerminalSymbolsCount ()
                              COMMA_HERE) ;
//--- Get nonterminal symbols in error
  const BinaryDecisionDiagramRelation ntInError_relation = ntToCheck_relation
    .andOp (inUsefulSymbols COMMA_HERE)
    .andOp (~(FIRST_with_empty_relation.relationByDeletingLastVariable (HERE)) COMMA_HERE)
  ;
  const uint64_t ntInErrorCount = ntInError_relation.value64Count () ;

//--- Display nonterminal symbols in error
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p>") ;
    ioHTMLFileContents.appendCString ("Every useful nonterminal should"
                   " either have a non empty FIRST,"
                   " either be derived to empty string,"
                   " either both."
                   " In any way having none: it is an error.") ;
    ioHTMLFileContents.addRawData ("</p>") ;
    ioHTMLFileContents.addRawData ("<p>") ;
    if (ntInErrorCount == 0) {
      ioHTMLFileContents.addRawData ("<span class=\"success\">") ;
      ioHTMLFileContents.appendCString ("All FIRST are correct.\n\n") ;
      ioHTMLFileContents.addRawData ("</span>") ;
    }else{
      ioHTMLFileContents.addRawData ("<span class=\"error\">") ;
      ioHTMLFileContents.appendCString ("Error : ") ;
      ioHTMLFileContents.appendUnsigned (ntInErrorCount) ;
      ioHTMLFileContents.appendCString (" nonterminal symbol") ;
      ioHTMLFileContents.appendString ((ntInErrorCount>1) ? " has" : "s have") ;
      ioHTMLFileContents.appendCString (" an empty FIRST :") ;
      GenericUniqueArray <uint64_t> errorArray_relation ;
      ntInError_relation.getValueArray (errorArray_relation) ;
      ioHTMLFileContents.addRawData ("<code>") ;
      for (int32_t i=0 ; i<errorArray_relation.count () ; i++) {
        const uint64_t ntInError = errorArray_relation (i COMMA_HERE) ;
        ioHTMLFileContents.appendCString (" ") ;
        ioHTMLFileContents.appendString (ntInError_relation.configuration().constantNameForVariableAndValue (0, (uint32_t) ntInError COMMA_HERE)) ;
      }
      ioHTMLFileContents.addRawData ("</code>") ;
      ioHTMLFileContents.addRawData ("</span>") ;
    }
    ioHTMLFileContents.addRawData ("</p>") ;
  }
  if (inVerboseOptionOn) {
    if (ntInErrorCount == 0) {
      gCout.appendCString ("ok.\n") ;
    }else{
      gCout.appendCString ("error.\n") ;
    }
    gCout.flush () ;
  }
  return ntInErrorCount == 0 ;
}

//--------------------------------------------------------------------------------------------------

void
FIRST_computations (const PureBNFproductionsList & inPureBNFproductions,
                    HTMLString & ioHTMLFileContents,
                    const bool inPopulateHTMLHelperString,
                    const GrammarVocabulary & inVocabulary,
                    const GenericUniqueArray <bool> & inVocabularyDerivingToEmpty_Array,
                    const BinaryDecisionDiagramRelation & inVocabularyDerivingToEmpty,
                    const BinaryDecisionDiagramRelation & inUsefulSymbols,
                    GenericUniqueArray <GenericUniqueArray <uint64_t> > & outFIRSTarray,
                    BinaryDecisionDiagramRelation & outFIRSTsets,
                    bool & outOk,
                    const bool inVerboseOptionOn) {
  const BinaryDecisionDiagramRelationConfiguration vocabularyConfiguration = inUsefulSymbols.configuration () ;
//--- Console display
  if (inVerboseOptionOn) {
    gCout.appendCString ("  FIRST sets... ") ;
    gCout.flush () ;
  }
//--- Print in BNF file
  if (inPopulateHTMLHelperString) {
    ioHTMLFileContents.addRawData ("<p><a name=\"first_sets\"></a></p>") ;
    ioHTMLFileContents.appendTitleComment ("FIRST set", "title") ;
  }

//--- Compute FIRST sets
  int32_t iterationsCount = 0 ;
  outFIRSTsets = computeFIRSTsets (inPureBNFproductions,
                                   inVocabularyDerivingToEmpty_Array,
                                   inVocabulary.getTerminalSymbolsCount (),
                                   vocabularyConfiguration,
                                   iterationsCount) ;

//--- Display and Check FIRST
 outOk = displayAndCheckFIRSTsets (ioHTMLFileContents,
                                   inPopulateHTMLHelperString,
                                   inVocabularyDerivingToEmpty,
                                   inVocabulary,
                                   inUsefulSymbols,
                                   outFIRSTsets,
                                   outFIRSTarray,
                                   iterationsCount,
                                   inVerboseOptionOn) ;
}

//--------------------------------------------------------------------------------------------------

