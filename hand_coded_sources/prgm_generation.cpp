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

#include "files/C_text_file_write.h"
#include "time/C_datetime.h"

#include "program_parser.h"

//---------------------------------------------------------------------------*

static void
generate_header_file_for_prgm (C_lexique & inLexique,
                               const GGS_M_optionComponents & inOptionComponentsMap,
                               const C_string & inLexiqueClassName,
                               const GGS_typeAbstraitInclusionM & inInclusionM,
                               const GGS_typeListeAttributsAxiome & inStartSymbolAttributesList,
                               const GGS_L_signature_ForGrammarComponent & inStartSymbolParametersList,
                               const C_string & inProgramComponentName,
                               const C_string & inParserComponentName) {
//--- Write includes
  C_string generatedZone2 ;
  generatedZone2 << "#ifndef INTERFACE_" << inProgramComponentName << "_DEFINED\n"
           "#define INTERFACE_" << inProgramComponentName << "_DEFINED\n\n"
           "#include \"" << inParserComponentName
        << ".h\"\n"
        << "#include \"" << inLexiqueClassName
        << ".h\"\n"
           "#include \"galgas/C_galgas_terminal_io.h\"\n" ;
//--- Inclusion des fichiers cites dans include "..." import ... ;
  inInclusionM()->engendrerDirectivesInclude (generatedZone2) ;
  generatedZone2 << '\n' ; 
  generatedZone2.writeHyphenLineComment () ;

//--- Engendrer la dŽclaration de la classe
  C_string generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
  generatedZone3 << "class " << inProgramComponentName
        << " : public C_defaultUserSemanticActions {\n"
           "  protected : " << inLexiqueClassName << " mScanner_ ;\n"
           "  protected : C_galgas_terminal_io mTerminalIO ;\n"
           "  protected : C_string mSourceFileExtension_ ;\n\n"
           "//--- Command line options\n" ;
  GGS_M_optionComponents::element_type * currentOptionComponent = inOptionComponentsMap.getFirstItem () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    GGS_M_cli_options::element_type * currentOption = currentOptionComponent->mInfo.mBoolOptionsMap.getFirstItem () ;
    while (currentOption != NULL) {
      macroValidPointer (currentOption) ;
      generatedZone3 << "  protected : bool mOption_" << currentOptionComponent->mKey
                                             << '_' << currentOption->mKey << " ;\n" ;
      currentOption = currentOption->getNextItem () ;
    }
    currentOptionComponent = currentOptionComponent->getNextItem () ;
  }
  generatedZone3 << "\n//--- Constructor\n"
           "  public : " << inProgramComponentName
        << " (const C_galgas_io_parameters & inIOparameters) ;\n\n"
           "  public : void doCompilation (const C_string & inSourceFileName_,\n"
           "                               sint16 & returnCode) ;\n" ;

//--- Engendrer la declaration des attributs de l'axiome
  GGS_L_signature_ForGrammarComponent::element_type * parametreCourant = inStartSymbolParametersList.getFirstItem () ;
  GGS_typeListeAttributsAxiome::element_type * nomCourant = inStartSymbolAttributesList.getFirstItem () ;
  sint16 numero = 1 ;
  while (parametreCourant != NULL && nomCourant != NULL) {
    macroValidPointer (parametreCourant) ;
    macroValidPointer (nomCourant) ;
    generatedZone3 << "  protected : GGS_" << parametreCourant->mGalgasTypeName
          << ' ' << nomCourant->aAttributAxiome << " ; // start symbol attribute #" << numero << "\n" ;
    parametreCourant = parametreCourant->getNextItem () ;
    nomCourant = nomCourant->getNextItem () ;
    numero ++ ;
  }

//--- Inclusion fichier '.main'
  inInclusionM()->engendrerInclusionFichierM (generatedZone3, inProgramComponentName) ;
  
  generatedZone3 << "} ;\n\n" ;

//--- Fin du fichier d'en tte
  generatedZone3.writeHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  inLexique.generateFile (inProgramComponentName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

void cPtr_typePasInclusionM::
engendrerInclusionFichierM (AC_output_stream & /* inHfile */,
                            const C_string & /* nomPRGMprincipal */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeInclusionM::
engendrerInclusionFichierM (AC_output_stream & inHfile,
                            const C_string & nomPRGMprincipal) {
  inHfile << "  #include \"" ;
  const sint32 lg = attributNomFichier.getLength () ;
  if (lg == 0) {
    inHfile << nomPRGMprincipal ;
  }else{
    inHfile << attributNomFichier ;
  }
  inHfile << ".main\" // Generated by 'include' instruction\n" ;
}

//---------------------------------------------------------------------------*

void cPtr_typePasInclusionM::
engendrerDirectivesInclude (AC_output_stream & /* inHfile */) {
}

//---------------------------------------------------------------------------*

void cPtr_typeInclusionM::
engendrerDirectivesInclude (AC_output_stream & inHfile) {
  GGS_typeListeChaines::element_type * inclureCourant = aListeInclure.getFirstItem () ;
  while (inclureCourant != NULL) {
    macroValidPointer (inclureCourant) ;
    inHfile << "#include \"" << inclureCourant->attributChaine
             << ".h\" // EngendrŽ par l'instruction include\n" ;
    inclureCourant = inclureCourant->getNextItem () ;
  }
}

//---------------------------------------------------------------------------*
//---------------------------------------------------------------------------*

static void
generate_cpp_file_for_prgm (C_lexique & inLexique,
                            const GGS_M_optionComponents & inOptionComponentsMap,
                            const uint32 inMaxErrorsCount,
                            const uint32 inMaxWarningsCount,
                            const GGS_typeListeAttributsAxiome & inStartSymbolAttributesList,
                            const GGS_L_signature_ForGrammarComponent & inStartSymbolParametersList,
                            const C_string & inVersionString,
                            const C_string & inSourceFileExtension,
                            const C_string & inProgramComponentName,
                            const C_string & inParserComponentName) {
//--- Generate user includes
  C_string generatedZone2 ;
  generatedZone2 << "#include \"utilities/F_display_exception.h\"\n"
             "#include \"time/C_timer.h\"\n"
             "#include \"generic_arraies/TC_unique_grow_array.h\"\n"
             "#include \"command_line_interface/F_analyze_command_line_opts.h\"\n"
             "#include \"command_line_interface/myMain.h\"\n"
             "#include \"command_line_interface/C_generic_cli_options.h\"\n"
             "#include \"command_line_interface/C_cli_options_group.h\"\n" ;
  GGS_M_optionComponents::element_type * currentOptionComponent = inOptionComponentsMap.getFirstItem () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone2 << "#include \"" << currentOptionComponent->mKey << ".h\"\n" ;
    currentOptionComponent = currentOptionComponent->getNextItem () ;
  }
  generatedZone2 << '\n' ;
  generatedZone2.writeHyphenLineComment () ;
  generatedZone2 << "#include \"" << inProgramComponentName << ".h\"\n\n" ;
  generatedZone2.writeHyphenLineComment () ;

//--- Command line options for this program
  C_string generatedZone3 ; generatedZone3.setAllocationExtra (2000000) ;
  generatedZone3 << "class C_options_for_" << inProgramComponentName << " : public C_cli_options_group {\n"
             "//--- Constructor\n"
             "  public : C_options_for_" << inProgramComponentName << " (const bool inAcceptsDebugOption) ;\n"
             "\n"
             "//--- Included options\n"
             "  private : C_generic_cli_options mGenericOptions ;\n" ;
  currentOptionComponent = inOptionComponentsMap.getFirstItem () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone3 << "  private : " << currentOptionComponent->mKey
            << " mOptions_" << currentOptionComponent->mKey << "; \n" ;
    currentOptionComponent = currentOptionComponent->getNextItem () ;
  }
  generatedZone3 << "} ;\n\n" ;

//--------------------------------------- Get bool options count
  generatedZone3.writeTitleComment (C_string ("C_options_for_") + inProgramComponentName + "  CONSTRUCTOR") ;
  generatedZone3 << "C_options_for_" << inProgramComponentName  << "::\n"
             "C_options_for_" << inProgramComponentName << " (const bool inAcceptsDebugOption)\n"
             ":mGenericOptions (inAcceptsDebugOption) {\n"
             "  add (& mGenericOptions) ;\n" ;
  currentOptionComponent = inOptionComponentsMap.getFirstItem () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone3 << "  add (& mOptions_" << currentOptionComponent->mKey << ") ;\n" ;
    currentOptionComponent = currentOptionComponent->getNextItem () ;
  }
  generatedZone3 << "}\n\n" ;

//--- Constructor
  generatedZone3.writeTitleComment ("C O N S T R U C T O R") ;
  generatedZone3 << "\n" << inProgramComponentName
          << "::\n" << inProgramComponentName
          << " (const C_galgas_io_parameters & inIOparameters) :\n"
             "mScanner_ (& mTerminalIO), mTerminalIO (inIOparameters) {\n"
             "  mSourceFileExtension_ = \""
          << inSourceFileExtension << "\" ;\n"
            "}\n\n" ;
  generatedZone3.writeHyphenLineComment () ;
//--- MŽthode doCompilation
  generatedZone3 << "void " << inProgramComponentName << "\n"
             "::doCompilation (const C_string & inSourceFileName_,\n"
             "                 sint16 & returnCode) {\n" ;
  generatedZone3.incIndentation (+2) ;
  generatedZone3 << "C_timer timer ;\n"
             "try{\n" ;
  generatedZone3.incIndentation (+2) ;
  generatedZone3 << "if (mTerminalIO.versionModeOn ()) {\n"
             "  ::printf (\"Reading '%s'\\n\", inSourceFileName_.getStringPtr ()) ;\n"
             "}\n"
             "mScanner_.resetAndLoadSourceFromFile (inSourceFileName_) ;\n"
//--- Give a chance to initialize program parameters
          << "beforeParsing_ () ;\n" ;
//--- Check that input parameters have been initialized  
  GGS_typeListeAttributsAxiome::element_type * nomCourant = inStartSymbolAttributesList.getFirstItem () ;
  GGS_L_signature_ForGrammarComponent::element_type * p = inStartSymbolParametersList.getFirstItem () ;
  while ((p != NULL) && (nomCourant != NULL)) {
    macroValidPointer (nomCourant) ;
    macroValidPointer (p) ;
    if (p->mFormalArgumentPassingMode.getValue () != GGS_formalArgumentPassingMode::enum_argumentOut) {
      generatedZone3 << "if (! " << nomCourant->aAttributAxiome << ".isBuilt ()) {\n"
                     "  C_string message ;\n"
                     "  message << \"the '\"\n"
                     "             \"" << nomCourant->aAttributAxiome << "\"\n"
                     "             \"' program parameter has not been initialized\" ;\n"
                     "  throw C_exception (message.getStringPtr (), 0, 0 COMMA_HERE) ;\n"
                     "}\n" ;
    }
    p = p->getNextItem () ;
    nomCourant = nomCourant->getNextItem () ;
  }              
//--- Call parser
  generatedZone3 << inParserComponentName << " grammaire_ ;\n"   
                 "grammaire_.startParsing_ (mScanner_" ;
  nomCourant = inStartSymbolAttributesList.getFirstItem () ;
  while (nomCourant != NULL) {
    macroValidPointer (nomCourant) ;
    generatedZone3 << ",\n                            "
                << nomCourant->aAttributAxiome ;
    nomCourant = nomCourant->getNextItem () ;
  }
  generatedZone3 << ") ;\n"
                 "if (mTerminalIO.getErrorTotalCount () == 0) {\n"
//--- Aprs analyse
                 "  afterParsing_ () ;\n"
                 "}\n"
                 "::printf (\"Analysis of '%s' completed. \","
                 " mScanner_.getSourceFile ().getFileNameWithSuffix ().getStringPtr ()) ;\n"
                 "switch (mTerminalIO.getErrorTotalCount ()) {\n"
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
  generatedZone3.incIndentation (-2) ;
  generatedZone3 << "}catch (const C_TextReadException & inFileReadError) {\n"
                 "  ::printf (\"Error : %s\\n\", inFileReadError.what ()) ; // Error when reading source file\n"
                 "  returnCode = 1 ;\n" ;
  generatedZone3 << "}\n" ;
  generatedZone3.incIndentation (-2) ;
  generatedZone3 << "}\n\n" ;
  generatedZone3.writeHyphenLineComment () ;

//--- Generate 'myMain' routine
  const bool generateDebug = inLexique.getBoolOptionValueFromKeys ("galgas_cli_options", "generate_debug", true) ;
  generatedZone3 << "int myMain  (const int argc, const char * argv []) {\n"
             "  sint16 returnCode = 0 ; // No error\n"
             "//--- Input/output parameters\n"
             "  C_options_for_" << inProgramComponentName << " options ("
          << (generateDebug ? "true" : "false")
          << ") ;\n"
             "  C_galgas_io_parameters IOparameters  (& options) ;\n"
             "  IOparameters.mCompilerVersion = " ;
  generatedZone3.writeCstringConstant (inVersionString) ;
  generatedZone3 << " ;\n"
             "  IOparameters.mMaxErrorsCount = "
          << inMaxErrorsCount
          << " ;\n"
             "  IOparameters.mMaxWarningsCount = "
          <<inMaxWarningsCount
          << " ;\n"
             "  TC_unique_grow_array <C_string> sourceFilesArray ;\n"
             "  #ifdef TARGET_API_MAC_CARBON\n"
             "    printf (\"%s\\n\", IOparameters.mCompilerVersion.getStringPtr ()) ;\n"
             "  #endif\n"
             "  #ifdef COMPILE_FOR_WIN32\n"
             "    printf (\"%s\\n\", IOparameters.mCompilerVersion.getStringPtr ()) ;\n"
             "  #endif\n"
             "  F_analyze_command_line_opts (argc, argv,\n"
             "                               " ;
  generatedZone3.writeCstringConstant (inVersionString) ;
  generatedZone3 << ",\n"
             "                               options,\n"
             "                               sourceFilesArray,\n"
             "                               \""
          << inSourceFileExtension <<
             "\",\n"
             "                               IOparameters.mCocoaOutput) ;\n"
             "  " << inProgramComponentName
          << " compiler (IOparameters) ;\n"
             "  try{\n"
             "    for (sint32 i=0 ; (i<sourceFilesArray.getCount ()) && (returnCode == 0) ; i++) {\n"
             "      compiler.doCompilation (sourceFilesArray (i COMMA_HERE), returnCode) ;\n"
             "    }\n"
             "  }catch (const M_STD_NAMESPACE exception & e) {\n"
             "    F_default_display_exception (e) ;\n"
             "    returnCode = 1 ; // Error code\n"
             "  }catch (...) {\n"
             "    F_default_display_unknown_exception () ;\n"
             "    returnCode = 2 ; // Error code\n"
             "  }\n"
             "  return returnCode ;\n"
             "}\n\n" ;
  generatedZone3.writeHyphenLineComment () ;

//--- Generate file
  inLexique.generateFile (inProgramComponentName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

void generatePRGM (C_lexique & inLexique,
                   GGS_lstring & inProgramComponentName,
                   GGS_lstring & inSourceFileExtension,
                   GGS_lstring & inVersionString,
                   GGS_lstring & inParserComponentName,
                   GGS_L_signature_ForGrammarComponent & inStartSymbolParametersList,
                   GGS_typeListeAttributsAxiome & inStartSymbolAttributesList,
                   GGS_typeAbstraitInclusionM & inclusionFichierM,
                   GGS_luint & inMaxErrorsCount,
                   GGS_luint & inMaxWarningsCount,
                   GGS_lstring & inLexiqueClassName,
                   GGS_M_optionComponents & inOptionComponentsMap) {
  generate_header_file_for_prgm (inLexique,
                                 inOptionComponentsMap,
                                 inLexiqueClassName,
                                 inclusionFichierM,
                                 inStartSymbolAttributesList,
                                 inStartSymbolParametersList,
                                 inProgramComponentName,
                                 inParserComponentName) ; 
  generate_cpp_file_for_prgm (inLexique,
                              inOptionComponentsMap,
                              inMaxErrorsCount.getValue (),
                              inMaxWarningsCount.getValue (),
                              inStartSymbolAttributesList,
                              inStartSymbolParametersList,
                              inVersionString,
                              inSourceFileExtension,
                              inProgramComponentName,
                              inParserComponentName) ;
}

//---------------------------------------------------------------------------*
