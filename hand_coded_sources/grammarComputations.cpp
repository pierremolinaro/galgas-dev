//-----------------------------------------------------------------------------*
//                                                                             *
//  This file handles all computations performed on grammars                   *
//                                                                             *
//  Copyright (C) 1999, ..., 2012 Pierre Molinaro.                             *
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

// #define LOG_GRAMMAR_COMPUTATIONS

//-----------------------------------------------------------------------------*

#include "files/C_HTML_FileWrite.h"
#include "files/C_TextFileWrite.h"
#include "files/C_FileManager.h"
#include "bdd/C_Relation.h"
#include "utilities/MF_MemoryControl.h"
#include "streams/C_ConsoleOut.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/C_Compiler.h"
#include "galgas_cli_options.h"
#include "galgas2/C_galgas_io.h"

#include "bdd/C_BDD_Descriptor.h"
#include "bdd/C_BDD_Set1.h"
#include "bdd/C_BDD_Set2.h"

//-----------------------------------------------------------------------------*

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

//-----------------------------------------------------------------------------*

cProduction::cProduction (void) :
mSourceFileName (),
mLineDefinition (0),
mColumnDefinition (0),
mLeftNonTerminalIndex (0),
mDerivation (),
mDerivationFirst (),
mProductionIndex (0) {
}

//-----------------------------------------------------------------------------*

cProduction::cProduction (const C_String & inSourceFileName,
                          const int32_t inDefinitionLine,
                          const int32_t inColumnDefinition,
                          const int32_t inLeftNonTerminalIndex,
                          TC_UniqueArray <int16_t> & ioDerivation, // Swap
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

//-----------------------------------------------------------------------------*

cProduction::cProduction (const C_String & inSourceFileName,
                          const int32_t inDefinitionLine,
                          const int32_t inColumnDefinition,
                          const int32_t inLeftNonTerminalIndex) :
mSourceFileName (inSourceFileName),
mLineDefinition (inDefinitionLine),
mColumnDefinition (inColumnDefinition),
mLeftNonTerminalIndex (inLeftNonTerminalIndex),
mDerivation (),
mDerivationFirst (),
mProductionIndex (0) {
}

//-----------------------------------------------------------------------------*

cPureBNFproductionsList::cPureBNFproductionsList (void) :
tableauIndicePremiereProduction (),
tableauIndiceDerniereProduction (),
tableauIndirectionProduction (),
mFirstProductionIndex (),
mLastProductionIndex (),
mProductionIndex () {
}

//-----------------------------------------------------------------------------*

void cProduction::
engendrerAppelProduction (const int16_t nombreDeParametres,
                          const cVocabulary & inVocabulary,
                          const C_String & inAltName,
                          AC_OutputStream & fichierCPP) const {
  fichierCPP << "  rule_" << mSourceFileName.identifierRepresentation ()
             << "_" << inVocabulary.getSymbol (mLeftNonTerminalIndex COMMA_HERE).identifierRepresentation ()
             << "_i" << cStringWithUnsigned (mProductionIndex)
             << "_" << inAltName.identifierRepresentation () << "(" ;
  for (int32_t i=1 ; i<nombreDeParametres ; i++) {
     fichierCPP << "parameter_" << cStringWithSigned (i)  << ", " ;
  }
  fichierCPP << "inLexique" ;
  fichierCPP << ") ;\n" ;
}

//-----------------------------------------------------------------------------*

void swap (cProduction & ioProduction1, cProduction & ioProduction2) {
  swap (ioProduction1.mSourceFileName, ioProduction2.mSourceFileName) ;
  swap (ioProduction1.mLineDefinition, ioProduction2.mLineDefinition) ;
  swap (ioProduction1.mColumnDefinition, ioProduction2.mColumnDefinition) ;
  swap (ioProduction1.mLeftNonTerminalIndex, ioProduction2.mLeftNonTerminalIndex) ;
  swap (ioProduction1.mDerivation, ioProduction2.mDerivation) ;
  swap (ioProduction1.mDerivationFirst, ioProduction2.mDerivationFirst) ;
  swap (ioProduction1.mProductionIndex, ioProduction2.mProductionIndex) ;
}

//-----------------------------------------------------------------------------*

static bool
searchForIdenticalProductions (const cPureBNFproductionsList & productions,
                               C_HTML_FileWrite * inHTMLfile) {
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p><a name=\"identical_productions\"></a></p>") ;
    inHTMLfile->appendCppTitleComment ("Step 2 : searching for identical productions", "title") ;
  }
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
        if (inHTMLfile != NULL) {
          *inHTMLfile << "  Error : productions " << cStringWithSigned (i) << " and " << cStringWithSigned (j) << " are identical.\n" ;
        }
      }
    }
  }
  if (inHTMLfile != NULL) {
    inHTMLfile->outputRawData ("<p>") ;
    if (ok) {
      inHTMLfile->outputRawData ("<span class=\"success\">") ;
      *inHTMLfile << "Ok : all productions are different.\n" ;
      inHTMLfile->outputRawData ("</span>") ;
    }else{
      inHTMLfile->outputRawData ("<span class=\"error\">") ;
      *inHTMLfile << "As the grammar presents identical productions, it is ambiguous :\n"
                     "it is impossible to build a deterministic parser.\n\n" ;
      inHTMLfile->outputRawData ("</span>") ;
    }
    inHTMLfile->outputRawData ("</p>") ;
  }
  return ok ;
}

//-----------------------------------------------------------------------------*

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

//-----------------------------------------------------------------------------*

static uint16_t bddBitCountForVocabulary (const cVocabulary & inVocabulary) {
  uint16_t bddBitCount = 0 ;
  uint32_t temp = (uint32_t) (inVocabulary.getAllSymbolsCount () - 1) ;
  while (temp != 0) {
    temp >>= 1 ;
    bddBitCount ++ ;
  }
//  printf ("[%hu bits for %d symbols]\n", bddBitCount, inVocabulary.getAllSymbolsCount ()) ;
  return bddBitCount ;
}

//-----------------------------------------------------------------------------*

static void
analyzeGrammar (C_Compiler * inCompiler,
                const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inUnusedNonTerminalSymbolsForGrammar,
                const GALGAS_lstring & inTargetFileName,
                const GALGAS_lstring & inGrammarClass,
                const GALGAS_uint & inOriginalGrammarStartSymbol,
                const C_String & inLexiqueName,
                const GALGAS_location & inErrorLocation,
                const GALGAS_terminalSymbolsMapForGrammarAnalysis & inTerminalSymbolMap,
                const GALGAS_syntaxComponentListForGrammarAnalysis & inSyntaxComponentsList,
                const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inNonTerminalSymbolSortedListForGrammarAnalysis,
                const C_String & inOutputDirectoryForCppFiles,
                const C_String & inOutputDirectoryForHTMLFile,
                const bool inHasIndexing) {
  bool warningFlag = false ;

//--- Depending of grammar class, fix operations to perform
  typedef enum {kDefaultBehavior, kLL1grammar, kSLRgrammar, kLR1grammar, kGrammarClassError} enumGrammarClass ;
  enumGrammarClass grammarClass = kGrammarClassError ;
  if (inGrammarClass.mAttribute_string.stringValue ().length () == 0) { // Default behavior
    grammarClass = kDefaultBehavior ;
  }else if (inGrammarClass.mAttribute_string.stringValue ().compare ("LL1") == 0) { // Force LL (1) grammar
    grammarClass = kLL1grammar ;
  }else if (inGrammarClass.mAttribute_string.stringValue ().compare ("SLR") == 0) { // Force SLR grammar
    grammarClass = kSLRgrammar ;
  }else if (inGrammarClass.mAttribute_string.stringValue ().compare ("LR1") == 0) { // Force LR (1) grammar
    grammarClass = kLR1grammar ;
  }else{ // Unknown class... error !
    inCompiler->semanticErrorAtLocation (inGrammarClass.mAttribute_location, "Unknown grammar class" COMMA_HERE) ;
  }

//--- Error flag
  typedef enum {kNoError, kError, kGrammarNotLL1, kGrammarNotSLR, kGrammarNotLR1} enumErrorKind ;
  enumErrorKind errorFlag = kNoError ;

//--- Verbose Output
  const bool verboseOptionOn = gOption_galgas_5F_builtin_5F_options_verbose_5F_output.mValue ;
//--- Output a HTML file ?
  const bool outputHTMLfile = gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.mValue ;
//--- If 'HTMLfileName' is the empty string, no file is created

//--- Create output HTML file
  C_FileManager::makeDirectoryIfDoesNotExist (inOutputDirectoryForHTMLFile) ;
  const C_String HTMLfileName = inOutputDirectoryForHTMLFile + "/" + inTargetFileName.mAttribute_string.stringValue () + ".html" ;
  C_HTML_FileWrite * HTMLfile = NULL ;
  if (outputHTMLfile && inCompiler->performGeneration ()) {
    C_String s ;
    s << "'" << inTargetFileName.mAttribute_string.stringValue () << "' grammar" ;
    macroMyNew (HTMLfile, C_HTML_FileWrite (HTMLfileName,
                                            s,
                                            "", // No css file
                                            k_default_style)) ; // Style definition
    if (! HTMLfile->isOpened ()) {
      C_String message ;
      message << "Cannot open '" << HTMLfileName << "' file in write mode." ;
      inCompiler->onTheFlySemanticError (message COMMA_HERE) ;
    }
  //--- HTML title
    HTMLfile->outputRawData ("<h1>") ;
    *HTMLfile << s ;
    HTMLfile->outputRawData ("</h1>") ;
 //--- Create links to page entries
    HTMLfile->outputRawData ("<p><a class=\"header_link\" href=\"#pure_bnf\">Pure BNF productions</a></p>"
                             "<p><a class=\"header_link\" href=\"#vocabulary\">Vocabulary</a></p>"
                             "<p><a class=\"header_link\" href=\"#identical_productions\">Identical productions</a></p>"
                             "<p><a class=\"header_link\" href=\"#useful_symbols\">Useful symbols</a></p>"
                             "<p><a class=\"header_link\" href=\"#empty_strings\">Empty string derivations</a></p>"
                             "<p><a class=\"header_link\" href=\"#first_sets\">First sets</a></p>"
                             "<p><a class=\"header_link\" href=\"#follow_by_empty\">Follow by empty</a></p>"
                             "<p><a class=\"header_link\" href=\"#grammar\">Grammar analysis</a></p>"
                             ) ;
  }else if ((! outputHTMLfile) && C_FileManager::fileExistsAtPath (HTMLfileName)) { // Delete HTML file
    if (C_Compiler::performGeneration ()) {
      C_FileManager::deleteFile (HTMLfileName) ;
      if (verboseOptionOn) {
        ggs_printFileOperationSuccess ((C_String ("Deleted '") + HTMLfileName + "'.\n").cString (HERE) COMMA_HERE) ;
      }
    }else{
      ggs_printWarning (NULL, C_LocationInSource (), (C_String ("Need to delete '") + HTMLfileName + "'.\n").cString (HERE) COMMA_HERE) ;
    }
  }

//--- Print original grammar in BNF file
  if ((errorFlag == 0) && (grammarClass != kGrammarClassError) && (HTMLfile != NULL)) {
    HTMLfile->appendCppTitleComment ("Original grammar", "title") ;
    #ifdef LOG_GRAMMAR_COMPUTATIONS
      printf ("PRINT ORIGINAL GRAMMAR IN HTML FILE\n") ; fflush (stdout) ;
    #endif
    printOriginalGrammar (*HTMLfile, inSyntaxComponentsList) ;
    #ifdef LOG_GRAMMAR_COMPUTATIONS
      printf ("PRINT ORIGINAL GRAMMAR IN HTML FILE DONE \n") ; fflush (stdout) ;
    #endif
  }
//--- Building pure BNF productions ---------------------------------------------------------------------
  #ifdef LOG_GRAMMAR_COMPUTATIONS
    printf ("BUILD PURE BNF PRODUCTIONS\n") ; fflush (stdout) ;
  #endif
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
    if (HTMLfile != NULL) {
      HTMLfile->outputRawData ("<p></p>") ;
      HTMLfile->appendCppTitleComment ("  Pure BNF productions list", "title") ;
      printPureBNFgrammarInBNFfile (*HTMLfile, vocabulary, pureBNFproductions) ;
    }
    if (verboseOptionOn) {
      co << cStringWithSigned (pureBNFproductions.length ()) << " productions.\n" ;
      co.flush () ;
    }
  }
  #ifdef LOG_GRAMMAR_COMPUTATIONS
    printf ("BUILD PURE BNF PRODUCTIONS DONE\n") ; fflush (stdout) ;
  #endif

//--- Define vocabulary BDD sets descriptor
  const C_BDD_Descriptor vocabularyDescriptor ((uint32_t) (vocabulary.getAllSymbolsCount () - 1)) ;
  const C_RelationSingleType vocabularyBDDType = vocabulary.getVocabularyBDDType () ;

//--- Compute the BDD bit count
  const uint16_t bddBitCount = bddBitCountForVocabulary (vocabulary) ;
//--- Search for identical productions -----------------------------------------------------------
  #ifdef LOG_GRAMMAR_COMPUTATIONS
    printf ("SEARCH FOR IDENTICAL PRODUCTIONS\n") ; fflush (stdout) ;
  #endif
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    if (verboseOptionOn) {
      co << "  Searching for identical productions... " ;
    }
    const bool step2ok = searchForIdenticalProductions (pureBNFproductions, HTMLfile) ;
    if (! step2ok) {
      errorFlag = kError ;
      if (! verboseOptionOn) {
        co << "  Searching for identical productions... " ;
      }
      co << "error.\n" ;
    }else if (verboseOptionOn) {
      co << "none, ok.\n" ;
    }
    co.flush () ;
  }
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError) && (HTMLfile != NULL)) {
  //--- Enregistrer les caracteristiques de la grammaire
    *HTMLfile << "For information :\n" ;
    HTMLfile->outputRawData ("<ul><li>") ;
    *HTMLfile << cStringWithSigned ((int32_t)(vocabulary.getTerminalSymbolsCount () - 1))
              << " terminal symbols, numbered from 0 to "
              << cStringWithSigned ((int32_t)(vocabulary.getTerminalSymbolsCount () - 2)) << " ;" ;
    HTMLfile->outputRawData ("</li>\n<li>") ;
    *HTMLfile << " the 'empty string' symbol '$$' is numbered "
              << cStringWithSigned (vocabulary.getEmptyStringTerminalSymbolIndex ()) << " ;" ;
    HTMLfile->outputRawData ("</li>\n<li>") ;
    *HTMLfile << cStringWithSigned (vocabulary.getNonTerminalSymbolsCount ())
              << " nonterminal symbols in the pure BNF grammar, numbered from "
              << cStringWithSigned (vocabulary.getTerminalSymbolsCount ())
              << " to "
              << cStringWithSigned ((int32_t)(vocabulary.getAllSymbolsCount () - 1)) << " ;" ;
    HTMLfile->outputRawData ("</li>\n<li>") ;
    *HTMLfile << "whole vocabulary : "
              << cStringWithSigned (vocabulary.getAllSymbolsCount ())
              << " elements, "
              << cStringWithSigned (vocabularyDescriptor.getBDDbitsSize ())
              << " bits for BDDs." ;
    HTMLfile->outputRawData ("</li>\n</ul>\n") ;
  }
  #ifdef LOG_GRAMMAR_COMPUTATIONS
    printf ("SEARCH FOR IDENTICAL PRODUCTIONS DONE\n") ; fflush (stdout) ;
  #endif
//--- Getting useful symbols ---------------------------------------------------------------------
  #ifdef LOG_GRAMMAR_COMPUTATIONS
    printf ("GETTING USEFUL SYMBOLS\n") ; fflush (stdout) ;
  #endif
  C_BDD_Set1 usefulSymbolsEX (vocabularyDescriptor) ;
  C_Relation usefulSymbols ;
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    useful_symbols_computations (inCompiler,
                                 inErrorLocation,
                                 inUnusedNonTerminalSymbolsForGrammar,
                                 pureBNFproductions,
                                 vocabularyBDDType,
                                 vocabulary,
                                 HTMLfile,
                                 usefulSymbolsEX,
                                 usefulSymbols,
                                 warningFlag,
                                 verboseOptionOn) ;
  }
  #ifdef LOG_GRAMMAR_COMPUTATIONS
    printf ("GETTING USEFUL SYMBOLS DONE\n") ; fflush (stdout) ;
  #endif
//--- Calculer l'ensemble des non terminaux pouvant se dériver en vide --------------------------------
  TC_UniqueArray <bool> vocabularyDerivingToEmpty_Array ;
  C_BDD_Set1 vocabularyDerivingToEmpty_BDD (vocabularyDescriptor) ;
  C_Relation vocabularyDerivingToEmpty ;
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    vocabularyDerivingToEmpty = empty_strings_computations (pureBNFproductions,
                                                            HTMLfile,
                                                            vocabularyDerivingToEmpty_Array,
                                                            vocabularyDerivingToEmpty_BDD,
                                                            usefulSymbols.configuration (),
                                                            verboseOptionOn) ;
  }
//--- Computing FIRST sets ---------------------------------------------------------------
  C_BDD_Set2 EX_FIRSTsets (vocabularyDescriptor, vocabularyDescriptor) ;
  TC_UniqueArray <TC_UniqueArray <uint64_t> > FIRSTarray ;
  C_Relation FIRSTsets ;
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    bool ok = false ;
    FIRST_computations (pureBNFproductions,
                        bddBitCount,
                        HTMLfile,
                        vocabulary,
                        vocabularyDerivingToEmpty_Array,
                        vocabularyDerivingToEmpty_BDD,
                        vocabularyDerivingToEmpty,
                        usefulSymbolsEX,
                        usefulSymbols,
                        EX_FIRSTsets,
                        FIRSTarray,
                        vocabularyDescriptor,
                        FIRSTsets,
                        ok,
                        verboseOptionOn) ;
    if (! ok) {
      errorFlag = kError ;
    }
  }
//--- Calcul de l'ensemble des non-terminaux pouvant etre suivi du vide -------------------------------
  C_BDD_Set1 nonTerminalSymbolsFollowedByEmpty (vocabularyDescriptor) ;
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    follow_by_empty_computations (pureBNFproductions,
                                  HTMLfile,
                                  vocabulary,
                                  vocabularyDerivingToEmpty_Array,
                                  nonTerminalSymbolsFollowedByEmpty,
                                  verboseOptionOn) ;
  }
//--- Computing FOLLOW sets ---------------------------------------------------------------
  C_BDD_Set2 FOLLOWsets (vocabularyDescriptor, vocabularyDescriptor) ;
  TC_UniqueArray <TC_UniqueArray <uint64_t> > FOLLOWarray ;
  if ((errorFlag == kNoError) &&
      (grammarClass != kGrammarClassError) &&
      (grammarClass != kLR1grammar)) { // Follow are not used by LR(1) computations
    bool ok = false ;
    FOLLOW_computations (pureBNFproductions,
                         HTMLfile,
                         bddBitCount,
                         vocabulary,
                         vocabularyDerivingToEmpty_Array,
                         usefulSymbolsEX,
                         EX_FIRSTsets,
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
  if (HTMLfile != NULL) {
    HTMLfile->outputRawData ("<a name=\"grammar\"></a>") ;
  }
  if ((errorFlag == kNoError)
   && ((grammarClass == kDefaultBehavior) || (grammarClass == kLL1grammar))) {
    bool ok = false ;
    LL1_computations (inCompiler,
                      pureBNFproductions,
                      HTMLfile,
                      vocabulary,
                      vocabularyDerivingToEmpty_Array,
                      EX_FIRSTsets,
                      FOLLOWsets,
                      inNonTerminalSymbolSortedListForGrammarAnalysis,
                      inOriginalGrammarStartSymbol.uintValue (),
                      inTargetFileName.mAttribute_string.stringValue (),
                      inOutputDirectoryForCppFiles,
                      inLexiqueName,
                      ok,
                      verboseOptionOn,
                      inHasIndexing) ;
    if (! ok) {
      errorFlag = kGrammarNotLL1 ;
    }
  }
//--- SLR computations... -----------------------------------------------------------------
 if (((errorFlag == kGrammarNotLL1) && (grammarClass == kDefaultBehavior))
        ||
     ((errorFlag == kNoError) && (grammarClass == kSLRgrammar))) {
    bool ok = false ;
    SLR_computations (inCompiler,
                      pureBNFproductions,
                      vocabulary,
                      HTMLfile,
                      FOLLOWarray,
                      inNonTerminalSymbolSortedListForGrammarAnalysis,
                      inOriginalGrammarStartSymbol.uintValue (),
                      inTargetFileName.mAttribute_string.stringValue (),
                      inOutputDirectoryForCppFiles,
                      inLexiqueName,
                      ok,
                      verboseOptionOn,
                      inHasIndexing) ;
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
    LR1_computations (inCompiler,
                      pureBNFproductions,
                      vocabulary,
                      HTMLfile,
                      FIRSTarray,
                      vocabularyDerivingToEmpty_Array,
                      inNonTerminalSymbolSortedListForGrammarAnalysis,
                      inOriginalGrammarStartSymbol.uintValue (),
                      inTargetFileName.mAttribute_string.stringValue (),
                      inOutputDirectoryForCppFiles,
                      inLexiqueName,
                      ok,
                      verboseOptionOn,
                      inHasIndexing) ;
    if (ok) {
      errorFlag = kNoError ;
    }else{
      errorFlag = kGrammarNotLR1 ;
    }
  }

//--- Final step ---------------------------------------------------------------------
//  C_BDD::checkAllBDDsAreWellFormed (HERE) ;
  C_BDD::markAndSweepUnusedNodes () ;
//  C_BDD::checkAllBDDsAreWellFormed (HERE) ;
  if (errorFlag != kNoError) {
    C_String s ; s << "ENDING ON ERROR, STEP" << cStringWithSigned ((uint16_t) errorFlag) ;
    if (HTMLfile != NULL) {
      HTMLfile->appendCppTitleComment (s, "title") ;
    }
    C_String errorMessage  ;
    if (HTMLfile != NULL) {
      errorMessage << "errors have been raised when analyzing the grammar: see file"
                      " '"
                   << HTMLfileName
                   << "'" ;
    }else{
      errorMessage << "errors have been raised when analyzing the grammar:"
                      " turn on '--output-html-grammar-file' option in order to get an output file for debugging" ;

    }
    inCompiler->semanticErrorAtLocation (inErrorLocation, errorMessage COMMA_HERE) ;
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
    if (HTMLfile != NULL) {
      HTMLfile->appendCppTitleComment (s, "title") ;
    }
    C_String warningMessage  ;
    warningMessage << "warnings have been raised when analyzing the grammar: " ;
    if (HTMLfile != NULL) {
      warningMessage << "see file '" << HTMLfileName << "'" ;
    }else{
      warningMessage << "turn on '-H' command line option, and see generated '" << inTargetFileName.mAttribute_string.stringValue () << ".html' file" ;
    }
    inCompiler->semanticWarningAtLocation (inErrorLocation, warningMessage COMMA_HERE) ;
  }else if (HTMLfile != NULL) {
    HTMLfile->appendCppTitleComment ("OK (no error, no warning)", "title") ;
  }
  if (outputHTMLfile) {
    if (C_Compiler::performGeneration ()) {
      if (verboseOptionOn) {
        ggs_printFileOperationSuccess (C_String ("Written '") + HTMLfileName + "'.\n" COMMA_HERE) ;
      }
    }else{
      ggs_printWarning (NULL, C_LocationInSource (), C_String ("Need to write '") + HTMLfileName + "'.\n" COMMA_HERE) ;
    }
  }
  macroMyDelete (HTMLfile) ;
}

//-----------------------------------------------------------------------------*

void
routine_grammarAnalysisAndGeneration (const GALGAS_lstring inTargetFileName,
                                      const GALGAS_lstring inGrammarClass,
                                      const GALGAS_uint inOriginalGrammarStartSymbol,
                                      const GALGAS_string inLexiqueName,
                                      const GALGAS_location inErrorLocation,
                                      const GALGAS_terminalSymbolsMapForGrammarAnalysis inTerminalSymbolMap,
                                      const GALGAS_syntaxComponentListForGrammarAnalysis inSyntaxComponentsList,
                                      const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis inUnusedNonTerminalSymbolsForGrammar,
                                      const GALGAS_string inOutputDirectoryForCppFiles,
                                      const GALGAS_string inOutputDirectoryForHTMLFile,
                                      const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis inNonTerminalSymbolSortedListForGrammarAnalysis,
                                      const GALGAS_bool inHasIndexing,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (totalErrorCount () == 0) {
    #ifdef LOG_GRAMMAR_COMPUTATIONS
      printf ("MARK AND SWEEP BDD NODES\n") ; fflush (stdout) ;
    #endif
    C_BDD::markAndSweepUnusedNodes () ;
    C_BDD::checkAllBDDsAreWellFormed (HERE) ;
    #ifdef LOG_GRAMMAR_COMPUTATIONS
      printf ("MARK AND SWEEP BDD NODES DONE\n") ; fflush (stdout) ;
    #endif
    analyzeGrammar (inCompiler,
                    inUnusedNonTerminalSymbolsForGrammar,
                    inTargetFileName,
                    inGrammarClass,
                    inOriginalGrammarStartSymbol,
                    inLexiqueName.stringValue (),
                    inErrorLocation,
                    inTerminalSymbolMap,
                    inSyntaxComponentsList,
                    inNonTerminalSymbolSortedListForGrammarAnalysis,
                    inOutputDirectoryForCppFiles.stringValue (),
                    inOutputDirectoryForHTMLFile.stringValue (),
                    inHasIndexing.boolValue ()) ;
  }
}

//-----------------------------------------------------------------------------*
