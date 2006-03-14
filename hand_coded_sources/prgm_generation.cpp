//---------------------------------------------------------------------------*
//                                                                           *
//  Generate main program                                                    *
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

#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "time/C_DateTime.h"

#include "program_parser.h"

//---------------------------------------------------------------------------*

static void
generate_header_file_for_prgm (C_Lexique & inLexique,
                               const C_String & inProgramComponentName,
                               const GGS_M_optionComponents & inOptionComponentsMap,
                               const GGS_L_grammarDescriptorForProgram & inGrammarDescriptorsList) {
//--- Write includes
  C_String generatedZone2 ;
  generatedZone2 << "#ifndef INTERFACE_" << inProgramComponentName << "_DEFINED\n"
           "#define INTERFACE_" << inProgramComponentName << "_DEFINED\n\n" ;
  GGS_L_grammarDescriptorForProgram::element_type * currentGrammar = inGrammarDescriptorsList.firstObject () ;
  while (currentGrammar != NULL) {
    macroValidPointer (currentGrammar) ;
    generatedZone2 << "#include \"" << currentGrammar->mGrammarName << ".h\"\n"
                      "#include \"" << currentGrammar->mLexiqueClassName << ".h\"\n" ;
    currentGrammar = currentGrammar->nextObject () ;
  }
  generatedZone2 << "#include \"galgas/C_galgas_terminal_io.h\"\n\n" ;
  generatedZone2.writeCHyphenLineComment () ;

//--- Generate class declaration for each grammar
  currentGrammar = inGrammarDescriptorsList.firstObject () ;
  while (currentGrammar != NULL) {
    C_String grammarZone2 ; grammarZone2.setAllocationExtra (2000) ;
    macroValidPointer (currentGrammar) ;
    grammarZone2 << "class " << inProgramComponentName << currentGrammar->mGrammarPostfix.string ()
                   << " : public C_defaultUserSemanticActions {\n"
                      "  protected : " << currentGrammar->mLexiqueClassName << " * mScannerPtr_ ;\n"
                      "  protected : C_galgas_terminal_io mTerminalIO ;\n"
                      "  protected : C_String mSourceFileExtension_ ;\n\n"
                      "//--- Command line options\n" ;
    GGS_M_optionComponents::element_type * currentOptionComponent = inOptionComponentsMap.firstObject () ;
    while (currentOptionComponent != NULL) {
      macroValidPointer (currentOptionComponent) ;
      GGS_M_cli_options::element_type * currentOption = currentOptionComponent->mInfo.mBoolOptionsMap.firstObject () ;
      while (currentOption != NULL) {
        macroValidPointer (currentOption) ;
        grammarZone2 << "  protected : bool mOption_" << currentOptionComponent->mKey
                       << '_' << currentOption->mKey << " ;\n" ;
        currentOption = currentOption->nextObject () ;
      }
      currentOptionComponent = currentOptionComponent->nextObject () ;
    }
    grammarZone2 << "\n//--- Constructor\n"
                    "  public : " << inProgramComponentName  << currentGrammar->mGrammarPostfix.string ()
                 << " (const C_galgas_io_parameters & inIOparameters COMMA_LOCATION_ARGS) ;\n\n"
                    "  public : void doCompilation (const C_String & inSourceFileName_,\n"
                    "                               sint16 & returnCode) ;\n" ;
  //--- Engendrer la declaration des attributs de l'axiome
    GGS_L_signature::element_type * parametreCourant = currentGrammar->mStartSymbolSignature.firstObject () ;
    GGS_typeListeAttributsAxiome::element_type * nomCourant = currentGrammar->mStartSymbolAttributesList.firstObject () ;
    sint16 numero = 1 ;
    while (parametreCourant != NULL && nomCourant != NULL) {
      macroValidPointer (parametreCourant) ;
      macroValidPointer (nomCourant) ;
      grammarZone2 << "  protected : GGS_" << parametreCourant->mGalgasTypeName
                     << ' ' << nomCourant->aAttributAxiome << " ; // start symbol attribute #" << numero << "\n" ;
      parametreCourant = parametreCourant->nextObject () ;
      nomCourant = nomCourant->nextObject () ;
      numero ++ ;
    }
    C_String grammarZone3 ;
    grammarZone3 << "//--- Destructor\n"
                    "  public : virtual ~" << inProgramComponentName  << currentGrammar->mGrammarPostfix.string () << " (void) ;\n"
                    "//--- Prologue and epilogue\n"
										"  public : void _prologue (void) ;\n"
										"  public : void _epilogue (void) ;\n"
		                "} ;\n\n" ;
    inLexique.generateFile ("//",
                            C_String ("grammar_") + inProgramComponentName + currentGrammar->mGrammarPostfix.string () + ".h",
                            "\n\n", // User Zone 1
                            grammarZone2,
                            "\n\n", // User Zone 2
                            grammarZone3) ;
    generatedZone2 << "#include \"grammar_" << inProgramComponentName << currentGrammar->mGrammarPostfix.string () << ".h\"\n\n" ;
    currentGrammar = currentGrammar->nextObject () ;
  }
//--- Fin du fichier d'en tete
  C_String generatedZone3 ; generatedZone3.setAllocationExtra (100) ;
  generatedZone3.writeCHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  inLexique.generateFile ("//",
                          inProgramComponentName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

static void
generate_cpp_file_for_prgm (C_Lexique & inLexique,
                            const GGS_M_optionComponents & inOptionComponentsMap,
                            const uint32 inMaxErrorsCount,
                            const uint32 inMaxWarningsCount,
                            const C_String & inVersionString,
                            const C_String & inSourceFileExtension,
                            const C_String & inProgramComponentName,
                            const GGS_L_grammarDescriptorForProgram & inGrammarDescriptorsList) {
//--- Generate user includes
  C_String generatedZone2 ; generatedZone2.setAllocationExtra (200000) ;
  generatedZone2 << "#include \"utilities/F_DisplayException.h\"\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n"
                    "#include \"time/C_Timer.h\"\n"
                    "#include \"generic_arraies/TC_UniqueArray.h\"\n"
                    "#include \"command_line_interface/F_Analyze_CLI_Options.h\"\n"
                    "#include \"command_line_interface/mainForLIBPM.h\"\n"
                    "#include \"command_line_interface/C_builtin_CLI_Options.h\"\n"
                    "#include \"command_line_interface/C_CLI_OptionGroup.h\"\n" ;
  GGS_M_optionComponents::element_type * currentOptionComponent = inOptionComponentsMap.firstObject () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone2 << "#include \"" << currentOptionComponent->mKey << ".h\"\n" ;
    currentOptionComponent = currentOptionComponent->nextObject () ;
  }
  generatedZone2 << '\n' ;
  generatedZone2.writeCHyphenLineComment () ;
  generatedZone2 << "#include \"" << inProgramComponentName << ".h\"\n\n" ;
  generatedZone2.writeCHyphenLineComment () ;

//--- Command line options for this program
  generatedZone2 << "class C_options_for_" << inProgramComponentName << " : public C_CLI_OptionGroup {\n"
                    "//--- Constructor\n"
                    "  public : C_options_for_" << inProgramComponentName << " (const bool inAcceptsDebugOption) ;\n"
                    "\n"
                    "//--- Included options\n"
                    "  private : C_builtin_CLI_Options mBuiltinOptions ;\n" ;
  currentOptionComponent = inOptionComponentsMap.firstObject () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone2 << "  private : " << currentOptionComponent->mKey
            << " mOptions_" << currentOptionComponent->mKey << "; \n" ;
    currentOptionComponent = currentOptionComponent->nextObject () ;
  }
  generatedZone2 << "} ;\n\n" ;

//--------------------------------------- Get bool options count
  generatedZone2.writeCTitleComment (C_String ("C_options_for_") + inProgramComponentName + "  CONSTRUCTOR") ;
  generatedZone2 << "C_options_for_" << inProgramComponentName  << "::\n"
             "C_options_for_" << inProgramComponentName << " (const bool inAcceptsDebugOption)\n"
             ":mBuiltinOptions (inAcceptsDebugOption) {\n"
             "  add (& mBuiltinOptions) ;\n" ;
  currentOptionComponent = inOptionComponentsMap.firstObject () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone2 << "  add (& mOptions_" << currentOptionComponent->mKey << ") ;\n" ;
    currentOptionComponent = currentOptionComponent->nextObject () ;
  }
  generatedZone2 << "}\n\n" ;

  GGS_L_grammarDescriptorForProgram::element_type * currentGrammar = inGrammarDescriptorsList.firstObject () ;
  while (currentGrammar != NULL) {
    macroValidPointer (currentGrammar) ;
  //--- Constructor
    generatedZone2.writeCTitleComment ("C O N S T R U C T O R") ;
    generatedZone2 << "\n" << inProgramComponentName << currentGrammar->mGrammarPostfix.string ()
                   << "::\n" << inProgramComponentName << currentGrammar->mGrammarPostfix.string ()
                   << " (const C_galgas_io_parameters & inIOparameters COMMA_LOCATION_ARGS) :\n"
                      "mScannerPtr_ (NULL), mTerminalIO (inIOparameters) {\n"
                      "  mSourceFileExtension_ = \""
                   << inSourceFileExtension << "\" ;\n"
                      "  macroMyNew (mScannerPtr_, " << currentGrammar->mLexiqueClassName << " (& mTerminalIO COMMA_THERE)) ;\n"
                      "}\n\n" ;
  //--- Destructor
    generatedZone2.writeCTitleComment ("D E S T R U C T O R") ;
    generatedZone2 << "\n" << inProgramComponentName << currentGrammar->mGrammarPostfix.string ()
                   << "::\n~" << inProgramComponentName << currentGrammar->mGrammarPostfix.string () << " (void) {\n"
                      "  macroRelease (mScannerPtr_, NULL) ;\n"
                      "}\n\n" ;
  //--- 'doCompilation' method
    generatedZone2.writeCTitleComment ("D O    C O M P I L A T I O N") ;
    generatedZone2 << "void " << inProgramComponentName << currentGrammar->mGrammarPostfix.string () << "::\n"
               "doCompilation (const C_String & inSourceFileName_,\n"
               "               sint16 & returnCode) {\n" ;
    generatedZone2.incIndentation (+2) ;
    generatedZone2 << "C_Timer timer ;\n"
             "try{\n" ;
    generatedZone2.incIndentation (+2) ;
    generatedZone2 << "if (mTerminalIO.versionModeOn ()) {\n"
                      "  ::printf (\"Reading '%s'\\n\", inSourceFileName_.cString ()) ;\n"
                      "}\n"
                      "mScannerPtr_->resetAndLoadSourceFromFile (inSourceFileName_) ;\n"
                      "_beforeParsing () ;\n" ; //--- Give a chance to initialize program parameters
    GGS_typeListeAttributsAxiome::element_type * nomCourant = currentGrammar->mStartSymbolAttributesList.firstObject () ;
    GGS_L_signature::element_type * p = currentGrammar->mStartSymbolSignature.firstObject () ;
    while ((p != NULL) && (nomCourant != NULL)) {
      macroValidPointer (nomCourant) ;
      macroValidPointer (p) ;
      if (p->mFormalArgumentPassingMode.enumValue () != GGS_formalArgumentPassingMode::enum_argumentOut) {
        generatedZone2 << "if (! " << nomCourant->aAttributAxiome << ".isBuilt ()) {\n"
                          "  C_String message ;\n"
                          "  message << \"the '\"\n"
                          "             \"" << nomCourant->aAttributAxiome << "\"\n"
                          "             \"' program parameter has not been initialized\" ;\n"
                          "  throw C_Exception (message.cString (), 0, 0 COMMA_HERE) ;\n"
                          "}\n" ;
      }
      p = p->nextObject () ;
      nomCourant = nomCourant->nextObject () ;
    }              
  //--- Call parser
    generatedZone2 << currentGrammar->mGrammarName << " grammar_ ;\n"   
                      "grammar_.startParsing_ (*mScannerPtr_" ;
    nomCourant = currentGrammar->mStartSymbolAttributesList.firstObject () ;
    while (nomCourant != NULL) {
      macroValidPointer (nomCourant) ;
      generatedZone2 << ",\n                            "
                     << nomCourant->aAttributAxiome ;
      nomCourant = nomCourant->nextObject () ;
    }
    generatedZone2 << ") ;\n"
                   "if (mTerminalIO.getErrorTotalCount () == 0) {\n"
                   "  _afterParsing () ;\n"
                   "}\n"
                   "::printf (\"Analysis of '%s' completed. \","
                   " mScannerPtr_->sourceFileName ().lastPathComponent ().cString ()) ;\n" ;
    currentGrammar = currentGrammar->nextObject () ;
  }
  generatedZone2 <<  "switch (mTerminalIO.getErrorTotalCount ()) {\n"
                 "case 0 :\n"
                 "  ::printf (\"No error, \") ;\n"
                 "  break ;\n"
                 "case 1 :\n"
                 "  ::printf (\"1 error, \") ;\n"
                 "  returnCode = 1 ; // Error code\n"
                 "  break ;\n"
                 "default :\n"
                 "  ::printf (\"%ld errors, \", mTerminalIO.getErrorTotalCount ()) ;\n"
                 "  returnCode = 1 ; // Error code\n"
                 "  break ;\n"
                 "}\n"
                 "switch (mTerminalIO.getWarningsCount ()) {\n"
                 "case 0 :\n"
                 "  ::printf (\"no warning\") ;\n"
                 "  break ;\n"
                 "case 1 :\n"
                 "  ::printf (\"1 warning\") ;\n"
                 "  break ;\n"
                 "default :\n"
                 "  ::printf (\"%ld warnings\", mTerminalIO.getWarningsCount ()) ;\n"
                 "  break ;\n"
                "}\n"
                "timer.stopTimer () ;\n"
                "  co << \" (\" << timer << \").\\n\" ;\n" ;
  generatedZone2.incIndentation (-2) ;
  generatedZone2 << "}catch (const C_TextReadException & inFileReadError) {\n"
                 "  ::printf (\"Error : %s\\n\", inFileReadError.what ()) ; // Error when reading source file\n"
                 "  returnCode = 1 ;\n" ;
  generatedZone2 << "}\n" ;
  generatedZone2.incIndentation (-2) ;
  generatedZone2 << "}\n\n" ;
  generatedZone2.writeCHyphenLineComment () ;

//--- Generate 'mainForLIBPM' routine
  const bool generateDebug = inLexique.boolOptionValueFromKeys ("galgas_cli_options", "generate_debug", true) ;
  generatedZone2 << "int mainForLIBPM  (const int argc, const char * argv []) {\n"
             "  sint16 returnCode = 0 ; // No error\n"
             "//--- Input/output parameters\n"
             "  C_options_for_" << inProgramComponentName << " options ("
          << (generateDebug ? "true" : "false")
          << ") ;\n"
             "  C_galgas_io_parameters IOparameters  (& options) ;\n"
             "  IOparameters.mCompilerVersion = " ;
  generatedZone2.writeCstringConstant (inVersionString) ;
  generatedZone2 << " ;\n"
             "  IOparameters.mMaxErrorsCount = "
          << inMaxErrorsCount
          << " ;\n"
             "  IOparameters.mMaxWarningsCount = "
          << inMaxWarningsCount
          << " ;\n"
             "  TC_UniqueArray <C_String> sourceFilesArray ;\n"
             "  #ifdef TARGET_API_MAC_CARBON\n"
             "    printf (\"%s\\n\", IOparameters.mCompilerVersion.cString ()) ;\n"
             "  #endif\n"
             "  #ifdef COMPILE_FOR_WIN32\n"
             "    printf (\"%s\\n\", IOparameters.mCompilerVersion.cString ()) ;\n"
             "  #endif\n"
             "  F_Analyze_CLI_Options (argc, argv,\n"
             "                               " ;
  generatedZone2.writeCstringConstant (inVersionString) ;
  currentGrammar = inGrammarDescriptorsList.firstObject () ;
  generatedZone2 << ",\n"
             "                               options,\n"
             "                               sourceFilesArray,\n"
             "                               \""
          << inSourceFileExtension <<
             "\",\n"
             "                               IOparameters.mCocoaOutput) ;\n"
             "  try{\n"
             "    " << inProgramComponentName << currentGrammar->mGrammarPostfix.string ()
          << " * compiler = NULL ;\n"
             "    macroMyNew (compiler, " << inProgramComponentName << currentGrammar->mGrammarPostfix.string ()
          << " (IOparameters COMMA_HERE)) ;\n"
					   "	  compiler->_prologue () ;\n"
             "    for (sint32 i=0 ; (i<sourceFilesArray.count ()) && (returnCode == 0) ; i++) {\n"
             "      compiler->doCompilation (sourceFilesArray (i COMMA_HERE), returnCode) ;\n"
             "    }\n"
					   "	  compiler->_epilogue () ;\n"
             "    macroMyDelete (compiler, " << inProgramComponentName << currentGrammar->mGrammarPostfix.string () << ") ;\n"
             "	  #ifndef DO_NOT_GENERATE_MEMORY_CHECK_CODE\n"
             "      C_GGS_object::checkAllObjectsHaveBeenReleased () ;\n"
             "    #endif\n"
             "  }catch (const M_STD_NAMESPACE exception & e) {\n"
             "    F_default_display_exception (e) ;\n"
             "    returnCode = 1 ; // Error code\n"
             "  }catch (...) {\n"
             "    F_default_display_unknown_exception () ;\n"
             "    returnCode = 2 ; // Error code\n"
             "  }\n"
             "  return returnCode ;\n"
             "}\n\n" ;
  generatedZone2.writeCHyphenLineComment () ;
//--- User Zone 2 : prologue and epilogue
  C_String userZone2 ; 
	userZone2 << "\n\n" ;
	userZone2.writeCTitleComment ("P R O L O G U E") ;
	userZone2 << "void " << inProgramComponentName << currentGrammar->mGrammarPostfix.string () << "::\n"
	             "_prologue (void) {\n"
							 "//--- ADD YOUR CODE HERE\n"
							 "}\n\n" ;
	userZone2.writeCTitleComment ("E P I L O G U E") ;
	userZone2 << "void " << inProgramComponentName << currentGrammar->mGrammarPostfix.string () << "::\n"
	             "_epilogue (void) {\n"
							 "//--- ADD YOUR CODE HERE\n"
							 "}\n\n" ;
//--- Generate file
  inLexique.generateFile ("//",
                          inProgramComponentName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          userZone2, // User Zone 2
                          "\n") ;
}

//---------------------------------------------------------------------------*

void
routine_generatePRGM (C_Lexique & inLexique,
                      GGS_lstring & inProgramComponentName,
                      GGS_lstring & inSourceFileExtension,
                      GGS_lstring & inVersionString,
                      GGS_L_grammarDescriptorForProgram & inGrammarDescriptorsList,
                      GGS_luint & inMaxErrorsCount,
                      GGS_luint & inMaxWarningsCount,
                      GGS_M_optionComponents & inOptionComponentsMap) {
  generate_header_file_for_prgm (inLexique,
                                 inProgramComponentName,
                                 inOptionComponentsMap,
                                 inGrammarDescriptorsList) ; 
  generate_cpp_file_for_prgm (inLexique,
                              inOptionComponentsMap,
                              inMaxErrorsCount.uintValue (),
                              inMaxWarningsCount.uintValue (),
                              inVersionString,
                              inSourceFileExtension,
                              inProgramComponentName,
                              inGrammarDescriptorsList) ;
}

//---------------------------------------------------------------------------*
