//--------------------------------------------------------------------------------------------------
//
//  This file handles all computations performed on grammars
//
//  Copyright (C) 1999, ..., 2023 Pierre Molinaro.
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

#include "FileManager.h"
#include "BinaryDecisionDiagramRelation.h"
#include "MF_MemoryControl.h"
#include "ConsoleOut.h"
#include "C_galgas_CLI_Options.h"
#include "Compiler.h"
#include "galgas_cli_options.h"
#include "galgas-input-output.h"
#include "HTMLString.h"
#include "F_verbose_output.h"

//--------------------------------------------------------------------------------------------------

#include "useful_symbols_computations.h"
#include "empty_strings_computations.h"
#include "FIRST_computations.h"
#include "follow_by_empty_computation.h"
#include "FOLLOW_computations.h"
#include "LL1_computations.h"
#include "cPureBNFproductionsList.h"
#include "SLR_computations.h"
#include "LR1_computations.h"
#include "GrammarVocabulary.h"
#include "printOriginalGrammar.h"
#include "buildPureBNFgrammar.h"
#include "grammarCompilation.h"

//--------------------------------------------------------------------------------------------------

cProduction::cProduction (void) :
mSourceFileName (),
mLineDefinition (0),
mColumnDefinition (0),
mLeftNonTerminalIndex (0),
mDerivation (),
mDerivationFirst (),
mProductionIndex (0) {
}

//--------------------------------------------------------------------------------------------------

cProduction::cProduction (const String & inSourceFileName,
                          const int32_t inDefinitionLine,
                          const int32_t inColumnDefinition,
                          const int32_t inLeftNonTerminalIndex,
                          TC_UniqueArray <int32_t> & ioDerivation, // Swap
                          const uint32_t inProductionIndex) :
mSourceFileName (inSourceFileName),
mLineDefinition (inDefinitionLine),
mColumnDefinition (inColumnDefinition),
mLeftNonTerminalIndex (inLeftNonTerminalIndex),
mDerivation (),
mDerivationFirst (),
mProductionIndex (inProductionIndex) {
  swap (mDerivation, ioDerivation) ;
}

//--------------------------------------------------------------------------------------------------

cProduction::cProduction (const String & inSourceFileName,
                          const int32_t inDefinitionLine,
                          const int32_t inColumnDefinition,
                          const int32_t inLeftNonTerminalIndex) :
mSourceFileName (inSourceFileName),
mLineDefinition (inDefinitionLine),
mColumnDefinition (inColumnDefinition),
mLeftNonTerminalIndex (inLeftNonTerminalIndex),
mDerivation (),
//mDerivationFirstEX (),
mDerivationFirst (),
mProductionIndex (0) {
}

//--------------------------------------------------------------------------------------------------

cPureBNFproductionsList::cPureBNFproductionsList (void) :
mProductionArray (),
tableauIndicePremiereProduction (),
tableauIndiceDerniereProduction (),
tableauIndirectionProduction (),
mFirstProductionIndex (),
mLastProductionIndex (),
mProductionIndex () {
}

//--------------------------------------------------------------------------------------------------

void cProduction::
engendrerAppelProduction (const int16_t nombreDeParametres,
                          const GrammarVocabulary & inVocabulary,
                          const String & inAltName,
                          AbstractOutputStream & fichierCPP,
                          const String & inSyntaxDirectedTranslationVarName) const {
  fichierCPP.appendCString ("  rule_") ;
  fichierCPP.appendString (mSourceFileName.identifierRepresentation ()) ;
  fichierCPP.appendCString ("_") ;
  fichierCPP.appendString (inVocabulary.getSymbol (mLeftNonTerminalIndex COMMA_HERE).identifierRepresentation ()) ;
  fichierCPP.appendCString ("_i") ;
  fichierCPP.appendUnsigned (mProductionIndex) ;
  fichierCPP.appendCString ("_") ;
  fichierCPP.appendString (inAltName.identifierRepresentation ()) ;
  fichierCPP.appendCString ("(") ;
  for (int32_t i=1 ; i<nombreDeParametres ; i++) {
     fichierCPP.appendCString ("parameter_") ;
    fichierCPP.appendSigned (i)  ;
    fichierCPP.appendCString (", ") ;
  }
  if (inSyntaxDirectedTranslationVarName.length () > 0) {
    fichierCPP.appendString (inSyntaxDirectedTranslationVarName) ;
    fichierCPP.appendCString (", ") ;
  }
  fichierCPP.appendCString ("inLexique") ;
  fichierCPP.appendCString (") ;\n") ;
}

//--------------------------------------------------------------------------------------------------

void swap (cProduction & ioProduction1, cProduction & ioProduction2) {
  swap (ioProduction1.mSourceFileName, ioProduction2.mSourceFileName) ;
  swap (ioProduction1.mLineDefinition, ioProduction2.mLineDefinition) ;
  swap (ioProduction1.mColumnDefinition, ioProduction2.mColumnDefinition) ;
  swap (ioProduction1.mLeftNonTerminalIndex, ioProduction2.mLeftNonTerminalIndex) ;
  swap (ioProduction1.mDerivation, ioProduction2.mDerivation) ;
  swap (ioProduction1.mDerivationFirst, ioProduction2.mDerivationFirst) ;
  swap (ioProduction1.mProductionIndex, ioProduction2.mProductionIndex) ;
}

//--------------------------------------------------------------------------------------------------

static bool
searchForIdenticalProductions (const cPureBNFproductionsList & productions,
                               HTMLString & ioHTMLFileContents) {
  ioHTMLFileContents.addRawData ("<p><a name=\"identical_productions\"></a></p>") ;
  ioHTMLFileContents.appendTitleComment ("Step 2 : searching for identical productions", "title") ;
  bool ok = true ;
  for (int32_t i=0 ; i<productions.mProductionArray.count () ; i++) {
    const cProduction & pi = productions.mProductionArray (i COMMA_HERE) ;
    for (int32_t j=i+1 ; j<productions.mProductionArray.count () ; j++) {
      const cProduction & pj = productions.mProductionArray (j COMMA_HERE) ;
      bool identiques = pi.leftNonTerminalIndex () == pj.leftNonTerminalIndex () ;
      if (identiques) {
        identiques = pi.derivationLength () == pj.derivationLength () ;
        for (int32_t t=0 ; (t<pi.derivationLength ()) && identiques ; t++) {
          identiques = pi.derivationAtIndex (t COMMA_HERE) == pj.derivationAtIndex (t COMMA_HERE) ;
        }
      }
      if (identiques) {
        ok = false ;
        ioHTMLFileContents.appendCString ("  Error : productions ") ;
        ioHTMLFileContents.appendSigned (i) ;
        ioHTMLFileContents.appendCString (" and ") ;
        ioHTMLFileContents.appendSigned (j) ;
        ioHTMLFileContents.appendCString (" are identical.\n") ;
      }
    }
  }
  ioHTMLFileContents.addRawData ("<p>") ;
  if (ok) {
    ioHTMLFileContents.addRawData ("<span class=\"success\">") ;
    ioHTMLFileContents.appendCString ("Ok : all productions are different.\n") ;
    ioHTMLFileContents.addRawData ("</span>") ;
  }else{
    ioHTMLFileContents.addRawData ("<span class=\"error\">") ;
    ioHTMLFileContents.appendCString ("As the grammar presents identical productions, it is ambiguous :\n"
                          "it is impossible to build a deterministic parser.\n\n") ;
    ioHTMLFileContents.addRawData ("</span>") ;
  }
  ioHTMLFileContents.addRawData ("</p>") ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char k_default_style [] = {
  "body {\n"
  "  font-family: Helvetica, sans-serif ;\n"
  "  font-size: small ;\n"
  "}\n"
  "\n"
  "h1 {\n"
  "  text-align: center ;\n"
  "}\n"
  "\n"
  "a.header_link {\n"
  "  border: 1px solid #999999 ;\n"
  "  padding: 4px ;\n"
  "  background-color: #FFFFCC ;\n"
  "  font-weight: bold ;\n"
  "}\n"
  "\n"
  "a:visited, a:link, a:active{\n"
  "  color: blue ;\n"
  "  text-decoration: underline ;\n"
  "}\n"
  "\n"
  "a:hover {\n"
  "  color:green ;\n"
  "  background-color: #FFFF00 ;\n"
  "  text-decoration: none ;\n"
  "}\n"
  "\n"
  "table.title {\n"
  "  width: 100% ;\n"
  "  border: 1px solid #666666 ;\n"
  "  background-color: yellow ;\n"
  "  font-weight: bold ;\n"
  "  text-align: center ;\n"
  "}\n"
  "\n"
  "table.result {\n"
  "  border: 2px solid #666666 ;\n"
  "  border-collapse: collapse ;\n"
  "}\n"
  "\n"
  "td.result_title {\n"
  "  font-weight: bold ;\n"
  "  text-align: center ;\n"
  "  border-top: 2px solid #666666 ;\n"
  "}\n"
  "\n"
  "tr.result_line {\n"
  "  background-color: #EEEEEE ;\n"
  "  border-top: 1px solid #999999 ;\n"
  "}\n"
  "td.result_line {\n"
  "  border-right: 1px solid #999999 ;\n"
  "}\n"
  "\n"
  "span.error {\n"
  "  font-weight: bold ;\n"
  "  color: red ;\n"
  "}\n"
  "\n"
  "span.warning {\n"
  "  font-weight: bold ;\n"
  "  color: #FF9966 ;\n"
  "}\n"
  "\n"
  "span.success {\n"
  "  font-weight: bold ;\n"
  "  color: green ;\n"
  "}\n"
  "\n"
  "span.list {\n"
  "  display: block ;\n"
  "  line-height: 100% ;\n"
  "}\n"
  "\n"
  "span.galgas_structure {\n"
  "  display: block ;\n"
  "}\n"
  "\n"
  "span.within_galgas_structure {\n"
  "  display: block ;\n"
  "  padding-left: 1em ;\n"
  "  margin-left: 1em ;\n"
  "  border-left: 1px dotted black ;\n"
  "}\n"
  "\n"
  "span.galgas_keyword {\n"
  "  display: block ;\n"
  "  font-weight: bold ;\n"
  "  color: blue ;\n"
  "}\n"
  "\n"
  "span.galgas_terminal {\n"
  "}\n"
  "\n"
  "span.galgas_nonterminal {\n"
  "}\n"
} ;

//--------------------------------------------------------------------------------------------------

static void
analyzeGrammar (Compiler * inCompiler,
                const String & inHTMLFileName,
                const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inUnusedNonTerminalSymbolsForGrammar,
                const GGS_lstring & inTargetFileName,
                const GGS_lstring & inGrammarClass,
                const GGS_uint & inOriginalGrammarStartSymbol,
                const String & inLexiqueName,
                const GGS_location & inErrorLocation,
                const GGS_terminalSymbolsMapForGrammarAnalysis & inTerminalSymbolMap,
                const GGS_syntaxComponentListForGrammarAnalysis & inSyntaxComponentsList,
                const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                const String & inSyntaxDirectedTranslationVarName,
                String & ioCppFileContents,
                HTMLString & outHTMLHelperFileContents,
                const bool inPopulateHTMLHelperString) {
  bool warningFlag = false ;

//--- Depending of grammar class, fix operations to perform
  typedef enum {kDefaultBehavior, kLL1grammar, kSLRgrammar, kLR1grammar, kGrammarClassError} enumGrammarClass ;
  enumGrammarClass grammarClass = kGrammarClassError ;
  if (inGrammarClass.mProperty_string.stringValue ().length () == 0) { // Default behavior
    grammarClass = kDefaultBehavior ;
  }else if (inGrammarClass.mProperty_string.stringValue ().compare ("LL1") == 0) { // Force LL (1) grammar
    grammarClass = kLL1grammar ;
  }else if (inGrammarClass.mProperty_string.stringValue ().compare ("SLR") == 0) { // Force SLR grammar
    grammarClass = kSLRgrammar ;
  }else if (inGrammarClass.mProperty_string.stringValue ().compare ("LR1") == 0) { // Force LR (1) grammar
    grammarClass = kLR1grammar ;
  }else{ // Unknown class... error !
    TC_Array <FixItDescription> fixItArray ;
    fixItArray.appendObject (FixItDescription (EnumFixItKind::fixItReplace, "LL1")) ;
    fixItArray.appendObject (FixItDescription (EnumFixItKind::fixItReplace, "SLR")) ;
    fixItArray.appendObject (FixItDescription (EnumFixItKind::fixItReplace, "LR1")) ;
    inCompiler->semanticErrorAtLocation (inGrammarClass.mProperty_location, "Unknown grammar class", fixItArray COMMA_HERE) ;
  }

//--- Error flag
  typedef enum {kNoError, kError, kGrammarNotLL1, kGrammarNotSLR, kGrammarNotLR1} enumErrorKind ;
  enumErrorKind errorFlag = kNoError ;

//--- Verbose Output
  const bool verboseOptionOn = verboseOutput () ;

//--- Create output HTML file
  const String title = String ("'") + inTargetFileName.mProperty_string.stringValue () + "' grammar" ;
  outHTMLHelperFileContents.writeStartCode (title,
                                            "", // No css file
                                            k_default_style) ; // Style definition
//--- HTML title
  outHTMLHelperFileContents.addRawData ("<h1>") ;
  outHTMLHelperFileContents.appendString (title) ;
  outHTMLHelperFileContents.addRawData ("</h1>") ;
//--- Create links to page entries
  outHTMLHelperFileContents.addRawData ("<p><a class=\"header_link\" href=\"#pure_bnf\">Pure BNF productions</a></p>"
                           "<p><a class=\"header_link\" href=\"#vocabulary\">Vocabulary</a></p>"
                           "<p><a class=\"header_link\" href=\"#identical_productions\">Identical productions</a></p>"
                           "<p><a class=\"header_link\" href=\"#useful_symbols\">Useful symbols</a></p>"
                           "<p><a class=\"header_link\" href=\"#empty_strings\">Empty string derivations</a></p>"
                           "<p><a class=\"header_link\" href=\"#first_sets\">First sets</a></p>"
                           "<p><a class=\"header_link\" href=\"#follow_by_empty\">Follow by empty</a></p>"
                           "<p><a class=\"header_link\" href=\"#grammar\">Grammar analysis</a></p>"
                           ) ;

//--- Print original grammar in BNF file
  if ((errorFlag == 0) && (grammarClass != kGrammarClassError)) {
    outHTMLHelperFileContents.appendTitleComment ("Original grammar", "title") ;
    printOriginalGrammar (outHTMLHelperFileContents, inSyntaxComponentsList) ;
  }
//--- Building pure BNF productions ---------------------------------------------------------------------
  GrammarVocabulary vocabulary ;
  cPureBNFproductionsList pureBNFproductions ;
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    if (verboseOptionOn) {
      gCout.appendCString ("  Building pure BNF productions... ") ;
    }
  //--- Build vocabulary
    vocabulary.buildVocabulary (inTerminalSymbolMap,
                                inNonTerminalSymbolSortedListForGrammarAnalysis,
                                inOriginalGrammarStartSymbol.uintValue ()) ;

  //--- Build pure BNFproductions, add new non terminal symbols from 'repeat' and 'select' instructions
    buildPureBNFgrammar (inSyntaxComponentsList,
                         vocabulary,
                         pureBNFproductions) ;

  //--- Print in bnf file the pure BNF productions
    outHTMLHelperFileContents.addRawData ("<p></p>") ;
    outHTMLHelperFileContents.appendTitleComment ("  Pure BNF productions list", "title") ;
    printPureBNFgrammarInBNFfile (outHTMLHelperFileContents, vocabulary, pureBNFproductions) ;
    if (verboseOptionOn) {
      gCout.appendSigned (pureBNFproductions.mProductionArray.count ()) ;
      gCout.appendCString (".\n") ;
      gCout.flush () ;
    }
  }
//--- Define vocabulary BDD sets descriptor
  const BinaryDecisionDiagramRelationSingleType vocabularyBDDType = vocabulary.getVocabularyBDDType () ;
//--- Search for identical productions -----------------------------------------------------------
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    if (verboseOptionOn) {
      gCout.appendCString ("  Identical productions... ") ;
    }
    const bool step2ok = searchForIdenticalProductions (pureBNFproductions, outHTMLHelperFileContents) ;
    if (! step2ok) {
      errorFlag = kError ;
      if (! verboseOptionOn) {
        gCout.appendCString ("  Identical productions... ") ;
      }
      gCout.appendCString ("error.\n") ;
    }else if (verboseOptionOn) {
      gCout.appendCString ("none, ok.\n") ;
    }
    gCout.flush () ;
  }
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
  //--- Enregistrer les caracteristiques de la grammaire
    outHTMLHelperFileContents.appendCString ("For information :\n") ;
    outHTMLHelperFileContents.addRawData ("<ul><li>") ;
    outHTMLHelperFileContents.appendSigned ((int32_t)(vocabulary.getTerminalSymbolsCount () - 1)) ;
    outHTMLHelperFileContents.appendCString (" terminal symbols, numbered from 0 to ") ;
    outHTMLHelperFileContents.appendSigned ((int32_t)(vocabulary.getTerminalSymbolsCount () - 2)) ;
    outHTMLHelperFileContents.appendCString (" ;") ;
    outHTMLHelperFileContents.addRawData ("</li>\n<li>") ;
    outHTMLHelperFileContents.appendCString (" the 'empty string' symbol '$$' is numbered ") ;
    outHTMLHelperFileContents.appendSigned (vocabulary.getEmptyStringTerminalSymbolIndex ()) ;
    outHTMLHelperFileContents.appendCString (" ;") ;
    outHTMLHelperFileContents.addRawData ("</li>\n<li>") ;
    outHTMLHelperFileContents.appendSigned (vocabulary.getNonTerminalSymbolsCount ()) ;
    outHTMLHelperFileContents.appendCString (" nonterminal symbols in the pure BNF grammar, numbered from ") ;
    outHTMLHelperFileContents.appendSigned (vocabulary.getTerminalSymbolsCount ()) ;
    outHTMLHelperFileContents.appendCString (" to ") ;
    outHTMLHelperFileContents.appendSigned ((int32_t)(vocabulary.getAllSymbolsCount () - 1)) ;
    outHTMLHelperFileContents.appendCString (" ;") ;
    outHTMLHelperFileContents.addRawData ("</li>\n<li>") ;
    outHTMLHelperFileContents.appendCString ("whole vocabulary : ") ;
    outHTMLHelperFileContents.appendSigned (vocabulary.getAllSymbolsCount ()) ;
    outHTMLHelperFileContents.appendCString (" elements, ") ;
    outHTMLHelperFileContents.appendUnsigned (vocabularyBDDType.BDDBitCount ()) ;
    outHTMLHelperFileContents.appendCString (" bits for BDDs.") ;
    outHTMLHelperFileContents.addRawData ("</li>\n</ul>\n") ;
  }
//--- Getting useful symbols ---------------------------------------------------------------------
  BinaryDecisionDiagramRelation usefulSymbols ;
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    useful_symbols_computations (inCompiler,
                                 inErrorLocation,
                                 inUnusedNonTerminalSymbolsForGrammar,
                                 pureBNFproductions,
                                 vocabularyBDDType,
                                 vocabulary,
                                 outHTMLHelperFileContents,
                                 inPopulateHTMLHelperString,
                                 usefulSymbols,
                                 warningFlag,
                                 verboseOptionOn) ;
  }
//--- Calculer l'ensemble des non terminaux pouvant se dériver en vide --------------------------------
  TC_UniqueArray <bool> vocabularyDerivingToEmpty_Array ;
  BinaryDecisionDiagramRelation vocabularyDerivingToEmpty ;
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    vocabularyDerivingToEmpty = empty_strings_computations (pureBNFproductions,
                                                            outHTMLHelperFileContents,
                                                            inPopulateHTMLHelperString,
                                                            vocabularyDerivingToEmpty_Array,
                                                            usefulSymbols.configuration (),
                                                            verboseOptionOn) ;
  }
//--- Computing FIRST sets ---------------------------------------------------------------
  TC_UniqueArray <TC_UniqueArray <uint64_t> > FIRSTarray ;
  BinaryDecisionDiagramRelation FIRSTsets ;
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    bool ok = false ;
    FIRST_computations (pureBNFproductions,
                        outHTMLHelperFileContents,
                        inPopulateHTMLHelperString,
                        vocabulary,
                        vocabularyDerivingToEmpty_Array,
                        vocabularyDerivingToEmpty,
                        usefulSymbols,
                        FIRSTarray,
                        FIRSTsets,
                        ok,
                        verboseOptionOn) ;
    if (! ok) {
      errorFlag = kError ;
    }
  }
//--- Calcul de l'ensemble des non-terminaux pouvant etre suivi du vide -------------------------------
  BinaryDecisionDiagramRelation nonTerminalSymbolsFollowedByEmpty (usefulSymbols.configuration (), false) ;
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    follow_by_empty_computations (pureBNFproductions,
                                  outHTMLHelperFileContents,
                                  inPopulateHTMLHelperString,
                                  vocabulary,
                                  vocabularyDerivingToEmpty_Array,
                                  nonTerminalSymbolsFollowedByEmpty,
                                  verboseOptionOn) ;
  }
//--- Computing FOLLOW sets ---------------------------------------------------------------
  TC_UniqueArray <TC_UniqueArray <uint64_t> > FOLLOWarray ;
  BinaryDecisionDiagramRelation FOLLOWsets ;
  if ((errorFlag == kNoError) &&
      (grammarClass != kGrammarClassError) &&
      (grammarClass != kLR1grammar)) { // Follow are not used by LR(1) computations
    bool ok = false ;
    FOLLOW_computations (pureBNFproductions,
                         outHTMLHelperFileContents,
                         inPopulateHTMLHelperString,
                         vocabulary,
                         vocabularyDerivingToEmpty_Array,
                         usefulSymbols,
                         FIRSTsets,
                         nonTerminalSymbolsFollowedByEmpty,
                         FOLLOWsets,
                         FOLLOWarray,
                         ok,
                         verboseOptionOn) ;
    if (! ok) {
      errorFlag = kError ;
    }
  }
//--- Checking LL (1) condition -------------------------------------------------------------
  outHTMLHelperFileContents.addRawData ("<a name=\"grammar\"></a>") ;
  if ((errorFlag == kNoError)
   && ((grammarClass == kDefaultBehavior) || (grammarClass == kLL1grammar))) {
    bool ok = false ;
    LL1_computations (pureBNFproductions,
                      outHTMLHelperFileContents,
                      inPopulateHTMLHelperString,
                      vocabulary,
                      vocabularyDerivingToEmpty_Array,
                      FIRSTsets,
                      FOLLOWsets,
                      inNonTerminalSymbolSortedListForGrammarAnalysis,
                      inOriginalGrammarStartSymbol.uintValue (),
                      inTargetFileName.mProperty_string.stringValue (),
                      ioCppFileContents,
                      inLexiqueName,
                      ok,
                      verboseOptionOn,
                      inSyntaxDirectedTranslationVarName) ;
    if (! ok) {
      errorFlag = kGrammarNotLL1 ;
    }
  }
//--- SLR computations... -----------------------------------------------------------------
 if (((errorFlag == kGrammarNotLL1) && (grammarClass == kDefaultBehavior))
        ||
     ((errorFlag == kNoError) && (grammarClass == kSLRgrammar))) {
    bool ok = false ;
    SLR_computations (pureBNFproductions,
                      vocabulary,
                      outHTMLHelperFileContents,
                      inPopulateHTMLHelperString,
                      FOLLOWarray,
                      inNonTerminalSymbolSortedListForGrammarAnalysis,
                      inOriginalGrammarStartSymbol.uintValue (),
                      inTargetFileName.mProperty_string.stringValue (),
                      ioCppFileContents,
                      inLexiqueName,
                      ok,
                      verboseOptionOn,
                      inSyntaxDirectedTranslationVarName) ;
    if (ok) {
      errorFlag = kNoError ;
    }else{
      errorFlag = kGrammarNotSLR ;
    }
  }

//--- LR (1) computations... -------------------------------------------------------------
 if (((errorFlag == kGrammarNotSLR) && (grammarClass == kDefaultBehavior))
        ||
     ((errorFlag == kNoError) && (grammarClass == kLR1grammar))) {
    bool ok = false ;
    LR1_computations (pureBNFproductions,
                      vocabulary,
                      outHTMLHelperFileContents,
                      inPopulateHTMLHelperString,
                      FIRSTarray,
                      vocabularyDerivingToEmpty_Array,
                      inNonTerminalSymbolSortedListForGrammarAnalysis,
                      inOriginalGrammarStartSymbol.uintValue (),
                      inTargetFileName.mProperty_string.stringValue (),
                      ioCppFileContents,
                      inLexiqueName,
                      ok,
                      verboseOptionOn,
                      inSyntaxDirectedTranslationVarName) ;
    if (ok) {
      errorFlag = kNoError ;
    }else{
      errorFlag = kGrammarNotLR1 ;
    }
  }
//--- Final step ---------------------------------------------------------------------
  BinaryDecisionDiagram::markAndSweepUnusedNodes () ;
  if (errorFlag != kNoError) {
    String s ;
    s.appendCString ("ENDING ON ERROR, STEP") ;
    s.appendSigned ((uint16_t) errorFlag) ;
    outHTMLHelperFileContents.appendTitleComment (s, "title") ;
    String errorMessage  ;
    if (inPopulateHTMLHelperString) {
      errorMessage.appendCString ("errors have been raised when analyzing the grammar: see file"
                              " 'file://") ;
      errorMessage.appendString (inHTMLFileName) ;
      errorMessage.appendCString ("'") ;
    }else{
      errorMessage.appendCString ("errors have been raised when analyzing the grammar:"
                      " turn on '--output-html-grammar-file' option in order to get an output file for debugging") ;
    }
    inCompiler->semanticErrorAtLocation (inErrorLocation, errorMessage, TC_Array <FixItDescription> () COMMA_HERE) ;
  }else if (warningFlag) {
    String s ;
    s.appendCString ("OK ; no error, but warning(s) step(s)") ;
    int32_t i = 1 ;
    while (warningFlag != 0) {
      if ((warningFlag & 1) != 0) {
        s.appendCString (" ") ;
        s.appendSigned (i) ;
      }
      warningFlag >>= 1 ;
      i ++ ;
    }
    outHTMLHelperFileContents.appendTitleComment (s, "title") ;
    String warningMessage  ;
    warningMessage.appendCString ("warnings have been raised when analyzing the grammar: ") ;
    if (inPopulateHTMLHelperString) {
      warningMessage.appendCString ("see file 'file://") ;
      warningMessage.appendString (inHTMLFileName) ;
      warningMessage.appendCString ("'") ;
    }else{
      warningMessage.appendCString ("turn on '-H' command line option, and see generated '") ;
      warningMessage.appendString (inTargetFileName.mProperty_string.stringValue ()) ;
      warningMessage.appendCString (".html' file") ;
    }
    inCompiler->semanticWarningAtLocation (inErrorLocation, warningMessage COMMA_HERE) ;
  }else{
    outHTMLHelperFileContents.appendTitleComment ("OK (no error, no warning)", "title") ;
  }
  outHTMLHelperFileContents.writeEndCode () ;
}

//--------------------------------------------------------------------------------------------------

void
routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21_ (const GGS_lstring inTargetFileName,
                                      const GGS_lstring inGrammarClass,
                                      const GGS_uint inOriginalGrammarStartSymbol,
                                      const GGS_string inLexiqueName,
                                      const GGS_terminalSymbolsMapForGrammarAnalysis inTerminalSymbolMap,
                                      const GGS_syntaxComponentListForGrammarAnalysis inSyntaxComponentsList,
                                      const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis inUnusedNonTerminalSymbolsForGrammar,
                                      const GGS_string inHTMLFileName,
                                      const GGS_nonTerminalSymbolSortedListForGrammarAnalysis inNonTerminalSymbolSortedListForGrammarAnalysis,
                                      const GGS_string inSyntaxDirectedTranslationVarName,
                                      GGS_string & outCppFileContents,
                                      GGS_string & outHTMLHelperFileContents,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (totalErrorCount () == 0) {
    BinaryDecisionDiagram::markAndSweepUnusedNodes () ;
    BinaryDecisionDiagram::checkAllBDDsAreWellFormed (HERE) ;

    const GGS_location inErrorLocation = inTargetFileName.mProperty_location ;

    HTMLString HTMLHelperFileContents ;
    String CppFileContents ;
    const bool populateHTMLHelperString = gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.mValue ;
    analyzeGrammar (inCompiler,
                    inHTMLFileName.stringValue (),
                    inUnusedNonTerminalSymbolsForGrammar,
                    inTargetFileName,
                    inGrammarClass,
                    inOriginalGrammarStartSymbol,
                    inLexiqueName.stringValue (),
                    inErrorLocation,
                    inTerminalSymbolMap,
                    inSyntaxComponentsList,
                    inNonTerminalSymbolSortedListForGrammarAnalysis,
                    inSyntaxDirectedTranslationVarName.stringValue (),
                    CppFileContents,
                    HTMLHelperFileContents,
                    populateHTMLHelperString) ;
    outHTMLHelperFileContents = GGS_string (HTMLHelperFileContents) ;
    outCppFileContents = GGS_string (CppFileContents) ;
  }
}

//--------------------------------------------------------------------------------------------------
