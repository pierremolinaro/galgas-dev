//---------------------------------------------------------------------------*
//                                                                           *
//  Generate main program                                                    *
//                                                                           *
//  Copyright (C) 1999, ..., 2006 Pierre Molinaro.                           *
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

#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "time/C_DateTime.h"

//---------------------------------------------------------------------------*

#include "program_parser.h"

//---------------------------------------------------------------------------*

static void
generate_header_file_for_prgm (C_Lexique & inLexique,
                               const C_String & inProgramComponentName,
                               const GGS_L_grammarDescriptorForProgram & inGrammarDescriptorsList) {
//--- Write includes
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2 << "#ifndef INTERFACE_" << inProgramComponentName << "_DEFINED\n"
                    "#define INTERFACE_" << inProgramComponentName << "_DEFINED\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  GGS_L_grammarDescriptorForProgram::element_type * currentGrammar = inGrammarDescriptorsList.firstObject () ;
  while (currentGrammar != NULL) {
    macroValidPointer (currentGrammar) ;
    generatedZone2 << "#include \"" << currentGrammar->mGrammarName << ".h\"\n"
                      "#include \"" << currentGrammar->mLexiqueClassName << ".h\"\n" ;
    GGS_M_optionComponents::element_type * currentOptionComponent = currentGrammar->mOptionsComponentsMap.firstObject () ;
    while (currentOptionComponent != NULL) {
      macroValidPointer (currentOptionComponent) ;
      generatedZone2 << "#include \"" << currentOptionComponent->mKey << ".h\"\n" ;
      currentOptionComponent = currentOptionComponent->nextObject () ;
    }
    currentGrammar = currentGrammar->nextObject () ;
  }
  generatedZone2 << "#include \"galgas/C_galgas_terminal_io.h\"\n"
                    "#include \"galgas/C_galgas_CLI_Options.h\"\n"
                    "#include \"command_line_interface/C_CLI_OptionGroup.h\"\n"
                    "#include \"command_line_interface/C_builtin_CLI_Options.h\"\n" ;

  generatedZone2 << "\n" ;
  generatedZone2.writeCppHyphenLineComment () ;

//--- Generate class declaration for each grammar
  currentGrammar = inGrammarDescriptorsList.firstObject () ;
  sint32 grammarIndex = 0 ;
  C_String grammarSuffix ;
  while (currentGrammar != NULL) {
    C_String grammarClassName ;
    grammarClassName << "grammar_" << inProgramComponentName << currentGrammar->mGrammarPostfix << grammarSuffix ;
    C_String grammarZone2 ; grammarZone2.setCapacity (2000) ;
    macroValidPointer (currentGrammar) ;
    grammarZone2 << "class " << grammarClassName << " : public C_defaultUserSemanticActions {\n"
                    "  protected : " << currentGrammar->mLexiqueClassName << " * _mScannerPtr ;\n"
                    "  protected : C_galgas_terminal_io mTerminalIO ;\n"
                    "//--- Command line options\n" ;
    TC_UniqueArray <C_String> optionSet ;
    GGS_M_optionComponents::element_type * currentOptionComponent = currentGrammar->mOptionsComponentsMap.firstObject () ;
    while (currentOptionComponent != NULL) {
      macroValidPointer (currentOptionComponent) ;
      GGS_M_cli_options::element_type * currentOption = currentOptionComponent->mInfo.mBoolOptionsMap.firstObject () ;
      while (currentOption != NULL) {
        macroValidPointer (currentOption) ;
        const C_String entry = currentOptionComponent->mKey + "_" + currentOption->mKey ;
        if (! optionSet.containsObjectEqualTo (entry)) {
          optionSet.addObject (entry) ;
          grammarZone2 << "  protected : bool mOption_" << entry << " ;\n" ;
        }
        currentOption = currentOption->nextObject () ;
      }
      currentOptionComponent = currentOptionComponent->nextObject () ;
    }
    grammarZone2 << "\n//--- Constructor\n"
                    "  public : " << grammarClassName
                 << " (const C_galgas_io_parameters & inIOparameters COMMA_LOCATION_ARGS) ;\n\n"
                    "  public : void doCompilation (const C_String & inSourceFileName_,\n"
                    "                               const bool inVerboseOptionOn,\n"
                    "                               sint16 & returnCode) ;\n" ;
  //--- Engendrer la declaration des attributs de l'axiome
    GGS_L_signature::element_type * parametreCourant = currentGrammar->mStartSymbolSignature.firstObject () ;
    GGS_L_lstringList::element_type * nomCourant = currentGrammar->mStartSymbolAttributesList.firstObject () ;
    sint16 numero = 1 ;
    while ((parametreCourant != NULL) && (nomCourant != NULL)) {
      macroValidPointer (parametreCourant) ;
      macroValidPointer (nomCourant) ;
      grammarZone2 << "  protected : GGS_" << parametreCourant->mGalgasTypeName
                     << ' ' << nomCourant->mString << " ; // start symbol attribute #" << numero << "\n" ;
      parametreCourant = parametreCourant->nextObject () ;
      nomCourant = nomCourant->nextObject () ;
      numero ++ ;
    }
    C_String grammarZone3 ;
    grammarZone3 << "//--- Destructor\n"
                    "  public : virtual ~" << grammarClassName << " (void) ;\n"
                    "} ;\n\n" ;
    grammarZone3.writeCppHyphenLineComment () ;

    C_String userZone2 ; 
    userZone2 << "\n"
                 "//--- Prologue and epilogue\n"
                 "  public : inline void _prologue (void) {}\n"
                 "  public : inline void _epilogue (void) {}\n"
                 "\n" ;

    const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                    "verbose_output",
                                                                    false) ;
    inLexique.generateFile ("//",
                            grammarClassName + ".h",
                            "\n\n", // User Zone 1
                            grammarZone2,
                            userZone2, // User Zone 2
                            grammarZone3,
                            verboseOptionOn,
                            false) ;
    generatedZone2 << "#include \"" << grammarClassName << ".h\"\n\n" ;
    currentGrammar = currentGrammar->nextObject () ;
    grammarIndex ++ ;
    grammarSuffix = "" ;
    grammarSuffix << "_" << grammarIndex ;
  }
//--- Command line options for this program
  generatedZone2 << "class C_options_for_" << inProgramComponentName << " : public C_CLI_OptionGroup {\n"
                    "//--- Constructor\n"
                    "  public : C_options_for_" << inProgramComponentName << " (const bool inAcceptsDebugOption) ;\n"
                    "\n"
                    "//--- Included options\n"
                    "  private : C_builtin_CLI_Options mBuiltinOptions ;\n"
                    "  private : C_galgas_CLI_Options mGalgasOptions ;\n" ;
  TC_UniqueArray <C_String> optionSet ;
  currentGrammar = inGrammarDescriptorsList.firstObject () ;
  while (currentGrammar != NULL) {
    GGS_M_optionComponents::element_type * currentOptionComponent = currentGrammar->mOptionsComponentsMap.firstObject () ;
    while (currentOptionComponent != NULL) {
      macroValidPointer (currentOptionComponent) ;
      if (! optionSet.containsObjectEqualTo (currentOptionComponent->mKey)) {
        optionSet.addObject (currentOptionComponent->mKey) ;
        generatedZone2 << "  private : " << currentOptionComponent->mKey
                       << " mOptions_" << currentOptionComponent->mKey << "; \n" ;
      }
      currentOptionComponent = currentOptionComponent->nextObject () ;
    }
    currentGrammar = currentGrammar->nextObject () ;
  }
  generatedZone2 << "} ;\n\n" ;

  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "void " << inProgramComponentName << "_prologue (const C_options_for_" << inProgramComponentName << " & inOptions,\n"
                    "                                      const TC_UniqueArray <C_String> & inSourceFilesArray) ;\n"
                    "\n"
                    "void " << inProgramComponentName << "_epilogue (const C_options_for_" << inProgramComponentName << " & inOptions) ;\n"
                    "\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
//--- Fin du fichier d'en tete
  C_String generatedZone3 ; generatedZone3.setCapacity (100) ;
  generatedZone3.writeCppHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output",
                                                                  false) ;
  inLexique.generateFile ("//",
                          inProgramComponentName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3,
                          verboseOptionOn,
                          false) ;
}

//---------------------------------------------------------------------------*

static void
generate_cpp_file_for_prgm (C_Lexique & inLexique,
                            const uint32 inMaxErrorsCount,
                            const uint32 inMaxWarningsCount,
                            const C_String & inVersionString,
                            const C_String & inProgramComponentName,
                            const GGS_L_grammarDescriptorForProgram & inGrammarDescriptorsList) {
//--- Generate user includes
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if LIBPM_VERSION != THE_LIBPM_VERSION\n"
                    "  #error \"This file has been compiled with a version of GALGAS different than the version of libpm\"\n"
                    "#endif\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"utilities/F_DisplayException.h\"\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n"
                    "#include \"time/C_Timer.h\"\n"
                    "#include \"generic_arraies/TC_UniqueArray.h\"\n"
                    "#include \"command_line_interface/F_Analyze_CLI_Options.h\"\n"
                    "#include \"command_line_interface/mainForLIBPM.h\"\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n"
                    "\n"
                    "#ifdef TARGET_API_MAC_CARBON\n"
                    "  #include <SIOUX.H>\n"
                    "#endif\n"
                    "\n"
                    "#ifdef COMPILE_FOR_WIN32\n"
                    "  #ifdef __MWERKS__\n"
                    "    #include <WINSIOUX.H>\n"
                    "  #endif\n"
                    "#endif\n" ;
  GGS_L_grammarDescriptorForProgram::element_type * currentGrammar = inGrammarDescriptorsList.firstObject () ;
  while (currentGrammar != NULL) {
    macroValidPointer (currentGrammar) ;
    GGS_L_lstringList::element_type * currentConstraint =  currentGrammar->mConstraintsForMetamodel.firstObject () ; ;
    while (currentConstraint != NULL) {
      macroValidPointer (currentConstraint) ;
      generatedZone2 << "#include \"" << currentConstraint->mString << ".h\"\n" ;
      currentConstraint = currentConstraint->nextObject () ;
    }
    currentGrammar = currentGrammar->nextObject () ;
  }
  generatedZone2 << '\n' ;

  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"" << inProgramComponentName << ".h\"\n\n" ;

  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  static const char gGGSsourceFile [] = \"" << inLexique.sourceFileName ().lastPathComponent () << "\" ;\n"
                    "  #define SOURCE_FILE_AT_LINE(line) , gGGSsourceFile, line\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

//--------------------------------------- Get bool options count
  generatedZone2.writeCppTitleComment (C_String ("C_options_for_") + inProgramComponentName + "  CONSTRUCTOR") ;
  generatedZone2 << "C_options_for_" << inProgramComponentName  << "::\n"
                    "C_options_for_" << inProgramComponentName << " (const bool inAcceptsDebugOption)\n"
                    ":mBuiltinOptions (inAcceptsDebugOption) {\n"
                    "  add (& mBuiltinOptions) ;\n"
                    "  add (& mGalgasOptions) ;\n" ;
  TC_UniqueArray <C_String> optionSet ;
  currentGrammar = inGrammarDescriptorsList.firstObject () ;
  while (currentGrammar != NULL) {
    macroValidPointer (currentGrammar) ;
    GGS_M_optionComponents::element_type * currentOptionComponent = currentGrammar->mOptionsComponentsMap.firstObject () ;
    while (currentOptionComponent != NULL) {
      macroValidPointer (currentOptionComponent) ;
      if (! optionSet.containsObjectEqualTo (currentOptionComponent->mKey)) {
        optionSet.addObject (currentOptionComponent->mKey) ;
        generatedZone2 << "  add (& mOptions_" << currentOptionComponent->mKey << ") ;\n" ;
      }
      currentOptionComponent = currentOptionComponent->nextObject () ;
    }
    currentGrammar = currentGrammar->nextObject () ;
  }
  generatedZone2 << "}\n\n" ;

  currentGrammar = inGrammarDescriptorsList.firstObject () ;
  sint32 grammarIndex = 0 ;
  C_String grammarSuffix ;
  while (currentGrammar != NULL) {
    macroValidPointer (currentGrammar) ;
    C_String grammarClassName ;
    grammarClassName << "grammar_" << inProgramComponentName << currentGrammar->mGrammarPostfix << grammarSuffix ;
  //--- Constructor
    generatedZone2.writeCppTitleComment ("C O N S T R U C T O R") ;
    generatedZone2 << "\n" << grammarClassName
                   << "::\n" << grammarClassName
                   << " (const C_galgas_io_parameters & inIOparameters COMMA_LOCATION_ARGS) :\n"
                      "_mScannerPtr (NULL), mTerminalIO (inIOparameters) {\n"
                      "  macroMyNew (_mScannerPtr, " << currentGrammar->mLexiqueClassName << " (& mTerminalIO COMMA_THERE)) ;\n"
                      "  C_GGS_Object::attachPointer (_mScannerPtr COMMA_HERE) ;\n"
                      "}\n\n" ;
  //--- Destructor
    generatedZone2.writeCppTitleComment ("D E S T R U C T O R") ;
    generatedZone2 << "\n" << grammarClassName
                   << "::\n~" << grammarClassName << " (void) {\n"
                      "  macroDetachPointer (_mScannerPtr, " << currentGrammar->mLexiqueClassName << ") ;\n"
                      "}\n\n" ;
  //--- 'doCompilation' method
    generatedZone2.writeCppTitleComment ("D O    C O M P I L A T I O N") ;
    generatedZone2 << "void " << grammarClassName << "::\n"
                      "doCompilation (const C_String & inSourceFileName_,\n"
                      "               const bool inVerboseOptionOn,\n"
                      "               sint16 & returnCode) {\n" ;
    generatedZone2.incIndentation (+2) ;
    generatedZone2 << "C_Timer timer ;\n"
                      "try{\n" ;
    generatedZone2.incIndentation (+2) ;
    generatedZone2 << "/* if (mTerminalIO.versionModeOn ()) {\n"
                      "  co << \"Reading '\" << inSourceFileName_ << \"'\\n\" ;\n"
                      "} */\n"
                      "_mScannerPtr->resetAndLoadSourceFromFile (inSourceFileName_) ;\n"
                      "_beforeParsing () ;\n" ; //--- Give a chance to initialize program parameters
    GGS_L_lstringList::element_type * nomCourant = currentGrammar->mStartSymbolAttributesList.firstObject () ;
    GGS_L_signature::element_type * p = currentGrammar->mStartSymbolSignature.firstObject () ;
    while ((p != NULL) && (nomCourant != NULL)) {
      macroValidPointer (nomCourant) ;
      macroValidPointer (p) ;
      if (p->mFormalArgumentPassingMode.enumValue () != GGS_formalArgumentPassingMode::enum_argumentOut) {
        generatedZone2 << "if (! " << nomCourant->mString << "._isBuilt ()) {\n"
                          "  C_String message ;\n"
                          "  message << \"the '\"\n"
                          "             \"" << nomCourant->mString << "\"\n"
                          "             \"' program parameter has not been initialized\" ;\n"
                          "  throw C_Exception (message.cString (), 0, 0 COMMA_HERE) ;\n"
                          "}\n" ;
      }
      p = p->nextObject () ;
      nomCourant = nomCourant->nextObject () ;
    }              
  //--- Call parser
    generatedZone2 << currentGrammar->mGrammarName << " grammar_ ;\n" ;
    if (currentGrammar->mReturnedRootEntityName.length () > 0) {
      generatedZone2 << "GGM_" << currentGrammar->mReturnedRootEntityName 
                     << " * _metamodelRootObject = " ;
    }
    generatedZone2 << "grammar_.startParsing_ (*_mScannerPtr" ;
    nomCourant = currentGrammar->mStartSymbolAttributesList.firstObject () ;
    while (nomCourant != NULL) {
      macroValidPointer (nomCourant) ;
      generatedZone2 << ",\n                            "
                     << nomCourant->mString ;
      nomCourant = nomCourant->nextObject () ;
    }
    generatedZone2 << ") ;\n" ;
    if (currentGrammar->mReturnedRootEntityName.length () > 0) {
      GGS_L_lstringList::element_type * currentConstraint = currentGrammar->mConstraintsForMetamodel.firstObject () ;
      while (currentConstraint != NULL) {
        macroValidPointer (currentConstraint) ;
        generatedZone2 << "GGM__" << currentConstraint->mString << "_ConstraintOn_" << currentGrammar->mReturnedRootEntityName
                       << " * _rootObjectConstraint_" << currentConstraint->mString << " = NULL ;\n"
                       << "_addConstraintsTo_" << currentConstraint->mString
                       << " (*_mScannerPtr, _metamodelRootObject, _rootObjectConstraint_" << currentConstraint->mString << ") ;\n" ;
        currentConstraint = currentConstraint->nextObject () ;
      }
    }
 //--- Log objects
    GGS_loggableObjectList::element_type * currentLoggedObject = currentGrammar->mLoggableObjectList.firstObject () ;
    while (currentLoggedObject != NULL) {
      macroValidPointer (currentLoggedObject) ;
      currentLoggedObject->mLoggableObject (HERE)->generateLogInstructions (generatedZone2) ;
      currentLoggedObject = currentLoggedObject->nextObject () ;
    }
   //--- Delete objects
    if (currentGrammar->mReturnedRootEntityName.length () > 0) {
      GGS_L_lstringList::element_type * currentConstraint =  currentGrammar->mConstraintsForMetamodel.firstObject () ; ;
      while (currentConstraint != NULL) {
        macroValidPointer (currentConstraint) ;
        generatedZone2 << "macroMyDelete (_rootObjectConstraint_" << currentConstraint->mString
                       << ", GGM__" << currentConstraint->mString << "_ConstraintOn_" << currentGrammar->mReturnedRootEntityName
                       << ") ;\n" ;
        currentConstraint = currentConstraint->nextObject () ;
      }
      generatedZone2 << "macroMyDelete (_metamodelRootObject, GGM_" << currentGrammar->mReturnedRootEntityName << ") ;\n"
                        "C_BDD::markAndSweepUnusedNodes () ;\n" ;
    }
    generatedZone2 << "if (mTerminalIO.getErrorTotalCount () == 0) {\n"
                      "  _afterParsing (inVerboseOptionOn) ;\n"
                      "}\n"
                      "if (inVerboseOptionOn || ((mTerminalIO.getErrorTotalCount () + mTerminalIO.getWarningsCount ()) > 0)) {\n"
                      "  co << \"Analysis of '\" << _mScannerPtr->sourceFileName ().lastPathComponent () << \"' completed. \" ;\n"
                      "}\n"
                      "switch (mTerminalIO.getErrorTotalCount ()) {\n"
                      "case 0 :\n"
                      "  if (inVerboseOptionOn) {\n"
                      "    co << \"No error, \" ;\n"
                      "  }\n"
                      "  break ;\n"
                      "case 1 :\n"
                      "  co << \"1 error, \" ;\n"
                      "  returnCode = 1 ; // Error code\n"
                      "  break ;\n"
                      "default :\n"
                      "  co << mTerminalIO.getErrorTotalCount () << \" errors, \" ;\n"
                      "  returnCode = 1 ; // Error code\n"
                      "  break ;\n"
                      "}\n"
                      "switch (mTerminalIO.getWarningsCount ()) {\n"
                      "case 0 :\n"
                      "  if (inVerboseOptionOn) {\n"
                      "    co << \"no warning\" ;\n"
                      "  }\n"
                      "  break ;\n"
                      "case 1 :\n"
                      "  co << \"1 warning\" ;\n"
                      "  break ;\n"
                      "default :\n"
                      "  co << mTerminalIO.getWarningsCount () << \" warnings\" ;\n"
                      "  break ;\n"
                      "}\n"
                      "timer.stopTimer () ;\n"
                      "if (inVerboseOptionOn || ((mTerminalIO.getErrorTotalCount () + mTerminalIO.getWarningsCount ()) > 0)) {\n"
                      "  co << \" (\" << timer << \").\\n\" ;\n"
                      "}\n" ;
    generatedZone2.incIndentation (-2) ;
    generatedZone2 << "}catch (const C_TextReadException & inFileReadError) {\n"
                   "  co << \"Error: \" << inFileReadError.what () << \"\\n\" ; // Error when reading source file\n"
                   "  returnCode = 1 ;\n" ;
    generatedZone2 << "}\n" ;
    generatedZone2.incIndentation (-2) ;
    generatedZone2 << "}\n\n" ;
    generatedZone2.writeCppHyphenLineComment () ;
    currentGrammar = currentGrammar->nextObject () ;
    grammarIndex ++ ;
    grammarSuffix = "" ;
    grammarSuffix << "_" << grammarIndex ;
  }

//--- Generate 'mainForLIBPM' routine
  const bool generateDebug = inLexique.boolOptionValueFromKeys ("galgas_cli_options", "generate_debug", true) ;
  generatedZone2 << "int mainForLIBPM  (const int argc, const char * argv []) {\n"
                    "  bool verboseOptionOn = true ;\n"
                    "  sint16 returnCode = 0 ; // No error\n"
                    "  {\n"
                    "  //--- Input/output parameters\n"
                    "    C_options_for_" << inProgramComponentName << " options ("
                 << (generateDebug ? "true" : "false")
                 << ") ;\n"
                    "    C_galgas_io_parameters IOparameters  (& options) ;\n"
                    "    #ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "      IOparameters.mCompilerVersion = " ;
  generatedZone2.writeCstringConstant (inVersionString) ;
  generatedZone2 << " \" [debug]\" ;\n"
                    "    #else\n"
                    "      IOparameters.mCompilerVersion = " ;
  generatedZone2.writeCstringConstant (inVersionString) ;
  generatedZone2 << " ;\n"
                    "    #endif\n"
                    "    IOparameters.mMaxErrorsCount = "
                 << inMaxErrorsCount
                 << " ;\n"
                    "    IOparameters.mMaxWarningsCount = "
                 << inMaxWarningsCount
                 << " ;\n"
                 << "    const char * extensions [] = {" ;
  currentGrammar = inGrammarDescriptorsList.firstObject () ;
  while (currentGrammar != NULL) {
    macroValidPointer (currentGrammar) ;
    generatedZone2 << "\"" << currentGrammar->mSourceExtension << "\", " ;
    currentGrammar = currentGrammar->nextObject () ;
  }
  generatedZone2 << "NULL} ;\n"
                 << "    const char * helpMessages [] = {" ;
  currentGrammar = inGrammarDescriptorsList.firstObject () ;
  while (currentGrammar != NULL) {
    macroValidPointer (currentGrammar) ;
    generatedZone2.writeCstringConstant (currentGrammar->mHelpMessage) ;
    generatedZone2 << ", " ;
    currentGrammar = currentGrammar->nextObject () ;
  }
  generatedZone2 << "NULL} ;\n"
                    "    TC_UniqueArray <C_String> sourceFilesArray ;\n"
                    "  //--- Analyze Command Line Options\n"
                    "    F_Analyze_CLI_Options (argc, argv,\n"
                    "                           " ;
  generatedZone2.writeCstringConstant (inVersionString) ;
  currentGrammar = inGrammarDescriptorsList.firstObject () ;
  generatedZone2 << ",\n"
                    "                           options,\n"
                    "                           sourceFilesArray,\n"
                    "                           extensions,\n"
                    "                           helpMessages,\n"
                    "                           IOparameters.mCocoaOutput) ;\n"
                    "  //--- Ask Save On Close ? (Carbon and Windows SIOUX Only)\n"
                    "    #ifdef SIOUX_IS_IMPLEMENTED\n"
                    "      SIOUXSettings.asktosaveonclose = options.boolOptionValueFromKeys (\"generic_cli_options\",\n"
                    "                                                                        ASK_TO_SAVE_ON_CLOSE,\n"
                    "                                                                        false) ;\n"
                    "    #endif\n"
                    "  //--- Enable 64 bit alloc debug ? Only if compiled in 64 bit and in debug mode\n"
                    "    #ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "      #ifdef __LP64__\n"
                    "        if (options.boolOptionValueFromKeys (\"generic_cli_options\",\n"
                    "                                             \"enable_allocation_debugging\",\n"
                    "                                             false)) {\n"
                    "          enableAllocDebugFor64BitTool () ;\n"
                    "        }\n"
                    "      #endif\n"
                    "    #endif\n"
                    "    try{\n"
                    "      verboseOptionOn = options.boolOptionValueFromKeys (\"generic_galgas_cli_options\",\n"
                    "                                                         \"verbose_output\",\n"
                    "                                                         false) ;\n"
                    "      " << inProgramComponentName << "_prologue (options, sourceFilesArray) ;\n"
                    "      for (sint32 i=0 ; i<sourceFilesArray.count () ; i++) {\n"
                    "        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;\n"
                    "        sint16 r = 0 ;\n" ;
  currentGrammar = inGrammarDescriptorsList.firstObject () ;
  grammarIndex = 0 ;
  grammarSuffix = "" ;
  while (currentGrammar != NULL) {
    macroValidPointer (currentGrammar) ;
    C_String grammarClassName ;
    grammarClassName << "grammar_" << inProgramComponentName << currentGrammar->mGrammarPostfix << grammarSuffix ;
    generatedZone2 << "        " ;
    if (grammarIndex > 0) {
      generatedZone2 << "}else " ;
    }
    generatedZone2 << "if (fileExtension.compare (\"" << currentGrammar->mSourceExtension << "\") == 0) {\n"
                      "          " << grammarClassName << " * compiler = NULL ;\n"
                      "          macroMyNew (compiler, " << grammarClassName << " (IOparameters COMMA_HERE)) ;\n"
                      "          compiler->_prologue () ;\n"
                      "          compiler->doCompilation (sourceFilesArray (i COMMA_HERE), verboseOptionOn, r) ;\n"
                      "          compiler->_epilogue () ;\n"
                      "          macroMyDelete (compiler, " << grammarClassName << ") ;\n" ;
    currentGrammar = currentGrammar->nextObject () ;
    grammarIndex ++ ;
    grammarSuffix = "" ;
    grammarSuffix << "_" << grammarIndex ;
  }
  generatedZone2 << "        }else{\n"
                    "          printf (\"*** Error: unhandled extension for file '%s' ***\\n\", sourceFilesArray (i COMMA_HERE).cString ()) ;\n"
                    "          r = 1 ;\n"
                    "        }\n"
                    "        if (r != 0) {\n"
                    "          returnCode = r ;\n"
                    "        }\n"
                    "      }\n"
                    "      " << inProgramComponentName << "_epilogue (options) ;\n"
                    "    }catch (const M_STD_NAMESPACE exception & e) {\n"
                    "      F_default_display_exception (e) ;\n"
                    "      returnCode = 1 ; // Error code\n"
                    "    }catch (...) {\n"
                    "      F_default_display_unknown_exception () ;\n"
                    "      returnCode = 2 ; // Error code\n"
                    "    }\n"
                    "  }\n"
                    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "    C_GGS_Object::checkAllObjectsHaveBeenReleased () ;\n"
                    "  #endif\n"
                    "  if (verboseOptionOn) {\n"
                    "    #ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "      const uint64 maxUsedMemorySize = getMaxUsedMemorySize () ;\n"
                    "      const uint64 oneMegaByte = 1 << 20 ;\n"
                    "      const uint64 megaBytes = maxUsedMemorySize / oneMegaByte ;\n"
                    "      const uint64 fraction = ((maxUsedMemorySize % oneMegaByte) * 1000) / oneMegaByte ;\n"
                    "      co << getCreatedDynamicObjectsTotalCount ()\n"
                    "         << \" C++ objects have been created (\"\n"
                    "         << megaBytes << \".\" << widthWithZeroFill (3) << fraction\n"
                    "         << \" MB).\\n\" ;\n"
                    "      deactivateMemoryControl () ;\n"
                    "      if ((getAllocationBalance () != 0) && (returnCode == 0)) {\n"
                    "        display_pointers () ;\n"
                    "      }\n"
                    "    #endif\n"
                    "  }\n"
                    "  return returnCode ;\n"
                    "}\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
//--- User Zone 2 : prologue and epilogue
  C_String userZone2 ; userZone2.setCapacity (1000) ;
  userZone2 << "\n\n" ;
  userZone2.writeCppTitleComment ("P R O G R A M    P R O L O G U E") ;
  userZone2 << "void\n"
            << inProgramComponentName << "_prologue (const C_options_for_" << inProgramComponentName << " & /* inOptions */,\n"
               "                     const TC_UniqueArray <C_String> & /* inSourceFilesArray */) {\n"
               "// ADD YOUR CODE HERE\n"
               "}\n" ;
  userZone2.writeCppTitleComment ("P R O G R A M    E P I L O G U E") ;
  userZone2 << "void " << inProgramComponentName << "_epilogue (const C_options_for_" << inProgramComponentName << " & /* inOptions */) {\n"
               "// ADD YOUR CODE HERE\n"
               "}\n\n" ;
//--- Generate file
  const bool verboseOptionOn = inLexique.boolOptionValueFromKeys ("generic_galgas_cli_options",
                                                                  "verbose_output",
                                                                  false) ;
  inLexique.generateFile ("//",
                          inProgramComponentName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          userZone2, // User Zone 2
                          "\n",
                          verboseOptionOn,
                          false) ;
}

//---------------------------------------------------------------------------*

void
routine_generatePRGM (C_Lexique & inLexique,
                      GGS_lstring inProgramComponentName,
                      GGS_lstring inVersionString,
                      GGS_L_grammarDescriptorForProgram inGrammarDescriptorsList,
                      GGS_luint inMaxErrorsCount,
                      GGS_luint inMaxWarningsCount
                      COMMA_UNUSED_LOCATION_ARGS) {
  generate_header_file_for_prgm (inLexique,
                                 inProgramComponentName,
                                 inGrammarDescriptorsList) ; 
  generate_cpp_file_for_prgm (inLexique,
                              inMaxErrorsCount.uintValue (),
                              inMaxWarningsCount.uintValue (),
                              inVersionString,
                              inProgramComponentName,
                              inGrammarDescriptorsList) ;
}

//---------------------------------------------------------------------------*

void cPtr_loggableMetamodel::
generateLogInstructions (AC_OutputStream & inCppFile) const {
  inCppFile << "_logMetamodel_" << mMetamodelName << " (*_mScannerPtr, _metamodelRootObject SOURCE_FILE_AT_LINE ("
            << mMetamodelName.currentLineNumber ()
            << ")) ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_loggableAttribute::
generateLogInstructions (AC_OutputStream & inCppFile) const {
  inCppFile << "co << \"LOGGING " << mAttributeName << ": \"\n"
               "   << " << mAttributeName << ".reader_description (*_mScannerPtr SOURCE_FILE_AT_LINE ("
            << mAttributeName.currentLineNumber ()
            << "))\n"
               "  << \"\\n\" ;\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_loggableConstraint::
generateLogInstructions (AC_OutputStream & inCppFile) const {
  inCppFile << "_logConstraint_" << mConstraintName << "_on_"
            << mMetamodelName << " (*_mScannerPtr, _rootObjectConstraint_" << mConstraintName << " SOURCE_FILE_AT_LINE ("
            << mConstraintName.currentLineNumber ()
            << ")) ;\n" ;
}

//---------------------------------------------------------------------------*
