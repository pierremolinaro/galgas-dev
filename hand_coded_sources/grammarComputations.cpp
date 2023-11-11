//----------------------------------------------------------------------------------------------------------------------
//
//  This file handles all computations performed on grammars                                     
//
//  Copyright (C) 1999, ..., 2023 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public  *
//  License as published by the Free Software Foundation.                                        
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//----------------------------------------------------------------------------------------------------------------------

#include "files/C_FileManager.h"
#include "bdd/C_Relation.h"
#include "utilities/MF_MemoryControl.h"
#include "streams/C_ConsoleOut.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/C_Compiler.h"
#include "galgas_cli_options.h"
#include "galgas2/C_galgas_io.h"
#include "strings/C_HTMLString.h"
#include "galgas2/F_verbose_output.h"

//----------------------------------------------------------------------------------------------------------------------

#include "useful_symbols_computations.h"
#include "empty_strings_computations.h"
#include "FIRST_computations.h"
#include "follow_by_empty_computation.h"
#include "FOLLOW_computations.h"
#include "LL1_computations.h"
#include "cPureBNFproductionsList.h"
#include "SLR_computations.h"
#include "LR1_computations.h"
#include "cVocabulary.h"
#include "printOriginalGrammar.h"
#include "buildPureBNFgrammar.h"
#include "grammarCompilation.h"

//----------------------------------------------------------------------------------------------------------------------

cProduction::cProduction (void) :
mSourceFileName (),
mLineDefinition (0),
mColumnDefinition (0),
mLeftNonTerminalIndex (0),
mDerivation (),
mDerivationFirst (),
mProductionIndex (0) {
}

//----------------------------------------------------------------------------------------------------------------------

cProduction::cProduction (const C_String & inSourceFileName,
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

//----------------------------------------------------------------------------------------------------------------------

cProduction::cProduction (const C_String & inSourceFileName,
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

//----------------------------------------------------------------------------------------------------------------------

cPureBNFproductionsList::cPureBNFproductionsList (void) :
tableauIndicePremiereProduction (),
tableauIndiceDerniereProduction (),
tableauIndirectionProduction (),
mFirstProductionIndex (),
mLastProductionIndex (),
mProductionIndex () {
}

//----------------------------------------------------------------------------------------------------------------------

void cProduction::
engendrerAppelProduction (const int16_t nombreDeParametres,
                          const cVocabulary & inVocabulary,
                          const C_String & inAltName,
                          AC_OutputStream & fichierCPP,
                          const C_String & inSyntaxDirectedTranslationVarName) const {
  fichierCPP << "  rule_" << mSourceFileName.identifierRepresentation ()
             << "_" << inVocabulary.getSymbol (mLeftNonTerminalIndex COMMA_HERE).identifierRepresentation ()
             << "_i" << cStringWithUnsigned (mProductionIndex)
             << "_" << inAltName.identifierRepresentation () << "(" ;
  for (int32_t i=1 ; i<nombreDeParametres ; i++) {
     fichierCPP << "parameter_" << cStringWithSigned (i)  << ", " ;
  }
  if (inSyntaxDirectedTranslationVarName.length () > 0) {
    fichierCPP << inSyntaxDirectedTranslationVarName << ", " ;
  }
  fichierCPP << "inLexique" ;
  fichierCPP << ") ;\n" ;
}

//----------------------------------------------------------------------------------------------------------------------

void swap (cProduction & ioProduction1, cProduction & ioProduction2) {
  swap (ioProduction1.mSourceFileName, ioProduction2.mSourceFileName) ;
  swap (ioProduction1.mLineDefinition, ioProduction2.mLineDefinition) ;
  swap (ioProduction1.mColumnDefinition, ioProduction2.mColumnDefinition) ;
  swap (ioProduction1.mLeftNonTerminalIndex, ioProduction2.mLeftNonTerminalIndex) ;
  swap (ioProduction1.mDerivation, ioProduction2.mDerivation) ;
  swap (ioProduction1.mDerivationFirst, ioProduction2.mDerivationFirst) ;
  swap (ioProduction1.mProductionIndex, ioProduction2.mProductionIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

static bool
searchForIdenticalProductions (const cPureBNFproductionsList & productions,
                               C_HTMLString & ioHTMLFileContents) {
  ioHTMLFileContents.outputRawData ("<p><a name=\"identical_productions\"></a></p>") ;
  ioHTMLFileContents.appendCppTitleComment ("Step 2 : searching for identical productions", "title") ;
  bool ok = true ;
  for (int32_t i=0 ; i<productions.length () ; i++) {
    const cProduction & pi = productions (i COMMA_HERE) ;
    for (int32_t j=i+1 ; j<productions.length () ; j++) {
      const cProduction & pj = productions (j COMMA_HERE) ;
      bool identiques = pi.leftNonTerminalIndex () == pj.leftNonTerminalIndex () ;
      if (identiques) {
        identiques = pi.derivationLength () == pj.derivationLength () ;
        for (int32_t t=0 ; (t<pi.derivationLength ()) && identiques ; t++) {
          identiques = pi.derivationAtIndex (t COMMA_HERE) == pj.derivationAtIndex (t COMMA_HERE) ;
        }
      }
      if (identiques) {
        ok = false ;
        ioHTMLFileContents << "  Error : productions " << cStringWithSigned (i) << " and " << cStringWithSigned (j) << " are identical.\n" ;
      }
    }
  }
  ioHTMLFileContents.outputRawData ("<p>") ;
  if (ok) {
    ioHTMLFileContents.outputRawData ("<span class=\"success\">") ;
    ioHTMLFileContents << "Ok : all productions are different.\n" ;
    ioHTMLFileContents.outputRawData ("</span>") ;
  }else{
    ioHTMLFileContents.outputRawData ("<span class=\"error\">") ;
    ioHTMLFileContents << "As the grammar presents identical productions, it is ambiguous :\n"
                   "it is impossible to build a deterministic parser.\n\n" ;
    ioHTMLFileContents.outputRawData ("</span>") ;
  }
  ioHTMLFileContents.outputRawData ("</p>") ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void
analyzeGrammar (C_Compiler * inCompiler,
                const C_String & inHTMLFileName,
                const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inUnusedNonTerminalSymbolsForGrammar,
                const GALGAS_lstring & inTargetFileName,
                const GALGAS_lstring & inGrammarClass,
                const GALGAS_uint & inOriginalGrammarStartSymbol,
                const C_String & inLexiqueName,
                const GALGAS_location & inErrorLocation,
                const GALGAS_terminalSymbolsMapForGrammarAnalysis & inTerminalSymbolMap,
                const GALGAS_syntaxComponentListForGrammarAnalysis & inSyntaxComponentsList,
                const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                const C_String & inSyntaxDirectedTranslationVarName,
                C_String & ioCppFileContents,
                C_HTMLString & outHTMLHelperFileContents,
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
    TC_Array <C_FixItDescription> fixItArray ;
    fixItArray.appendObject (C_FixItDescription (kFixItReplace, "LL1")) ;
    fixItArray.appendObject (C_FixItDescription (kFixItReplace, "SLR")) ;
    fixItArray.appendObject (C_FixItDescription (kFixItReplace, "LR1")) ;
    inCompiler->semanticErrorAtLocation (inGrammarClass.mProperty_location, "Unknown grammar class", fixItArray COMMA_HERE) ;
  }

//--- Error flag
  typedef enum {kNoError, kError, kGrammarNotLL1, kGrammarNotSLR, kGrammarNotLR1} enumErrorKind ;
  enumErrorKind errorFlag = kNoError ;

//--- Verbose Output
  const bool verboseOptionOn = verboseOutput () ;

//--- Create output HTML file
  const C_String title = C_String ("'") + inTargetFileName.mProperty_string.stringValue () + "' grammar" ;
  outHTMLHelperFileContents.writeStartCode (title,
                                            "", // No css file
                                            k_default_style) ; // Style definition
//--- HTML title
  outHTMLHelperFileContents.outputRawData ("<h1>") ;
  outHTMLHelperFileContents << title ;
  outHTMLHelperFileContents.outputRawData ("</h1>") ;
//--- Create links to page entries
  outHTMLHelperFileContents.outputRawData ("<p><a class=\"header_link\" href=\"#pure_bnf\">Pure BNF productions</a></p>"
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
    outHTMLHelperFileContents.appendCppTitleComment ("Original grammar", "title") ;
    printOriginalGrammar (outHTMLHelperFileContents, inSyntaxComponentsList) ;
  }
//--- Building pure BNF productions ---------------------------------------------------------------------
  cVocabulary vocabulary ;
  cPureBNFproductionsList pureBNFproductions ;
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    if (verboseOptionOn) {
      co << "  Building pure BNF productions... " ;
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
    outHTMLHelperFileContents.outputRawData ("<p></p>") ;
    outHTMLHelperFileContents.appendCppTitleComment ("  Pure BNF productions list", "title") ;
    printPureBNFgrammarInBNFfile (outHTMLHelperFileContents, vocabulary, pureBNFproductions) ;
    if (verboseOptionOn) {
      co << cStringWithSigned (pureBNFproductions.length ()) << ".\n" ;
      co.flush () ;
    }
  }
//--- Define vocabulary BDD sets descriptor
  const C_RelationSingleType vocabularyBDDType = vocabulary.getVocabularyBDDType () ;
//--- Search for identical productions -----------------------------------------------------------
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    if (verboseOptionOn) {
      co << "  Identical productions... " ;
    }
    const bool step2ok = searchForIdenticalProductions (pureBNFproductions, outHTMLHelperFileContents) ;
    if (! step2ok) {
      errorFlag = kError ;
      if (! verboseOptionOn) {
        co << "  Identical productions... " ;
      }
      co << "error.\n" ;
    }else if (verboseOptionOn) {
      co << "none, ok.\n" ;
    }
    co.flush () ;
  }
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
  //--- Enregistrer les caracteristiques de la grammaire
    outHTMLHelperFileContents << "For information :\n" ;
    outHTMLHelperFileContents.outputRawData ("<ul><li>") ;
    outHTMLHelperFileContents << cStringWithSigned ((int32_t)(vocabulary.getTerminalSymbolsCount () - 1))
              << " terminal symbols, numbered from 0 to "
              << cStringWithSigned ((int32_t)(vocabulary.getTerminalSymbolsCount () - 2)) << " ;" ;
    outHTMLHelperFileContents.outputRawData ("</li>\n<li>") ;
    outHTMLHelperFileContents << " the 'empty string' symbol '$$' is numbered "
              << cStringWithSigned (vocabulary.getEmptyStringTerminalSymbolIndex ()) << " ;" ;
    outHTMLHelperFileContents.outputRawData ("</li>\n<li>") ;
    outHTMLHelperFileContents << cStringWithSigned (vocabulary.getNonTerminalSymbolsCount ())
              << " nonterminal symbols in the pure BNF grammar, numbered from "
              << cStringWithSigned (vocabulary.getTerminalSymbolsCount ())
              << " to "
              << cStringWithSigned ((int32_t)(vocabulary.getAllSymbolsCount () - 1)) << " ;" ;
    outHTMLHelperFileContents.outputRawData ("</li>\n<li>") ;
    outHTMLHelperFileContents << "whole vocabulary : "
              << cStringWithSigned (vocabulary.getAllSymbolsCount ())
              << " elements, "
              << cStringWithUnsigned (vocabularyBDDType.BDDBitCount ())
              << " bits for BDDs." ;
    outHTMLHelperFileContents.outputRawData ("</li>\n</ul>\n") ;
  }
//--- Getting useful symbols ---------------------------------------------------------------------
  C_Relation usefulSymbols ;
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
  C_Relation vocabularyDerivingToEmpty ;
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
  C_Relation FIRSTsets ;
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
  C_Relation nonTerminalSymbolsFollowedByEmpty (usefulSymbols.configuration (), false) ;
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
  C_Relation FOLLOWsets ;
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
  outHTMLHelperFileContents.outputRawData ("<a name=\"grammar\"></a>") ;
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
  C_BDD::markAndSweepUnusedNodes () ;
  if (errorFlag != kNoError) {
    C_String s ; s << "ENDING ON ERROR, STEP" << cStringWithSigned ((uint16_t) errorFlag) ;
    outHTMLHelperFileContents.appendCppTitleComment (s, "title") ;
    C_String errorMessage  ;
    if (inPopulateHTMLHelperString) {
      errorMessage << "errors have been raised when analyzing the grammar: see file"
                      " 'file://"
                   << inHTMLFileName
                   << "'" ;
    }else{
      errorMessage << "errors have been raised when analyzing the grammar:"
                      " turn on '--output-html-grammar-file' option in order to get an output file for debugging" ;
    }
    inCompiler->semanticErrorAtLocation (inErrorLocation, errorMessage, TC_Array <C_FixItDescription> () COMMA_HERE) ;
  }else if (warningFlag) {
    C_String s ;
    s << "OK ; no error, but warning(s) step(s)" ;
    int32_t i = 1 ;
    while (warningFlag != 0) {
      if ((warningFlag & 1) != 0) {
        s << " " << cStringWithSigned (i) ;
      }
      warningFlag >>= 1 ;
      i ++ ;
    }
    outHTMLHelperFileContents.appendCppTitleComment (s, "title") ;
    C_String warningMessage  ;
    warningMessage << "warnings have been raised when analyzing the grammar: " ;
    if (inPopulateHTMLHelperString) {
      warningMessage << "see file 'file://" << inHTMLFileName << "'" ;
    }else{
      warningMessage << "turn on '-H' command line option, and see generated '" << inTargetFileName.mProperty_string.stringValue () << ".html' file" ;
    }
    inCompiler->semanticWarningAtLocation (inErrorLocation, warningMessage COMMA_HERE) ;
  }else{
    outHTMLHelperFileContents.appendCppTitleComment ("OK (no error, no warning)", "title") ;
  }
  outHTMLHelperFileContents.writeEndCode () ;
}

//----------------------------------------------------------------------------------------------------------------------

void
routine_grammarAnalysisAndGeneration (const GALGAS_lstring inTargetFileName,
                                      const GALGAS_lstring inGrammarClass,
                                      const GALGAS_uint inOriginalGrammarStartSymbol,
                                      const GALGAS_string inLexiqueName,
                                      const GALGAS_terminalSymbolsMapForGrammarAnalysis inTerminalSymbolMap,
                                      const GALGAS_syntaxComponentListForGrammarAnalysis inSyntaxComponentsList,
                                      const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis inUnusedNonTerminalSymbolsForGrammar,
                                      const GALGAS_string inHTMLFileName,
                                      const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis inNonTerminalSymbolSortedListForGrammarAnalysis,
                                      const GALGAS_string inSyntaxDirectedTranslationVarName,
                                      GALGAS_string & outCppFileContents,
                                      GALGAS_string & outHTMLHelperFileContents,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (totalErrorCount () == 0) {
    C_BDD::markAndSweepUnusedNodes () ;
    C_BDD::checkAllBDDsAreWellFormed (HERE) ;

    const GALGAS_location inErrorLocation = inTargetFileName.mProperty_location ;

    C_HTMLString HTMLHelperFileContents ;
    C_String CppFileContents ;
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
    outHTMLHelperFileContents = GALGAS_string (HTMLHelperFileContents) ;
    outCppFileContents = GALGAS_string (CppFileContents) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
