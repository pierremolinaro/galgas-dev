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
#include "semantics_instructions.h"

//---------------------------------------------------------------------------*

static void
generate_header_file_for_prgm (C_Compiler & inLexique,
                               const C_String & inProgramComponentName,
                               const GGS_M_optionComponents & inOptionsComponentsMap) {
//--- Write includes
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2 << "#ifndef INTERFACE_" << inProgramComponentName << "_DEFINED\n"
                    "#define INTERFACE_" << inProgramComponentName << "_DEFINED\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  GGS_M_optionComponents::element_type * currentOptionComponent = inOptionsComponentsMap.firstObject () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone2 << "#include \"" << currentOptionComponent->mKey << ".h\"\n" ;
    currentOptionComponent = currentOptionComponent->nextObject () ;
  }
  
  generatedZone2 << "#include \"galgas/C_galgas_CLI_Options.h\"\n"
                    "#include \"command_line_interface/C_CLI_OptionGroup.h\"\n"
                    "#include \"command_line_interface/C_builtin_CLI_Options.h\"\n" ;

  generatedZone2 << "\n" ;
  generatedZone2.writeCppHyphenLineComment () ;

//--- Command line options for this program
  generatedZone2 << "class C_options_for_" << inProgramComponentName << " : public C_CLI_OptionGroup {\n"
                    "//--- Constructor\n"
                    "  public : C_options_for_" << inProgramComponentName << " (const bool inAcceptsDebugOption) ;\n"
                    "\n"
                    "//--- Included options\n"
                    "  private : C_builtin_CLI_Options mBuiltinOptions ;\n"
                    "  private : C_galgas_CLI_Options mGalgasOptions ;\n" ;
  currentOptionComponent = inOptionsComponentsMap.firstObject () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone2 << "  private : " << currentOptionComponent->mKey
                   << " mOptions_" << currentOptionComponent->mKey << "; \n" ;
    currentOptionComponent = currentOptionComponent->nextObject () ;
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
  inLexique.generateFile ("//",
                          inProgramComponentName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

static void
generate_cpp_file_for_prgm (C_Compiler & inLexique,
                            const uint32 inMaxErrorCount,
                            const uint32 inMaxWarningCount,
                            const C_String & inVersionString,
                            const C_String & inProgramComponentName,
                            const GGS_ruleDescriptorForProgramList & inRuleDescriptorForProgramList,
                            const GGS_M_optionComponents & inOptionsComponentsMap,
                            const GGS_stringset & inInclusionsForImplementationFile) {
//--- Generate user includes
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if LIBPM_VERSION != THE_LIBPM_VERSION\n"
                    "  #error \"This file has been compiled with a version of GALGAS different than the version of libpm\"\n"
                    "#endif\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#include \"utilities/F_DisplayException.h\"\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n"
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
                    "#endif\n\n"
                    "#include <typeinfo>\n\n" ;

  generatedZone2.writeCppHyphenLineComment () ;
  GGS_stringset::element_type * currentInclusion = inInclusionsForImplementationFile.firstObject () ;
  while (currentInclusion != NULL) {
    macroValidPointer (currentInclusion) ;
    generatedZone2 << "#include \"" << currentInclusion->mKey << "\"\n" ;
    currentInclusion = currentInclusion->nextObject () ;
  }
  generatedZone2 << "\n" ;

  generatedZone2.writeCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \"" << inLexique.sourceFileName ().lastPathComponent () << "\", line\n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

//--------------------------------------- Get bool options count
  generatedZone2.writeCppTitleComment (C_String ("C_options_for_") + inProgramComponentName + "  CONSTRUCTOR") ;
  generatedZone2 << "C_options_for_" << inProgramComponentName  << "::\n"
                    "C_options_for_" << inProgramComponentName << " (const bool inAcceptsDebugOption)\n"
                    ":mBuiltinOptions (inAcceptsDebugOption) {\n"
                    "  add (& mBuiltinOptions) ;\n"
                    "  add (& mGalgasOptions) ;\n" ;
  GGS_M_optionComponents::element_type * currentOptionComponent = inOptionsComponentsMap.firstObject () ;
  while (currentOptionComponent != NULL) {
    macroValidPointer (currentOptionComponent) ;
    generatedZone2 << "  add (& mOptions_" << currentOptionComponent->mKey << ") ;\n" ;
    currentOptionComponent = currentOptionComponent->nextObject () ;
  }
  generatedZone2 << "}\n\n" ;
  generatedZone2.writeCppHyphenLineComment () ;

//--- Generate 'mainForLIBPM' routine
  const bool generateDebug = inLexique.boolOptionValueFromKeys ("galgas_cli_options", "generate_debug" COMMA_HERE) ;
  generatedZone2 << "int mainForLIBPM  (const int argc, const char * argv []) {\n"
                    "  bool verboseOptionOn = true ;\n"
                    "  sint16 returnCode = 0 ; // No error\n"
                    "  {\n"
                    "  //--- Input/output parameters\n"
                    "    C_options_for_" << inProgramComponentName << " options ("
                 << (generateDebug ? "true" : "false")
                 << ") ;\n"
                 << "    const char * extensions [] = {" ;
  GGS_ruleDescriptorForProgramList::element_type * currentDescriptor = inRuleDescriptorForProgramList.firstObject () ;
  while (currentDescriptor != NULL) {
    macroValidPointer (currentDescriptor) ;
    generatedZone2 << "\"" << currentDescriptor->mSourceExtension << "\", " ;
    currentDescriptor = currentDescriptor->nextObject () ;
  }
  generatedZone2 << "NULL} ;\n"
                 << "    const char * helpMessages [] = {" ;
  currentDescriptor = inRuleDescriptorForProgramList.firstObject () ;
  while (currentDescriptor != NULL) {
    macroValidPointer (currentDescriptor) ;
    generatedZone2.writeCstringConstant (currentDescriptor->mHelpMessage) ;
    generatedZone2 << ", " ;
    currentDescriptor = currentDescriptor->nextObject () ;
  }
  generatedZone2 << "NULL} ;\n"
                    "    TC_UniqueArray <C_String> sourceFilesArray ;\n"
                    "  //--- Analyze Command Line Options\n"
                    "    bool cocoaOutput = false ;\n"
                    "    F_Analyze_CLI_Options (argc, argv,\n"
                    "                           " ;
  generatedZone2.writeCstringConstant (inVersionString) ;
  generatedZone2 << ",\n"
                    "                           options,\n"
                    "                           sourceFilesArray,\n"
                    "                           extensions,\n"
                    "                           helpMessages,\n"
                    "                           cocoaOutput) ;\n"
                    "    C_galgas_io_parameters IOparameters  (& options,\n"
                    "      cocoaOutput,\n"
                    "      #ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "        " ;
  generatedZone2.writeCstringConstant (inVersionString) ;
  generatedZone2 << " \" [debug]\",\n"
                    "      #else\n"
                    "        " ;
  generatedZone2.writeCstringConstant (inVersionString) ;
  generatedZone2 << ",\n"
                    "      #endif\n"
                    "      " << inMaxErrorCount << ",\n"
                    "      " << inMaxWarningCount << ") ;\n"
                    "  //--- Build galgas io object\n"
                    "    C_galgas_io * galgasIOptr = NULL ;\n"
                    "    macroMyNew (galgasIOptr, C_galgas_io (IOparameters, C_galgas_io::kTerminalOutputKind COMMA_HERE)) ;\n"
                    "  //--- Common lexique object\n"
                    "    C_Compiler * _commonLexique = NULL ;\n"
                    "    macroMyNew (_commonLexique, C_Compiler (galgasIOptr COMMA_HERE)) ;\n"
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
  generatedZone2.incIndentation (+8) ;
  uint32 grammarIndex = 0 ;
  GGS_ruleDescriptorForProgramList::element_type * currentRule = inRuleDescriptorForProgramList.firstObject () ;
  while (currentRule != NULL) {
    macroValidPointer (currentRule) ;
    if (grammarIndex > 0) {
      generatedZone2 << "}else " ;
    }
    sint32 prototypeIndex = 0 ;
    generatedZone2 << "if (fileExtension.compare (\"" << currentRule->mSourceExtension << "\") == 0) {\n"
                      "  C_Compiler & _inLexique = * _commonLexique ;\n"
                      "  const GGS_string _source (true, sourceFilesArray (i COMMA_HERE)) ;\n"
                      "  const GGS_location _here (_inLexique) ;\n"
                      "  const GGS_lstring var_cas_"
                   << currentRule->mSourceFileName
                   << " (GGS_lstring::constructor_new (_inLexique, _source, _here COMMA_HERE)) ;\n" ;
    generateInstructionListForList (currentRule->mInstructionList,
                                    generatedZone2,
                                    "",
                                    prototypeIndex,
                                    false, // inGenerateDebug,
                                    true) ; // inGenerateSemanticInstructions
    generatedZone2 << "  if (verboseOptionOn) {\n"
                      "    co << \"Analysis of '\" << sourceFilesArray (i COMMA_HERE).lastPathComponent () << \"' completed. \" ;\n"
                      "    switch (_commonLexique->totalErrorCount ()) {\n"
                      "    case 0 :\n"
                      "      co << \"No error, \" ;\n"
                      "      break ;\n"
                      "    case 1 :\n"
                      "      co << \"1 error, \" ;\n"
                      "      returnCode = 1 ; // Error code\n"
                      "      break ;\n"
                      "    default :\n"
                      "      co << _commonLexique->totalErrorCount () << \" errors, \" ;\n"
                      "      returnCode = 1 ; // Error code\n"
                      "      break ;\n"
                      "    }\n"
                      "    switch (_commonLexique->totalWarningCount ()) {\n"
                      "    case 0 :\n"
                      "      co << \"no warning\" ;\n"
                      "      break ;\n"
                      "    case 1 :\n"
                      "      co << \"1 warning\" ;\n"
                      "      break ;\n"
                      "    default :\n"
                      "      co << _commonLexique->totalWarningCount () << \" warnings\" ;\n"
                      "      break ;\n"
                      "    }\n"
                      "    if (verboseOptionOn || ((_commonLexique->totalErrorCount () + _commonLexique->totalWarningCount ()) > 0)) {\n"
                      "      co << \".\\n\" ;\n"
                      "    }\n"
                      "  }\n" ;
    currentRule = currentRule->nextObject () ;
    grammarIndex ++ ;
  }
  generatedZone2.incIndentation (-8) ;
  generatedZone2 << "        }else{\n"
                    "          printf (\"*** Error: unhandled extension for file '%s' ***\\n\", sourceFilesArray (i COMMA_HERE).cString ()) ;\n"
                    "          r = 1 ;\n"
                    "        }\n"
                    "        if (r != 0) {\n"
                    "          returnCode = r ;\n"
                    "        }\n"
                    "      }\n"
                    "    //--- Error or warnings ?\n"
                    "      if (_commonLexique->totalErrorCount () > 0) {\n"
                    "        returnCode = 1 ; // Error code\n"
                    "      }else if (_commonLexique->totalWarningCount () > 0) {\n"
                    "        const bool warningsAreTreatedAsError\n"
                    "            = options.boolOptionValueFromKeys (\"generic_galgas_cli_options\",\n"
                    "                                               TREAT_WARNINGS_AS_ERRORS,\n"
                    "                                               false) ;\n"
                    "        if (warningsAreTreatedAsError) {\n"
                    "          returnCode = 1 ; // Error code\n"
                    "          if (verboseOptionOn) {\n"
                    "            printf (\"** Note: warnings are treated as errors. **\\n\") ;\n"
                    "          }\n"
                    "        }\n"
                    "      }\n"
                    "    //--- Epilogue\n"
                    "      " << inProgramComponentName << "_epilogue (options) ;\n"
                    "    }catch (const M_STD_NAMESPACE exception & e) {\n"
                    "      F_default_display_exception (e) ;\n"
                    "      returnCode = 1 ; // Error code\n"
                    "    }catch (...) {\n"
                    "      F_default_display_unknown_exception () ;\n"
                    "      returnCode = 2 ; // Error code\n"
                    "    }\n"
                    "    macroDetachPointer (galgasIOptr, C_galgas_io) ;\n"
                    "    macroDetachPointer (_commonLexique, C_Compiler) ;\n"
                    "    C_TreewalkingDispacher::releaseAllTables () ;\n"
                    "    releaseAllSingletonObjects () ;\n"
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
  inLexique.generateFile ("//",
                          inProgramComponentName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          userZone2, // User Zone 2
                          "\n") ;
}

//---------------------------------------------------------------------------*

void
routine_generatePRGM (C_Compiler & inLexique,
                      const GGS_lstring inProgramComponentName,
                      const GGS_lstring inVersionString,
                      const GGS_ruleDescriptorForProgramList inRuleDescriptorForProgramList,
                      const GGS_luint inMaxErrorCount,
                      const GGS_luint inMaxWarningCount,
                      const GGS_M_optionComponents inOptionsComponentsMap,
                      const GGS_stringset inInclusionsForImplementationFile
                      COMMA_UNUSED_LOCATION_ARGS) {
  if (inLexique.totalErrorCount () == 0) {
    generate_header_file_for_prgm (inLexique,
                                   inProgramComponentName,
                                   inOptionsComponentsMap) ; 
    generate_cpp_file_for_prgm (inLexique,
                                inMaxErrorCount.uintValue (),
                                inMaxWarningCount.uintValue (),
                                inVersionString,
                                inProgramComponentName,
                                inRuleDescriptorForProgramList,
                                inOptionsComponentsMap,
                                inInclusionsForImplementationFile) ;
  }
}

//---------------------------------------------------------------------------*

void
routine_fixFileGenerationStartDirectory (C_Compiler & inLexique,
                                         const GGS_lstring inSourceFile
                                         COMMA_LOCATION_ARGS) {
  inLexique.ioParametersPtr ()->mFileGenerationStartDir = inSourceFile.stringByDeletingLastPathComponent ().stringByAppendingPathComponent ("GALGAS_OUTPUT") ;
  const bool ok = inLexique.ioParametersPtr ()->mFileGenerationStartDir.makeDirectoryIfDoesNotExists () ;
  if (! ok) {
    C_String errorMessage ;
    errorMessage << "cannot create directory '" << inLexique.ioParametersPtr ()->mFileGenerationStartDir << "'" ;
    inLexique.ioParametersPtr ()->printFileErrorMessage (inSourceFile, errorMessage.cString () COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------*
