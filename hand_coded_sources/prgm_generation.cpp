//---------------------------------------------------------------------------*
//                                                                           *
//  Generate main program                                                    *
//                                                                           *
//  Copyright (C) 1999, ..., 2010 Pierre Molinaro.                           *
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
  generatedZone2.appendCppHyphenLineComment () ;
  GGS_M_optionComponents::cEnumerator currentOptionComponent (inOptionsComponentsMap, true) ;
  while (currentOptionComponent.hasCurrentObject ()) {
    generatedZone2 << "#include \"" << currentOptionComponent._key (HERE) << ".h\"\n" ;
    currentOptionComponent.next () ;
  }
  
  generatedZone2 << "#include \"galgas/C_galgas_CLI_Options.h\"\n"
                    "#include \"galgas-utilities/C_Lexique.h\"\n"
                    "#include \"command_line_interface/C_builtin_CLI_Options.h\"\n" ;

  generatedZone2 << "\n" ;
  generatedZone2.appendCppHyphenLineComment () ;

//--- Fin du fichier d'en tete
  C_String generatedZone3 ; generatedZone3.setCapacity (100) ;
  generatedZone3.appendCppHyphenLineComment () ;
  generatedZone3 << "#endif\n" ;

//--- Generate file
  inLexique.generateFileInGALGAS_OUTPUT ("//",
                          inProgramComponentName + ".h",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          generatedZone3) ;
}

//---------------------------------------------------------------------------*

static void
generate_cpp_file_for_prgm (C_Compiler & inLexique,
                            const C_String & inVersionString,
                            const GGS_typeInstructionList inPrologueInstructionList,
                            const GGS_typeInstructionList inEpilogueInstructionList,
                            const C_String & inProgramComponentName,
                            const GGS_ruleDescriptorForProgramList & inRuleDescriptorForProgramList,
                            const GGS_M_optionComponents & ,
                            const GGS_stringset & inInclusionsForImplementationFile) {
//--- Generate user includes
  C_String generatedZone2 ; generatedZone2.setCapacity (200000) ;
  generatedZone2 << "#include \"version_libpm.h\"\n"
                    "#if CURRENT_LIBPM_VERSION != VERSION_OF_LIBPM_USED_BY_GALGAS_COMPILER\n"
                    "  #error \"This file has been compiled with a version of GALGAS that uses libpm version VERSION_OF_LIBPM_USED_BY_GALGAS_COMPILER, different than the current version (CURRENT_LIBPM_VERSION) of libpm\"\n"
                    "#endif\n\n" ;
  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#include \"utilities/F_DisplayException.h\"\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n"
                    "#include \"collections/TC_UniqueArray.h\"\n"
                    "#include \"command_line_interface/F_Analyze_CLI_Options.h\"\n"
                    "#include \"command_line_interface/mainForLIBPM.h\"\n"
                    "#include \"utilities/MF_MemoryControl.h\"\n"
                    "#include \"command_line_interface/C_StringCommandLineOption.h\"\n"
                    "#include \"utilities/cpp-allocation.h\"\n"
                    "#include \"utilities/basic-allocation.h\"\n"
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

  generatedZone2.appendCppHyphenLineComment () ;
  GGS_stringset::cEnumerator inclusionEnumerator (inInclusionsForImplementationFile, true) ;
  while (inclusionEnumerator.hasCurrentObject ()) {
    generatedZone2 << "#include \"" << inclusionEnumerator._key (HERE) << "\"\n" ;
    inclusionEnumerator.next () ;
  }
  generatedZone2 << "\n" ;

  generatedZone2.appendCppHyphenLineComment () ;
  generatedZone2 << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \"" << inLexique.sourceFileName ().lastPathComponent () << "\", line\n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)\n"
                    "#else\n"
                    "  #define SOURCE_FILE_AT_LINE(line) \n"
                    "  #define COMMA_SOURCE_FILE_AT_LINE(line) \n"
                    "#endif\n\n" ;

//--- Prologue
  generatedZone2.appendCppTitleComment ("P R O G R A M    P R O L O G U E") ;
  const bool lexiqueIsUsedInPrologue = isLexiqueFormalArgumentUsedForList (inPrologueInstructionList, true) ;
  generatedZone2 << "static void\n"
                 << inProgramComponentName << "_prologue (C_Compiler & "
                 << (lexiqueIsUsedInPrologue ? "inLexique" : "/* inLexique */")
                 << ",\n"
                    "                     const TC_UniqueArray <C_String> & /* inSourceFilesArray */) {\n" ;
  PMSInt32 unusedPrototypeIndex = 0 ;
  generateInstructionListForList (inPrologueInstructionList,
                                  generatedZone2,
                                  "",
                                  unusedPrototypeIndex,
                                  false, // inGenerateDebug,
                                  true) ; // inGenerateSemanticInstructions
  generatedZone2 << "}\n\n" ;

//--- Epilogue
  generatedZone2.appendCppTitleComment ("P R O G R A M    E P I L O G U E") ;
  const bool lexiqueIsUsedInEpilogue = isLexiqueFormalArgumentUsedForList (inEpilogueInstructionList, true) ;
  generatedZone2 << "static void\n"
                 << inProgramComponentName << "_epilogue (C_Compiler & "
                 << (lexiqueIsUsedInEpilogue ? "inLexique" : "/* inLexique */")
                 << ",\n"
                    "                     const TC_UniqueArray <C_String> & /* inSourceFilesArray */) {\n" ;
  unusedPrototypeIndex = 0 ;
  generateInstructionListForList (inEpilogueInstructionList,
                                  generatedZone2,
                                  "",
                                  unusedPrototypeIndex,
                                  false, // inGenerateDebug,
                                  true) ; // inGenerateSemanticInstructions
  generatedZone2 << "}\n\n" ;

//--- Generate 'mainForLIBPM' routine
  generatedZone2.appendCppTitleComment ("M A I N    F O R    L I B P M") ;
  generatedZone2 << "int mainForLIBPM  (const int argc, const char * argv []) {\n"
                    "  bool verboseOptionOn = true ;\n"
                    "  PMSInt16 returnCode = 0 ; // No error\n"
                    "//--- Fix parameters for BDD package\n"
                    "  C_BDD::setHashMapSize (19) ;\n"
                    "  C_BDD::setITEcacheSize (17) ;\n"
                    "  C_BDD::setANDcacheSize (1) ;\n"
                    "  C_BDD::forAllOnBitsGreaterCacheSize (18) ;\n"
                    "  C_PrologueEpilogue::runPrologueActions () ;\n"
                    "  {\n"
                    "  //--- Input/output parameters\n"
                    "    const char * extensions [] = {" ;
  GGS_ruleDescriptorForProgramList::cEnumerator currentDescriptor (inRuleDescriptorForProgramList, true) ;
  while (currentDescriptor.hasCurrentObject ()) {
    generatedZone2 << "\"" << currentDescriptor._mSourceExtension (HERE) << "\", " ;
    currentDescriptor.next () ;
  }
  generatedZone2 << "NULL} ;\n"
                 << "    const char * helpMessages [] = {" ;
  currentDescriptor.rewind () ;
  while (currentDescriptor.hasCurrentObject ()) {
    generatedZone2.appendCLiteralStringConstant (currentDescriptor._mHelpMessage (HERE).string ()) ;
    generatedZone2 << ", " ;
    currentDescriptor.next () ;
  }
  generatedZone2 << "NULL} ;\n"
                    "    TC_UniqueArray <C_String> sourceFilesArray ;\n"
                    "  //--- Analyze Command Line Options\n"
                    "    F_Analyze_CLI_Options (argc, argv,\n"
                    "                           "
                   "      #ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "        " ;
  generatedZone2.appendCLiteralStringConstant (inVersionString) ;
  generatedZone2 << " \" [debug]\",\n"
                    "      #else\n"
                    "        " ;
  generatedZone2.appendCLiteralStringConstant (inVersionString) ;
  generatedZone2 << ",\n"
                    "      #endif\n"
                    "                           sourceFilesArray,\n"
                    "                           extensions,\n"
                    "                           helpMessages) ;\n"
                    "  //--- Build galgas io object\n"
                    "    C_galgas_io * galgasIOptr = NULL ;\n"
                    "    macroMyNew (galgasIOptr, C_galgas_io (HERE)) ;\n"
                    "    macroRetainObject (galgasIOptr) ;\n"
                    "  //--- Common lexique object\n"
                    "    C_Compiler * _commonLexique = NULL ;\n"
                    "    macroMyNew (_commonLexique, C_Compiler (NULL, \"\", \"\", galgasIOptr COMMA_HERE)) ;\n"
                    "    macroRetainObject (_commonLexique) ;\n"
                    "  //--- Ask Save On Close ? (Carbon and Windows SIOUX Only)\n"
                    "    #ifdef SIOUX_IS_IMPLEMENTED\n"
                    "      SIOUXSettings.asktosaveonclose = gOption_generic_5F_cli_5F_options_options_asktosaveonclose.mValue ;\n"
                    "    #endif\n"
                    "  //--- Enable 64 bit alloc debug ? Only if compiled in 64 bit and in debug mode\n"
                    "    #ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "      #ifdef __LP64__\n"
                    "        if (gOption_generic_5F_cli_5F_options_enable_5F_allocation_5F_debugging.mValue) {\n"
                    "          enableAllocDebugFor64BitTool () ;\n"
                    "        }\n"
                    "      #endif\n"
                    "    #endif\n"
                    "    try{\n"
                    "      verboseOptionOn = gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue ;\n"
                    "      " << inProgramComponentName << "_prologue (* _commonLexique, sourceFilesArray) ;\n"
                    "      for (PMSInt32 i=0 ; i<sourceFilesArray.count () ; i++) {\n"
                    "        try {\n"
                    "          const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;\n"
                    "          PMSInt16 r = 0 ;\n" ;
  generatedZone2.incIndentation (+10) ;
  PMUInt32 grammarIndex = 0 ;
  GGS_ruleDescriptorForProgramList::cEnumerator currentRule (inRuleDescriptorForProgramList, true) ;
  while (currentRule.hasCurrentObject ()) {
    if (grammarIndex > 0) {
      generatedZone2 << "}else " ;
    }
    PMSInt32 prototypeIndex = 0 ;
    generatedZone2 << "if (fileExtension.compare (\"" << currentRule._mSourceExtension (HERE) << "\") == 0) {\n"
                      "  C_Compiler & inLexique = * _commonLexique ;\n"
                      "  const GGS_string source (true, sourceFilesArray (i COMMA_HERE)) ;\n"
                      "  const GGS_location _here (inLexique) ;\n"
                      "  const GGS_lstring var_cas_"
                   << currentRule._mSourceFileName (HERE)
                   << " (GGS_lstring::constructor_new (inLexique, source, _here COMMA_HERE)) ;\n" ;
    generateInstructionListForList (currentRule._mInstructionList (HERE),
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
                      "      co << cStringWithSigned (_commonLexique->totalErrorCount ()) << \" errors, \" ;\n"
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
                      "      co << cStringWithSigned (_commonLexique->totalWarningCount ()) << \" warnings\" ;\n"
                      "      break ;\n"
                      "    }\n"
                      "    if (verboseOptionOn || ((_commonLexique->totalErrorCount () + _commonLexique->totalWarningCount ()) > 0)) {\n"
                      "      co << \".\\n\" ;\n"
                      "    }\n"
                      "  }\n" ;
    currentRule.next () ;
    grammarIndex ++ ;
  }
  generatedZone2.incIndentation (-10) ;
  generatedZone2 << "          }else{\n"
                    "            printf (\"*** Error: unhandled extension for file '%s' ***\\n\", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;\n"
                    "            r = 1 ;\n"
                    "          }\n"
                    "          if (r != 0) {\n"
                    "            returnCode = r ;\n"
                    "          }\n"
                    "        }catch (C_ScanOrParseOnlyExceptionEX) { // Raised when scan only or parse only options are set\n"
                    "          // Do nothing: accept silently exception\n"
                    "        }\n"
                    "      }\n"
                    "    //--- Error or warnings ?\n"
                    "      if (_commonLexique->totalErrorCount () > 0) {\n"
                    "        returnCode = 1 ; // Error code\n"
                    "      }else if (_commonLexique->totalWarningCount () > 0) {\n"
                    "        if (gOption_galgas_5F_cli_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {\n"
                    "          returnCode = 1 ; // Error code\n"
                    "          if (verboseOptionOn) {\n"
                    "            printf (\"** Note: warnings are treated as errors. **\\n\") ;\n"
                    "          }\n"
                    "        }\n"
                    "      }\n"
                    "    //--- Epilogue\n"
                    "      " << inProgramComponentName << "_epilogue (* _commonLexique, sourceFilesArray) ;\n"
                    "    }catch (const M_STD_NAMESPACE exception & e) {\n"
                    "      F_default_display_exception (e) ;\n"
                    "      returnCode = 1 ; // Error code\n"
                    "    }catch (...) {\n"
                    "      throw ;\n"
                    "    }\n"
                    "    macroReleaseObject (galgasIOptr) ;\n"
                    "    macroReleaseObject (_commonLexique) ;\n"
                    "  }\n"
                    "  C_PrologueEpilogue::runEpilogueActions () ;\n"
                    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
                    "    C_Object::checkAllObjectsHaveBeenReleased () ;\n"
                    "  #endif\n"
                    "  displayAllocationStats () ;\n"
                    "  displayAllocatedBlockSizeStats () ;\n"
                    "  displayAllocatedBlocksInfo () ;\n"
                    "  return returnCode ;\n"
                    "}\n\n" ;
//--- Generate file
  inLexique.generateFileInGALGAS_OUTPUT ("//",
                          inProgramComponentName + ".cpp",
                          "\n\n", // User Zone 1
                          generatedZone2,
                          "\n\n", // User Zone 2
                          "\n") ;
}

//---------------------------------------------------------------------------*

void
routine_generatePRGM (C_Compiler & inLexique,
                      const GGS_lstring inProgramComponentName,
                      const GGS_lstring inVersionString,
                      const GGS_typeInstructionList inPrologueInstructionList,
                      const GGS_typeInstructionList inEpilogueInstructionList,
                      const GGS_ruleDescriptorForProgramList inRuleDescriptorForProgramList,
                      const GGS_M_optionComponents inOptionsComponentsMap,
                      const GGS_stringset inInclusionsForImplementationFile
                      COMMA_UNUSED_LOCATION_ARGS) {
  if (inLexique.totalErrorCount () == 0) {
    generate_header_file_for_prgm (inLexique,
                                   inProgramComponentName,
                                   inOptionsComponentsMap) ; 
    generate_cpp_file_for_prgm (inLexique,
                                inVersionString,
                                inPrologueInstructionList,
                                inEpilogueInstructionList,
                                inProgramComponentName,
                                inRuleDescriptorForProgramList,
                                inOptionsComponentsMap,
                                inInclusionsForImplementationFile) ;
  }
}

//---------------------------------------------------------------------------*
