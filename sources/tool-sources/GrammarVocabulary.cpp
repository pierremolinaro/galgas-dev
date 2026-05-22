//--------------------------------------------------------------------------------------------------
//
//  Pure BNF grammar vocabulary                                                                  
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

#include "MF_MemoryControl.h"

//--------------------------------------------------------------------------------------------------

#include "GrammarVocabulary.h"
#include "grammarCompilation.h"
#include "PureBNFproductionsList.h"

//--------------------------------------------------------------------------------------------------

GrammarVocabulary::GrammarVocabulary (void) :
mStringsArray (),
mGenerateChoiceArray (),
mTerminalSymbolsCount (0),
mOriginalGrammarSymbolsCount (0),
mStartSymbol (0) {
}

//--------------------------------------------------------------------------------------------------

GrammarVocabulary::~GrammarVocabulary (void) {
}

//--------------------------------------------------------------------------------------------------

void GrammarVocabulary::
buildVocabulary (const GGS_terminalSymbolsMapForGrammarAnalysis & inTerminalSymbolMap,
                 const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                 const uint32_t inOriginalGrammarStartSymbol) {
  mOriginalGrammarSymbolsCount = 0 ;
//--- Append terminal symbols
  mTerminalSymbolsCount = (int32_t) inTerminalSymbolMap.count () ;
  UpEnumerator_terminalSymbolsMapForGrammarAnalysis t (inTerminalSymbolMap) ;
  while (t.hasCurrentObject ()) {
    mStringsArray.appendObject ("") ;  
    t.gotoNextObject () ;
  }
  t.rewind () ;
  while (t.hasCurrentObject ()) {
    const int32_t idx = (int32_t) t.current_mTerminalIndex (HERE).uintValue () ;
    mStringsArray (idx COMMA_HERE) = t.current_lkey (HERE).mProperty_string.stringValue () ;  
    t.gotoNextObject () ;
  }
//--- One more entry for the empty string symbol (displayed '$$')
  mStringsArray.appendObject ("") ; // Empty string symbol
  mTerminalSymbolsCount += 1 ;
//--- Append non terminal symbols from original grammar
  UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis nonTerminal (inNonTerminalSymbolSortedListForGrammarAnalysis) ;
  while (nonTerminal.hasCurrentObject ()) {
    mStringsArray.appendObject (nonTerminal.current_mNonTerminalSymbol (HERE).mProperty_string.stringValue ()) ;  
    nonTerminal.gotoNextObject () ;
  }
  mOriginalGrammarSymbolsCount = mStringsArray.count () ;
//--- For all symbols of original grammar, don't generate choice
  mGenerateChoiceArray.removeAllKeepingCapacity () ;
  mGenerateChoiceArray.appendObjects (mOriginalGrammarSymbolsCount, false) ;
//--- Define pure BNF grammar start symbol index
  mStartSymbol = mTerminalSymbolsCount + (int32_t) inOriginalGrammarStartSymbol ;
}

//--------------------------------------------------------------------------------------------------

int32_t GrammarVocabulary::getEmptyStringTerminalSymbolIndex (void) const {
  return mTerminalSymbolsCount - 1 ;
}

//--------------------------------------------------------------------------------------------------

String GrammarVocabulary::getSymbol (const int32_t inSymbolIndex
                                     COMMA_LOCATION_ARGS) const {
  return mStringsArray (inSymbolIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

int32_t GrammarVocabulary::getStartSymbol (void) const {
  return mStartSymbol ;
}

//--------------------------------------------------------------------------------------------------

int32_t GrammarVocabulary::getTerminalSymbolsCount (void) const {
  return mTerminalSymbolsCount ;
}

//--------------------------------------------------------------------------------------------------

int32_t GrammarVocabulary::getAllSymbolsCount (void) const {
  return mStringsArray.count () ;
}

//--------------------------------------------------------------------------------------------------

int32_t GrammarVocabulary::getNonTerminalSymbolsCount (void) const {
  return mStringsArray.count () - mTerminalSymbolsCount ;
}

//--------------------------------------------------------------------------------------------------

void GrammarVocabulary::addNonTerminalSymbol (const char * inPrefix,
                                              const String & inClassName,
                                              const int32_t inOrderInSourceFile,
                                              const bool inGenerateChoice) {
  String nt  ;
  nt.appendString (inPrefix) ;
  nt.appendString (inClassName.identifierRepresentation ()) ;
  nt.appendCString ("_") ;
  nt.appendSigned (inOrderInSourceFile) ;
  mStringsArray.appendObject (nt) ;
  mGenerateChoiceArray.appendObject (inGenerateChoice) ;
}

//--------------------------------------------------------------------------------------------------

void GrammarVocabulary::addAugmentedSymbol (void) {
  mStringsArray.appendObject ("") ;
  mGenerateChoiceArray.appendObject (false) ;
}

//--------------------------------------------------------------------------------------------------

bool GrammarVocabulary::needToGenerateChoice (const int32_t inSymbolIndex
                                              COMMA_LOCATION_ARGS) const {
  return mGenerateChoiceArray (inSymbolIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GrammarVocabulary::printSymbolInHTMLFile (AbstractOutputStream & inHTMLfile,
                                               const int32_t inSymbolIndex
                                               COMMA_LOCATION_ARGS) const {
  if (inSymbolIndex < mTerminalSymbolsCount) {
    inHTMLfile.appendCString ("$") ;
    inHTMLfile.appendString (mStringsArray (inSymbolIndex COMMA_THERE)) ;
    inHTMLfile.appendCString ("$") ;
  }else{
    inHTMLfile.appendCString ("<") ;
    inHTMLfile.appendString (mStringsArray (inSymbolIndex COMMA_THERE)) ;
    inHTMLfile.appendCString (">") ;
  }
}

//--------------------------------------------------------------------------------------------------

void GrammarVocabulary::printVocabularyInSwiftFile (AbstractOutputStream & ioSwiftfile,
                                                    const String & inGrammarName,
                                                    const PureBNFproductionsList & inPureBNFproductions) const {
//--- Terminal symbols
  ioSwiftfile.appendString ("enum ") ;
  ioSwiftfile.appendString (inGrammarName) ;
  ioSwiftfile.appendString ("_terminal : Terminal_protocol {\n\n") ;
  ioSwiftfile.appendSecondaryLineComment ("//") ;
  for (int32_t i = 0 ; i < getTerminalSymbolsCount () ; i++) {
    ioSwiftfile.appendString ("  case t") ;
    ioSwiftfile.appendSigned (i) ;
    ioSwiftfile.appendString ("\n") ;
  }
  ioSwiftfile.appendString ("\n") ;
  ioSwiftfile.appendSecondaryLineComment ("//") ;
  ioSwiftfile.appendString ("  var description : String {\n") ;
  ioSwiftfile.appendString ("    switch self {\n") ;
  for (int32_t i = 0 ; i < getTerminalSymbolsCount () ; i++) {
    ioSwiftfile.appendString ("    case .t") ;
    ioSwiftfile.appendSigned (i) ;
    ioSwiftfile.appendString (" : return \"$") ;
    ioSwiftfile.appendStringAsCLiteralStringConstantWithoutDelimiters (getSymbol (i COMMA_HERE)) ;
    ioSwiftfile.appendString ("$\"\n") ;
  }
  ioSwiftfile.appendString ("    }\n") ;
  ioSwiftfile.appendString ("  }\n\n") ;
  ioSwiftfile.appendSecondaryLineComment ("//") ;
  ioSwiftfile.appendString ("  var typstRawCode : String {\n") ; // replacingOccurrences (of: "\"", with: "\\\"")
  ioSwiftfile.appendString ("    let s = self.description.replacingOccurrences (of: \"\\\"\", with: \"\\\\\\\"\")\n") ;
  ioSwiftfile.appendString ("    return \"#raw(\\\"\\(s)\\\")\"\n") ;
  ioSwiftfile.appendString ("  }\n\n") ;
  ioSwiftfile.appendSecondaryLineComment ("//") ;
  ioSwiftfile.appendString ("  // func isEOF () -> Bool { self == .`##` }\n\n") ;
  ioSwiftfile.appendSecondaryLineComment ("//") ;
  ioSwiftfile.appendString ("}\n\n") ;
  ioSwiftfile.appendHyphenLineComment ("//") ;
//--- Non Terminal symbols
  ioSwiftfile.appendString ("enum ") ;
  ioSwiftfile.appendString (inGrammarName) ;
  ioSwiftfile.appendString ("_nonTerminal : NonTerminal_protocol {\n\n") ;
  ioSwiftfile.appendSecondaryLineComment ("//") ;
  for (int32_t i = 0 ; i < getNonTerminalSymbolsCount () ; i++) {
    ioSwiftfile.appendString ("  case nt") ;
    ioSwiftfile.appendSigned (i) ;
    ioSwiftfile.appendString ("\n") ;
  }
  ioSwiftfile.appendString ("\n") ;
  ioSwiftfile.appendSecondaryLineComment ("//") ;
  ioSwiftfile.appendString ("  var description : String {\n") ;
  ioSwiftfile.appendString ("    switch self {\n") ;
  for (int32_t i = 0 ; i < getNonTerminalSymbolsCount () ; i++) {
    ioSwiftfile.appendString ("    case .nt") ;
    ioSwiftfile.appendSigned (i) ;
    ioSwiftfile.appendString (" : return \"<") ;
    ioSwiftfile.appendStringAsCLiteralStringConstantWithoutDelimiters (getSymbol (i + getTerminalSymbolsCount () COMMA_HERE)) ;
    ioSwiftfile.appendString (">\"\n") ;
  }
  ioSwiftfile.appendString ("    }\n") ;
  ioSwiftfile.appendString ("  }\n\n") ;
  ioSwiftfile.appendSecondaryLineComment ("//") ;
  ioSwiftfile.appendString ("  var typstRawCode : String {\n") ; // replacingOccurrences (of: "\"", with: "\\\"")
  ioSwiftfile.appendString ("    let s = self.description.replacingOccurrences (of: \"\\\"\", with: \"\\\\\\\"\")\n") ;
  ioSwiftfile.appendString ("    return \"#raw(\\\"\\(s)\\\")\"\n") ;
  ioSwiftfile.appendString ("  }\n\n") ;
  ioSwiftfile.appendSecondaryLineComment ("//") ;
  ioSwiftfile.appendString ("}\n\n") ;
  ioSwiftfile.appendHyphenLineComment ("//") ;
//--- Start symbol
  ioSwiftfile.appendString ("let ") ;
  ioSwiftfile.appendString (inGrammarName) ;
  ioSwiftfile.appendString ("_startSymbol : ") ;
  ioSwiftfile.appendString (inGrammarName) ;
  ioSwiftfile.appendString ("_nonTerminal = .nt") ;
  ioSwiftfile.appendSigned (getNonTerminalSymbolsCount () - 1) ;
  ioSwiftfile.appendString ("\n\n") ;
  ioSwiftfile.appendHyphenLineComment ("//") ;
//--- Productions
  ioSwiftfile.appendString ("let ") ;
  ioSwiftfile.appendString (inGrammarName) ;
  ioSwiftfile.appendString ("_rules : [Grammar <") ;
  ioSwiftfile.appendString (inGrammarName) ;
  ioSwiftfile.appendString ("_terminal, ") ;
  ioSwiftfile.appendString (inGrammarName) ;
  ioSwiftfile.appendString ("_nonTerminal>.Rule] = [\n") ;
  for (int32_t i = 0 ; i < inPureBNFproductions.mProductionArray.count () ; i++) {
    const GrammarProduction & production = inPureBNFproductions.mProductionArray (i COMMA_HERE) ;
    ioSwiftfile.appendString ("  .init (.nt") ;
    ioSwiftfile.appendSigned (production.leftNonTerminalIndex () - getTerminalSymbolsCount ()) ;
    ioSwiftfile.appendString (", [") ;
    for (int32_t j=0 ; j<production.derivationLength () ; j++) {
      const int32_t element = production.derivationAtIndex (j COMMA_HERE) ;
      if (element < getTerminalSymbolsCount ()) {
        ioSwiftfile.appendString (".terminal(.t") ;
        ioSwiftfile.appendSigned (element) ;
        ioSwiftfile.appendString (")") ;
      }else{
        ioSwiftfile.appendString (".nonterminal(.nt") ;
        ioSwiftfile.appendSigned (element - getTerminalSymbolsCount ()) ;
        ioSwiftfile.appendString (")") ;
      }
      if (j < (production.derivationLength () - 1)) {
        ioSwiftfile.appendString (",") ;
      }else if ((j == (production.derivationLength () - 1)) && (i == (inPureBNFproductions.mProductionArray.count () - 1))) {
        ioSwiftfile.appendString (",.terminal(.t") ;
        ioSwiftfile.appendSigned (getTerminalSymbolsCount () - 1) ;
        ioSwiftfile.appendString (")") ;
      }
    }
    ioSwiftfile.appendString ("]),\n") ;
  }
  ioSwiftfile.appendString ("]\n\n") ;
  ioSwiftfile.appendHyphenLineComment ("//") ;
}

//--------------------------------------------------------------------------------------------------

BinaryDecisionDiagramRelationSingleType GrammarVocabulary::getVocabularyBDDType (void) const {
  GenericUniqueArray <String> constantNameArray ;
  for (int32_t i=0 ; i<mTerminalSymbolsCount ; i++) {
    constantNameArray.appendObject (String ("$") + mStringsArray (i COMMA_HERE) + "$") ;
  }
  for (int32_t i=mTerminalSymbolsCount ; i<mStringsArray.count () ; i++) {
    constantNameArray.appendObject (String ("<") + mStringsArray (i COMMA_HERE) + ">") ;
  }
  return BinaryDecisionDiagramRelationSingleType (".vocabulary.", constantNameArray COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
