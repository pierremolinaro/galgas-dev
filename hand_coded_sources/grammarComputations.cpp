//---------------------------------------------------------------------------*
//                                                                           *
//  This file handles all computations performed on grammars                 *                                                               *
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
#include "files/C_TextFileWrite.h"
#include "bdd/C_BDD_Descriptor.h"
#include "bdd/C_BDD_Set1.h"
#include "bdd/C_BDD_Set2.h"
#include "utilities/MF_MemoryControl.h"
#include "streams/C_ConsoleOut.h"

//---------------------------------------------------------------------------*

#include "useful_symbols_computations.h"
#include "empty_strings_computations.h"
#include "FIRST_computations.h"
#include "follow_by_empty_computation.h"
#include "FOLLOW_computations.h"
#include "LL1_computations.h"
#include "grammarComputations.h"
#include "cPureBNFproductionsList.h"
#include "SLR_computations.h"
#include "LR1_computations.h"
#include "cVocabulary.h"
#include "printOriginalGrammar.h"
#include "buildPureBNFgrammar.h"
#include "semantics_instructions.h"
#include "grammar_parser.h"

//---------------------------------------------------------------------------*

class cInfo {
  public : GGS_M_terminalSymbolsMapForUse mTerminalSymbolMap ;
  public : GGS_M_nonTerminalSymbolsForGrammar mNonterminalSymbolsMapForGrammar ;
} ;

//---------------------------------------------------------------------------*

cProduction::cProduction (void) {
  aLigneDefinition = 0 ;
  aColonneDefinition = 0 ;
  aNumeroNonTerminalGauche = 0 ;
}

//---------------------------------------------------------------------------*

void cProduction::
engendrerAppelProduction (const sint16 nombreDeParametres,
                          const cVocabulary & inVocabulary,
                          const C_String & inAltName,
                          const bool inReturnsEntityInstance,
                          AC_OutputStream & fichierCPP) const {
  if (inReturnsEntityInstance) {
    fichierCPP << "_outReturnedModelInstance = " ;
  }
  fichierCPP << "pr_"
             << inVocabulary.getSymbol (aNumeroNonTerminalGauche COMMA_HERE)
             << '_'
             << mSourceFileName << '_' << aLigneDefinition
             << '_' << aColonneDefinition << '_' << inAltName
             << " (lexique_var_" ;
  for (sint16 i=1 ; i<nombreDeParametres ; i++) {
    fichierCPP << ',' ;
    if ((i % 5) == 4) {
      fichierCPP << "\n                 " ;
     }
     fichierCPP << " parameter_" << i ;
  }
  fichierCPP << ") ;\n" ;
}

//---------------------------------------------------------------------------*

void swap (cProduction & ioProduction1, cProduction & ioProduction2) {
  swap (ioProduction1.mSourceFileName, ioProduction2.mSourceFileName) ;
  swap (ioProduction1.aLigneDefinition, ioProduction2.aLigneDefinition) ;
  swap (ioProduction1.aColonneDefinition, ioProduction2.aColonneDefinition) ;
  swap (ioProduction1.aNumeroNonTerminalGauche, ioProduction2.aNumeroNonTerminalGauche) ;
  swap (ioProduction1.aDerivation, ioProduction2.aDerivation) ;
  swap (ioProduction1.aPremierDeProduction, ioProduction2.aPremierDeProduction) ;
}

//---------------------------------------------------------------------------*

static bool
searchForIdenticalProductions (const cPureBNFproductionsList & productions,
                               C_HTML_FileWrite & inHTMLfile) {
  inHTMLfile.outputRawData ("<p><a name=\"identical_productions\"></a></p>") ;
  inHTMLfile.writeCTitleComment ("Step 2 : searching for identical productions", "title") ;
  bool ok = true ;
  for (sint32 i=0 ; i<productions.length () ; i++) {
    const cProduction & pi = productions (i COMMA_HERE) ;
    for (sint32 j=i+1 ; j<productions.length () ; j++) {
      const cProduction & pj = productions (j COMMA_HERE) ;
      bool identiques = pi.aNumeroNonTerminalGauche == pj.aNumeroNonTerminalGauche ;
      if (identiques) {
        identiques = pi.aDerivation.count () == pj.aDerivation.count () ;
        for (sint32 t=0 ; (t<pi.aDerivation.count ()) && identiques ; t++) {
          identiques = pi.aDerivation (t COMMA_HERE) == pj.aDerivation (t COMMA_HERE) ;
        }
      }
      if (identiques) {
        inHTMLfile << "  Error : productions " << i << " and " << j << " are identical.\n" ;
      }
    }
  }
  inHTMLfile.outputRawData ("<p>") ;
  if (ok) {
    inHTMLfile.outputRawData ("<span class=\"success\">") ;
    inHTMLfile << "Ok : all productions are different.\n" ;
    inHTMLfile.outputRawData ("</span>") ;
  }else{
    inHTMLfile.outputRawData ("<span class=\"error\">") ;
    inHTMLfile << "As the grammar presents identical productions, it is ambiguous :\n"
                  "it is impossible to build a deterministic parser.\n\n" ;
    inHTMLfile.outputRawData ("</span>") ;
  }
  inHTMLfile.outputRawData ("</p>") ;
  return ok ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//    Generate class registering instructions in C++ file                    *
//                                                                           *
//---------------------------------------------------------------------------*

void
generateClassRegistering (AC_OutputStream & inCppfile,
                          const GGS_stringset & inClassesNamesSet) {
  const sint32 classCount = inClassesNamesSet.count () ;
  inCppfile << "// classCount : " << classCount << '\n' ;
  GGS_stringset::element_type * currentClass = inClassesNamesSet.firstObject () ;
  sint32 index = 0 ;
  while (currentClass != NULL) {
    macroValidPointer (currentClass) ;
    inCppfile << "// " << index << " : " << currentClass->mKey << '\n' ;
    index ++ ;
    currentClass = currentClass->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

static void
generateGrammarHeaderFile (C_Lexique & inLexique,
                           const GGS_M_nonTerminalSymbolsForGrammar & inNonterminalSymbolsMapForGrammar,
                           const GGS_L_syntaxComponents_ForGrammar & inSyntaxComponentsList,
                           const C_String & inLexiqueName,
                           const uint32 inOriginalGrammarStartSymbol,
                           const C_String & inTargetFileName,
                           const cVocabulary & inVocabulary) {
  C_String generatedZone2 ;
  generatedZone2 << "#ifndef GRAMMAR_" << inTargetFileName << "_DEFINED\n"
                 << "#define GRAMMAR_" << inTargetFileName << "_DEFINED\n\n" ;

//--- Engendrer les inclusions --------------------------------------------------------------
  generatedZone2.writeCHyphenLineComment () ;
  GGS_L_syntaxComponents_ForGrammar::element_type * component = inSyntaxComponentsList.firstObject () ;
  while (component != NULL) {
    macroValidPointer (component) ;
    generatedZone2 << "#include \"" << component->mSyntaxComponentName << ".h\"\n" ;
    component = component->nextObject () ;
  }
  generatedZone2 << '\n' ;

//--- Engendrer la classe de l'analyseur syntaxique ------------------------------------------
  C_String generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
  generatedZone3.writeCHyphenLineComment () ;
  generatedZone3 << "class " << inTargetFileName ;
  component = inSyntaxComponentsList.firstObject () ;
//--- Liens d'heritage
  bool premier = true ;
  while (component != NULL) {
    macroValidPointer (component) ;
    if (premier) {
      generatedZone3 << " :" ;
      premier = false ;
    }else{
      generatedZone3 << ",\n                                " ;
    }
    generatedZone3 << " public " << component->mSyntaxComponentName ;
    component = component->nextObject () ;
  }
  generatedZone3 << " {\n" ;
//--- declaration des non-terminaux de la grammaire d'origine
  GGS_M_nonTerminalSymbolsForGrammar::element_type * nonTerminal = inNonterminalSymbolsMapForGrammar.firstObject () ;
  while (nonTerminal != NULL) {
    macroValidPointer (nonTerminal) ;
    GGS_M_nonterminalSymbolAltsForGrammar::element_type * currentAltForNonTerminal = nonTerminal->mInfo.mNonterminalSymbolParametersMap.firstObject () ;
    while (currentAltForNonTerminal != NULL) {
      generatedZone3 << "  public : virtual " ;
      if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
        generatedZone3 << "GGS_" << currentAltForNonTerminal->mInfo.mReturnedEntityTypeName
                       << " * " ;      
      }else{
        generatedZone3 << "void " ;
      }
      generatedZone3 << "nt_" << nonTerminal->mKey << '_' << currentAltForNonTerminal->mKey
                     << " (" << inLexiqueName << " &" ;
      GGS_L_signature::element_type * parametre = currentAltForNonTerminal->mInfo.mFormalParametersList.firstObject () ;
      while (parametre != NULL) {
        macroValidPointer (parametre) ;
        generatedZone3 << ",\n                                " ;
        generateFormalArgumentFromTypeName (parametre->mGalgasTypeName, parametre->mFormalArgumentPassingMode, generatedZone3) ;
        parametre = parametre->nextObject () ;
      }
      generatedZone3 << ") ;\n" ; 
      if (nonTerminal->mIndex == (sint32) inOriginalGrammarStartSymbol) {
        generatedZone3 << "  public : " ;
        if (currentAltForNonTerminal->mInfo.mReturnedEntityTypeName.length () > 0) {
          generatedZone3 << "GGS_" << currentAltForNonTerminal->mInfo.mReturnedEntityTypeName
                         << " * " ;      
        }else{
          generatedZone3 << "void " ;
        }
        generatedZone3 << "startParsing_" << currentAltForNonTerminal->mKey 
                       << " (" << inLexiqueName << " &" ;
        parametre = currentAltForNonTerminal->mInfo.mFormalParametersList.firstObject () ;
        while (parametre != NULL) {
          macroValidPointer (parametre) ;
          generatedZone3 << ",\n                                " ;
          generateFormalArgumentFromTypeName (parametre->mGalgasTypeName, parametre->mFormalArgumentPassingMode, generatedZone3) ;
          parametre = parametre->nextObject () ;
        }
        generatedZone3 << ") ;\n" ;
      }
      currentAltForNonTerminal = currentAltForNonTerminal->nextObject () ;
    }
  //--- Next non terminal
    nonTerminal = nonTerminal->nextObject () ;
  }
//--- declaration des non-terminaux pour les instructions choix et repeter
  for (sint32 i=inVocabulary.getTerminalSymbolsCount () ; i<inVocabulary.getAllSymbolsCount () ; i++) {
    if (inVocabulary.needToGenerateChoice (i COMMA_HERE)) {
      generatedZone3 << "  public : virtual sint16 " << inVocabulary.getSymbol (i COMMA_HERE) << " ("
            << inLexiqueName << " &) ;\n" ;
    }
  }

//--- Fin de la classe
  generatedZone3 << "} ;\n\n" ;

//--- End of file
  generatedZone3.writeCHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  inLexique.generateFile ("//",
                          inTargetFileName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

static void
fixInfoForInstructionsList (const GGS_L_ruleSyntaxSignature & inInstructionsList,
                            cInfo & inInfo,
                            C_Lexique & inLexique) {
  GGS_L_ruleSyntaxSignature::element_type * currentInstruction = inInstructionsList.firstObject () ;
  while (currentInstruction != NULL) {
    macroValidPointer (currentInstruction) ;
    currentInstruction->mInstruction (HERE)->fixInfos (inInfo, inLexique) ;

    currentInstruction = currentInstruction->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_T_repeatInstruction_forGrammarComponent::
fixInfos (cInfo & inInfo,
          C_Lexique & inLexique) {
  GGS_L_branchList_ForGrammarComponent::element_type * currentBranch = mRepeatList.firstObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    fixInfoForInstructionsList (currentBranch->mInstructionsList,
                                inInfo,
                                inLexique) ;
    currentBranch = currentBranch->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_T_selectInstruction_forGrammarComponent::
fixInfos (cInfo & inInfo,
          C_Lexique & inLexique) {
  GGS_L_branchList_ForGrammarComponent::element_type * currentBranch = mSelectList.firstObject () ;
  while (currentBranch != NULL) {
    macroValidPointer (currentBranch) ;
    fixInfoForInstructionsList (currentBranch->mInstructionsList,
                                inInfo,
                                inLexique) ;
    currentBranch = currentBranch->nextObject () ;
  }
}

//---------------------------------------------------------------------------*

void cPtr_T_nonterminalInstruction_forGrammarComponent::
fixInfos (cInfo & inInfo,
          C_Lexique & inLexique) {
  GGS_luint index ;
  GGS_M_nonterminalSymbolAltsForGrammar unusedParameter ;
  inInfo.mNonterminalSymbolsMapForGrammar.methode_searchKeyGetIndex (inLexique, mNonterminalSymbolName,
                                            index, unusedParameter COMMA_HERE) ;
  mNonterminalSymbolIndex.mValue = index.uintValue () ;
}

//---------------------------------------------------------------------------*

void cPtr_T_terminalInstruction_forGrammarComponent::
fixInfos (cInfo & inInfo,
          C_Lexique & /*inLexique */) {
  const sint32 index = inInfo.mTerminalSymbolMap.indexOfKey (mTerminalSymbolName) ;
  MF_Assert (index >= 0, "index (%ld) must be >=0 ", index, 0) ;
  mTerminalSymbolIndex.mValue = (uint32) index ;
}

//---------------------------------------------------------------------------*

static const char k_default_style [] = {
  "body {\n"
  "  font-family: Helvetica, sans-serif ;\n"
  "	font-size: small ;\n"
  "}\n"
  "\n"
  "h1 {\n"
  "  text-align: center ;\n"
  "}\n"
  "\n"
  "a.header_link {\n"
  "	 border: 1px solid #999999 ;\n"
  "	 padding: 4px ;\n"
  "  background-color: #FFFFCC ;\n"
  "  font-weight: bold ;\n"
  "}\n"
  "\n"
  "a:visited, a:link, a:active{\n"
  " color: blue ;\n"
  " text-decoration: underline ;\n"
  "}\n"
  "\n"
  "a:hover {\n"
  "  color:green ;\n"
  "  background-color: #FF9966 ;\n"
  "  text-decoration: none ;\n"
  "}\n"
  "\n"
  "table.title {\n"
  "  width: 100% ;\n"
  "	border: 1px solid #999999 ;\n"
  "  background-color: yellow ;\n"
  "  font-weight: bold ;\n"
  "	text-align: center ;\n"
  "}\n"
  "\n"
  "table.result {\n"
  "	border: 1px solid #999999 ;\n"
  "}\n"
  "\n"
  "td.result_title {\n"
  "  font-weight: bold ;\n"
  "	text-align: center ;\n"
  "}\n"
  "\n"
  "tr.result_line {\n"
  "  background-color: #EEEEEE ;\n"
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

//---------------------------------------------------------------------------*

static void
createStyleFile (const C_String & inCurrentDirectory, 
                 const char * inStyleFileName) {
  C_String f = inCurrentDirectory ;
  if (f.length () > 0) {
    f << '/' ;
  }
  f << inStyleFileName ;
  if (! f.fileExists ()) {
    C_TextFileWrite styleFile (f COMMA_SAFARI_CREATOR COMMA_HERE) ;
    styleFile << k_default_style ;
  }
}

//---------------------------------------------------------------------------*

void
routine_analyzeGrammar (C_Lexique & inLexique,
                        GGS_lstring & inTargetFileName,
                        const GGS_lstring & inGrammarClass,
                        GGS_luint & inOriginalGrammarStartSymbol,
                        GGS_lstring & inLexiqueName,
                        const GGS_location & errorLocation,
                        GGS_M_terminalSymbolsMapForUse & ioTerminalSymbolMap,
                        GGS_L_syntaxComponents_ForGrammar & inSyntaxComponentsList,
                        GGS_M_nonTerminalSymbolsForGrammar & inNonterminalSymbolsMapForGrammar,
                        GGS_M_startSymbolEntityAndMetamodel & inStartSymbolEntityAndMetamodelMap
                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset classesNamesSet ;
  bool warningFlag = false ;

//--- Fix info about terminal and nonterminal symbols
  cInfo symbolsInfo ;
  symbolsInfo.mTerminalSymbolMap = ioTerminalSymbolMap ;
  symbolsInfo.mNonterminalSymbolsMapForGrammar = inNonterminalSymbolsMapForGrammar ;
  GGS_L_syntaxComponents_ForGrammar::element_type * currentSyntaxComponent = inSyntaxComponentsList.firstObject () ;
  while (currentSyntaxComponent != NULL) {
    macroValidPointer (currentSyntaxComponent) ;
    GGS_L_productionRules_ForGrammarComponent::element_type * currentRule = currentSyntaxComponent->mProductionRulesList.firstObject () ;
    while (currentRule != NULL) {
      macroValidPointer (currentRule) ;
      GGS_luint index ;
      GGS_M_nonterminalSymbolAltsForGrammar unused ;
      inNonterminalSymbolsMapForGrammar.methode_searchKeyGetIndex (inLexique, currentRule->mLeftNonterminalSymbol,
                                                index, unused COMMA_HERE) ;
      currentRule->mLeftNonterminalSymbolIndex.mValue = index.uintValue () ;
    //--- Fix, for each rule, left nonterminal symbol index
      fixInfoForInstructionsList (currentRule->mInstructionsList,
                                  symbolsInfo,
                                  inLexique) ;
    //--- Next rule
      currentRule = currentRule->nextObject () ;
    }
    currentSyntaxComponent = currentSyntaxComponent->nextObject () ;
  }

//--- Create GALGAS_OUTPUT directory
  const C_String GALGAS_OUTPUT_directory = inLexique.sourceFileName ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent ("GALGAS_OUTPUT") ;
  GALGAS_OUTPUT_directory.makeDirectoryIfDoesNotExists () ;

//--- Depending of grammar class, fix operations to perform
  typedef enum {kDefaultBehavior, kLL1grammar, kSLRgrammar, kLR1grammar, kGrammarClassError} enumGrammarClass ;
  enumGrammarClass grammarClass = kGrammarClassError ;
  if (inGrammarClass.length () == 0) { // Default behavior
    grammarClass = kDefaultBehavior ;
  }else if (inGrammarClass.compare ("LL1") == 0) { // Force LL (1) grammar
    grammarClass = kLL1grammar ;
  }else if (inGrammarClass.compare ("SLR") == 0) { // Force SLR grammar
    grammarClass = kSLRgrammar ;
  }else if (inGrammarClass.compare ("LR1") == 0) { // Force LR (1) grammar
    grammarClass = kLR1grammar ;
  }else{ // Unknown class... error !
    inGrammarClass.signalSemanticError (inLexique, "Unknown grammar class" COMMA_HERE) ;
  }

//--- Error flag
  typedef enum {kNoError, kError, kGrammarNotLL1, kGrammarNotSLR, kGrammarNotLR1} enumErrorKind ;
  enumErrorKind errorFlag = kNoError ;

//--- Output a HTML file ?
  bool optionExists = false ;
  const char * galgas_cli_component = "galgas_cli_options" ;
  const char * outputHTMLgrammarFile = "outputHTMLgrammarFile" ;
  const bool outputHTMLfile = inLexique.galgas_IO_Ptr ()->boolOptionValueFromKeys (galgas_cli_component,
                                                                       outputHTMLgrammarFile,
                                                                       & optionExists) ;
  if (! optionExists) {
    C_String warningMessage ;
    warningMessage << galgas_cli_component << ".@" << outputHTMLgrammarFile << " option does not exist." ;
    inLexique.onTheFlySemanticWarning (warningMessage COMMA_HERE) ;
  }
//--- Create "style.css" file if it does not exist
  if (outputHTMLfile) {
    createStyleFile (inLexique.sourceFileName ().stringByDeletingLastPathComponent (), "style.css") ;
  }

//--- If 'HTMLfileName' is the empty string, no file is created
  C_String directory = inLexique.sourceFileName ().stringByDeletingLastPathComponent () ;
  if (directory.length () > 0) {
    directory << '/' ;
  }
  C_String s ;
  s << "'" << inTargetFileName << "' grammar" ;
  const C_String HTMLfileName = outputHTMLfile
    ? (directory + inTargetFileName + ".html")
    : C_String () ;
//--- Create output HTML file (if file is the empty string, no file is created)
  C_HTML_FileWrite HTMLfile (HTMLfileName,
                              s,
                              "style.css"
                              COMMA_SAFARI_CREATOR
                              COMMA_HERE) ;

//--- HTML title
  HTMLfile.outputRawData ("<h1>") ;
  HTMLfile << s ;
  HTMLfile.outputRawData ("</h1>") ;

//--- Create links to page entries
  HTMLfile.outputRawData ("<p><a class=\"header_link\" href=\"#pure_bnf\">Pure BNF productions</a></p>"
                          "<p><a class=\"header_link\" href=\"#vocabulary\">Vocabulary</a></p>"
                          "<p><a class=\"header_link\" href=\"#identical_productions\">Identical productions</a></p>"
                          "<p><a class=\"header_link\" href=\"#useful_symbols\">Useful symbols</a></p>"
                          "<p><a class=\"header_link\" href=\"#empty_strings\">Empty string derivations</a></p>"
                          "<p><a class=\"header_link\" href=\"#first_sets\">First sets</a></p>"
                          "<p><a class=\"header_link\" href=\"#follow_by_empty\">Follow by empty</a></p>"
                          "<p><a class=\"header_link\" href=\"#grammar\">Grammar analysis</a></p>"
                          ) ;

//--- Fix parameters for BDD package
  C_BDD::setHashMapSize (17) ;
  C_BDD::setITEcacheSize (14) ;

//--- Print original grammar in BNF file
  if ((errorFlag == 0) && (grammarClass != kGrammarClassError)) {
    HTMLfile.writeCTitleComment ("Original grammar", "title") ;
    printOriginalGrammar (HTMLfile, inSyntaxComponentsList) ;
  }
//--- Building pure BNF productions ---------------------------------------------------------------------
  cVocabulary vocabulary ;
  cPureBNFproductionsList pureBNFproductions ;
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    co << "  Building pure BNF productions... " ;

  //--- Build vocabulary
    vocabulary.build (ioTerminalSymbolMap,
                      inNonterminalSymbolsMapForGrammar,
                      inOriginalGrammarStartSymbol.uintValue ()) ;
  
  //--- Build pure BNFproductions, add new non terminal symbols from 'repeat' and 'select' instructions
    buildPureBNFgrammar (inSyntaxComponentsList,
                         vocabulary,
                         pureBNFproductions) ;

  //--- Print in bnf file the pure BNF productions
    HTMLfile.outputRawData ("<p></p>") ;
    HTMLfile.writeCTitleComment ("  Pure BNF productions list", "title") ;
    printPureBNFgrammarInBNFfile (HTMLfile, vocabulary, pureBNFproductions) ;
    co << pureBNFproductions.length () << " productions.\n" ;
    co.flush () ;
  }

//--- Define vocabulary BDD sets descriptor
  const C_BDD_Descriptor vocabularyDescriptor ((uint32) (vocabulary.getAllSymbolsCount () - 1)) ;

//--- Search for identical productions -----------------------------------------------------------
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    co << "  Searching for identical productions... " ;
    const bool step2ok = searchForIdenticalProductions (pureBNFproductions, HTMLfile) ;
    if (! step2ok) {
      errorFlag = kError ;
    }
    co << (step2ok ? "none, ok.\n" : "error.\n") ;
  }
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
  //--- Enregistrer les caracteristiques de la grammaire
    HTMLfile << "For information :\n" ;
    HTMLfile.outputRawData ("<ul><li>") ;
    HTMLfile << ((sint32)(vocabulary.getTerminalSymbolsCount () - 1))
             << " terminal symbols, numbered from 0 to "
             << ((sint32)(vocabulary.getTerminalSymbolsCount () - 2)) << " ;" ;
    HTMLfile.outputRawData ("</li>\n<li>") ;
    HTMLfile << " the 'empty string' symbol '$$' is numbered "
             << vocabulary.getEmptyStringTerminalSymbolIndex () << " ;" ;
    HTMLfile.outputRawData ("</li>\n<li>") ;
    HTMLfile << vocabulary.getNonTerminalSymbolsCount ()
             << " nonterminal symbols in the pure BNF grammar, numbered from "
             << vocabulary.getTerminalSymbolsCount ()
             << " to "
             << ((sint32)(vocabulary.getAllSymbolsCount () - 1)) << " ;" ;
    HTMLfile.outputRawData ("</li>\n<li>") ;
    HTMLfile << "whole vocabulary : "
             << vocabulary.getAllSymbolsCount ()
             << " elements, "
             << vocabularyDescriptor.getBDDbitsSize ()
             << " bits for BDDs." ;
 //   HTMLfile.outputRawData ("</li>\n</ul></p>\n") ;
    HTMLfile.outputRawData ("</li>\n</ul>\n") ;
  }
//--- Getting useful symbols ---------------------------------------------------------------------
  C_BDD_Set1 usefulSymbols (vocabularyDescriptor) ;
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    useful_symbols_computations (pureBNFproductions,
                                 vocabulary,
                                 HTMLfile,
                                 usefulSymbols,
                                 warningFlag) ;
  }
//--- Calculer l'ensemble des non terminaux pouvant se deriver en vide --------------------------------
  TC_UniqueArray <bool> vocabularyDerivingToEmpty_Array ;
  C_BDD_Set1 vocabularyDerivingToEmpty_BDD (vocabularyDescriptor) ;
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    empty_strings_computations (pureBNFproductions,
                                HTMLfile,
                                vocabulary,
                                vocabularyDerivingToEmpty_Array,
                                vocabularyDerivingToEmpty_BDD) ;
  }
//--- Computing FIRST sets ---------------------------------------------------------------
  C_BDD_Set2 FIRSTsets (vocabularyDescriptor, vocabularyDescriptor) ;
  TC_UniqueArray <TC_UniqueArray <sint32> > FIRSTarray ;
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    bool ok = false ;
    FIRST_computations (pureBNFproductions,
                        HTMLfile,
                        vocabulary,
                        vocabularyDerivingToEmpty_Array,
                        vocabularyDerivingToEmpty_BDD,
                        usefulSymbols,
                        FIRSTsets,
                        FIRSTarray,
                        vocabularyDescriptor,
                        ok) ;
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
                                  nonTerminalSymbolsFollowedByEmpty) ;
  }
//--- Computing FOLLOW sets ---------------------------------------------------------------
  C_BDD_Set2 FOLLOWsets (vocabularyDescriptor, vocabularyDescriptor) ;
  TC_UniqueArray <TC_UniqueArray <sint32> > FOLLOWarray ;
  if ((errorFlag == kNoError) &&
      (grammarClass != kGrammarClassError) &&
      (grammarClass != kLR1grammar)) { // Follow are not used by LR(1) computations
    bool ok = false ;
    FOLLOW_computations (pureBNFproductions,
                         HTMLfile,
                         vocabulary,
                         vocabularyDerivingToEmpty_Array,
                         usefulSymbols,
                         FIRSTsets,
                         nonTerminalSymbolsFollowedByEmpty,
                         FOLLOWsets,
                         FOLLOWarray,
                         ok) ;
    if (! ok) {
      errorFlag = kError ;
    }
  }
//--- Checking LL (1) condition -------------------------------------------------------------
  HTMLfile.outputRawData ("<a name=\"grammar\"></a>") ;
  if ((errorFlag == kNoError)
   && ((grammarClass == kDefaultBehavior) || (grammarClass == kLL1grammar))) {
    bool ok = false ;
    LL1_computations (inLexique,
                      pureBNFproductions,
                      HTMLfile,
                      vocabulary,
                      vocabularyDerivingToEmpty_Array,
                      FIRSTsets,
                      FOLLOWsets,
                      inNonterminalSymbolsMapForGrammar,
                      inOriginalGrammarStartSymbol.uintValue (),
                      inTargetFileName,
                      inLexiqueName,
                      classesNamesSet,
                      ok,
                      inStartSymbolEntityAndMetamodelMap) ;
    if (! ok) {
      errorFlag = kGrammarNotLL1 ;
    }
  }
//--- SLR computations... -----------------------------------------------------------------
 if (((errorFlag == kGrammarNotLL1) && (grammarClass == kDefaultBehavior))
        ||
     ((errorFlag == kNoError) && (grammarClass == kSLRgrammar))) {
    bool ok = false ;
    SLR_computations (inLexique,
                      pureBNFproductions,
                      vocabulary,
                      HTMLfile,
                      FOLLOWarray,
                      inNonterminalSymbolsMapForGrammar,
                      inOriginalGrammarStartSymbol.uintValue (),
                      inTargetFileName,
                      inLexiqueName,
                      classesNamesSet,
                      ok,
                      inStartSymbolEntityAndMetamodelMap) ;
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
    LR1_computations (inLexique,
                      pureBNFproductions,
                      vocabulary,
                      HTMLfile,
                      FIRSTarray,
                      vocabularyDerivingToEmpty_Array,
                      inNonterminalSymbolsMapForGrammar,
                      inOriginalGrammarStartSymbol.uintValue (),
                      inTargetFileName,
                      inLexiqueName,
                      classesNamesSet,
                      ok,
                      inStartSymbolEntityAndMetamodelMap) ;
    if (ok) {
      errorFlag = kNoError ;
    }else{
      errorFlag = kGrammarNotLR1 ;
    }
  }

//--- Final step : Generation of C++ grammar files ---------------------------------------------------------------------
  if ((errorFlag == kNoError) && (grammarClass != kGrammarClassError)) {
    generateGrammarHeaderFile (inLexique,
                               inNonterminalSymbolsMapForGrammar,
                               inSyntaxComponentsList,
                               inLexiqueName,
                               inOriginalGrammarStartSymbol.uintValue (),
                               inTargetFileName,
                               vocabulary) ;
  }
//--- END -------------------------------------------------------------------------------------------------------
  C_BDD::markAndSweepUnusedNodes () ;
  if (errorFlag != kNoError) {
    C_String s ; s << "ENDING ON ERROR, STEP" << ((uint16) errorFlag) ;
    HTMLfile.writeCTitleComment (s, "title") ;
    C_String errorMessage  ;
    if (HTMLfileName.length () > 0) {
      errorMessage << "errors have been raised when analyzing the grammar: see file"
                      " '"
                   << HTMLfileName
                   << "'" ;
    }else{
      errorMessage << "errors have been raised when analyzing the grammar:"
                      " turn on '--output-html-grammar-file' option in order to get an output file for debugging" ;

    }
    errorLocation.signalSemanticError (inLexique, errorMessage COMMA_HERE) ;
  }else if (warningFlag) {
    C_String s ;
    s << "OK ; no error, but warning(s) step(s)" ;
    sint32 i = 1 ;
    while (warningFlag != 0) {
      if ((warningFlag & 1) != 0) {
        s << ' ' << i ;
      }
      warningFlag >>= 1 ;
      i ++ ;
    }
    HTMLfile.writeCTitleComment (s, "title") ;
    C_String warningMessage  ;
    warningMessage << "warnings have been raised when analyzing the grammar: " ;
    if (HTMLfileName.length () > 0) {
      warningMessage << "see file '" << HTMLfileName << "'" ;
    }else{
      warningMessage << "turn on '-H' command line option, and see generated '" << inTargetFileName << ".html' file" ;
    }
    errorLocation.signalSemanticWarning (inLexique, warningMessage COMMA_HERE) ;
  }else{
    HTMLfile.writeCTitleComment ("OK (no error, no warning)", "title") ;
  }
}

//---------------------------------------------------------------------------*
