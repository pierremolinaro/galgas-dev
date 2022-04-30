#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'projectCreationFileWrapper'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_projectCreationFileWrapper_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_projectCreationFileWrapper_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper (
  "",
  0,
  gWrapperAllFiles_projectCreationFileWrapper_0,
  0,
  gWrapperAllDirectories_projectCreationFileWrapper_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_project'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "project (0:0:1) -> " ;
  result << in_PROJECT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("+PROJECT.galgasProject.galgasTemplate", 1)).stringValue () ;
  result << " {\n"
    "#--- Targets\n"
    "  %makefile-macosx\n"
    "  %makefile-unix\n"
    "  %makefile-x86linux32-on-macosx\n"
    "  %makefile-x86linux64-on-macosx\n"
    "  %makefile-win32-on-macosx\n"
    "  %LatestMacOS\n"
    "  %applicationBundleBase : \"fr.what\"\n"
    "  %codeblocks-windows\n"
    "  %codeblocks-linux32\n"
    "  %codeblocks-linux64\n"
    "  %codeblocks-mac\n"
    "\n"
    "#--- Source files\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-lexique.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-options.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-semantics.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-syntax.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-grammar.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-cocoa.galgas\"\n"
    "  \"galgas-sources/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "-program.galgas\"\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (C_Compiler * /* inCompiler */,
                                                                               const GALGAS_string & in_PROJECT_5F_NAME
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "gui cocoa {\n"
    "  with option " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_options\n"
    "\n"
    "  with lexique " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_lexique {\n"
    "    fileExtension: \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\"\n"
    "    title: \"Source\"\n"
    "    blockComment : \"#\"\n"
    "  }\n"
    "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "grammar " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_grammar \"LL1\" {\n"
    "  syntax " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_syntax\n"
    "  <start_symbol>\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "lexique " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_lexique {\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Identifiers and keywords                                                                     \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "@string tokenString\n"
    "\n"
    "style keywordsStyle -> \"Keywords\"\n"
    "\n"
    "$identifier$ ! tokenString error message \"an identifier\"\n"
    "\n"
    "#--- This is the keyword list\n"
    "list keyWordList style keywordsStyle error message \"the '%K' keyword\" {\n"
    "  \"begin\",\n"
    "  \"end\"\n"
    "}\n"
    "\n"
    "rule 'a'->'z' |  'A'->'Z' {\n"
    "  repeat\n"
    "    enterCharacterIntoString (!\?tokenString !*)\n"
    "  while 'a'->'z' | 'A'->'Z' | '_' | '0'->'9' :\n"
    "  end\n"
    "  send search tokenString in keyWordList default $identifier$\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Literal decimal integers                                                                     \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "style integerStyle -> \"Integer Constants\"\n"
    "@uint uint32value\n"
    "$integer$ !uint32value style integerStyle error message \"a 32-bit unsigned decimal number\"\n"
    "\n"
    "message decimalNumberTooLarge : \"decimal number too large\"\n"
    "message internalError : \"internal error\"\n"
    "\n"
    "rule '0'->'9' {\n"
    "  enterCharacterIntoString (!\?tokenString !*)\n"
    "  repeat\n"
    "  while '0'->'9' :\n"
    "    enterCharacterIntoString (!\?tokenString !*)\n"
    "  while '_' :\n"
    "  end\n"
    "  convertDecimalStringIntoUInt (!tokenString !\?uint32value error decimalNumberTooLarge, internalError)\n"
    "  send $integer$\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Literal character strings                                                                    \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "style stringStyle -> \"String Constants\"\n"
    "$\"string\"$ ! tokenString style stringStyle %nonAtomicSelection error message \"a character string constant \\\"...\\\"\"\n"
    "\n"
    "\n"
    "message incorrectStringEnd : \"string does not end with '\\\"'\"\n"
    "\n"
    "rule '\"' {\n"
    "  repeat\n"
    "   while ' ' | '!' | '#'-> '\\uFFFD' :\n"
    "    enterCharacterIntoString (!\?tokenString !*)\n"
    "  end\n"
    "  select\n"
    "  case '\"' :\n"
    "    send $\"string\"$\n"
    "  default\n"
    "    error incorrectStringEnd\n"
    "  end\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Delimiters                                                                                   \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "style delimitersStyle -> \"Delimiters\"\n"
    "list delimitorsList style delimitersStyle error message \"the '%K' delimitor\" {\n"
    "  \":\",    \",\",    \";\",   \"!\",  \"{\",  \"}\", \"->\", \"@\", \"*\", \"-\"\n"
    "}\n"
    "\n"
    "rule list delimitorsList\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Comments                                                                                     \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "style commentStyle -> \"Comments\"\n"
    "$comment$ style commentStyle %nonAtomicSelection error message \"a comment\"\n"
    "rule '#' {\n"
    "  repeat\n"
    "  while '\\u0001' -> '\\u0009' | '\\u000B' | '\\u000C' | '\\u000E' -> '\\uFFFD' :\n"
    "  end\n"
    "  drop $comment$\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "#   Separators                                                                                   \n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "rule '\\u0001' -> ' ' {\n"
    "}\n"
    "\n"
    "#-----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_options'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "option " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_options {\n"
    "\n"
    "# ADD YOUR CODE\n"
    "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_program'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#--- Prologue routine\n"
    "before {\n"
    "}\n"
    "\n"
    "#--- 'when' clauses\n"
    "case . \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\"\n"
    "message \"a source text file with the ." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << " extension\"\n"
    "grammar " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_grammar\n"
    "\?sourceFilePath:@lstring inSourceFile {\n"
    "  grammar " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_grammar in inSourceFile\n"
    "}\n"
    "\n"
    "#--- Epilogue routine\n"
    "after {\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (C_Compiler * /* inCompiler */,
                                                                                   const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "# ADD YOUR CODE\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (C_Compiler * /* inCompiler */,
                                                                                const GALGAS_string & in_PROJECT_5F_NAME
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "syntax " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_syntax (" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "_lexique) {\n"
    "\n"
    "rule <start_symbol> {\n"
    "  # ADD YOUR SYNTAX INSTRUCTIONS\n"
    "}\n"
    "\n"
    "# ADD OTHER RULES\n"
    "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performProjectCreation (const GALGAS_string constinArgument_inProjectPath,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_projectName_2660 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 40)) ;
  GALGAS_string var_galgas_5F_sources_5F_DIR_2749 = constinArgument_inProjectPath.add_operation (GALGAS_string ("/galgas-sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)) ;
  var_galgas_5F_sources_5F_DIR_2749.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName_2660 COMMA_SOURCE_FILE ("projectCreation.galgas", 44))).method_writeToFile (constinArgument_inProjectPath.add_operation (GALGAS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (var_projectName_2660, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (GALGAS_string (".galgasProject"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName_2660 COMMA_SOURCE_FILE ("projectCreation.galgas", 45))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2749.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (var_projectName_2660, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (GALGAS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName_2660 COMMA_SOURCE_FILE ("projectCreation.galgas", 46))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2749.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (var_projectName_2660, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (GALGAS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName_2660 COMMA_SOURCE_FILE ("projectCreation.galgas", 47))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2749.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (var_projectName_2660, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (GALGAS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName_2660 COMMA_SOURCE_FILE ("projectCreation.galgas", 48))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2749.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (var_projectName_2660, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (GALGAS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName_2660 COMMA_SOURCE_FILE ("projectCreation.galgas", 49))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2749.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (var_projectName_2660, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (GALGAS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName_2660 COMMA_SOURCE_FILE ("projectCreation.galgas", 50))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2749.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (var_projectName_2660, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (GALGAS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName_2660 COMMA_SOURCE_FILE ("projectCreation.galgas", 51))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2749.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (var_projectName_2660, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (GALGAS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)) ;
  inCompiler->printMessage (GALGAS_string ("*** DONE ***\n")  COMMA_SOURCE_FILE ("projectCreation.galgas", 53)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_projectCreation (const GALGAS_string constinArgument_inProjectPath,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inProjectPath.getter_length (SOURCE_FILE ("projectCreation.galgas", 60)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 61)).add_operation (GALGAS_string (" option) ***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 61))  COMMA_SOURCE_FILE ("projectCreation.galgas", 61)) ;
      GALGAS_string var_projectName_4418 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 63)) ;
      GALGAS_bool var_ok_4471 = var_projectName_4418.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 64)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas", 64)) ;
      GALGAS_uint var_idx_4535 = GALGAS_uint ((uint32_t) 1U) ;
      if (var_projectName_4418.getter_length (SOURCE_FILE ("projectCreation.galgas", 66)).isValid ()) {
        uint32_t variant_4548 = var_projectName_4418.getter_length (SOURCE_FILE ("projectCreation.galgas", 66)).uintValue () ;
        bool loop_4548 = true ;
        while (loop_4548) {
          loop_4548 = GALGAS_bool (kIsStrictInf, var_idx_4535.objectCompare (var_projectName_4418.getter_length (SOURCE_FILE ("projectCreation.galgas", 67)))).operator_and (var_ok_4471 COMMA_SOURCE_FILE ("projectCreation.galgas", 67)).isValid () ;
          if (loop_4548) {
            loop_4548 = GALGAS_bool (kIsStrictInf, var_idx_4535.objectCompare (var_projectName_4418.getter_length (SOURCE_FILE ("projectCreation.galgas", 67)))).operator_and (var_ok_4471 COMMA_SOURCE_FILE ("projectCreation.galgas", 67)).boolValue () ;
          }
          if (loop_4548 && (0 == variant_4548)) {
            loop_4548 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas", 66)) ;
          }
          if (loop_4548) {
            variant_4548 -- ;
            GALGAS_char var_c_4636 = var_projectName_4418.getter_characterAtIndex (var_idx_4535, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 68)) ;
            var_ok_4471 = var_c_4636.getter_isalnum (SOURCE_FILE ("projectCreation.galgas", 69)).operator_or (GALGAS_bool (kIsEqual, var_c_4636.objectCompare (GALGAS_char (TO_UNICODE (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas", 69)) ;
            var_idx_4535.increment_operation (inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 70)) ;
          }
        }
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_ok_4471.operator_not (SOURCE_FILE ("projectCreation.galgas", 72)).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->printMessage (GALGAS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4418, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 73)).add_operation (GALGAS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character.\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 74))  COMMA_SOURCE_FILE ("projectCreation.galgas", 73)) ;
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_ok_4471.boolEnum () ;
        if (kBoolTrue == test_2) {
          var_ok_4471 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas", 78)).operator_not (SOURCE_FILE ("projectCreation.galgas", 78)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_ok_4471.operator_not (SOURCE_FILE ("projectCreation.galgas", 79)).boolEnum () ;
            if (kBoolTrue == test_3) {
              inCompiler->printMessage (GALGAS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 80)).add_operation (GALGAS_string ("' directory already exists.***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 80))  COMMA_SOURCE_FILE ("projectCreation.galgas", 80)) ;
            }
          }
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_ok_4471.boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_performProjectCreation (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 84)) ;
          }
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterTemplateString (GALGAS_templateInstructionListAST & ioArgument_outResultingInstructionList,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_27059 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 634)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_s_27059.getter_length (SOURCE_FILE ("templateSyntax.galgas", 635)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_outResultingInstructionList.addAssign_operation (GALGAS_templateInstructionStringAST::constructor_new (var_s_27059  COMMA_SOURCE_FILE ("templateSyntax.galgas", 636))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 636)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateGetterCallInExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateGetterCallInExpressionAST * object = (const cPtr_templateGetterCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateGetterCallInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_3977 ;
  const GALGAS_templateGetterCallInExpressionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_receiverExpression_3977, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 72)) ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_4186 = var_receiverExpression_3977.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = var_receiverType_4186.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 80)).getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas", 80)) ;
    if (kBoolTrue != test_2.boolEnum ()) {
      test_2 = var_receiverType_4186.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 80)).getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 80)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateGetterCallInExpressionAST temp_3 = object ;
      test_1 = GALGAS_bool (kIsEqual, temp_3.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 81)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_templateGetterCallInExpressionAST temp_4 = object ;
        GALGAS_bool var_isPublic_4490 ;
        GALGAS_bool var_unused_0_4493 ;
        GALGAS_unifiedTypeMap_2D_entry var_propertyType_4511 ;
        const bool optionalResult4458 = var_receiverType_4186.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 82)).optional_searchKey (temp_4.readProperty_mGetterName ().readProperty_string (), var_isPublic_4490, var_unused_0_4493, var_propertyType_4511) ;
        if (!optionalResult4458) {
          test_1 = kBoolFalse ;
        }
        if (kBoolTrue == test_1) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall.readProperty_value ()).boolEnum () ;
            if (kBoolTrue == test_5) {
              const GALGAS_templateGetterCallInExpressionAST temp_6 = object ;
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 84)) ;
            }
          }
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isPublic_4490.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 86)).boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_templateGetterCallInExpressionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray10  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 87)) ;
            }
          }
          const GALGAS_templateGetterCallInExpressionAST temp_11 = object ;
          const GALGAS_templateGetterCallInExpressionAST temp_12 = object ;
          outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_4511, temp_11.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_3977, temp_12.readProperty_mGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 89)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_getterMap var_getterMap_5812 = var_receiverType_4186.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 111)) ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_5921 ;
    GALGAS_methodKind var_kind_5946 ;
    GALGAS_bool var_hasCompilerArgument_5980 ;
    GALGAS_unifiedTypeMap_2D_entry var_returnedType_6023 ;
    GALGAS_stringlist var_fieldList_6041 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 117)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GALGAS_templateGetterCallInExpressionAST temp_14 = object ;
      test_13 = var_getterMap_5812.getter_hasKey (temp_14.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 118)).boolEnum () ;
      if (kBoolTrue == test_13) {
        const GALGAS_templateGetterCallInExpressionAST temp_15 = object ;
        GALGAS_location joker_6221 ; // Joker input parameter
        GALGAS_methodQualifier joker_6283_2 ; // Joker input parameter
        GALGAS_string joker_6283_1 ; // Joker input parameter
        var_getterMap_5812.method_searchKey (temp_15.readProperty_mGetterName (), var_kind_5946, var_getterFormalArgumentTypeList_5921, joker_6221, var_hasCompilerArgument_5980, var_returnedType_6023, joker_6283_2, joker_6283_1, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 119)) ;
      }
    }
    if (kBoolFalse == test_13) {
      GALGAS_uint var_matchingReaderCount_6338 = GALGAS_uint ((uint32_t) 0U) ;
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = GALGAS_bool (kIsEqual, var_receiverType_4186.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 129)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 129)))).boolEnum () ;
        if (kBoolTrue == test_16) {
          var_getterFormalArgumentTypeList_5921 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 130)) ;
          var_hasCompilerArgument_5980 = GALGAS_bool (true) ;
          var_returnedType_6023 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("templateAnalysis.galgas", 132)) ;
          var_kind_5946 = GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 133)) ;
          cEnumerator_typedPropertyList enumerator_6634 (var_receiverType_4186.getter_mCurrentTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 134)), kENUMERATION_UP) ;
          while (enumerator_6634.hasCurrentObject ()) {
            GALGAS_getterMap var_aMap_6712 = enumerator_6634.current_mPropertyTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 135)) ;
            const GALGAS_templateGetterCallInExpressionAST temp_17 = object ;
            const cMapElement_getterMap * objectArray_6761 = (const cMapElement_getterMap *) var_aMap_6712.readAccessForWithInstruction (temp_17.readProperty_mGetterName ().readProperty_string ()) ;
            if (NULL != objectArray_6761) {
                macroValidSharedObject (objectArray_6761, cMapElement_getterMap) ;
              var_matchingReaderCount_6338.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)) ;
              var_getterFormalArgumentTypeList_5921 = objectArray_6761->mProperty_mArgumentTypeList ;
              var_hasCompilerArgument_5980 = objectArray_6761->mProperty_mHasCompilerArgument ;
              var_returnedType_6023 = objectArray_6761->mProperty_mReturnedType ;
              var_kind_5946 = objectArray_6761->mProperty_mKind ;
              var_fieldList_6041.addAssign_operation (enumerator_6634.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 142)) ;
            }
            enumerator_6634.gotoNextObject () ;
          }
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = GALGAS_bool (kIsEqual, var_matchingReaderCount_6338.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_18) {
              const GALGAS_templateGetterCallInExpressionAST temp_19 = object ;
              const GALGAS_templateGetterCallInExpressionAST temp_20 = object ;
              TC_Array <C_FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_19.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_4186.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)).add_operation (temp_20.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 146)) ;
              var_getterFormalArgumentTypeList_5921.drop () ; // Release error dropped variable
              var_hasCompilerArgument_5980.drop () ; // Release error dropped variable
              var_returnedType_6023.drop () ; // Release error dropped variable
              var_kind_5946.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_18) {
            enumGalgasBool test_22 = kBoolTrue ;
            if (kBoolTrue == test_22) {
              test_22 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_6338.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_22) {
                GALGAS_string var_s_7475 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_7502 (var_fieldList_6041, kENUMERATION_UP) ;
                while (enumerator_7502.hasCurrentObject ()) {
                  var_s_7475.plusAssign_operation(enumerator_7502.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 153)) ;
                  if (enumerator_7502.hasNextObject ()) {
                    var_s_7475.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 154)) ;
                  }
                  enumerator_7502.gotoNextObject () ;
                }
                const GALGAS_templateGetterCallInExpressionAST temp_23 = object ;
                const GALGAS_templateGetterCallInExpressionAST temp_24 = object ;
                TC_Array <C_FixItDescription> fixItArray25 ;
                inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_4186.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (var_s_7475, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)) ;
                var_getterFormalArgumentTypeList_5921.drop () ; // Release error dropped variable
                var_hasCompilerArgument_5980.drop () ; // Release error dropped variable
                var_returnedType_6023.drop () ; // Release error dropped variable
                var_kind_5946.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (kBoolFalse == test_16) {
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = GALGAS_bool (kIsEqual, var_getterMap_5812.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 161)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_26) {
            const GALGAS_templateGetterCallInExpressionAST temp_27 = object ;
            TC_Array <C_FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_4186.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)), fixItArray28  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)) ;
            var_getterFormalArgumentTypeList_5921.drop () ; // Release error dropped variable
            var_hasCompilerArgument_5980.drop () ; // Release error dropped variable
            var_returnedType_6023.drop () ; // Release error dropped variable
            var_kind_5946.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_26) {
          const GALGAS_templateGetterCallInExpressionAST temp_29 = object ;
          const GALGAS_templateGetterCallInExpressionAST temp_30 = object ;
          TC_Array <C_FixItDescription> fixItArray31 ;
          appendFixItActions (fixItArray31, kFixItReplace, var_getterMap_5812.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 169))) ;
          inCompiler->emitSemanticError (temp_29.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_4186.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)).add_operation (temp_30.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)).add_operation (GALGAS_string ("' getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 166)) ;
          var_getterFormalArgumentTypeList_5921.drop () ; // Release error dropped variable
          var_hasCompilerArgument_5980.drop () ; // Release error dropped variable
          var_returnedType_6023.drop () ; // Release error dropped variable
          var_kind_5946.drop () ; // Release error dropped variable
        }
      }
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_templateGetterCallInExpressionAST temp_33 = object ;
      test_32 = GALGAS_bool (kIsNotEqual, temp_33.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 173)).objectCompare (var_getterFormalArgumentTypeList_5921.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 173)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        const GALGAS_templateGetterCallInExpressionAST temp_34 = object ;
        const GALGAS_templateGetterCallInExpressionAST temp_35 = object ;
        const GALGAS_templateGetterCallInExpressionAST temp_36 = object ;
        TC_Array <C_FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (temp_34.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_35.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (var_receiverType_4186.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (var_getterFormalArgumentTypeList_5921.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 175)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (temp_36.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 176)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 176)), fixItArray37  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_32) {
      GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_8943 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 178)) ;
      const GALGAS_templateGetterCallInExpressionAST temp_38 = object ;
      cEnumerator_templateExpressionListAST enumerator_9012 (temp_38.readProperty_mExpressionList (), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_9077 (var_getterFormalArgumentTypeList_5921, kENUMERATION_UP) ;
      while (enumerator_9012.hasCurrentObject () && enumerator_9077.hasCurrentObject ()) {
        enumGalgasBool test_39 = kBoolTrue ;
        if (kBoolTrue == test_39) {
          test_39 = GALGAS_bool (kIsNotEqual, enumerator_9077.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_9012.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_39) {
            GALGAS_string temp_40 ;
            const enumGalgasBool test_41 = GALGAS_bool (kIsNotEqual, enumerator_9077.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_41) {
              temp_40 = enumerator_9077.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 181)) ;
            }else if (kBoolFalse == test_41) {
              temp_40 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_9194 = GALGAS_string ("!").add_operation (temp_40, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 181)) ;
            TC_Array <C_FixItDescription> fixItArray42 ;
            appendFixItActions (fixItArray42, kFixItReplace, var_s_9194) ;
            inCompiler->emitSemanticError (enumerator_9012.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_9194, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 182)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 182)), fixItArray42  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 182)) ;
          }
        }
        GALGAS_semanticExpressionForGeneration var_exp_9724 ;
        callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_9012.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_exp_9724, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 185)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_9077.current_mFormalArgumentType (HERE), var_exp_9724.readProperty_mResultType (), enumerator_9012.current_mEndOfExpressionLocation (HERE), var_exp_9724, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 191)) ;
        }
        var_constructorEffectiveParameterList_8943.addAssign_operation (var_exp_9724  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 192)) ;
        enumerator_9012.gotoNextObject () ;
        enumerator_9077.gotoNextObject () ;
      }
      const GALGAS_templateGetterCallInExpressionAST temp_43 = object ;
      const GALGAS_templateGetterCallInExpressionAST temp_44 = object ;
      outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_6023, temp_43.readProperty_mGetterName ().readProperty_location (), var_kind_5946, var_receiverExpression_3977, var_fieldList_6041, temp_44.readProperty_mGetterName ().readProperty_string (), var_constructorEffectiveParameterList_8943, var_hasCompilerArgument_5980  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 194)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST.mSlotID,
                                                   extensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateGetterCallInExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateConstructorAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateConstructorAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateConstructorAST * object = (const cPtr_templateConstructorAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateConstructorAST) ;
  const GALGAS_templateConstructorAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_constructorType_10821 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 218)) ;
  GALGAS_constructorMap var_constructorMap_10995 = var_constructorType_10821.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 220)) ;
  GALGAS_unifiedTypeMap_2D_entry var_returnedType_11095 ;
  GALGAS_bool var_hasCompilerArgument_11127 ;
  GALGAS_functionSignature var_constructorFormalArgumentTypeList_11186 ;
  const GALGAS_templateConstructorAST temp_1 = object ;
  const cMapElement_constructorMap * objectArray_11193 = (const cMapElement_constructorMap *) var_constructorMap_10995.readAccessForWithInstruction (temp_1.readProperty_mConstructorName ().readProperty_string ()) ;
  if (NULL != objectArray_11193) {
      macroValidSharedObject (objectArray_11193, cMapElement_constructorMap) ;
    var_constructorFormalArgumentTypeList_11186 = objectArray_11193->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_11127 = objectArray_11193->mProperty_mHasCompilerArgument ;
    var_returnedType_11095 = objectArray_11193->mProperty_mReturnedType ;
  }else{
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_constructorMap_10995.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 230)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_templateConstructorAST temp_3 = object ;
        const GALGAS_templateConstructorAST temp_4 = object ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 232)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 232)), fixItArray5  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 231)) ;
        var_constructorFormalArgumentTypeList_11186.drop () ; // Release error dropped variable
        var_hasCompilerArgument_11127.drop () ; // Release error dropped variable
        var_returnedType_11095.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_templateConstructorAST temp_6 = object ;
      const GALGAS_templateConstructorAST temp_7 = object ;
      const GALGAS_templateConstructorAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      appendFixItActions (fixItArray9, kFixItReplace, var_constructorMap_10995.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 238))) ;
      inCompiler->emitSemanticError (temp_6.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_7.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 236)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 236)).add_operation (temp_8.readProperty_mConstructorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 236)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 236)), fixItArray9  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 235)) ;
      var_constructorFormalArgumentTypeList_11186.drop () ; // Release error dropped variable
      var_hasCompilerArgument_11127.drop () ; // Release error dropped variable
      var_returnedType_11095.drop () ; // Release error dropped variable
    }
  }
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_12008 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_templateConstructorAST temp_11 = object ;
    test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 243)).objectCompare (var_constructorFormalArgumentTypeList_11186.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 243)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_templateConstructorAST temp_12 = object ;
      const GALGAS_templateConstructorAST temp_13 = object ;
      const GALGAS_templateConstructorAST temp_14 = object ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mConstructorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (var_constructorType_10821.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (var_constructorFormalArgumentTypeList_11186.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 246)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)).add_operation (temp_14.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 247)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 247)), fixItArray15  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)) ;
      var_constructorEffectiveParameterList_12008.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_constructorEffectiveParameterList_12008 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 250)) ;
    const GALGAS_templateConstructorAST temp_16 = object ;
    cEnumerator_templateExpressionListAST enumerator_12587 (temp_16.readProperty_mExpressionList (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_12652 (var_constructorFormalArgumentTypeList_11186, kENUMERATION_UP) ;
    while (enumerator_12587.hasCurrentObject () && enumerator_12652.hasCurrentObject ()) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsNotEqual, enumerator_12652.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_12587.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_12652.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = enumerator_12652.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)) ;
          }else if (kBoolFalse == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_12770 = GALGAS_string ("!").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)) ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          appendFixItActions (fixItArray20, kFixItReplace, var_s_12770) ;
          inCompiler->emitSemanticError (enumerator_12587.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12770, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)), fixItArray20  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_13295 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_12587.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_exp_13295, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 258)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_12652.current_mFormalArgumentType (HERE), var_exp_13295.readProperty_mResultType (), enumerator_12587.current_mEndOfExpressionLocation (HERE), var_exp_13295, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 264)) ;
      }
      var_constructorEffectiveParameterList_12008.addAssign_operation (var_exp_13295  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 265)) ;
      enumerator_12587.gotoNextObject () ;
      enumerator_12652.gotoNextObject () ;
    }
  }
  const GALGAS_templateConstructorAST temp_21 = object ;
  const GALGAS_templateConstructorAST temp_22 = object ;
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_11095, temp_21.readProperty_mConstructorName ().readProperty_location (), var_constructorType_10821, temp_22.readProperty_mConstructorName ().readProperty_string (), var_constructorEffectiveParameterList_12008, var_hasCompilerArgument_11127  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 269)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateConstructorAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateConstructorAST.mSlotID,
                                                   extensionMethod_templateConstructorAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateConstructorAST_templateExpressionAnalysis (defineExtensionMethod_templateConstructorAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFileWrapperTemplateCallAST * object = (const cPtr_templateFileWrapperTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFileWrapperTemplateCallAST) ;
  const GALGAS_templateFileWrapperTemplateCallAST temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mFileWrapperName ().readProperty_location (), GALGAS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 288)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST.mSlotID,
                                                   extensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (defineExtensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateAndOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateAndOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAndOperationAST * object = (const cPtr_templateAndOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAndOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_15282 ;
  const GALGAS_templateAndOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_15282, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 302)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15508 ;
  const GALGAS_templateAndOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_15508, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 309)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_15583 = var_leftExpression_15282.readProperty_mResultType () ;
  {
  const GALGAS_templateAndOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_15583, var_rightExpression_15508.readProperty_mResultType (), var_leftType_15583.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 320)).getter_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas", 320)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_15508, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 317)) ;
  }
  const GALGAS_templateAndOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_15583, temp_3.readProperty_mOperatorLocation (), var_leftExpression_15282, GALGAS_binaryOperator::constructor_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas", 330)), var_rightExpression_15508  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 326)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateAndOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAndOperationAST.mSlotID,
                                                   extensionMethod_templateAndOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateAndOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateAndOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateOrOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateOrOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOrOperationAST * object = (const cPtr_templateOrOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOrOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_16609 ;
  const GALGAS_templateOrOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_16609, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 344)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16835 ;
  const GALGAS_templateOrOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_16835, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 351)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_16910 = var_leftExpression_16609.readProperty_mResultType () ;
  {
  const GALGAS_templateOrOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_16910, var_rightExpression_16835.readProperty_mResultType (), var_leftType_16910.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 362)).getter_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas", 362)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_16835, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 359)) ;
  }
  const GALGAS_templateOrOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_16910, temp_3.readProperty_mOperatorLocation (), var_leftExpression_16609, GALGAS_binaryOperator::constructor_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas", 372)), var_rightExpression_16835  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 368)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateOrOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOrOperationAST.mSlotID,
                                                   extensionMethod_templateOrOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateOrOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateOrOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateXorOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateXorOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateXorOperationAST * object = (const cPtr_templateXorOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateXorOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_17935 ;
  const GALGAS_templateXorOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_17935, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 386)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_18161 ;
  const GALGAS_templateXorOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_18161, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 393)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_18236 = var_leftExpression_17935.readProperty_mResultType () ;
  {
  const GALGAS_templateXorOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_18236, var_rightExpression_18161.readProperty_mResultType (), var_leftType_18236.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 404)).getter_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas", 404)), GALGAS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_18161, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 401)) ;
  }
  const GALGAS_templateXorOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_18236, temp_3.readProperty_mOperatorLocation (), var_leftExpression_17935, GALGAS_binaryOperator::constructor_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas", 414)), var_rightExpression_18161  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 410)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateXorOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateXorOperationAST.mSlotID,
                                                   extensionMethod_templateXorOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateXorOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateXorOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateTrueBoolAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateTrueBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                            const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateTrueBoolAST * object = (const cPtr_templateTrueBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateTrueBoolAST) ;
  const GALGAS_templateTrueBoolAST temp_0 = object ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 427)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateTrueBoolAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateTrueBoolAST.mSlotID,
                                                   extensionMethod_templateTrueBoolAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateTrueBoolAST_templateExpressionAnalysis (defineExtensionMethod_templateTrueBoolAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFalseBoolAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateFalseBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                             const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFalseBoolAST * object = (const cPtr_templateFalseBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFalseBoolAST) ;
  const GALGAS_templateFalseBoolAST temp_0 = object ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 438)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateFalseBoolAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFalseBoolAST.mSlotID,
                                                   extensionMethod_templateFalseBoolAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateFalseBoolAST_templateExpressionAnalysis (defineExtensionMethod_templateFalseBoolAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralStringExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralStringExpressionAST * object = (const cPtr_templateLiteralStringExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralStringExpressionAST) ;
  GALGAS_string var_s_20109 = GALGAS_string::makeEmptyString () ;
  const GALGAS_templateLiteralStringExpressionAST temp_0 = object ;
  cEnumerator_stringlist enumerator_20128 (temp_0.readProperty_mLiteralStringList (), kENUMERATION_UP) ;
  while (enumerator_20128.hasCurrentObject ()) {
    var_s_20109.plusAssign_operation(enumerator_20128.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 451)) ;
    enumerator_20128.gotoNextObject () ;
  }
  const GALGAS_templateLiteralStringExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_20109  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 453)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralUIntExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUIntExpressionAST * object = (const cPtr_templateLiteralUIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUIntExpressionAST) ;
  const GALGAS_templateLiteralUIntExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralUIntExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_uint ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 464)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralSIntExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSIntExpressionAST * object = (const cPtr_templateLiteralSIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSIntExpressionAST) ;
  const GALGAS_templateLiteralSIntExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralSIntExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mSIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_sint ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 478)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralUInt64ExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralUInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
  const GALGAS_templateLiteralUInt_36__34_ExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralUInt_36__34_ExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUInt_36__34_Type (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_uint_36__34_ ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 492)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralSInt64ExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralSInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
  const GALGAS_templateLiteralSInt_36__34_ExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralSInt_36__34_ExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mSInt_36__34_Type (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_sint_36__34_ ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 506)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralCharExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralCharExpressionAST * object = (const cPtr_templateLiteralCharExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralCharExpressionAST) ;
  const GALGAS_templateLiteralCharExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralCharExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mLiteralChar ().readProperty_location (), temp_1.readProperty_mLiteralChar ().readProperty_char ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 520)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralDoubleExpressionAST * object = (const cPtr_templateLiteralDoubleExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralDoubleExpressionAST) ;
  const GALGAS_templateLiteralDoubleExpressionAST temp_0 = object ;
  const GALGAS_templateLiteralDoubleExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mLiteralDouble ().readProperty_location (), temp_1.readProperty_mLiteralDouble ().readProperty_double ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 533)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateNotOperatorAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateNotOperatorAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNotOperatorAST * object = (const cPtr_templateNotOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNotOperatorAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_24283 ;
  const GALGAS_templateNotOperatorAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_24283, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 550)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_24502 = var_expression_24283.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_24502.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 558)).getter_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas", 558)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 558)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateNotOperatorAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_24502.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 560)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 560)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 559)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateNotOperatorAST temp_4 = object ;
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_24502, temp_4.readProperty_mOperatorLocation (), var_expression_24283  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 564)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateNotOperatorAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNotOperatorAST.mSlotID,
                                                   extensionMethod_templateNotOperatorAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateNotOperatorAST_templateExpressionAnalysis (defineExtensionMethod_templateNotOperatorAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLogicalNegateAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLogicalNegateAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLogicalNegateAST * object = (const cPtr_templateLogicalNegateAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLogicalNegateAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_25351 ;
  const GALGAS_templateLogicalNegateAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_25351, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 582)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_25569 = var_expression_25351.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_25569.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 590)).getter_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas", 590)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 590)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateLogicalNegateAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_25569.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 592)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 592)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 591)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateLogicalNegateAST temp_4 = object ;
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_25569, temp_4.readProperty_mOperatorLocation (), var_expression_25351  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 596)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLogicalNegateAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLogicalNegateAST.mSlotID,
                                                   extensionMethod_templateLogicalNegateAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLogicalNegateAST_templateExpressionAnalysis (defineExtensionMethod_templateLogicalNegateAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateTestDynamicClassAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateTestDynamicClassAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateTestDynamicClassAST * object = (const cPtr_templateTestDynamicClassAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateTestDynamicClassAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_26427 ;
  const GALGAS_templateTestDynamicClassAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_26427, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 613)) ;
  const GALGAS_templateTestDynamicClassAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_castType_26629 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_1.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 620)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_expression_26427.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 622)).getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 622)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMap_2D_entry var_t_26914 = var_castType_26629 ;
      GALGAS_bool var_found_26945 = GALGAS_bool (kIsEqual, var_t_26914.objectCompare (var_expression_26427.readProperty_mResultType ())) ;
      if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 626)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 626)).isValid ()) {
        uint32_t variant_26984 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 626)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 626)).uintValue () ;
        bool loop_26984 = true ;
        while (loop_26984) {
          loop_26984 = var_found_26945.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 627)).operator_and (var_t_26914.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 627)).getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 627)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 627)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 627)).isValid () ;
          if (loop_26984) {
            loop_26984 = var_found_26945.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 627)).operator_and (var_t_26914.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 627)).getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 627)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 627)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 627)).boolValue () ;
          }
          if (loop_26984 && (0 == variant_26984)) {
            loop_26984 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("templateAnalysis.galgas", 626)) ;
          }
          if (loop_26984) {
            variant_26984 -- ;
            var_t_26914 = var_t_26914.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 628)) ;
            var_found_26945 = GALGAS_bool (kIsEqual, var_t_26914.objectCompare (var_expression_26427.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_26945.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 631)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_templateTestDynamicClassAST temp_4 = object ;
          const GALGAS_templateTestDynamicClassAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)).add_operation (var_expression_26427.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 632)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_26427.readProperty_mLocation (), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_expression_26427.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 636)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 637)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 636)) ;
  }
  const GALGAS_templateTestDynamicClassAST temp_8 = object ;
  const GALGAS_templateTestDynamicClassAST temp_9 = object ;
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_26427, temp_9.readProperty_mTypeComparisonKind (), var_castType_26629  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 640)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateTestDynamicClassAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateTestDynamicClassAST.mSlotID,
                                                   extensionMethod_templateTestDynamicClassAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateTestDynamicClassAST_templateExpressionAnalysis (defineExtensionMethod_templateTestDynamicClassAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateOptionAccessAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateOptionAccessAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOptionAccessAST * object = (const cPtr_templateOptionAccessAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOptionAccessAST) ;
  const GALGAS_templateOptionAccessAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_28151 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 656)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_28151 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 657)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_28458 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_28503 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_28548 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_28595 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_28646 ;
  const GALGAS_templateOptionAccessAST temp_1 = object ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_28458, var_boolOptionMap_28503, var_uintOptionMap_28548, var_stringOptionMap_28595, var_stringListOptionMap_28646, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 658)) ;
  const GALGAS_templateOptionAccessAST temp_2 = object ;
  GALGAS_bool var_found_28662 = var_boolOptionMap_28503.getter_hasKey (temp_2.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 666)) ;
  GALGAS_unifiedTypeMap_2D_entry var_returnedType_28753 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_28662.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 668)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_templateOptionAccessAST temp_4 = object ;
      var_found_28662 = var_uintOptionMap_28548.getter_hasKey (temp_4.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 669)) ;
      var_returnedType_28753 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_28662.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 672)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_templateOptionAccessAST temp_6 = object ;
      var_found_28662 = var_stringOptionMap_28595.getter_hasKey (temp_6.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 673)) ;
      var_returnedType_28753 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_28662.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 676)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_templateOptionAccessAST temp_8 = object ;
      var_found_28662 = var_stringListOptionMap_28646.getter_hasKey (temp_8.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 677)) ;
      var_returnedType_28753 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_28662.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_templateOptionAccessAST temp_11 = object ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_templateOptionAccessAST temp_12 = object ;
          const GALGAS_templateOptionAccessAST temp_13 = object ;
          const GALGAS_templateOptionAccessAST temp_14 = object ;
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_28753, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28458, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 682)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          const GALGAS_templateOptionAccessAST temp_16 = object ;
          test_15 = GALGAS_bool (kIsEqual, temp_16.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("char"))).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_templateOptionAccessAST temp_17 = object ;
            const GALGAS_templateOptionAccessAST temp_18 = object ;
            const GALGAS_templateOptionAccessAST temp_19 = object ;
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28458, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 690)) ;
          }
        }
        if (kBoolFalse == test_15) {
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            const GALGAS_templateOptionAccessAST temp_21 = object ;
            test_20 = GALGAS_bool (kIsEqual, temp_21.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_20) {
              const GALGAS_templateOptionAccessAST temp_22 = object ;
              const GALGAS_templateOptionAccessAST temp_23 = object ;
              const GALGAS_templateOptionAccessAST temp_24 = object ;
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28458, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 698)) ;
            }
          }
          if (kBoolFalse == test_20) {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              const GALGAS_templateOptionAccessAST temp_26 = object ;
              test_25 = GALGAS_bool (kIsEqual, temp_26.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("comment"))).boolEnum () ;
              if (kBoolTrue == test_25) {
                const GALGAS_templateOptionAccessAST temp_27 = object ;
                const GALGAS_templateOptionAccessAST temp_28 = object ;
                const GALGAS_templateOptionAccessAST temp_29 = object ;
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_28458, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 706)) ;
              }
            }
            if (kBoolFalse == test_25) {
              const GALGAS_templateOptionAccessAST temp_30 = object ;
              TC_Array <C_FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 714)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_stringset var_s_30757 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("templateAnalysis.galgas", 717)) ;
    cEnumerator_commandLineOptionMap enumerator_30784 (var_boolOptionMap_28503, kENUMERATION_UP) ;
    while (enumerator_30784.hasCurrentObject ()) {
      var_s_30757.addAssign_operation (enumerator_30784.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 719)) ;
      enumerator_30784.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_30852 (var_uintOptionMap_28548, kENUMERATION_UP) ;
    while (enumerator_30852.hasCurrentObject ()) {
      var_s_30757.addAssign_operation (enumerator_30852.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 722)) ;
      enumerator_30852.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_30920 (var_stringOptionMap_28595, kENUMERATION_UP) ;
    while (enumerator_30920.hasCurrentObject ()) {
      var_s_30757.addAssign_operation (enumerator_30920.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 725)) ;
      enumerator_30920.gotoNextObject () ;
    }
    const GALGAS_templateOptionAccessAST temp_32 = object ;
    const GALGAS_templateOptionAccessAST temp_33 = object ;
    const GALGAS_templateOptionAccessAST temp_34 = object ;
    TC_Array <C_FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_30757) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 728)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 728)).add_operation (temp_34.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 728)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 728)), fixItArray35  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 727)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateOptionAccessAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOptionAccessAST.mSlotID,
                                                   extensionMethod_templateOptionAccessAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateOptionAccessAST_templateExpressionAnalysis (defineExtensionMethod_templateOptionAccessAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFunctionCallAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateFunctionCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFunctionCallAST * object = (const cPtr_templateFunctionCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFunctionCallAST) ;
  const GALGAS_templateFunctionCallAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_31738 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 744)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_31738 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 745)) ;
  }
  GALGAS_functionSignature var_functionSignature_32042 ;
  GALGAS_unifiedTypeMap_2D_entry var_resultType_32084 ;
  GALGAS_bool var_isInternal_32110 ;
  const GALGAS_templateFunctionCallAST temp_1 = object ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_32042, var_resultType_32084, var_isInternal_32110, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 747)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_32110.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateFunctionCallAST temp_3 = object ;
      GALGAS_location var_procDeclarationLocation_32187 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 755)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_templateFunctionCallAST temp_5 = object ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 756)).objectCompare (var_procDeclarationLocation_32187.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 756)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_templateFunctionCallAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_32187.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 757)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 757)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 757)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_templateFunctionCallAST temp_9 = object ;
    test_8 = GALGAS_bool (kIsNotEqual, var_functionSignature_32042.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 761)).objectCompare (temp_9.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 761)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_templateFunctionCallAST temp_10 = object ;
      const GALGAS_templateFunctionCallAST temp_11 = object ;
      const GALGAS_templateFunctionCallAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 763)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 763)).add_operation (var_functionSignature_32042.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 763)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 763)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 763)).add_operation (temp_12.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 764)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 764)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 764)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 764)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 762)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_32926 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 768)) ;
    const GALGAS_templateFunctionCallAST temp_14 = object ;
    cEnumerator_functionSignature enumerator_33014 (var_functionSignature_32042, kENUMERATION_UP) ;
    cEnumerator_templateExpressionListAST enumerator_33091 (temp_14.readProperty_mExpressionList (), kENUMERATION_UP) ;
    while (enumerator_33014.hasCurrentObject () && enumerator_33091.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_33315 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_33091.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_33315, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 770)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_33014.current_mFormalArgumentType (HERE), var_expression_33315.readProperty_mResultType (), enumerator_33091.current_mEndOfExpressionLocation (HERE), var_expression_33315, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 776)) ;
      }
      var_semanticExpressionListForGeneration_32926.addAssign_operation (var_expression_33315  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 777)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_33014.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_33091.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_33014.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_33014.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 779)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_33591 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 779)) ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_33591) ;
          inCompiler->emitSemanticError (enumerator_33091.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_33591, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 780)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 780)), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 780)) ;
        }
      }
      enumerator_33014.gotoNextObject () ;
      enumerator_33091.gotoNextObject () ;
    }
    const GALGAS_templateFunctionCallAST temp_19 = object ;
    const GALGAS_templateFunctionCallAST temp_20 = object ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_32084, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_32926  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 784)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateFunctionCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFunctionCallAST.mSlotID,
                                                   extensionMethod_templateFunctionCallAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateFunctionCallAST_templateExpressionAnalysis (defineExtensionMethod_templateFunctionCallAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateExtensionTemplateCallAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                         const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateExtensionTemplateCallAST * object = (const cPtr_templateExtensionTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateExtensionTemplateCallAST) ;
  const GALGAS_templateExtensionTemplateCallAST temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mTemplateName ().readProperty_location (), GALGAS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 802)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST.mSlotID,
                                                   extensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (defineExtensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateVarInExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateVarInExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateVarInExpressionAST * object = (const cPtr_templateVarInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateVarInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_35462 ;
  GALGAS_string var_sourceVariableCppName_35498 ;
  const GALGAS_templateVarInExpressionAST temp_0 = object ;
  constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap ().method_searchKey (temp_0.readProperty_mVarName (), var_type_35462, var_sourceVariableCppName_35498, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 819)) ;
  const GALGAS_templateVarInExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_35462, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_35498, var_sourceVariableCppName_35498  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 820)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateVarInExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateVarInExpressionAST.mSlotID,
                                                   extensionMethod_templateVarInExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateVarInExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateVarInExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateAddOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateAddOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAddOperationAST * object = (const cPtr_templateAddOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAddOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_36518 ;
  const GALGAS_templateAddOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_36518, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 838)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_36744 ;
  const GALGAS_templateAddOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_36744, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 845)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_36819 = var_leftExpression_36518.readProperty_mResultType () ;
  {
  const GALGAS_templateAddOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_36819, var_rightExpression_36744.readProperty_mResultType (), var_leftType_36819.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 856)).getter_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas", 856)), GALGAS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_36744, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 853)) ;
  }
  const GALGAS_templateAddOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_36819, temp_3.readProperty_mOperatorLocation (), var_leftExpression_36518, GALGAS_binaryOperator::constructor_add (SOURCE_FILE ("templateAnalysis.galgas", 866)), var_rightExpression_36744  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 862)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateAddOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAddOperationAST.mSlotID,
                                                   extensionMethod_templateAddOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateAddOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateAddOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateSubOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateSubOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSubOperationAST * object = (const cPtr_templateSubOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSubOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_38078 ;
  const GALGAS_templateSubOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_38078, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 882)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_38304 ;
  const GALGAS_templateSubOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_38304, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 889)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_38379 = var_leftExpression_38078.readProperty_mResultType () ;
  {
  const GALGAS_templateSubOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_38379, var_rightExpression_38304.readProperty_mResultType (), var_leftType_38379.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 900)).getter_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas", 900)), GALGAS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_38304, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 897)) ;
  }
  const GALGAS_templateSubOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_38379, temp_3.readProperty_mOperatorLocation (), var_leftExpression_38078, GALGAS_binaryOperator::constructor_sub (SOURCE_FILE ("templateAnalysis.galgas", 910)), var_rightExpression_38304  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 906)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateSubOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSubOperationAST.mSlotID,
                                                   extensionMethod_templateSubOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateSubOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateSubOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateMultiplyOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateMultiplyOperationAST * object = (const cPtr_templateMultiplyOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateMultiplyOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_39643 ;
  const GALGAS_templateMultiplyOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_39643, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 926)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_39869 ;
  const GALGAS_templateMultiplyOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_39869, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 933)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_39944 = var_leftExpression_39643.readProperty_mResultType () ;
  {
  const GALGAS_templateMultiplyOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_39944, var_rightExpression_39869.readProperty_mResultType (), var_leftType_39944.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 944)).getter_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas", 944)), GALGAS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_39869, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 941)) ;
  }
  const GALGAS_templateMultiplyOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_39944, temp_3.readProperty_mOperatorLocation (), var_leftExpression_39643, GALGAS_binaryOperator::constructor_multiply_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 954)), var_rightExpression_39869  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 950)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateMultiplyOperationAST.mSlotID,
                                                   extensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateMultiplyOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateDivideOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateDivideOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateDivideOperationAST * object = (const cPtr_templateDivideOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateDivideOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_41145 ;
  const GALGAS_templateDivideOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_41145, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 970)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_41371 ;
  const GALGAS_templateDivideOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_41371, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 977)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_41446 = var_leftExpression_41145.readProperty_mResultType () ;
  {
  const GALGAS_templateDivideOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_41446, var_rightExpression_41371.readProperty_mResultType (), var_leftType_41446.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 988)).getter_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas", 988)), GALGAS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_41371, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 985)) ;
  }
  const GALGAS_templateDivideOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_41446, temp_3.readProperty_mOperatorLocation (), var_leftExpression_41145, GALGAS_binaryOperator::constructor_divide_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 998)), var_rightExpression_41371  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 994)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateDivideOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateDivideOperationAST.mSlotID,
                                                   extensionMethod_templateDivideOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateDivideOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateDivideOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateModuloOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateModuloOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateModuloOperationAST * object = (const cPtr_templateModuloOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateModuloOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_42645 ;
  const GALGAS_templateModuloOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_42645, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1014)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_42871 ;
  const GALGAS_templateModuloOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_42871, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1021)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_42946 = var_leftExpression_42645.readProperty_mResultType () ;
  {
  const GALGAS_templateModuloOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_42946, var_rightExpression_42871.readProperty_mResultType (), var_leftType_42946.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1032)).getter_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas", 1032)), GALGAS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_42871, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1029)) ;
  }
  const GALGAS_templateModuloOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_42946, temp_3.readProperty_mOperatorLocation (), var_leftExpression_42645, GALGAS_binaryOperator::constructor_modulo_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 1042)), var_rightExpression_42871  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1038)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateModuloOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateModuloOperationAST.mSlotID,
                                                   extensionMethod_templateModuloOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateModuloOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateModuloOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateUnaryMinusOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateUnaryMinusOperationAST * object = (const cPtr_templateUnaryMinusOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateUnaryMinusOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_44003 ;
  const GALGAS_templateUnaryMinusOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_44003, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1059)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_44221 = var_expression_44003.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_44221.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1067)).getter_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas", 1067)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1067)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateUnaryMinusOperationAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_44221.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1069)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1069)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1069)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1068)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateUnaryMinusOperationAST temp_4 = object ;
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_44221, temp_4.readProperty_mOperatorLocation (), var_expression_44003  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1073)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST.mSlotID,
                                                   extensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessTemplateExpressionAST * object = (const cPtr_structFieldAccessTemplateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessTemplateExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_45472 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_45472, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1091)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_45546 = var_expression_45472.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = GALGAS_bool (kIsNotEqual, var_type_45546.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1099)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 1099)))) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = var_type_45546.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1099)).getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 1099)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1099)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structFieldAccessTemplateExpressionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructFieldName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct ou a class"), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1100)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_45784 = var_type_45546.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1102)) ;
  GALGAS_bool var_isPublic_45868 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_5 = object ;
  GALGAS_bool joker_45870 ; // Joker input parameter
  var_propertyMap_45784.method_searchKey (temp_5.readProperty_mStructFieldName (), var_isPublic_45868, joker_45870, var_type_45546, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1103)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isPublic_45868.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1104)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_structFieldAccessTemplateExpressionAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mStructFieldName ().readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1105)) ;
    }
  }
  const GALGAS_structFieldAccessTemplateExpressionAST temp_9 = object ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_10 = object ;
  outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_type_45546, temp_9.readProperty_mOperatorLocation (), var_expression_45472, temp_10.readProperty_mStructFieldName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1108)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST.mSlotID,
                                                   extensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (defineExtensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateEqualTestAST * object = (const cPtr_templateEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_46958 ;
  const GALGAS_templateEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_46958, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1127)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_47188 ;
  const GALGAS_templateEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_47188, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1134)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_47263 = var_leftExpression_46958.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_47330 = var_rightExpression_47188.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftType_47263.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1143)).readProperty_string ().objectCompare (var_rightType_47330.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1143)).readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_47263.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1145)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1145)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1145)).add_operation (var_rightType_47330.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1145)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1145)).add_operation (GALGAS_string ("': '==' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1145)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1144)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_templateEqualTestAST temp_5 = object ;
    outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_46958, GALGAS_comparison::constructor_equal (SOURCE_FILE ("templateAnalysis.galgas", 1153)), var_rightExpression_47188  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1149)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateEqualTestAST.mSlotID,
                                                   extensionMethod_templateEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateNonEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateNonEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNonEqualTestAST * object = (const cPtr_templateNonEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNonEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_48484 ;
  const GALGAS_templateNonEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_48484, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1168)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_48714 ;
  const GALGAS_templateNonEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_48714, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1175)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_48789 = var_leftExpression_48484.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_48856 = var_rightExpression_48714.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftType_48789.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1184)).readProperty_string ().objectCompare (var_rightType_48856.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1184)).readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateNonEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_48789.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)).add_operation (var_rightType_48856.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)).add_operation (GALGAS_string ("': '!=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1185)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_templateNonEqualTestAST temp_5 = object ;
    outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_48484, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("templateAnalysis.galgas", 1194)), var_rightExpression_48714  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1190)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateNonEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNonEqualTestAST.mSlotID,
                                                   extensionMethod_templateNonEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateNonEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateNonEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateStrictInfTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateStrictInfTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictInfTestAST * object = (const cPtr_templateStrictInfTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictInfTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_50012 ;
  const GALGAS_templateStrictInfTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_50012, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1209)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_50242 ;
  const GALGAS_templateStrictInfTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_50242, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1216)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_50317 = var_leftExpression_50012.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_50384 = var_rightExpression_50242.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_50317.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1225)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1225)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1225)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateStrictInfTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_50317.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1227)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1227)).add_operation (GALGAS_string ("' and does not support the '<' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1227)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1226)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_50317.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1229)).objectCompare (var_rightType_50384.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1229)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateStrictInfTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_50317.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)).add_operation (var_rightType_50384.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)).add_operation (GALGAS_string ("': '<' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1230)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateStrictInfTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_50012, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("templateAnalysis.galgas", 1239)), var_rightExpression_50242  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1235)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateStrictInfTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictInfTestAST.mSlotID,
                                                   extensionMethod_templateStrictInfTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateStrictInfTestAST_templateExpressionAnalysis (defineExtensionMethod_templateStrictInfTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInfOrEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInfOrEqualTestAST * object = (const cPtr_templateInfOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInfOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_51735 ;
  const GALGAS_templateInfOrEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_51735, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1254)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_51965 ;
  const GALGAS_templateInfOrEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_51965, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1261)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_52040 = var_leftExpression_51735.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_52107 = var_rightExpression_51965.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_52040.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1270)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1270)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1270)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateInfOrEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_52040.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1272)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1272)).add_operation (GALGAS_string ("' and does not support the '<=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1272)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1271)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_52040.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1274)).objectCompare (var_rightType_52107.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1274)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateInfOrEqualTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_52040.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)).add_operation (var_rightType_52107.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)).add_operation (GALGAS_string ("': '<=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1275)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateInfOrEqualTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_51735, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1284)), var_rightExpression_51965  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1280)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateInfOrEqualTestAST.mSlotID,
                                                   extensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateStrictSupTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateStrictSupTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictSupTestAST * object = (const cPtr_templateStrictSupTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictSupTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_53462 ;
  const GALGAS_templateStrictSupTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_53462, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1299)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_53692 ;
  const GALGAS_templateStrictSupTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_53692, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1306)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_53767 = var_leftExpression_53462.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_53834 = var_rightExpression_53692.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_53767.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1315)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1315)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1315)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateStrictSupTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_53767.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1317)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1317)).add_operation (GALGAS_string ("' and does not support the '>' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1317)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1316)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_53767.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1319)).objectCompare (var_rightType_53834.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1319)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateStrictSupTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_53767.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)).add_operation (var_rightType_53834.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)).add_operation (GALGAS_string ("': '>' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1320)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateStrictSupTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_53462, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("templateAnalysis.galgas", 1329)), var_rightExpression_53692  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1325)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateStrictSupTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictSupTestAST.mSlotID,
                                                   extensionMethod_templateStrictSupTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateStrictSupTestAST_templateExpressionAnalysis (defineExtensionMethod_templateStrictSupTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateSupOrEqualTestAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSupOrEqualTestAST * object = (const cPtr_templateSupOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSupOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_55187 ;
  const GALGAS_templateSupOrEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_55187, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1344)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_55417 ;
  const GALGAS_templateSupOrEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_55417, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1351)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_55492 = var_leftExpression_55187.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_55559 = var_rightExpression_55417.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_55492.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1360)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1360)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1360)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateSupOrEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_55492.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1362)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1362)).add_operation (GALGAS_string ("' and does not support the '>=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1362)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1361)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_55492.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1364)).objectCompare (var_rightType_55559.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1364)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateSupOrEqualTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_55492.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1366)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1366)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1366)).add_operation (var_rightType_55559.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1366)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1366)).add_operation (GALGAS_string ("': '>=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1366)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1365)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateSupOrEqualTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_55187, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1374)), var_rightExpression_55417  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1370)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSupOrEqualTestAST.mSlotID,
                                                   extensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLeftShiftOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLeftShiftOperationAST * object = (const cPtr_templateLeftShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLeftShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_56921 ;
  const GALGAS_templateLeftShiftOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_56921, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1389)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_57151 ;
  const GALGAS_templateLeftShiftOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_57151, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1396)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_57226 = var_leftExpression_56921.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_57293 = var_rightExpression_57151.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_57226.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1405)).getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1405)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1405)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateLeftShiftOperationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_57226.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1407)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1407)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1407)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1406)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_rightType_57293.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1409)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateLeftShiftOperationAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_57293.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1411)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1411)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1411)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1410)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateLeftShiftOperationAST temp_8 = object ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_57226, temp_8.readProperty_mOperatorLocation (), var_leftExpression_56921, GALGAS_binaryOperator::constructor_leftShift (SOURCE_FILE ("templateAnalysis.galgas", 1419)), var_rightExpression_57151  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1415)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLeftShiftOperationAST.mSlotID,
                                                   extensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateRightShiftOperationAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateRightShiftOperationAST * object = (const cPtr_templateRightShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateRightShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_58565 ;
  const GALGAS_templateRightShiftOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_58565, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1434)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_58795 ;
  const GALGAS_templateRightShiftOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_58795, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1441)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_58870 = var_leftExpression_58565.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_58937 = var_rightExpression_58795.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_58870.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1450)).getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1450)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1450)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateRightShiftOperationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_58870.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1452)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1452)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1452)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1451)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_rightType_58937.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1454)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateRightShiftOperationAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_58937.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1456)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1456)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1456)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1455)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateRightShiftOperationAST temp_8 = object ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_58870, temp_8.readProperty_mOperatorLocation (), var_leftExpression_58565, GALGAS_binaryOperator::constructor_rightShift (SOURCE_FILE ("templateAnalysis.galgas", 1464)), var_rightExpression_58795  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1460)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateRightShiftOperationAST.mSlotID,
                                                   extensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateRightShiftOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                              const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                              const GALGAS_templateInstructionListAST constinArgument_inInstructionList,
                                              GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListAST enumerator_60681 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_60681.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((const cPtr_templateInstructionAST *) enumerator_60681.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1492)) ;
    enumerator_60681.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionStringAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionStringAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                      const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionStringAST * object = (const cPtr_templateInstructionStringAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionStringAST) ;
  const GALGAS_templateInstructionStringAST temp_0 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionStringForGeneration::constructor_new (temp_0.readProperty_mTemplateString ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1509))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1509)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionStringAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionStringAST.mSlotID,
                                                    extensionMethod_templateInstructionStringAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionStringAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionStringAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionExpressionAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionExpressionAST * object = (const cPtr_templateInstructionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_61854 ;
  const GALGAS_templateInstructionExpressionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_61854, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1521)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_61854.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1527)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionExpressionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GALGAS_string ("expression type should be '@string' (it is '@").add_operation (var_expression_61854.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1528)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1528)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1528)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1528)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionForGeneration::constructor_new (var_expression_61854  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1530))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1530)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionExpressionAST.mSlotID,
                                                    extensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionExpressionAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateBlockInstructionAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateBlockInstructionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateBlockInstructionAST * object = (const cPtr_templateBlockInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateBlockInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_62712 ;
  const GALGAS_templateBlockInstructionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_62712, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1542)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_62712.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1548)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateBlockInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GALGAS_string ("expression type should be '@uint' (it is '@").add_operation (var_expression_62712.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1549)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1549)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1549)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1549)) ;
    }
  }
  GALGAS_templateInstructionListForGeneration var_blockInstructionList_63055 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1551)) ;
  {
  const GALGAS_templateBlockInstructionAST temp_4 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_4.readProperty_mBlockInstructionList (), var_blockInstructionList_63055, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1552)) ;
  }
  const GALGAS_templateBlockInstructionAST temp_5 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateBlockInstructionForGeneration::constructor_new (var_expression_62712, temp_5.readProperty_mLocation (), var_blockInstructionList_63055  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1559))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1559)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateBlockInstructionAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateBlockInstructionAST.mSlotID,
                                                    extensionMethod_templateBlockInstructionAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateBlockInstructionAST_templateInstructionAnalysis (defineExtensionMethod_templateBlockInstructionAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                 const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                 GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1570))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1570)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST.mSlotID,
                                                    extensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                  const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                  const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                  GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1581))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1581)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST.mSlotID,
                                                    extensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionIfAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionIfAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfAST * object = (const cPtr_templateInstructionIfAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfAST) ;
  GALGAS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList_64868 = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1593)) ;
  const GALGAS_templateInstructionIfAST temp_0 = object ;
  cEnumerator_templateInstructionIfBranchListAST enumerator_64954 (temp_0.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_64954.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_65051 ;
    callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_64954.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_65051, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1596)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_expression_65051.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1602)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_65051.readProperty_mLocation (), GALGAS_string ("'if' expression type should be '@bool' (it is '@").add_operation (var_expression_65051.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)) ;
      }
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_65413 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1605)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, enumerator_64954.current_mInstructionList (HERE), var_instructionList_65413, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1606)) ;
    }
    var_templateInstructionIfBranchList_64868.addAssign_operation (var_expression_65051, var_instructionList_65413  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1613)) ;
    enumerator_64954.gotoNextObject () ;
  }
  GALGAS_templateInstructionListForGeneration var_elseInstructionList_65743 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1616)) ;
  {
  const GALGAS_templateInstructionIfAST temp_3 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_65743, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1617)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionIfForGeneration::constructor_new (var_templateInstructionIfBranchList_64868, var_elseInstructionList_65743  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1625))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1625)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionIfAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionIfAST.mSlotID,
                                                    extensionMethod_templateInstructionIfAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionIfAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionIfAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction (const GALGAS_templateInstructionListForGeneration constinArgument_inInstructionList,
                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListForGeneration enumerator_2002 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_2002.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((const cPtr_templateInstructionForGeneration *) enumerator_2002.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 36)) ;
    enumerator_2002.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionStringForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionStringForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                           GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionStringForGeneration * object = (const cPtr_templateInstructionStringForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionStringForGeneration) ;
  const GALGAS_templateInstructionStringForGeneration temp_0 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (temp_0.readProperty_mTemplateString ().getter_utf_38_Representation (SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionStringForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionStringForGeneration.mSlotID,
                                               extensionMethod_templateInstructionStringForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionStringForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionStringForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionExpressionForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                               GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionExpressionForGeneration * object = (const cPtr_templateInstructionExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionExpressionForGeneration) ;
  GALGAS_string var_cppName_3124 ;
  const GALGAS_templateInstructionExpressionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3124, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (var_cppName_3124, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration.mSlotID,
                                               extensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateBlockInstructionForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                          GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateBlockInstructionForGeneration * object = (const cPtr_templateBlockInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateBlockInstructionForGeneration) ;
  GALGAS_string var_indendationVarCppName_3752 ;
  const GALGAS_templateBlockInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_3752, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_3752, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation ((int32_t) ").add_operation (var_indendationVarCppName_3752, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)).add_operation (GALGAS_string (".uintValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 84)) ;
  {
  const GALGAS_templateBlockInstructionForGeneration temp_1 = object ;
  routine_templateCodeGenerationForListInstruction (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 85)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_3752, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (- ((int32_t) ").add_operation (var_indendationVarCppName_3752, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 95)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration.mSlotID,
                                               extensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateBlockInstructionForGeneration_templateCodeGeneration (defineExtensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * /* inObject */,
                                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                      GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 107)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration.mSlotID,
                                               extensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * /* inObject */,
                                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                                       GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                       GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 119)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration.mSlotID,
                                               extensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionIfForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionIfForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfForGeneration * object = (const cPtr_templateInstructionIfForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfForGeneration) ;
  const GALGAS_templateInstructionIfForGeneration temp_0 = object ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_5931 (temp_0.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_5931.hasCurrentObject ()) {
    GALGAS_string var_ifVarCppName_6026 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_5931.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_6026, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)) ;
    GALGAS_string var_testVar_6192 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 134)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 134)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_6192, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)).add_operation (var_ifVarCppName_6026, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_6192, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 136)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 136)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 137)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (enumerator_5931.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 138)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_6192, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 148)) ;
    }
    enumerator_5931.gotoNextObject () ;
  }
  {
  const GALGAS_templateInstructionIfForGeneration temp_1 = object ;
  routine_templateCodeGenerationForListInstruction (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 151)) ;
  }
  const GALGAS_templateInstructionIfForGeneration temp_2 = object ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_7095 (temp_2.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_7095.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 160)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 161)) ;
    enumerator_7095.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionIfForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionIfForGeneration.mSlotID,
                                               extensionMethod_templateInstructionIfForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionIfForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionIfForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionForeachAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionForeachAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionForeachAST * object = (const cPtr_templateInstructionForeachAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionForeachAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_6526 ;
  const GALGAS_templateInstructionForeachAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_6526, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 197)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6769 = var_expression_6526.readProperty_mResultType ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 204)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_enumerationDescriptor_6769.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 205)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_6526.readProperty_mLocation (), GALGAS_string ("expression of '@").add_operation (var_expression_6526.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 206)).add_operation (GALGAS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 206)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 206)) ;
    }
  }
  GALGAS_templateInstructionListForGeneration var_beforeInstructionList_7071 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 209)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_3 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_7071, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 210)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_4 = object ;
  GALGAS_string var_enumeratorCppName_7344 = GALGAS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 218)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 218)) ;
  GALGAS_templateVariableMap var_doVariableMap_7438 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GALGAS_templateInstructionForeachAST temp_5 = object ;
  const GALGAS_templateInstructionForeachAST temp_6 = object ;
  GALGAS_string var_cppIndexVarName_7501 = GALGAS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 220)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 220)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 220)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 221)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_templateInstructionForeachAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      const GALGAS_templateInstructionForeachAST temp_9 = object ;
      var_doVariableMap_7438.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_7501, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 223)) ;
      }
    }
  }
  switch (object->mProperty_mEnumeratedObjectProperties.enumValue ()) {
  case GALGAS_templateInstructionForEnumerationAST::kNotBuilt:
    break ;
  case GALGAS_templateInstructionForEnumerationAST::kEnum_implicit:
    {
      const cEnumAssociatedValues_templateInstructionForEnumerationAST_implicit * extractPtr_8610 = (const cEnumAssociatedValues_templateInstructionForEnumerationAST_implicit *) (object->mProperty_mEnumeratedObjectProperties.unsafePointer ()) ;
      const GALGAS_string extractedValue_7876_prefix = extractPtr_8610->mAssociatedValue0 ;
      const GALGAS_location extractedValue_7904_remplacementRange = extractPtr_8610->mAssociatedValue1 ;
      GALGAS_string var_suggestion_7926 = GALGAS_string ("(") ;
      cEnumerator_enumerationDescriptorList enumerator_7972 (var_enumerationDescriptor_6769, kENUMERATION_UP) ;
      while (enumerator_7972.hasCurrentObject ()) {
        {
        var_doVariableMap_7438.setter_insertKey (GALGAS_lstring::constructor_new (extractedValue_7876_prefix.add_operation (enumerator_7972.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 231)), var_expression_6526.readProperty_mLocation ()  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 231)), enumerator_7972.current_mEnumeratedType (HERE), var_enumeratorCppName_7344.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 233)).add_operation (enumerator_7972.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 233)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 230)) ;
        }
        var_suggestion_7926.plusAssign_operation(extractedValue_7876_prefix.add_operation (enumerator_7972.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 235)) ;
        if (enumerator_7972.hasNextObject ()) {
          var_suggestion_7926.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 237)) ;
        }
        enumerator_7972.gotoNextObject () ;
      }
      var_suggestion_7926.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 239)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          appendFixItActions (fixItArray11, kFixItReplace, var_suggestion_7926) ;
          inCompiler->emitSemanticError (extractedValue_7904_remplacementRange, GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray11  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 241)) ;
        }
      }
    }
    break ;
  case GALGAS_templateInstructionForEnumerationAST::kEnum_explicit:
    {
      const cEnumAssociatedValues_templateInstructionForEnumerationAST_explicit * extractPtr_9346 = (const cEnumAssociatedValues_templateInstructionForEnumerationAST_explicit *) (object->mProperty_mEnumeratedObjectProperties.unsafePointer ()) ;
      const GALGAS_lstringlist extractedValue_8652_enumeration = extractPtr_9346->mAssociatedValue0 ;
      const GALGAS_location extractedValue_8676_errorLocation = extractPtr_9346->mAssociatedValue1 ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, extractedValue_8652_enumeration.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 246)).objectCompare (var_enumerationDescriptor_6769.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 246)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_8676_errorLocation, var_enumerationDescriptor_6769.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 248)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 248)).add_operation (GALGAS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 248)).add_operation (extractedValue_8652_enumeration.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 249)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 248)).add_operation (GALGAS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 249)), fixItArray13  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 247)) ;
        }
      }
      if (kBoolFalse == test_12) {
        cEnumerator_enumerationDescriptorList enumerator_8951 (var_enumerationDescriptor_6769, kENUMERATION_UP) ;
        cEnumerator_lstringlist enumerator_9010 (extractedValue_8652_enumeration, kENUMERATION_UP) ;
        while (enumerator_8951.hasCurrentObject () && enumerator_9010.hasCurrentObject ()) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = GALGAS_bool (kIsNotEqual, enumerator_9010.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              {
              var_doVariableMap_7438.setter_insertKey (enumerator_9010.current_mValue (HERE), enumerator_8951.current_mEnumeratedType (HERE), var_enumeratorCppName_7344.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 257)).add_operation (enumerator_8951.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 257)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 254)) ;
              }
            }
          }
          enumerator_8951.gotoNextObject () ;
          enumerator_9010.gotoNextObject () ;
        }
      }
    }
    break ;
  }
  GALGAS_templateAnalysisContext var_doAnalysisContext_9376 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_7438  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 263)) ;
  GALGAS_templateInstructionListForGeneration var_doInstructionList_9533 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 267)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_15 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_9376, temp_15.readProperty_mDoInstructionList (), var_doInstructionList_9533, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 268)) ;
  }
  GALGAS_templateInstructionListForGeneration var_betweenInstructionList_9809 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 276)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_16 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_16.readProperty_mBetweenInstructionList (), var_betweenInstructionList_9809, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 277)) ;
  }
  GALGAS_templateInstructionListForGeneration var_afterInstructionList_10091 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 285)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_17 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_17.readProperty_mAfterInstructionList (), var_afterInstructionList_10091, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 286)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_18 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionForeachForGeneration::constructor_new (temp_18.readProperty_mIsAscending (), var_expression_6526, var_enumeratorCppName_7344, var_beforeInstructionList_7071, var_doInstructionList_9533, var_cppIndexVarName_7501, var_betweenInstructionList_9809, var_afterInstructionList_10091  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 294))  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 294)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionForeachAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionForeachAST.mSlotID,
                                                    extensionMethod_templateInstructionForeachAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionForeachAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionForeachAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionForeachForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                            GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionForeachForGeneration * object = (const cPtr_templateInstructionForeachForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionForeachForGeneration) ;
  GALGAS_string var_foreachVarCppName_11810 ;
  const GALGAS_templateInstructionForeachForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_11810, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 331)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_templateInstructionForeachForGeneration temp_2 = object ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mIndexCppName ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 333)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionForeachForGeneration temp_3 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 334)).add_operation (GALGAS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 334)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_foreachVarCppName_11810, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)) ;
  }
  const GALGAS_templateInstructionForeachForGeneration temp_4 = object ;
  const GALGAS_templateInstructionForeachForGeneration temp_5 = object ;
  const GALGAS_templateInstructionForeachForGeneration temp_6 = object ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = temp_6.readProperty_mIsAscending ().boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("kENUMERATION_UP") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string ("kENUMERATION_DOWN") ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (temp_4.readProperty_mExpression ().readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (temp_5.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (var_foreachVarCppName_11810, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 339)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_templateInstructionForeachForGeneration temp_10 = object ;
    const GALGAS_templateInstructionForeachForGeneration temp_11 = object ;
    test_9 = GALGAS_bool (kIsStrictSup, temp_10.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 342)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 342)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_templateInstructionForeachForGeneration temp_12 = object ;
      const GALGAS_templateInstructionForeachForGeneration temp_13 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 343)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 343)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 343)).add_operation (GALGAS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 343)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 343)) ;
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_templateInstructionForeachForGeneration temp_15 = object ;
    test_14 = GALGAS_bool (kIsStrictSup, temp_15.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 345)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_templateInstructionForeachForGeneration temp_16 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 346)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 346)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 347)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_17 = object ;
      routine_templateCodeGenerationForListInstruction (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 348)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 356)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 357)) ;
    }
  }
  const GALGAS_templateInstructionForeachForGeneration temp_18 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 359)).add_operation (GALGAS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 359)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 360)) ;
  }
  {
  const GALGAS_templateInstructionForeachForGeneration temp_19 = object ;
  routine_templateCodeGenerationForListInstruction (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 362)) ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    const GALGAS_templateInstructionForeachForGeneration temp_21 = object ;
    test_20 = GALGAS_bool (kIsStrictSup, temp_21.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 371)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_templateInstructionForeachForGeneration temp_22 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (temp_22.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 372)).add_operation (GALGAS_string (".hasNextObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 372)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 373)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_23 = object ;
      routine_templateCodeGenerationForListInstruction (temp_23.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 374)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 382)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 383)) ;
    }
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    const GALGAS_templateInstructionForeachForGeneration temp_25 = object ;
    test_24 = GALGAS_bool (kIsStrictSup, temp_25.readProperty_mIndexCppName ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 386)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_24) {
      const GALGAS_templateInstructionForeachForGeneration temp_26 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_26.readProperty_mIndexCppName ().add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 387)) ;
    }
  }
  const GALGAS_templateInstructionForeachForGeneration temp_27 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_27.readProperty_mEnumeratorCppName ().add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 390)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 391)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 392)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    const GALGAS_templateInstructionForeachForGeneration temp_29 = object ;
    test_28 = GALGAS_bool (kIsStrictSup, temp_29.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 394)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_28) {
      const GALGAS_templateInstructionForeachForGeneration temp_30 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 395)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 395)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 396)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_31 = object ;
      routine_templateCodeGenerationForListInstruction (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 397)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 405)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 406)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 409)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 410)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration.mSlotID,
                                               extensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionForeachForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionSwitchAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchAST * object = (const cPtr_templateInstructionSwitchAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression_4362 ;
  const GALGAS_templateInstructionSwitchAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_switchExpression_4362, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 125)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_switchExpression_4362.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 131)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("template-switch-instruction.galgas", 131)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_switchExpression_4362.readProperty_mLocation (), GALGAS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (var_switchExpression_4362.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 132)).add_operation (GALGAS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 133)), fixItArray2  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 132)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_4789 = var_switchExpression_4362.readProperty_mResultType ().getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 135)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_4890 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("template-switch-instruction.galgas", 136)) ;
  GALGAS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList_5009 = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 138)) ;
  const GALGAS_templateInstructionSwitchAST temp_3 = object ;
  cEnumerator_templateInstructionSwitchBranchListAST enumerator_5093 (temp_3.readProperty_mTemplateInstructionSwitchBranchList (), kENUMERATION_UP) ;
  while (enumerator_5093.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_5229 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 140)) ;
    GALGAS_bool var_firstConstant_5262 = GALGAS_bool (true) ;
    GALGAS_templateAnalysisContext var_analysisContext_5293 = constinArgument_inAnalysisContext ;
    cEnumerator_lstringlist enumerator_5330 (enumerator_5093.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_5330.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_enumConstantMap_4789.getter_hasKey (enumerator_5330.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 144)).boolEnum () ;
        if (kBoolTrue == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_constantsNamedInSwitchInstruction_4890.getter_hasKey (enumerator_5330.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 145)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_5330.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5330.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 147)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 147)), fixItArray6  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_4890.addAssign_operation (enumerator_5330.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 149)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_5756 ;
          GALGAS_uint joker_5706 ; // Joker input parameter
          var_enumConstantMap_4789.method_searchKey (enumerator_5330.current_mValue (HERE), joker_5706, var_associatedTypeList_5756, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 150)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_5756.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 151)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_5093.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 151)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 151)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_5330.current_mValue (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_5330.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 153)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 153)), fixItArray8  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 152)) ;
            }
          }
          if (kBoolFalse == test_7) {
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsEqual, var_associatedTypeList_5756.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 154)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_5093.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 154)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 154)).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_5330.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5330.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 156)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 156)), fixItArray10  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 155)) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_5756.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 157)).objectCompare (enumerator_5093.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 157)))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  GALGAS_string temp_12 ;
                  const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_5756.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    temp_12 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_13) {
                    temp_12 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (enumerator_5330.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5330.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)).add_operation (var_associatedTypeList_5756.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 159)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)), fixItArray14  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)) ;
                }
              }
              if (kBoolFalse == test_11) {
                GALGAS_uint var_associatedValueIndex_6490 = GALGAS_uint ((uint32_t) 0U) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_6515 (var_associatedTypeList_5756, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_6586 (enumerator_5093.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_6515.hasCurrentObject () && enumerator_6586.hasCurrentObject ()) {
                  enumGalgasBool test_15 = kBoolTrue ;
                  if (kBoolTrue == test_15) {
                    test_15 = GALGAS_bool (kIsNotEqual, enumerator_6586.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_15) {
                      enumGalgasBool test_16 = kBoolTrue ;
                      if (kBoolTrue == test_16) {
                        test_16 = GALGAS_bool (kIsNotEqual, enumerator_6515.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)).objectCompare (enumerator_6586.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_16) {
                          TC_Array <C_FixItDescription> fixItArray17 ;
                          inCompiler->emitSemanticError (enumerator_6586.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (enumerator_6515.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)), fixItArray17  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_18 = kBoolTrue ;
                  if (kBoolTrue == test_18) {
                    test_18 = var_firstConstant_5262.operator_and (GALGAS_bool (kIsNotEqual, enumerator_6586.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).boolEnum () ;
                    if (kBoolTrue == test_18) {
                      GALGAS_string var_cppName_6989 = GALGAS_string ("extractedValue_").add_operation (enumerator_6586.current_mExtractedValueName (HERE).readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 170)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 170)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 170)).add_operation (enumerator_6586.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 170)) ;
                      var_extractedAssociatedValuesForGeneration_5229.addAssign_operation (enumerator_6515.current_mType (HERE), var_cppName_6989, var_associatedValueIndex_6490  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 171)) ;
                      {
                      var_analysisContext_5293.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_6586.current_mExtractedValueName (HERE), enumerator_6515.current_mType (HERE), var_cppName_6989, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 172)) ;
                      }
                    }
                  }
                  var_associatedValueIndex_6490.increment_operation (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 174)) ;
                  enumerator_6515.gotoNextObject () ;
                  enumerator_6586.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_5330.current_mValue (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_5330.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)).add_operation (var_switchExpression_4362.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)), fixItArray19  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)) ;
      }
      var_firstConstant_5262 = GALGAS_bool (false) ;
      enumerator_5330.gotoNextObject () ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_7614 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 183)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_5293, enumerator_5093.current_mInstructionList (HERE), var_instructionList_7614, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 184)) ;
    }
    var_templateInstructionSwitchBranchList_5009.addAssign_operation (enumerator_5093.current_mConstantList (HERE), var_extractedAssociatedValuesForGeneration_5229, enumerator_5093.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 194)), var_instructionList_7614  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 191)) ;
    enumerator_5093.gotoNextObject () ;
  }
  GALGAS_stringset var_forgottenConstants_8041 = var_enumConstantMap_4789.getter_keySet (SOURCE_FILE ("template-switch-instruction.galgas", 198)).substract_operation (var_constantsNamedInSwitchInstruction_4890, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 198)) ;
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_8041.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 199)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_20) {
      GALGAS_string var_s_8163 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_8181 (var_forgottenConstants_8041, kENUMERATION_UP) ;
      while (enumerator_8181.hasCurrentObject ()) {
        var_s_8163.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_8181.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 202)) ;
        enumerator_8181.gotoNextObject () ;
      }
      const GALGAS_templateInstructionSwitchAST temp_21 = object ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mSwitchExpressionEndLocation (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_8163, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 205)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 204)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchForGeneration::constructor_new (var_switchExpression_4362.readProperty_mResultType (), var_switchExpression_4362, var_templateInstructionSwitchBranchList_5009  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 208))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 208)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionSwitchAST.mSlotID,
                                                    extensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionSwitchAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionSwitchForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchForGeneration * object = (const cPtr_templateInstructionSwitchForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchForGeneration) ;
  GALGAS_string var_switchVarCppName_10119 ;
  const GALGAS_templateInstructionSwitchForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_10119, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 244)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVarCppName_10119, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 252)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 252)) ;
  const GALGAS_templateInstructionSwitchForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 253)).add_operation (GALGAS_string ("::kNotBuilt :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 253)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 254)) ;
  const GALGAS_templateInstructionSwitchForGeneration temp_2 = object ;
  cEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_10466 (temp_2.readProperty_mTemplateInstructionSwitchBranchList (), kENUMERATION_UP) ;
  while (enumerator_10466.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_10531 (enumerator_10466.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_10531.hasCurrentObject ()) {
      const GALGAS_templateInstructionSwitchForGeneration temp_3 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 258)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 258)).add_operation (enumerator_10531.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 259)).add_operation (GALGAS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 258)) ;
      enumerator_10531.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 261)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 262)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_10466.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 263)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_templateInstructionSwitchForGeneration temp_5 = object ;
        GALGAS_string var_type_10902 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (temp_5.readProperty_mEnumType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 264)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 264)).add_operation (enumerator_10466.current_mConstantList (HERE).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 265)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 265)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 265)) ;
        GALGAS_string var_varPtr_11058 = GALGAS_string ("extractPtr_").add_operation (enumerator_10466.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_10902, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (var_varPtr_11058, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (var_type_10902, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (var_switchVarCppName_10119, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 267)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_11257 (enumerator_10466.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_11257.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (enumerator_11257.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (enumerator_11257.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (var_varPtr_11058, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 270)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 270)).add_operation (enumerator_11257.current_mIndex (HERE).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 270)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)) ;
          enumerator_11257.gotoNextObject () ;
        }
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsStrictSup, enumerator_10466.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 273)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 274)) ;
        }
        {
        routine_templateCodeGenerationForListInstruction (enumerator_10466.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 275)) ;
        }
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 283)) ;
        }
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 285)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 286)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 287)) ;
    }
    enumerator_10466.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 290)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration.mSlotID,
                                               extensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'buildLexicalTypeMap'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lexicalTypeMap onceFunction_buildLexicalTypeMap (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result_outLexicalTypeMap ; // Returned variable
  result_outLexicalTypeMap = GALGAS_lexicalTypeMap::constructor_emptyMap (SOURCE_FILE ("lexiqueTypesForAST.galgas", 488)) ;
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 489))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 489)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 489)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("char"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 490))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 490)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 490)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 491))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 491)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 491)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 492))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 492)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 492)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 493))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 493)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 493)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 494))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 494)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 494)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("double"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 495))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 495)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 495)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("bigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 496))  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 496)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 496)) ;
  }
//---
  return result_outLexicalTypeMap ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_buildLexicalTypeMap = false ;
static GALGAS_lexicalTypeMap gOnceFunctionResult_buildLexicalTypeMap ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap function_buildLexicalTypeMap (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_buildLexicalTypeMap) {
    gOnceFunctionResult_buildLexicalTypeMap = onceFunction_buildLexicalTypeMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_buildLexicalTypeMap = true ;
  }
  return gOnceFunctionResult_buildLexicalTypeMap ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_buildLexicalTypeMap (void) {
  gOnceFunctionResult_buildLexicalTypeMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_buildLexicalTypeMap (NULL,
                                                                 releaseOnceFunctionResult_buildLexicalTypeMap) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_buildLexicalTypeMap [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_buildLexicalTypeMap (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_buildLexicalTypeMap (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_buildLexicalTypeMap ("buildLexicalTypeMap",
                                                                     functionWithGenericHeader_buildLexicalTypeMap,
                                                                     & kTypeDescriptor_GALGAS_lexicalTypeMap,
                                                                     0,
                                                                     functionArgs_buildLexicalTypeMap) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap (const GALGAS_lexicalTypeMap constinArgument_inLexicalTypeMap,
                                       const GALGAS_lexicalAttributeListAST constinArgument_inLexicalAttributeList,
                                       GALGAS_lexicalAttributeMap & ioArgument_ioLexicalAttributeMap,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lexicalAttributeListAST enumerator_21225 (constinArgument_inLexicalAttributeList, kENUMERATION_UP) ;
  while (enumerator_21225.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inLexicalTypeMap.getter_hasKey (enumerator_21225.current_mTypeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 516)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_lexicalTypeEnum var_lexicalType_21390 ;
        constinArgument_inLexicalTypeMap.method_searchKey (enumerator_21225.current_mTypeName (HERE), var_lexicalType_21390, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 517)) ;
        {
        ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_21225.current_mName (HERE), var_lexicalType_21390, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 518)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_m_21482 = GALGAS_string::makeEmptyString () ;
      var_m_21482.plusAssign_operation(GALGAS_string ("the @").add_operation (enumerator_21225.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)).add_operation (GALGAS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)) ;
      GALGAS_bool var_firstLoop_21606 = GALGAS_bool (true) ;
      cEnumerator_lexicalTypeMap enumerator_21631 (constinArgument_inLexicalTypeMap, kENUMERATION_UP) ;
      while (enumerator_21631.hasCurrentObject ()) {
        var_m_21482.plusAssign_operation(GALGAS_string (" @").add_operation (enumerator_21631.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 524)) ;
        if (enumerator_21631.hasNextObject ()) {
          var_m_21482.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 526)) ;
        }
        enumerator_21631.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_21225.current_mTypeName (HERE).readProperty_location (), var_m_21482, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 528)) ;
    }
    enumerator_21225.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis (const GALGAS_lexicalFunctionListAST constinArgument_inLexicalFunctionListAST,
                                                 GALGAS_stringset & outArgument_outUnicodeTestFunctions,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnicodeTestFunctions.drop () ; // Release 'out' argument
  cEnumerator_lexicalFunctionListAST enumerator_7795 (constinArgument_inLexicalFunctionListAST, kENUMERATION_UP) ;
  while (enumerator_7795.hasCurrentObject ()) {
    callExtensionMethod_checkUnicodeConstants ((const cPtr_lexicalFunctionExpressionAST *) enumerator_7795.current (HERE).readProperty_mLexicalExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 180)) ;
    enumerator_7795.gotoNextObject () ;
  }
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 195)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 187)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeMark")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 188)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeNumber")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 189)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeDecimalDigit")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 190)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeASCIIHexDigit")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 191)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSeparator")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 192)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeCommand")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 193)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodePunctuation")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 194)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSymbol")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 195)) ;
  outArgument_outUnicodeTestFunctions = temp_0 ;
  GALGAS_bool var_progress_8244 = GALGAS_bool (true) ;
  GALGAS_lexicalFunctionListAST var_lexicalFunctionListAST_8280 = constinArgument_inLexicalFunctionListAST ;
  if (constinArgument_inLexicalFunctionListAST.getter_length (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).isValid ()) {
    uint32_t variant_8314 = constinArgument_inLexicalFunctionListAST.getter_length (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).uintValue () ;
    bool loop_8314 = true ;
    while (loop_8314) {
      loop_8314 = var_progress_8244.isValid () ;
      if (loop_8314) {
        loop_8314 = var_progress_8244.boolValue () ;
      }
      if (loop_8314 && (0 == variant_8314)) {
        loop_8314 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)) ;
      }
      if (loop_8314) {
        variant_8314 -- ;
        var_progress_8244 = GALGAS_bool (false) ;
        GALGAS_lexicalFunctionListAST var_temporaryLexicalFunctionListAST_8433 = var_lexicalFunctionListAST_8280 ;
        var_lexicalFunctionListAST_8280 = GALGAS_lexicalFunctionListAST::constructor_emptyList (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 202)) ;
        cEnumerator_lexicalFunctionListAST enumerator_8549 (var_temporaryLexicalFunctionListAST_8433, kENUMERATION_UP) ;
        while (enumerator_8549.hasCurrentObject ()) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = outArgument_outUnicodeTestFunctions.getter_hasKey (enumerator_8549.current (HERE).readProperty_mFunctionName ().readProperty_string () COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 204)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (enumerator_8549.current (HERE).readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("Unicode test function already defined"), fixItArray2  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 205)) ;
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = callExtensionGetter_callsDefinedUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_8549.current (HERE).readProperty_mLexicalExpression ().ptr (), outArgument_outUnicodeTestFunctions, inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 206)).boolEnum () ;
              if (kBoolTrue == test_3) {
                outArgument_outUnicodeTestFunctions.addAssign_operation (enumerator_8549.current (HERE).readProperty_mFunctionName ().readProperty_string ()  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 207)) ;
                var_progress_8244 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_3) {
              var_temporaryLexicalFunctionListAST_8433.addAssign_operation (enumerator_8549.current (HERE).readProperty_mFunctionName (), enumerator_8549.current (HERE).readProperty_mLexicalExpression ()  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 210)) ;
            }
          }
          enumerator_8549.gotoNextObject () ;
        }
      }
    }
  }
  cEnumerator_lexicalFunctionListAST enumerator_9111 (var_lexicalFunctionListAST_8280, kENUMERATION_UP) ;
  while (enumerator_9111.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (enumerator_9111.current (HERE).readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("Circular definition of this lexical Unicode test function"), fixItArray4  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 215)) ;
    enumerator_9111.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionOrExpressionAST checkUnicodeConstants'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionOrExpressionAST * object = (const cPtr_lexicalFunctionOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionOrExpressionAST) ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_0 = object ;
  callExtensionMethod_checkUnicodeConstants ((const cPtr_lexicalFunctionExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 228)) ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_1 = object ;
  callExtensionMethod_checkUnicodeConstants ((const cPtr_lexicalFunctionExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 229)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST.mSlotID,
                                              extensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionOrExpressionAST_checkUnicodeConstants, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionCallAST checkUnicodeConstants'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionCallAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * /* inObject */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionCallAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionCallAST.mSlotID,
                                              extensionMethod_lexicalFunctionCallAST_checkUnicodeConstants) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionCallAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionCallAST_checkUnicodeConstants, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionCharacterMatchAST checkUnicodeConstants'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST.mSlotID,
                                              extensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionCharacterMatchAST_checkUnicodeConstants, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionCharacterIntervalMatchAST checkUnicodeConstants'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionCharacterIntervalMatchAST * object = (const cPtr_lexicalFunctionCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_lexicalFunctionCharacterIntervalMatchAST temp_1 = object ;
    const GALGAS_lexicalFunctionCharacterIntervalMatchAST temp_2 = object ;
    test_0 = GALGAS_bool (kIsStrictInf, temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 245)).objectCompare (temp_2.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 245)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalFunctionCharacterIntervalMatchAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mUpperBound ().readProperty_location (), GALGAS_string ("Upper bound code point should be greater or equal to lower bound code point"), fixItArray4  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 246)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants (void) {
  enterExtensionMethod_checkUnicodeConstants (kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST.mSlotID,
                                              extensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants (defineExtensionMethod_lexicalFunctionCharacterIntervalMatchAST_checkUnicodeConstants, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionOrExpressionAST callsDefinedUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                    const GALGAS_stringset constinArgument_inDefinedUnicodeFunctionSet,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_lexicalFunctionOrExpressionAST * object = (const cPtr_lexicalFunctionOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionOrExpressionAST) ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_0 = object ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_1 = object ;
  result_result = callExtensionGetter_callsDefinedUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inDefinedUnicodeFunctionSet, inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 261)).operator_and (callExtensionGetter_callsDefinedUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inDefinedUnicodeFunctionSet, inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 262)) COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 261)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions (void) {
  enterExtensionGetter_callsDefinedUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST.mSlotID,
                                                         extensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionOrExpressionAST_callsDefinedUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionCallAST callsDefinedUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                            const GALGAS_stringset constinArgument_inDefinedUnicodeFunctionSet,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_lexicalFunctionCallAST * object = (const cPtr_lexicalFunctionCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCallAST) ;
  const GALGAS_lexicalFunctionCallAST temp_0 = object ;
  result_result = constinArgument_inDefinedUnicodeFunctionSet.getter_hasKey (temp_0.readProperty_mCalledFunctionName ().readProperty_string () COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 270)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions (void) {
  enterExtensionGetter_callsDefinedUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCallAST.mSlotID,
                                                         extensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCallAST_callsDefinedUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionCharacterMatchAST callsDefinedUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * /* inObject */,
                                                                                                      const GALGAS_stringset /* constinArgument_inDefinedUnicodeFunctionSet */,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions (void) {
  enterExtensionGetter_callsDefinedUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST.mSlotID,
                                                         extensionGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCharacterMatchAST_callsDefinedUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionCharacterIntervalMatchAST callsDefinedUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * /* inObject */,
                                                                                                              const GALGAS_stringset /* constinArgument_inDefinedUnicodeFunctionSet */,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions (void) {
  enterExtensionGetter_callsDefinedUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST.mSlotID,
                                                         extensionGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCharacterIntervalMatchAST_callsDefinedUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionOrExpressionAST generateForUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalFunctionOrExpressionAST * object = (const cPtr_lexicalFunctionOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionOrExpressionAST) ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_0 = object ;
  result_result = callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 298)) ;
  result_result.plusAssign_operation(GALGAS_string (" ||\n"
    "         "), inCompiler  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 299)) ;
  const GALGAS_lexicalFunctionOrExpressionAST temp_1 = object ;
  result_result.plusAssign_operation(callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 300)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions (void) {
  enterExtensionGetter_generateForUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST.mSlotID,
                                                        extensionGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionOrExpressionAST_generateForUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionCallAST generateForUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalFunctionCallAST * object = (const cPtr_lexicalFunctionCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCallAST) ;
  const GALGAS_lexicalFunctionCallAST temp_0 = object ;
  result_result = temp_0.readProperty_mCalledFunctionName ().readProperty_string ().add_operation (GALGAS_string (" (inUnicodeCharacter)"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 306)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions (void) {
  enterExtensionGetter_generateForUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCallAST.mSlotID,
                                                        extensionGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCallAST_generateForUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionCharacterMatchAST generateForUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalFunctionCharacterMatchAST * object = (const cPtr_lexicalFunctionCharacterMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCharacterMatchAST) ;
  const GALGAS_lexicalFunctionCharacterMatchAST temp_0 = object ;
  result_result = GALGAS_string ("(").add_operation (temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 312)).getter_hexString (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 312)).add_operation (GALGAS_string (" == UNICODE_VALUE (inUnicodeCharacter))"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 312)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions (void) {
  enterExtensionGetter_generateForUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST.mSlotID,
                                                        extensionGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCharacterMatchAST_generateForUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionCharacterIntervalMatchAST generateForUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions (const cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalFunctionCharacterIntervalMatchAST * object = (const cPtr_lexicalFunctionCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
  const GALGAS_lexicalFunctionCharacterIntervalMatchAST temp_0 = object ;
  const GALGAS_lexicalFunctionCharacterIntervalMatchAST temp_1 = object ;
  result_result = GALGAS_string ("((").add_operation (temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 318)).getter_hexString (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 318)).add_operation (GALGAS_string (" <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= "), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 318)).add_operation (temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 320)).getter_hexString (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 319)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 320)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions (void) {
  enterExtensionGetter_generateForUnicodeTestFunctions (kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST.mSlotID,
                                                        extensionGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions (defineExtensionGetter_lexicalFunctionCharacterIntervalMatchAST_generateForUnicodeTestFunctions, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalRoutineMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap (GALGAS_lexicalRoutineMap & outArgument_outLexicalRoutineMap,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalRoutineMap.drop () ; // Release 'out' argument
  outArgument_outLexicalRoutineMap = GALGAS_lexicalRoutineMap::constructor_emptyMap (SOURCE_FILE ("predefinedLexicalActions.galgas", 36)) ;
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 38)) ;
  GALGAS_stringlist var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 39)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 40)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 40)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 40)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 41)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 41)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 41)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 42)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inErrorNotHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 43)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoASCIIcharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 45))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 45)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 44)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 51)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 52)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 53)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 54)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 54)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 54)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 55)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inErrorNotDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 56)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoASCIIcharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 58))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 58)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 57)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 64)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 65)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 66)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterCharacterIntoString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 68))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 68)), var_lexicalRoutineFormalArgumentList_2282, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 70)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 67)) ;
  }
  {
  GALGAS_lexicalRoutineFormalArgumentList temp_0 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)) ;
  temp_0.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 76)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("resetString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75)), temp_0, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 77)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 74)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 81)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 82)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 83)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_string ("ioDouble")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 84)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inConversionError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 85)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertStringToDouble"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 87))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 87)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 86)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 93)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 94)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 95)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 95)), GALGAS_string ("ioCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 95)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 96)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 96)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 96)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterCharacterIntoCharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 98))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 98)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 97)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 104)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 105)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 106)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 106)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 106)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 107)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 109))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 109)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 108)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 115)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 116)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 117)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 117)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 117)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 118)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 120))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 120)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 119)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 126)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 127)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 128)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 128)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 128)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 129)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 129)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 129)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 130)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUIntToSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 132))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 132)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 131)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 138)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 139)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 140)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 140)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 140)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 141)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 141)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 141)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 142)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUInt64ToSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 144))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 144)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 143)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 150)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 151)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 152)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 152)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 152)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 153)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 153)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 153)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 154)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 155)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 157))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 157)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 156)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 163)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 164)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 165)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 165)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 165)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 166)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 166)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 166)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 167)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 168)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 169)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 176)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 177)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 178)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 178)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 178)) ;
  {
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 182)) ;
  temp_1.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 182)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDecimalDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 180))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 180)), var_lexicalRoutineFormalArgumentList_2282, temp_1, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 179)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 186)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), GALGAS_string ("inBinaryDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 187)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 188)) ;
  {
  GALGAS_stringlist temp_2 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 192)) ;
  temp_2.addAssign_operation (GALGAS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 192)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinaryDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 190))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 190)), var_lexicalRoutineFormalArgumentList_2282, temp_2, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 189)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 196)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 197)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 198)) ;
  {
  GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 202)) ;
  temp_3.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 202)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200)), var_lexicalRoutineFormalArgumentList_2282, temp_3, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 199)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 206)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 207)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 208)) ;
  {
  GALGAS_stringlist temp_4 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 212)) ;
  temp_4.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 212)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210)), var_lexicalRoutineFormalArgumentList_2282, temp_4, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 209)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 216)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 217)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219)), var_lexicalRoutineFormalArgumentList_2282, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 221)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 218)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 225)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 226)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 227)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 227)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 227)) ;
  {
  GALGAS_stringlist temp_5 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 231)) ;
  temp_5.addAssign_operation (GALGAS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 231)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertBinaryStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 229))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 229)), var_lexicalRoutineFormalArgumentList_2282, temp_5, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 228)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 235)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 236)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 236)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 236)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 237)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 237)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 237)) ;
  {
  GALGAS_stringlist temp_6 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 241)) ;
  temp_6.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 241)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 239))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 239)), var_lexicalRoutineFormalArgumentList_2282, temp_6, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 238)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 245)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 246)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 247)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 247)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 247)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 248)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 248)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 248)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 249)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 250)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 252))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 252)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 251)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 258)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 259)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 260)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 260)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 260)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 261)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 261)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 261)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 262)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 263)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 265))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 265)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 264)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 271)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 272)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 273)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 273)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 273)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 274)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 274)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 274)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 275)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 276)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 278))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 278)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 277)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 284)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 285)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 286)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 286)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 286)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 287)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 287)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 287)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 288)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 289)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 291))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 291)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 290)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 297)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 298)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 298)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 298)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 299)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 299)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 299)) ;
  {
  GALGAS_stringlist temp_7 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  temp_7.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  temp_7.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 301))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 301)), var_lexicalRoutineFormalArgumentList_2282, temp_7, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 300)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 307)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 308)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 309)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 309)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 309)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 310)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 310)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 310)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 311)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 312)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 314))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 314)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 313)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 320)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 321)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 322)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 322)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 322)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 323)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 323)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 323)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 324)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 325)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 327))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 327)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 326)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 333)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 334)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 335)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 335)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 335)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 336)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 336)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 336)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 337)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 338)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 340))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 340)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 339)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 346)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 347)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 348)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 348)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 348)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 349)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 349)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 349)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 350)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 351)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterOctDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 353))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 353)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 352)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 359)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 360)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 361)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 361)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 361)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 362)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 362)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 362)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 363)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 364)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterOctDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 366))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 366)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 365)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 372)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 373)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 374)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 374)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 374)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 375)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 375)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 375)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 376)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("multiplyUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 378))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 378)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 377)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 384)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 385)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 386)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 386)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 386)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 387)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 387)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 387)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 388)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("multiplyUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 390))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 390)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 389)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 396)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 397)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 398)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 398)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 398)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 399)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 399)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 399)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 400)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 401)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 403))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 403)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 402)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 409)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 410)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 411)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 411)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 411)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 412)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 412)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 412)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 413)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 414)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 416))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 416)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 415)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 422)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 423)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 424)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 424)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 424)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 425)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 425)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 425)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 426)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 427)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 429))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 429)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 428)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 435)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 436)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 437)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 437)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 437)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 438)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 438)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 438)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 439)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 440)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 442))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 442)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 441)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 448)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 449)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 450)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 450)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 450)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 451)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 451)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 451)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inUnassignedUnicodeValueError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 452)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUnsignedNumberToUnicodeChar"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 454))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 454)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 453)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 460)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 461)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 462)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 462)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 462)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 463)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 463)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 463)) ;
  var_errorMessageList_2322.addAssign_operation (GALGAS_string ("inUnassignedHTMLSequenceError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 464)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHTMLSequenceToUnicodeCharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 466))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 466)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 465)) ;
  }
  var_lexicalRoutineFormalArgumentList_2282 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 472)) ;
  var_errorMessageList_2322 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 473)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 474)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 474)), GALGAS_string ("inCodePointString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 474)) ;
  var_lexicalRoutineFormalArgumentList_2282.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 475)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 475)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 475)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("codePointToUnicode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 477))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 477)), var_lexicalRoutineFormalArgumentList_2282, var_errorMessageList_2322, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 476)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalFunctionMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalFunctionMap (GALGAS_lexicalFunctionMap & outArgument_outLexicalFunctionMap,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalFunctionMap.drop () ; // Release 'out' argument
  outArgument_outLexicalFunctionMap = GALGAS_lexicalFunctionMap::constructor_emptyMap (SOURCE_FILE ("predefinedLexicalActions.galgas", 489)) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalTypeList_22343 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 491)) ;
  var_lexicalTypeList_22343.addAssign_operation (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 492)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 492)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("toLower"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 494))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 494)), var_lexicalTypeList_22343, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 496)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 493)) ;
  }
  var_lexicalTypeList_22343 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 501)) ;
  var_lexicalTypeList_22343.addAssign_operation (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 502)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 502)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("toUpper"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 504))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 504)), var_lexicalTypeList_22343, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 506)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 503)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'printPredefinedLexicalActions'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_23411 ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap_23411, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 519)) ;
  }
  GALGAS_string var_s_23541 = GALGAS_string::makeEmptyString () ;
  var_s_23541.plusAssign_operation(GALGAS_string ("**************** Prefined lexical routines  ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 522)) ;
  cEnumerator_lexicalRoutineMap enumerator_23684 (var_lexicalRoutineMap_23411, kENUMERATION_UP) ;
  while (enumerator_23684.hasCurrentObject ()) {
    var_s_23541.plusAssign_operation(enumerator_23684.current_lkey (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 524)) ;
    cEnumerator_lexicalRoutineFormalArgumentList enumerator_23817 (enumerator_23684.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_23817.hasCurrentObject ()) {
      var_s_23541.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_lexicalFormalModeName (enumerator_23817.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)).add_operation (extensionGetter_lexicalTypeBaseName (enumerator_23817.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)).add_operation (enumerator_23817.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 526)) ;
      enumerator_23817.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_24039 (enumerator_23684.current_mErrorMessageList (HERE), kENUMERATION_UP) ;
    const bool bool_0 = true ;
    if (enumerator_24039.hasCurrentObject () && bool_0) {
      var_s_23541.plusAssign_operation(GALGAS_string (" error"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 529)) ;
      while (enumerator_24039.hasCurrentObject () && bool_0) {
        var_s_23541.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_24039.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 530)) ;
        enumerator_24039.gotoNextObject () ;
        if (enumerator_24039.hasCurrentObject () && bool_0) {
          var_s_23541.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 531)) ;
        }
      }
    }
    var_s_23541.plusAssign_operation(GALGAS_string (" ;\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 533)) ;
    enumerator_23684.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_24277 ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap_24277, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 537)) ;
  }
  var_s_23541.plusAssign_operation(GALGAS_string ("**************** Prefined lexical functions ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 539)) ;
  cEnumerator_lexicalFunctionMap enumerator_24542 (var_lexicalFunctionMap_24277, kENUMERATION_UP) ;
  while (enumerator_24542.hasCurrentObject ()) {
    var_s_23541.plusAssign_operation(enumerator_24542.current_lkey (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)) ;
    cEnumerator_lexicalFunctionFormalArgumentList enumerator_24635 (enumerator_24542.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_24635.hasCurrentObject ()) {
      var_s_23541.plusAssign_operation(GALGAS_string (" \?@").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24635.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)).add_operation (enumerator_24635.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)) ;
      enumerator_24635.gotoNextObject () ;
    }
    var_s_23541.plusAssign_operation(GALGAS_string (" -> @").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24542.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_24542.current_mReplacementFunctionName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_s_23541.plusAssign_operation(GALGAS_string ("Note: the '").add_operation (enumerator_24542.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)).add_operation (GALGAS_string ("' function is obsolete: use '"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)).add_operation (enumerator_24542.current_mReplacementFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)).add_operation (GALGAS_string ("' function.\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)) ;
      }
    }
    var_s_23541.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 549)) ;
    enumerator_24542.gotoNextObject () ;
  }
  var_s_23541.plusAssign_operation(GALGAS_string ("************************************************************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 552)) ;
  inCompiler->printMessage (var_s_23541  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 553)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalOrExpressionAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                   const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  const GALGAS_lexicalOrExpressionAST temp_0 = object ;
  result_result = callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 29)) ;
  result_result.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 30)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = object ;
  result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalOrExpressionAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                              extensionGetter_lexicalOrExpressionAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalOrExpressionAST_generateConditionCode (defineExtensionGetter_lexicalOrExpressionAST_generateConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                             const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalCharacterIntervalMatchAST * object = (const cPtr_lexicalCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterIntervalMatchAST) ;
  result_result = GALGAS_string::makeEmptyString () ;
  result_result = GALGAS_string ("testForInputUTF32CharRange (") ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_0 = object ;
  result_result.plusAssign_operation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 41)) ;
  result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 42)) ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_1 = object ;
  result_result.plusAssign_operation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 43)) ;
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 44)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalStringMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                  const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  const GALGAS_lexicalStringMatchAST temp_0 = object ;
  result_result = GALGAS_string ("testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)).add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)) ;
  result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 53)) ;
  const GALGAS_lexicalStringMatchAST temp_1 = object ;
  result_result.plusAssign_operation(temp_1.readProperty_mString ().readProperty_string ().getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 54)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 54)) ;
  result_result.plusAssign_operation(GALGAS_string (", true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 55)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalStringMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                              extensionGetter_lexicalStringMatchAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalStringMatchAST_generateConditionCode (defineExtensionGetter_lexicalStringMatchAST_generateConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalStringNotMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                     const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  result_result = GALGAS_string ("notTestForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 63)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 63)) ;
  const GALGAS_lexicalStringNotMatchAST temp_0 = object ;
  result_result.plusAssign_operation(temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 64)) ;
  result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 65)) ;
  const GALGAS_lexicalStringNotMatchAST temp_1 = object ;
  result_result.plusAssign_operation(temp_1.readProperty_mString ().readProperty_string ().getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 66)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 66)) ;
  result_result.plusAssign_operation(GALGAS_string (", gLexicalMessage_"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 67)) ;
  result_result.plusAssign_operation(constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 68)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)) ;
  const GALGAS_lexicalStringNotMatchAST temp_2 = object ;
  result_result.plusAssign_operation(temp_2.readProperty_mErrorMessage ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 69)) ;
  result_result.plusAssign_operation(GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 70)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalStringNotMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                              extensionGetter_lexicalStringNotMatchAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalStringNotMatchAST_generateConditionCode (defineExtensionGetter_lexicalStringNotMatchAST_generateConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalCharacterMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                     const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalCharacterMatchAST * object = (const cPtr_lexicalCharacterMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterMatchAST) ;
  result_result = GALGAS_string ("testForInputUTF32Char (") ;
  const GALGAS_lexicalCharacterMatchAST temp_0 = object ;
  result_result.plusAssign_operation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 79)) ;
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 80)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterMatchAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterMatchAST_generateConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalCharacterSetMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                        const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  result_result = GALGAS_string ("testForCharWithFunction (") ;
  const GALGAS_lexicalCharacterSetMatchAST temp_0 = object ;
  result_result.plusAssign_operation(temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 89)) ;
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 90)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterSetMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterSetMatchAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterSetMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterSetMatchAST_generateConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = object ;
  result_result = GALGAS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 104)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  const GALGAS_lexicalCharacterInputArgumentAST temp_0 = object ;
  result_result = temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 111)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  const GALGAS_lexicalUnsignedInputArgumentAST temp_0 = object ;
  result_result = temp_0.readProperty_mUnsigned ().readProperty_uint ().getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 118)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * /* inObject */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("previousChar ()") ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = object ;
  result_result = GALGAS_string ("::scanner_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 132)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 132)) ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_1 = object ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_6528 (temp_1.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_6528.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_6528.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)) ;
    enumerator_6528.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 136)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = object ;
  result_result = GALGAS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 150)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (void) {
  enterExtensionGetter_generateRoutineArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                extensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateRoutineArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = object ;
  result_result = callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 157)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (void) {
  enterExtensionGetter_generateRoutineArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                extensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (defineExtensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                              const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = object ;
  result_result = GALGAS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 174)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 174)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (void) {
  enterExtensionGetter_generateDefaultSendCode (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                extensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateDefaultSendCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                       const GALGAS_string constinArgument_inScannerClassName,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalErrorByDefaultAST * object = (const cPtr_lexicalErrorByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorByDefaultAST) ;
  const GALGAS_lexicalErrorByDefaultAST temp_0 = object ;
  result_result = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 182)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 182)).add_operation (temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 182)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 182)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (void) {
  enterExtensionGetter_generateDefaultSendCode (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                extensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (defineExtensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                  const GALGAS_string constinArgument_inScannerClassName,
                                                                                                  const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = object ;
  cEnumerator_lexicalSendSearchListAST enumerator_9832 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_9832.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)) ;
    result_result.plusAssign_operation(GALGAS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_9832.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)).add_operation (GALGAS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)).add_operation (enumerator_9832.current_mAttributeName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)) ;
    result_result.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 204)) ;
    enumerator_9832.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)) ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = object ;
  result_result.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)) ;
  result_result.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 208)) ;
  result_result.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 209)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                extensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalDropInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                        const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                        const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  const GALGAS_lexicalDropInstructionAST temp_0 = object ;
  result_result = GALGAS_string ("enterDroppedTerminal (kToken_").add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 219)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 219)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalDropInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                extensionGetter_lexicalDropInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalDropInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalDropInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                              const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                              const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = object ;
  result_result = GALGAS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 229)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 229)) ;
  result_result.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 231)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                extensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalRepeatInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          const GALGAS_string constinArgument_inScannerClassName,
                                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  result_result = GALGAS_string ("do {\n") ;
  {
  result_result.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 241)) ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_0 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_11596 (temp_0.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_11596.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_11596.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 244)) ;
    enumerator_11596.gotoNextObject () ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_1 = object ;
  cEnumerator_lexicalWhileBranchListAST enumerator_11789 (temp_1.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_11789.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 249)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_11789.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 250)) ;
    result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 251)) ;
    {
    result_result.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 252)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_12014 (enumerator_11789.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_12014.hasCurrentObject ()) {
      result_result.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12014.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 254)) ;
      enumerator_12014.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 256)) ;
    }
    if (enumerator_11789.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 258)) ;
    }
    enumerator_11789.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string ("}else{\n"
    "  mLoop = false ;\n"
    "}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 260)) ;
  {
  result_result.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 263)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("}while (mLoop) ;\n"
    "mLoop = true ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 264)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalRepeatInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                extensionGetter_lexicalRepeatInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalRepeatInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalRepeatInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST generateInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalSelectInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          const GALGAS_string constinArgument_inScannerClassName,
                                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = object ;
  cEnumerator_lexicalSelectBranchListAST enumerator_12790 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_12790.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 278)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_12790.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 279)) ;
    result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 280)) ;
    {
    result_result.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 281)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_13017 (enumerator_12790.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_13017.hasCurrentObject ()) {
      result_result.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13017.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 283)) ;
      enumerator_13017.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 285)) ;
    }
    if (enumerator_12790.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 287)) ;
    }
    enumerator_12790.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mDefaultInstructionList ().getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 290)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 291)) ;
      {
      result_result.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 292)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = object ;
      cEnumerator_lexicalInstructionListAST enumerator_13380 (temp_3.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
      while (enumerator_13380.hasCurrentObject ()) {
        result_result.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13380.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 294)) ;
        enumerator_13380.gotoNextObject () ;
      }
      {
      result_result.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 296)) ;
      }
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 298)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalSelectInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                extensionGetter_lexicalSelectInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalSelectInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalSelectInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineInstructionAST generateInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalRoutineInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                           const GALGAS_string constinArgument_inScannerClassName,
                                                                                           const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  const GALGAS_lexicalRoutineInstructionAST temp_0 = object ;
  result_result = GALGAS_string ("::scanner_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 307)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 307)) ;
  const GALGAS_lexicalRoutineInstructionAST temp_1 = object ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_13990 (temp_1.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_13990.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_13990.current_mLexicalRoutineActualArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 309)) ;
    enumerator_13990.gotoNextObject () ;
  }
  const GALGAS_lexicalRoutineInstructionAST temp_2 = object ;
  cEnumerator_lstringlist enumerator_14119 (temp_2.readProperty_mErrorMessageList (), kENUMERATION_UP) ;
  while (enumerator_14119.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 312)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 312)).add_operation (enumerator_14119.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 312)) ;
    enumerator_14119.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 314)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalRoutineInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                extensionGetter_lexicalRoutineInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalRoutineInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalRoutineInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalErrorInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                         const GALGAS_string constinArgument_inScannerClassName,
                                                                                         const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalErrorInstructionAST * object = (const cPtr_lexicalErrorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorInstructionAST) ;
  const GALGAS_lexicalErrorInstructionAST temp_0 = object ;
  result_result = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 323)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 323)).add_operation (temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 323)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 323)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalErrorInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                extensionGetter_lexicalErrorInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalErrorInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalErrorInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalWarningInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                           const GALGAS_string constinArgument_inScannerClassName,
                                                                                           const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalWarningInstructionAST * object = (const cPtr_lexicalWarningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalWarningInstructionAST) ;
  const GALGAS_lexicalWarningInstructionAST temp_0 = object ;
  result_result = GALGAS_string ("lexicalWarning (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 332)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 332)).add_operation (temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 332)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 332)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalWarningInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                extensionGetter_lexicalWarningInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalWarningInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalWarningInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalTagInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                       const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  const GALGAS_lexicalTagInstructionAST temp_0 = object ;
  const GALGAS_lexicalTagInstructionAST temp_1 = object ;
  const GALGAS_lexicalTagInstructionAST temp_2 = object ;
  result_result = GALGAS_string ("const C_LocationInSource currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 341)).add_operation (GALGAS_string (" = mCurrentLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 341)).add_operation (GALGAS_string ("const C_LocationInSource endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 341)).add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 342)).add_operation (GALGAS_string (" = mTokenEndLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 342)).add_operation (GALGAS_string ("const utf32 currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 342)).add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 343)).add_operation (GALGAS_string (" = mCurrentChar ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 343)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalTagInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                extensionGetter_lexicalTagInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalTagInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalTagInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalRewindInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                          const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  const GALGAS_lexicalRewindInstructionAST temp_0 = object ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = object ;
  const GALGAS_lexicalRewindInstructionAST temp_2 = object ;
  const GALGAS_lexicalRewindInstructionAST temp_3 = object ;
  result_result = GALGAS_string ("mCurrentLocation = currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 352)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 352)).add_operation (GALGAS_string ("mTokenEndLocation = endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 352)).add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)).add_operation (GALGAS_string ("mCurrentChar = currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)).add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 354)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 354)).add_operation (GALGAS_string ("token.mTokenCode = kToken_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 354)).add_operation (temp_3.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 355)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 355)).add_operation (GALGAS_string ("enterToken (token) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 355)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalRewindInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                extensionGetter_lexicalRewindInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalRewindInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalRewindInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalLogInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                       const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("lexicalLog (LINE_AND_SOURCE_FILE) ;\n") ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalLogInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                extensionGetter_lexicalLogInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalLogInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalLogInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalImplicitRuleAST_generateCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                          const GALGAS_string constinArgument_inScannerClassName,
                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  GALGAS_tokenSortedlist var_tokenSortedList_17779 ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = object ;
  GALGAS_lexicalExplicitTokenListMap joker_17856 ; // Joker input parameter
  GALGAS_bool joker_17876 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_17856, var_tokenSortedList_17779, joker_17876, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 385)) ;
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_17923 (var_tokenSortedList_17779, kENUMERATION_DOWN) ;
  while (enumerator_17923.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 388)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 388)) ;
    result_result.plusAssign_operation(enumerator_17923.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 389)) ;
    result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 390)) ;
    result_result.plusAssign_operation(enumerator_17923.current_mName (HERE).getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 391)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 391)) ;
    result_result.plusAssign_operation(GALGAS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 392)) ;
    result_result.plusAssign_operation(GALGAS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_17923.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 393)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 393)) ;
    result_result.plusAssign_operation(GALGAS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 395)) ;
    result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 396)) ;
    enumerator_17923.gotoNextObject () ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalImplicitRuleAST_generateCode (void) {
  enterExtensionGetter_generateCode (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                     extensionGetter_lexicalImplicitRuleAST_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalImplicitRuleAST_generateCode (defineExtensionGetter_lexicalImplicitRuleAST_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalExplicitRuleAST_generateCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                          const GALGAS_string constinArgument_inScannerClassName,
                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  result_result = GALGAS_string ("if (") ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = object ;
  result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 407)) ;
  result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 408)) ;
  {
  result_result.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 409)) ;
  }
  const GALGAS_lexicalExplicitRuleAST temp_1 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_18853 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_18853.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_18853.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 411)) ;
    enumerator_18853.gotoNextObject () ;
  }
  {
  result_result.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 413)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 414)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalExplicitRuleAST_generateCode (void) {
  enterExtensionGetter_generateCode (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                     extensionGetter_lexicalExplicitRuleAST_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalExplicitRuleAST_generateCode (defineExtensionGetter_lexicalExplicitRuleAST_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateCocoaConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                        const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  const GALGAS_lexicalOrExpressionAST temp_0 = object ;
  result_result = callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 29)) ;
  result_result.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 30)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = object ;
  result_result.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 31)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                                   extensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalOrExpressionAST_generateCocoaConditionCode (defineExtensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateCocoaConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                                  const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterIntervalMatchAST * object = (const cPtr_lexicalCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterIntervalMatchAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputFromChar:") ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_0 = object ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 42)) ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_1 = object ;
  result_outGeneratedCode.plusAssign_operation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 44)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                                   extensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateCocoaConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalStringMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  const GALGAS_lexicalStringMatchAST temp_0 = object ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputString:@").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 53)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalStringMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                                   extensionGetter_lexicalStringMatchAST_generateCocoaConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalStringMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalStringMatchAST_generateCocoaConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateCocoaConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                          const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self notTestForInputString:@") ;
  const GALGAS_lexicalStringNotMatchAST temp_0 = object ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 62)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" error:& scanningOk]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 63)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                                   extensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalStringNotMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateCocoaConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                          const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterMatchAST * object = (const cPtr_lexicalCharacterMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputChar:") ;
  const GALGAS_lexicalCharacterMatchAST temp_0 = object ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 73)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                                   extensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateCocoaConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                             const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self testForCharWithFunction:") ;
  const GALGAS_lexicalCharacterSetMatchAST temp_0 = object ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 82)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 83)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                                   extensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateCocoaRoutineOrFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = object ;
  result_outGeneratedCode = GALGAS_string ("mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 97)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateCocoaRoutineOrFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  const GALGAS_lexicalCharacterInputArgumentAST temp_0 = object ;
  result_outGeneratedCode = temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 104)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 104)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateCocoaRoutineOrFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                             C_Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  const GALGAS_lexicalUnsignedInputArgumentAST temp_0 = object ;
  result_outGeneratedCode = temp_0.readProperty_mUnsigned ().readProperty_uint ().getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 111)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateCocoaRoutineOrFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * /* inObject */,
                                                                                                                     C_Compiler * /* inCompiler */
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("mPreviousChar") ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateCocoaRoutineOrFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = object ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 125)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 125)) ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_1 = object ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_6385 (temp_1.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_6385.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_6385.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 127)) ;
    if (enumerator_6385.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 128)) ;
    }
    enumerator_6385.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 130)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateCocoaRoutineArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_lexicalType_7437 ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = object ;
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_lexicalType_7437, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 148)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_needsReferenceInInputOutputInCocoa (var_lexicalType_7437, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 150)).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 151)) ;
    }
  }
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_2 = object ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mLexicalAttribute_").add_operation (temp_2.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 153)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (void) {
  enterExtensionGetter_generateCocoaRoutineArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                     extensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateCocoaRoutineArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                 const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = object ;
  result_outGeneratedCode = callExtensionGetter_generateCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 161)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (void) {
  enterExtensionGetter_generateCocoaRoutineArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                     extensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (defineExtensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateCocoaDefaultSendCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                   const GALGAS_string constinArgument_inScannerClassName,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = object ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (void) {
  enterExtensionGetter_generateCocoaDefaultSendCode (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                     extensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateCocoaDefaultSendCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * /* inObject */,
                                                                                            const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (void) {
  enterExtensionGetter_generateCocoaDefaultSendCode (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                     extensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (defineExtensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateCocoaInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                       const GALGAS_string constinArgument_inScannerClassName,
                                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = object ;
  cEnumerator_lexicalSendSearchListAST enumerator_10253 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_10253.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 205)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (enumerator_10253.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (GALGAS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (enumerator_10253.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 207)) ;
    enumerator_10253.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 209)) ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = object ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                     extensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateCocoaInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                   const GALGAS_string constinArgument_inScannerClassName,
                                                                                                   const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = object ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                     extensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateCocoaInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                               const GALGAS_string constinArgument_inScannerClassName,
                                                                                               const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("do {\n") ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 230)) ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_0 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_11641 (temp_0.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_11641.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_11641.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 233)) ;
    enumerator_11641.gotoNextObject () ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_1 = object ;
  cEnumerator_lexicalWhileBranchListAST enumerator_11849 (temp_1.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_11849.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 238)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_11849.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 239)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 240)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 241)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_12127 (enumerator_11849.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_12127.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12127.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 243)) ;
      enumerator_12127.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 245)) ;
    }
    if (enumerator_11849.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 247)) ;
    }
    enumerator_11849.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"
    "  mLoop = NO ;\n"
    "}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 249)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 252)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}while (mLoop && scanningOk) ;\n"
    "mLoop = YES ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 253)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                     extensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST generateCocoaInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                               const GALGAS_string constinArgument_inScannerClassName,
                                                                                               const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = object ;
  cEnumerator_lexicalSelectBranchListAST enumerator_13010 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_13010.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 267)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_13010.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 268)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 269)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 270)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_13290 (enumerator_13010.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_13290.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13290.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 272)) ;
      enumerator_13290.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 274)) ;
    }
    if (enumerator_13010.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 276)) ;
    }
    enumerator_13010.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mDefaultInstructionList ().getter_length (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 279)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 280)) ;
      {
      result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 281)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = object ;
      cEnumerator_lexicalInstructionListAST enumerator_13708 (temp_3.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
      while (enumerator_13708.hasCurrentObject ()) {
        result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13708.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 283)) ;
        enumerator_13708.gotoNextObject () ;
      }
      {
      result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 285)) ;
      }
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 287)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                     extensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineInstructionAST generateCocoaInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                                const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  const GALGAS_lexicalRoutineInstructionAST temp_0 = object ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 296)).add_operation (GALGAS_string (" (& scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 296)) ;
  const GALGAS_lexicalRoutineInstructionAST temp_1 = object ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_14396 (temp_1.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_14396.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_14396.current_mLexicalRoutineActualArgument (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)) ;
    enumerator_14396.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 300)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                     extensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateCocoaInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                             const GALGAS_string constinArgument_inScannerClassName,
                                                                                             const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  const GALGAS_lexicalDropInstructionAST temp_0 = object ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                     extensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalDropInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateCocoaInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                              const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                              const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                     extensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateCocoaInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                                const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                                const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                     extensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateCocoaInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                            const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                            const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  const GALGAS_lexicalTagInstructionAST temp_0 = object ;
  result_outGeneratedCode = GALGAS_string ("scanningPointStructForCocoa locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)) ;
  const GALGAS_lexicalTagInstructionAST temp_1 = object ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("[self saveScanningPoint: & locationForTag_").add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                     extensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalTagInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateCocoaInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                               const GALGAS_string constinArgument_inScannerClassName,
                                                                                               const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  const GALGAS_lexicalRewindInstructionAST temp_0 = object ;
  result_outGeneratedCode = GALGAS_string ("[self restoreScanningPoint: & locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = object ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).add_operation (temp_1.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                     extensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateCocoaInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                            const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                            const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) ; */\n") ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                     extensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalLogInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateCocoaCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalImplicitRuleAST_generateCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                               const GALGAS_string constinArgument_inScannerClassName,
                                                                               const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  GALGAS_tokenSortedlist var_tokenSortedList_18163 ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = object ;
  GALGAS_lexicalExplicitTokenListMap joker_18240 ; // Joker input parameter
  GALGAS_bool joker_18260 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_18240, var_tokenSortedList_18163, joker_18260, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 375)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_18317 (var_tokenSortedList_18163, kENUMERATION_DOWN) ;
  while (enumerator_18317.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && [self testForInputString:@"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 378)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_18317.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 380)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)).add_operation (enumerator_18317.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 382)) ;
    enumerator_18317.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalImplicitRuleAST_generateCocoaCode (void) {
  enterExtensionGetter_generateCocoaCode (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                          extensionGetter_lexicalImplicitRuleAST_generateCocoaCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalImplicitRuleAST_generateCocoaCode (defineExtensionGetter_lexicalImplicitRuleAST_generateCocoaCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateCocoaCode'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalExplicitRuleAST_generateCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                               const GALGAS_string constinArgument_inScannerClassName,
                                                                               const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  result_outGeneratedCode = GALGAS_string ("if (scanningOk && (") ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = object ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 393)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 394)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 395)) ;
  }
  const GALGAS_lexicalExplicitRuleAST temp_1 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_19214 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_19214.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_19214.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 397)) ;
    enumerator_19214.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 399)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 400)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalExplicitRuleAST_generateCocoaCode (void) {
  enterExtensionGetter_generateCocoaCode (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                          extensionGetter_lexicalExplicitRuleAST_generateCocoaCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalExplicitRuleAST_generateCocoaCode (defineExtensionGetter_lexicalExplicitRuleAST_generateCocoaCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSendTerminalByDefaultAST checkLexicalDefaultAction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                       GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = object ;
  GALGAS_lexicalSentValueList joker_7302 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mDefaultSentTerminal (), joker_7302, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 163)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (void) {
  enterExtensionMethod_checkLexicalDefaultAction (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                  extensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (defineExtensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalErrorByDefaultAST checkLexicalDefaultAction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalErrorByDefaultAST * object = (const cPtr_lexicalErrorByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorByDefaultAST) ;
  {
  const GALGAS_lexicalErrorByDefaultAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 171)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (void) {
  enterExtensionMethod_checkLexicalDefaultAction (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                  extensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (defineExtensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalOrExpressionAST checkLexicalExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalOrExpressionAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                           GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  const GALGAS_lexicalOrExpressionAST temp_0 = object ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 185)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = object ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 186)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalOrExpressionAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                               extensionMethod_lexicalOrExpressionAST_checkLexicalExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalOrExpressionAST_checkLexicalExpression (defineExtensionMethod_lexicalOrExpressionAST_checkLexicalExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterMatchAST checkLexicalExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCharacterMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * /* inObject */,
                                                                             GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalCharacterMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                               extensionMethod_lexicalCharacterMatchAST_checkLexicalExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalCharacterMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalCharacterMatchAST_checkLexicalExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterSetMatchAST checkLexicalExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_lexicalCharacterSetMatchAST temp_1 = object ;
    test_0 = ioArgument_ioLexiqueAnalysisContext.readProperty_mExternUnicodeTestFunctions ().getter_hasKey (temp_1.readProperty_mCharacterSetName ().readProperty_string () COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 200)).operator_not (SOURCE_FILE ("lexiqueCompilation.galgas", 200)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterSetMatchAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      appendFixItActions (fixItArray3, kFixItReplace, ioArgument_ioLexiqueAnalysisContext.readProperty_mExternUnicodeTestFunctions ()) ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCharacterSetName ().readProperty_location (), GALGAS_string ("undefined test function"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 201)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                               extensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterIntervalMatchAST checkLexicalExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * /* inObject */,
                                                                                     GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                               extensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalStringMatchAST checkLexicalExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalStringMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                          GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  const GALGAS_lexicalStringMatchAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.addAssign_operation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 215)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalStringMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                               extensionMethod_lexicalStringMatchAST_checkLexicalExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalStringMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalStringMatchAST_checkLexicalExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalStringNotMatchAST checkLexicalExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalStringNotMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                             GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  const GALGAS_lexicalStringNotMatchAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.addAssign_operation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 222)) ;
  {
  const GALGAS_lexicalStringNotMatchAST temp_1 = object ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 223)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalStringNotMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                               extensionMethod_lexicalStringNotMatchAST_checkLexicalExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalStringNotMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalStringNotMatchAST_checkLexicalExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalFunctionCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                               GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                               GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType_11275 ;
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_11275, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 241)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_11275.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_11275, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 247)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 248)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 249)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 250)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 247)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                               GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                               GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 261)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 262)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 263)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 264)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 262)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalFunctionCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 275)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalUnsignedInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GALGAS_string ("type error, a literal character has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 276)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 277)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 278)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 276)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                      GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                                      GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCurrentCharacterInputArgumentAST * object = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 289)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCurrentCharacterInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 290)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 291)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 292)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 290)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalFunctionCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_14070 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_14119 ;
  GALGAS_string var_replacementFunctionName_14157 ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = object ;
  GALGAS_bool joker_14332 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_14070, var_returnedLexicalFormalType_14119, var_replacementFunctionName_14157, joker_14332, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 306)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName_14157.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_14157, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 315)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 315)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 315)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType_14119.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_14119, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 319)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 320)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 321)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 322)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 319)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalFunctionInputArgumentAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList_14070.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 326)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 326)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_9 = object ;
      const GALGAS_lexicalFunctionInputArgumentAST temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 328)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 327)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 328)).add_operation (var_lexicalFormalTypeList_14070.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 330)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 329)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 330)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 327)) ;
    }
  }
  const GALGAS_lexicalFunctionInputArgumentAST temp_12 = object ;
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_15325 (var_lexicalFormalTypeList_14070, kENUMERATION_UP) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_15381 (temp_12.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_15325.hasCurrentObject () && enumerator_15381.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_15381.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_15325.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 334)) ;
    enumerator_15325.gotoNextObject () ;
    enumerator_15381.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType_16528 ;
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_16528, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 356)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_16528.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_16528, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 362)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 363)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 364)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 365)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 362)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 376)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 377)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 378)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 379)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 377)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 390)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalUnsignedInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GALGAS_string ("type error, a literal unsigned value has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 391)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 392)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 393)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 391)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                     GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                                     GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCurrentCharacterInputArgumentAST * object = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 404)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCurrentCharacterInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 405)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 406)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 407)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 405)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_19326 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_19375 ;
  GALGAS_string var_replacementFunctionName_19413 ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = object ;
  GALGAS_bool joker_19588 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_19326, var_returnedLexicalFormalType_19375, var_replacementFunctionName_19413, joker_19588, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 421)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName_19413.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_19413, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 430)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 430)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 430)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType_19375.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_19375, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 434)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 435)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 436)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 434)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalFunctionInputArgumentAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList_19326.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 441)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 441)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_9 = object ;
      const GALGAS_lexicalFunctionInputArgumentAST temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 443)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 442)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 443)).add_operation (var_lexicalFormalTypeList_19326.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 445)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 444)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 445)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 442)) ;
    }
  }
  const GALGAS_lexicalFunctionInputArgumentAST temp_12 = object ;
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_20581 (var_lexicalFormalTypeList_19326, kENUMERATION_UP) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_20637 (temp_12.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_20581.hasCurrentObject () && enumerator_20637.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_20637.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_20581.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 449)) ;
    enumerator_20581.gotoNextObject () ;
    enumerator_20637.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                    GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                                    GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType_21914 ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_21914, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 473)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_21914.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputOutputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_21914, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 479)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 480)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 481)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 482)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 479)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 486)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalAttributeInputOutputArgumentAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualPassingModeLocation (), GALGAS_string ("the output mode (!) is required here, not an output/input mode"), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 487)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                           GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                           GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                           GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = object ;
  callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), ioArgument_ioLexiqueAnalysisContext, inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 498)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 503)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFormalInputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualPassingModeLocation (), GALGAS_string ("the output/input mode (!\?) is required here, not an input mode"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 504)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalStructuredSendInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                         GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                         GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = object ;
  cEnumerator_lexicalSendSearchListAST enumerator_24239 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_24239.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GALGAS_bool (true), enumerator_24239.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 522)) ;
    }
    GALGAS_lexicalTypeEnum joker_24465 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_24239.current_mAttributeName (HERE), joker_24465, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 523)) ;
    enumerator_24239.gotoNextObject () ;
  }
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = object ;
  callExtensionMethod_checkLexicalDefaultAction ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 525)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                extensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSimpleSendInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                     GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = object ;
  GALGAS_lexicalSentValueList joker_24922 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mSentTerminal (), joker_24922, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 533)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                extensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRepeatInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  const GALGAS_lexicalRepeatInstructionAST temp_0 = object ;
  cEnumerator_lexicalWhileBranchListAST enumerator_25247 (temp_0.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_25247.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_25247.current_mWhileExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 542)) ;
    GALGAS_lexicalTagMap var_tagMap_25371 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 543)) ;
    cEnumerator_lexicalInstructionListAST enumerator_25441 (enumerator_25247.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_25441.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_25441.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_25371, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 545)) ;
      enumerator_25441.gotoNextObject () ;
    }
    enumerator_25247.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_25578 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 548)) ;
  const GALGAS_lexicalRepeatInstructionAST temp_1 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_25646 (temp_1.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_25646.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_25646.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_25578, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 550)) ;
    enumerator_25646.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                extensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSelectInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = object ;
  cEnumerator_lexicalSelectBranchListAST enumerator_26094 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_26094.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_26094.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 560)) ;
    GALGAS_lexicalTagMap var_tagMap_26220 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 561)) ;
    cEnumerator_lexicalInstructionListAST enumerator_26290 (enumerator_26094.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_26290.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26290.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_26220, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 563)) ;
      enumerator_26290.gotoNextObject () ;
    }
    enumerator_26094.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_26428 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 566)) ;
  const GALGAS_lexicalSelectInstructionAST temp_1 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_26496 (temp_1.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
  while (enumerator_26496.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26496.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_26428, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 568)) ;
    enumerator_26496.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                extensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalSelectInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRoutineInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                  GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_26975 ;
  GALGAS_stringlist var_routineErrorMessageList_27017 ;
  const GALGAS_lexicalRoutineInstructionAST temp_0 = object ;
  GALGAS_bool joker_27177 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalRoutineMessageMap ().method_searchKey (temp_0.readProperty_mRoutineName (), var_lexicalRoutineFormalArgumentList_26975, var_routineErrorMessageList_27017, joker_27177, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 579)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalRoutineInstructionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, var_lexicalRoutineFormalArgumentList_26975.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 586)).objectCompare (temp_2.readProperty_mActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 586)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalRoutineInstructionAST temp_3 = object ;
      const GALGAS_lexicalRoutineInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this lexical routine call names ").add_operation (temp_4.readProperty_mActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 588)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 587)).add_operation (GALGAS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 588)).add_operation (var_lexicalRoutineFormalArgumentList_26975.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 590)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 589)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 590)), fixItArray5  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 587)) ;
    }
  }
  const GALGAS_lexicalRoutineInstructionAST temp_6 = object ;
  cEnumerator_lexicalRoutineFormalArgumentList enumerator_27685 (var_lexicalRoutineFormalArgumentList_26975, kENUMERATION_UP) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_27754 (temp_6.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_27685.hasCurrentObject () && enumerator_27754.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_27754.current_mLexicalRoutineActualArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_27685.current_mLexicalFormalArgumentMode (HERE), enumerator_27685.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 594)) ;
    enumerator_27685.gotoNextObject () ;
    enumerator_27754.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalRoutineInstructionAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, var_routineErrorMessageList_27017.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 601)).objectCompare (temp_8.readProperty_mErrorMessageList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 601)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalRoutineInstructionAST temp_9 = object ;
      const GALGAS_lexicalRoutineInstructionAST temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this lexical routine call names ").add_operation (temp_10.readProperty_mErrorMessageList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 603)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 602)).add_operation (GALGAS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 603)).add_operation (var_routineErrorMessageList_27017.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 605)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 604)).add_operation (GALGAS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 605)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 602)) ;
    }
  }
  const GALGAS_lexicalRoutineInstructionAST temp_12 = object ;
  cEnumerator_lstringlist enumerator_28394 (temp_12.readProperty_mErrorMessageList (), kENUMERATION_UP) ;
  while (enumerator_28394.hasCurrentObject ()) {
    cMapElement_lexicalMessageMap * objectArray_28433 = (cMapElement_lexicalMessageMap *) ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, enumerator_28394.current_mValue (HERE), kSearchErrorMessage_lexicalMessageMap_searchKey  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 609)) ;
    if (NULL != objectArray_28433) {
      macroValidSharedObject (objectArray_28433, cMapElement_lexicalMessageMap) ;
      objectArray_28433->mProperty_mMessageIsUsed = GALGAS_bool (true) ;
    }
    enumerator_28394.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                extensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalLogInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalLogInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                              GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalLogInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                extensionMethod_lexicalLogInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalLogInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalLogInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRewindInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  const GALGAS_lexicalRewindInstructionAST temp_0 = object ;
  ioArgument_ioTagMap.method_searchKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 627)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = object ;
  GALGAS_lexicalSentValueList joker_29242 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_1.readProperty_mTerminalName (), joker_29242, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 628)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                extensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalRewindInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalDropInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalDropInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                               GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  const GALGAS_lexicalDropInstructionAST temp_0 = object ;
  GALGAS_lexicalSentValueList joker_29600 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mTerminalName (), joker_29600, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 636)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalDropInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                extensionMethod_lexicalDropInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalDropInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalDropInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalTagInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalTagInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                              GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  {
  const GALGAS_lexicalTagInstructionAST temp_0 = object ;
  ioArgument_ioTagMap.setter_insertKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 644)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalTagInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                extensionMethod_lexicalTagInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalTagInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalTagInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalErrorInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalErrorInstructionAST * object = (const cPtr_lexicalErrorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorInstructionAST) ;
  {
  const GALGAS_lexicalErrorInstructionAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 653)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                extensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalErrorInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalWarningInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                  GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalWarningInstructionAST * object = (const cPtr_lexicalWarningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalWarningInstructionAST) ;
  {
  const GALGAS_lexicalWarningInstructionAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 661)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                extensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalWarningInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalImplicitRuleAST checkLexicalRule'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalImplicitRuleAST_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = object ;
  GALGAS_lexicalExplicitTokenListMap joker_31511 ; // Joker input parameter
  GALGAS_tokenSortedlist joker_31514 ; // Joker input parameter
  GALGAS_bool joker_31517 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_31511, joker_31514, joker_31517, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 675)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalImplicitRuleAST_checkLexicalRule (void) {
  enterExtensionMethod_checkLexicalRule (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                         extensionMethod_lexicalImplicitRuleAST_checkLexicalRule) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalImplicitRuleAST_checkLexicalRule (defineExtensionMethod_lexicalImplicitRuleAST_checkLexicalRule, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalExplicitRuleAST checkLexicalRule'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalExplicitRuleAST_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = object ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 682)) ;
  GALGAS_lexicalTagMap var_tagMap_31866 = GALGAS_lexicalTagMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 683)) ;
  const GALGAS_lexicalExplicitRuleAST temp_1 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_31891 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_31891.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_31891.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_31866, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 685)) ;
    enumerator_31891.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalExplicitRuleAST_checkLexicalRule (void) {
  enterExtensionMethod_checkLexicalRule (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                         extensionMethod_lexicalExplicitRuleAST_checkLexicalRule) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalExplicitRuleAST_checkLexicalRule (defineExtensionMethod_lexicalExplicitRuleAST_checkLexicalRule, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'lexiqueGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_lexiqueGenerationTemplates_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_lexiqueGenerationTemplates_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_lexiqueGenerationTemplates_0,
  0,
  gWrapperAllDirectories_lexiqueGenerationTemplates_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates newHeaderZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"galgas2/C_Lexique.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                    E X T E R N    R O U T I N E S                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_790_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_790 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap (), kENUMERATION_UP) ;
    while (enumerator_790.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_790.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "void scanner_routine_" ;
        result << enumerator_790.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (C_Lexique & inLexique" ;
        GALGAS_uint index_1011_ (0) ;
        if (enumerator_790.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_1011 (enumerator_790.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_1011.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result << extensionGetter_cppConstInFormalArgument (enumerator_1011.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 17)).stringValue () ;
            result << extensionGetter_cppTypeName (enumerator_1011.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 18)).stringValue () ;
            result << extensionGetter_cppReferenceInFormalArgument (enumerator_1011.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 19)).stringValue () ;
            result << " " ;
            result << enumerator_1011.current_mArgumentNameForComment (HERE).stringValue () ;
            index_1011_.increment () ;
            enumerator_1011.gotoNextObject () ;
          }
        }
        GALGAS_uint index_1364_ (0) ;
        if (enumerator_790.current_mErrorMessageList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_1364 (enumerator_790.current_mErrorMessageList (HERE), kENUMERATION_UP) ;
          while (enumerator_1364.hasCurrentObject ()) {
            result << ",\n"
              "                const char * " ;
            result << enumerator_1364.current_mValue (HERE).stringValue () ;
            index_1364_.increment () ;
            enumerator_1364.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_790_.increment () ;
      enumerator_790.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                    E X T E R N    F U N C T I O N S                                           \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_1933_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1933 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap (), kENUMERATION_UP) ;
    while (enumerator_1933.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1933.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "\n" ;
        result << extensionGetter_cppTypeName (enumerator_1933.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 35)).stringValue () ;
        result << " scanner_function_" ;
        result << enumerator_1933.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (C_Lexique & inLexique" ;
        GALGAS_uint index_2130_ (0) ;
        if (enumerator_1933.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_2130 (enumerator_1933.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_2130.hasCurrentObject ()) {
            result << ",\n"
              "                const " ;
            result << extensionGetter_cppTypeName (enumerator_2130.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 37)).stringValue () ;
            result << " " ;
            result << enumerator_2130.current_mArgumentNameForComment (HERE).stringValue () ;
            index_2130_.increment () ;
            enumerator_2130.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_1933_.increment () ;
      enumerator_1933.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                       T O K E N    C L A S S                                                  \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " : public cToken {\n" ;
  GALGAS_uint index_2737_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2737 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_2737.hasCurrentObject ()) {
      result << "  public: " ;
      result << extensionGetter_cppTypeName (enumerator_2737.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 50)).stringValue () ;
      result << " mLexicalAttribute_" ;
      result << enumerator_2737.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 50)).stringValue () ;
      result << " ;\n" ;
      index_2737_.increment () ;
      enumerator_2737.gotoNextObject () ;
    }
  }
  result << "\n"
    "  public: cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                     S C A N N E R    C L A S S                                                \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " : public C_Lexique {\n"
    "//--- Constructors\n"
    "  public: C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCallerCompiler,\n"
    "                       const C_String & inSourceFileName\n"
    "                       COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "  public: C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCallerCompiler,\n"
    "                       const C_String & inSourceString,\n"
    "                       const C_String & inStringForError\n"
    "                       COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Instrospection\n"
    "  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;\n"
    "\n"
    "//--- Declaring a protected virtual destructor enables the compiler to raise\n"
    "//    an error if a direct delete is performed; only the static method\n"
    "//    C_SharedObject::detachPointer may invoke delete.\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    protected: virtual ~ C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {}\n"
    "  #endif\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 80)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "\n"
      "//--- Scanner mode for template scanner\n"
      "  private: int32_t mMatchedTemplateDelimiterIndex ;\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates newHeaderZone3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const GALGAS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                                const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                const GALGAS_lexicalFunctionListAST & in_UNICODE_5F_TEST_5F_FUNCTIONS
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//--- Terminal symbols enumeration\n"
    "  public: enum {kToken_" ;
  GALGAS_uint index_217_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_217 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_217.hasCurrentObject ()) {
      result << ",\n"
        "   kToken_" ;
      result << enumerator_217.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 5)).stringValue () ;
      index_217_.increment () ;
      enumerator_217.gotoNextObject () ;
    }
  }
  result << "} ;\n" ;
  GALGAS_uint index_402_ (0) ;
  if (in_DELIMITOR_5F_LIST_5F_LIST.isValid ()) {
    cEnumerator_lexicalListDeclarationListAST enumerator_402 (in_DELIMITOR_5F_LIST_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_402.hasCurrentObject ()) {
      result << "\n"
        "//--- Key words table '" ;
      result << enumerator_402.current_mName (HERE).readProperty_string ().stringValue () ;
      result << "'\n"
        "  public: static int16_t search_into_" ;
      result << enumerator_402.current_mName (HERE).readProperty_string ().stringValue () ;
      result << " (const C_String & inSearchedString) ;\n" ;
      index_402_.increment () ;
      enumerator_402.gotoNextObject () ;
    }
  }
  result << "  \n"
    "\n"
    "//--- Assign from attribute\n" ;
  GALGAS_uint index_670_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_670 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_670.hasCurrentObject ()) {
      result << "  public: GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_670.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).stringValue () ;
      result << " synthetizedAttribute_" ;
      result << enumerator_670.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).stringValue () ;
      result << " (void) const ;\n" ;
      index_670_.increment () ;
      enumerator_670.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Attribute access\n" ;
  GALGAS_uint index_944_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_944 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_944.hasCurrentObject ()) {
      result << "  public: " ;
      result << extensionGetter_cppTypeName (enumerator_944.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 25)).stringValue () ;
      result << " attributeValue_" ;
      result << enumerator_944.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 25)).stringValue () ;
      result << " (void) const ;\n" ;
      index_944_.increment () ;
      enumerator_944.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Indexing keys\n" ;
  GALGAS_uint index_1171_ (0) ;
  if (in_INDEXING_5F_LIST.isValid ()) {
    cEnumerator_indexingListAST enumerator_1171 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_1171 = enumerator_1171.hasCurrentObject () ;
    if (nonEmpty_enumerator_1171) {
      result << "  public: enum {" ;
    }
    while (enumerator_1171.hasCurrentObject ()) {
      result << "\n"
        "    kIndexing_" ;
      result << enumerator_1171.current_mIndexName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 33)).stringValue () ;
      if (enumerator_1171.hasNextObject ()) {
        result << "," ;
      }
      index_1171_.increment () ;
      enumerator_1171.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_1171) {
      result << "\n"
        "  } ;\n" ;
    }
  }
  result << "\n"
    "//--- Unicode test functions\n" ;
  GALGAS_uint index_1373_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_1373 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_1373.hasCurrentObject ()) {
      result << "  public: static bool " ;
      result << enumerator_1373.current_mFunctionName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 41)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) ;\n" ;
      index_1373_.increment () ;
      enumerator_1373.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Indexing directory\n"
    "  protected: virtual C_String indexingDirectory (void) const ;\n"
    "\n"
    "//--- Parse lexical token\n"
    "  protected: virtual bool parseLexicalToken (void) ;\n"
    "\n"
    "//--- Get terminal message\n"
    "  protected: virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;\n"
    "\n"
    "//--- Get terminal count\n"
    "  public: virtual int16_t terminalVocabularyCount (void) const { return " ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_length (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 54)).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 54)).stringValue () ;
  result << " ; }\n"
    "\n"
    "//--- Get Token String\n"
    "  public: virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;\n"
    "\n"
    "//--- Enter Token\n"
    "  protected: void enterToken (cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " & ioToken) ;\n"
    "\n"
    "//--- Style name for Latex\n"
    "  protected: virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;\n"
    "  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates newImplementationZone2Galgas3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                                  const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                                  const GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                                  const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                  const GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                                  const GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                                  const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                                  const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                                  const GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                                  const GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                  const GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                                  const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                                  const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                                  const GALGAS_lexicalFunctionListAST & in_UNICODE_5F_TEST_5F_FUNCTIONS
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//     L E X I Q U E                                                                             \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"strings/unicode_character_cpp.h\"\n"
    "#include \"galgas2/scanner_actions.h\"\n"
    "#include \"galgas2/cLexiqueIntrospection.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void)" ;
  GALGAS_uint index_736_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_736 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_736 = enumerator_736.hasCurrentObject () ;
    if (nonEmpty_enumerator_736) {
      result << " :\n" ;
    }
    while (enumerator_736.hasCurrentObject ()) {
      result << "mLexicalAttribute_" ;
      result << enumerator_736.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 16)).stringValue () ;
      result << " ()" ;
      if (enumerator_736.hasNextObject ()) {
        result << ",\n" ;
      }
      index_736_.increment () ;
      enumerator_736.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCallerCompiler,\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const C_String & inSourceFileName\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE)" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 28)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << ",\n"
      "mMatchedTemplateDelimiterIndex (-1)" ;
  }else if (kBoolFalse == test_0) {
  }
  result << " {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCallerCompiler,\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const C_String & inSourceString,\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const C_String & inStringForError\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE)" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 41)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << ",\n"
      "mMatchedTemplateDelimiterIndex (-1)" ;
  }else if (kBoolFalse == test_1) {
  }
  result << " {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                 I N D E X I N G    D I R E C T O R Y                                          \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::indexingDirectory (void) const {\n"
    "  return " ;
  result << in_INDEXING_5F_DIRECTORY.getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 52)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                        Lexical error message list                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_2747_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    cEnumerator_lexicalMessageMap enumerator_2747 (in_LEXICAL_5F_MESSAGE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2747.hasCurrentObject ()) {
      result << "\n"
        "static const char * gLexicalMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_2747.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " = " ;
      result << enumerator_2747.current_mLexicalMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 60)).stringValue () ;
      result << " ;\n" ;
      index_2747_.increment () ;
      enumerator_2747.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//          Syntax error messages, for every terminal symbol                                     \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_3355_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_3355 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3355.hasCurrentObject ()) {
      result << "\n"
        "//--- Syntax error message for terminal '$" ;
      result << enumerator_3355.current_mTerminalName (HERE).readProperty_string ().stringValue () ;
      result << "$' :\n"
        "static const char * gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3355.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 69)).stringValue () ;
      result << " = " ;
      result << enumerator_3355.current_mSyntaxErrorMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 69)).stringValue () ;
      result << " ;\n" ;
      index_3355_.increment () ;
      enumerator_3355.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                getMessageForTerminal                                                          \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::getMessageForTerminal (const int16_t inTerminalIndex) const {\n"
    "  C_String result = \"<unknown>\" ;\n"
    "  if ((inTerminalIndex >= 0) && (inTerminalIndex < " ;
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).stringValue () ;
  result << ")) {\n"
    "    static const char * syntaxErrorMessageArray [" ;
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue () ;
  result << "] = {kEndOfSourceLexicalErrorMessage" ;
  GALGAS_uint index_4439_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_4439 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4439.hasCurrentObject ()) {
      result << ",\n"
        "        gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_4439.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 81)).stringValue () ;
      index_4439_.increment () ;
      enumerator_4439.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = syntaxErrorMessageArray [inTerminalIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                      U N I C O D E    S T R I N G S                                           \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_5031_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    cEnumerator_stringset enumerator_5031 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES, kENUMERATION_UP) ;
    while (enumerator_5031.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_5031.current_key (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 94)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "\n"
          "//--- Unicode string for '$" ;
        result << enumerator_5031.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 95)).stringValue () ;
        result << "$'\n"
          "static const utf32 kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5031.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 96)).stringValue () ;
        result << " [] = " ;
        result << enumerator_5031.current_key (HERE).getter_utf_33__32_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 96)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_5031_.increment () ;
      enumerator_5031.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_5422_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_5422 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_5422.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "//             Key words table '" ;
      result << enumerator_5422.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "'      \n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "static const int32_t ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5422.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " = " ;
      result << enumerator_5422.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 105)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 105)).stringValue () ;
      result << " ;\n"
        "\n"
        "static const C_unicode_lexique_table_entry ktable_for_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5422.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " [ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5422.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_6153_ (0) ;
      if (enumerator_5422.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_6153 (enumerator_5422.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_6153.hasCurrentObject ()) {
          result << "  C_unicode_lexique_table_entry (kUnicodeString_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_6153.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 108)).stringValue () ;
          result << ", " ;
          result << enumerator_6153.current_mLength (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 108)).stringValue () ;
          result << ", C_Lexique_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "::kToken_" ;
          result << enumerator_6153.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 108)).stringValue () ;
          result << ")" ;
          if (enumerator_6153.hasNextObject ()) {
            result << ",\n" ;
          }
          index_6153_.increment () ;
          enumerator_6153.gotoNextObject () ;
        }
      }
      result << "\n"
        "} ;\n"
        "\n"
        "int16_t C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::search_into_" ;
      result << enumerator_5422.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " (const C_String & inSearchedString) {\n"
        "  return searchInList (inSearchedString, ktable_for_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5422.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << ", ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5422.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << ") ;\n"
        "}\n"
        "\n" ;
      index_5422_.increment () ;
      enumerator_5422.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                          getCurrentTokenString                                                \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::getCurrentTokenString (const cToken * inTokenPtr) const {\n"
    "  const cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = (const cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " *) inTokenPtr ;\n"
    "  C_String s ;\n"
    "  if (ptr == NULL) {\n"
    "    s.appendCString(\"$$\") ;\n"
    "  }else{\n"
    "    switch (ptr->mTokenCode) {\n"
    "    case kToken_:\n"
    "      s.appendCString(\"$$\") ;\n"
    "      break ;\n" ;
  GALGAS_uint index_7568_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_7568 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7568.hasCurrentObject ()) {
      result << "    case kToken_" ;
      result << enumerator_7568.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 132)).stringValue () ;
      result << ":\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n"
        "      s.appendCString (" ;
      result << enumerator_7568.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 134)).stringValue () ;
      result << ") ;\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n" ;
      GALGAS_uint index_7953_ (0) ;
      if (enumerator_7568.current_mSentAttributeList (HERE).isValid ()) {
        cEnumerator_lexicalSentValueList enumerator_7953 (enumerator_7568.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
        while (enumerator_7953.hasCurrentObject ()) {
          result << "      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;\n"
            "      s." ;
          result << extensionGetter_appendMethodName (enumerator_7953.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue () ;
          result << " (ptr->mLexicalAttribute_" ;
          result << enumerator_7953.current_mLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue () ;
          result << extensionGetter_appendArgumentOfMethod (enumerator_7953.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue () ;
          result << ") ;\n" ;
          index_7953_.increment () ;
          enumerator_7953.gotoNextObject () ;
        }
      }
      result << "      break ;\n" ;
      index_7568_.increment () ;
      enumerator_7568.gotoNextObject () ;
    }
  }
  result << "    default:\n"
    "      break ;\n"
    "    }\n"
    "  }\n"
    "  return s ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                           Template Delimiters                                                 \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_8882_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
    cEnumerator_templateDelimitorList enumerator_8882 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8882 = enumerator_8882.hasCurrentObject () ;
    if (nonEmpty_enumerator_8882) {
      result << "static const cTemplateDelimiter " ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_kTemplateDefinitionArray [" ;
      result << in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 154)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 154)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_8882.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_8882.current_mStartString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).stringValue () ;
      result << ", " ;
      result << enumerator_8882.current_mStartString (HERE).readProperty_string ().getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_8882.current_mEndString (HERE).readProperty_string ().getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "NULL, 0," ;
      }else if (kBoolFalse == test_3) {
        result << "kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_8882.current_mEndString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue () ;
        result << ", " ;
        result << enumerator_8882.current_mEndString (HERE).readProperty_string ().getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue () ;
        result << "," ;
      }
      result << " NULL, " ;
      result << enumerator_8882.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 162)).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 162)).stringValue () ;
      result << ")" ;
      if (enumerator_8882.hasNextObject ()) {
        result << ",\n" ;
      }
      index_8882_.increment () ;
      enumerator_8882.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8882) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                           Template Replacements                                               \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_9928_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    cEnumerator_templateReplacementListAST enumerator_9928 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_9928 = enumerator_9928.hasCurrentObject () ;
    if (nonEmpty_enumerator_9928) {
      result << "static const cTemplateDelimiter " ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_kTemplateReplacementArray [" ;
      result << in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_9928.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9928.current_mMatchString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 175)).stringValue () ;
      result << ", " ;
      result << enumerator_9928.current_mMatchString (HERE).readProperty_string ().getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 175)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 175)).stringValue () ;
      result << ", kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9928.current_mReplacementString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue () ;
      result << ", " ;
      result << enumerator_9928.current_mReplacementString (HERE).readProperty_string ().getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_9928.current_mReplacementFunction (HERE).readProperty_string ().getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 177)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "NULL" ;
      }else if (kBoolFalse == test_4) {
        result << "scanner_routine_" ;
        result << enumerator_9928.current_mReplacementFunction (HERE).readProperty_string ().stringValue () ;
      }
      result << ", true)" ;
      if (enumerator_9928.hasNextObject ()) {
        result << ",\n" ;
      }
      index_9928_.increment () ;
      enumerator_9928.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_9928) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//            Terminal Symbols as end of script in template mark                                 \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 191)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_uint index_11117_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      cEnumerator_terminalList enumerator_11117 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_11117 = enumerator_11117.hasCurrentObject () ;
      if (nonEmpty_enumerator_11117) {
        result << "static const bool " ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_kEndOfScriptInTemplateArray [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_11117.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_11117.current_mIsEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 194)).stringValue () ;
        result << " /* " ;
        result << enumerator_11117.current_mTerminalName (HERE).readProperty_string ().stringValue () ;
        result << " */" ;
        if (enumerator_11117.hasNextObject ()) {
          result << ",\n" ;
        }
        index_11117_.increment () ;
        enumerator_11117.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_11117) {
        result << "\n"
          "} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_5) {
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//            Unicode test functions                                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    " \n" ;
  GALGAS_uint index_11657_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_11657 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_11657.hasCurrentObject ()) {
      result << "bool C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::" ;
      result << enumerator_11657.current_mFunctionName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 206)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) {\n"
        "  return " ;
      result << callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_11657.current_mLexicalExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 207)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_11657_.increment () ;
      enumerator_11657.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//               P A R S E    L E X I C A L    T O K E N                                         \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::parseLexicalToken (void) {\n"
    "  cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " token ;\n"
    "  mLoop = true ;\n"
    "  token.mTokenCode = -1 ;\n"
    "  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n" ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 220)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "    if ((mMatchedTemplateDelimiterIndex >= 0)\n"
      "     && (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n"
      "     && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n"
      "      const bool foundEndDelimitor = testForInputUTF32String (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n"
      "                                                              " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength,\n"
      "                                                              true) ;\n"
      "      if (foundEndDelimitor) {\n"
      "        mMatchedTemplateDelimiterIndex = -1 ;\n"
      "      }\n"
      "    }\n"
      "    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n"
      "      int32_t replacementIndex = 0 ;\n"
      "      while (replacementIndex >= 0) {\n"
      "        replacementIndex = findTemplateDelimiterIndex (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray, " ;
    result << in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 234)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 234)).stringValue () ;
    result << ") ;\n"
      "        if (replacementIndex >= 0) {\n"
      "          if (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mReplacementFunction == NULL) {\n"
      "            token.mTemplateStringBeforeToken << " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mEndString ;\n"
      "          }else{\n"
      "            C_String s ;\n"
      "            while (notTestForInputUTF32String (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mEndString,\n"
      "                                               " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mEndStringLength,\n"
      "                                               kEndOfSourceLexicalErrorMessage\n"
      "                                               COMMA_HERE)) {\n"
      "              s.appendUnicodeCharacter (previousChar () COMMA_HERE) ;\n"
      "            }\n"
      "            " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n"
      "          }\n"
      "        }\n"
      "      }\n"
      "      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateDefinitionArray, " ;
    result << in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 250)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 250)).stringValue () ;
    result << ") ;\n"
      "      if (mMatchedTemplateDelimiterIndex < 0) {\n"
      "        token.mTemplateStringBeforeToken.appendUnicodeCharacter (mCurrentChar COMMA_HERE) ;\n"
      "        advance () ;\n"
      "      }\n"
      "    }\n"
      "    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n" ;
    GALGAS_uint index_14962_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_14962 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_14962.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_14962.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 258)).stringValue () ;
        result << extensionGetter_initialization (enumerator_14962.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 258)).stringValue () ;
        result << " ;\n" ;
        index_14962_.increment () ;
        enumerator_14962.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_15189_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_15189 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_15189.hasCurrentObject ()) {
        result << callExtensionGetter_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_15189.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 265)).stringValue () ;
        index_15189_.increment () ;
        enumerator_15189.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ())) ;
    }
    result << "if (testForInputUTF32Char (TO_UNICODE ('\\0'))) { // End of source text \? \n"
      "      token.mTokenCode = kToken_ ; // Empty string code\n"
      "    }else{ // Unknown input character\n"
      "      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n"
      "      token.mTokenCode = -1 ; // No token\n"
      "      advance () ; // ... go throught unknown character\n"
      "    }\n"
      "    }catch (const C_lexicalErrorException &) {\n"
      "      token.mTokenCode = -1 ; // No token\n"
      "      advance () ; // ... go throught unknown character\n"
      "    }\n"
      "    }\n"
      "    if ((token.mTokenCode > 0) && " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n"
      "      mMatchedTemplateDelimiterIndex = -1 ;\n"
      "    }\n"
      "  " ;
  }else if (kBoolFalse == test_6) {
    GALGAS_uint index_15996_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_15996 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_15996.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_15996.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 285)).stringValue () ;
        result << extensionGetter_initialization (enumerator_15996.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 285)).stringValue () ;
        result << " ;\n" ;
        index_15996_.increment () ;
        enumerator_15996.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_16223_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_16223 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_16223.hasCurrentObject ()) {
        result << callExtensionGetter_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_16223.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 292)).stringValue () ;
        index_16223_.increment () ;
        enumerator_16223.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ())) ;
    }
    result << "if (testForInputUTF32Char (TO_UNICODE ('\\0'))) { // End of source text \? \n"
      "        token.mTokenCode = kToken_ ; // Empty string code\n"
      "      }else{ // Unknown input character\n"
      "        unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n"
      "        token.mTokenCode = -1 ; // No token\n"
      "        advance () ; // ... go throught unknown character\n"
      "      }\n"
      "    }catch (const C_lexicalErrorException &) {\n"
      "      token.mTokenCode = -1 ; // No token\n"
      "      advance () ; // ... go throught unknown character\n"
      "    }" ;
  }
  result << "\n"
    "  }\n"
    "  if (UNICODE_VALUE (mCurrentChar) == '\\0') {\n"
    "    token.mTokenCode = 0 ;\n"
    "    enterToken (token) ;\n"
    "  }\n"
    "  return token.mTokenCode > 0 ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                         E N T E R    T O K E N                                                \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::enterToken (cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " & ioToken) {\n"
    "  cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = NULL ;\n"
    "  macroMyNew (ptr, cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " ()) ;\n"
    "  ptr->mTokenCode = ioToken.mTokenCode ;\n"
    "  // ptr->mIsOptional = ioToken.mIsOptional ;\n"
    "  ptr->mStartLocation = mTokenStartLocation ;\n"
    "  ptr->mEndLocation = mTokenEndLocation ;\n"
    "  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;\n"
    "  ioToken.mTemplateStringBeforeToken = \"\" ;\n" ;
  GALGAS_uint index_17850_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_17850 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_17850.hasCurrentObject ()) {
      result << "  ptr->mLexicalAttribute_" ;
      result << enumerator_17850.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 329)).stringValue () ;
      result << " = ioToken.mLexicalAttribute_" ;
      result << enumerator_17850.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 329)).stringValue () ;
      result << " ;\n" ;
      index_17850_.increment () ;
      enumerator_17850.gotoNextObject () ;
    }
  }
  result << "  enterTokenFromPointer (ptr) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//               A T T R I B U T E   A C C E S S                                                 \n" ;
  GALGAS_uint index_18300_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_18300 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_18300.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n" ;
      result << extensionGetter_cppTypeName (enumerator_18300.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 339)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::attributeValue_" ;
      result << enumerator_18300.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 339)).stringValue () ;
      result << " (void) const {\n"
        "  cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * ptr = (cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentTokenPtr (HERE) ;\n"
        "  return ptr->mLexicalAttribute_" ;
      result << enumerator_18300.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 341)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_18300_.increment () ;
      enumerator_18300.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//         A S S I G N    F R O M    A T T R I B U T E                                           \n" ;
  GALGAS_uint index_19047_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_19047 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_19047.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_19047.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::synthetizedAttribute_" ;
      result << enumerator_19047.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).stringValue () ;
      result << " (void) const {\n"
        "  cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * ptr = (cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentTokenPtr (HERE) ;\n"
        "  macroValidSharedObject (ptr, cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;\n"
        "  GALGAS_" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_19047.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue () ;
      result << " value (ptr->mLexicalAttribute_" ;
      result << enumerator_19047.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue () ;
      result << ") ;\n"
        "  GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_19047.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 354)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 354)).stringValue () ;
      result << " result (value, currentLocation) ;\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_19047_.increment () ;
      enumerator_19047.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                         I N T R O S P E C T I O N                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_stringlist C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::symbols (LOCATION_ARGS) {\n"
    "  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;\n" ;
  GALGAS_uint index_20615_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_20615 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_20615.hasCurrentObject ()) {
      result << "  result.addAssign_operation (GALGAS_string (" ;
      result << enumerator_20615.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 365)).stringValue () ;
      result << ") COMMA_THERE) ;\n" ;
      index_20615_.increment () ;
      enumerator_20615.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void getKeywordLists_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (TC_UniqueArray <C_String> & " ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "/* ioList */" ;
  }else if (kBoolFalse == test_7) {
    result << "ioList" ;
  }
  result << ") {\n" ;
  GALGAS_uint index_21131_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_21131 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_21131.hasCurrentObject ()) {
      result << "  ioList.appendObject (" ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 377)).add_operation (enumerator_21131.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 377)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 377)).stringValue () ;
      result << ") ;\n" ;
      index_21131_.increment () ;
      enumerator_21131.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void getKeywordsForIdentifier_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const C_String & " ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 383)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "/* inIdentifier */" ;
  }else if (kBoolFalse == test_8) {
    result << "inIdentifier" ;
  }
  result << ",\n"
    "     " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "bool & " ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_9) {
    result << "/* ioFound */" ;
  }else if (kBoolFalse == test_9) {
    result << "ioFound" ;
  }
  result << ",\n"
    "     " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "TC_UniqueArray <C_String> & " ;
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "/* ioList */" ;
  }else if (kBoolFalse == test_10) {
    result << "ioList" ;
  }
  result << ") {\n" ;
  GALGAS_uint index_21844_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_21844 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_21844.hasCurrentObject ()) {
      result << "  if (inIdentifier == " ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 389)).add_operation (enumerator_21844.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 389)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 389)).stringValue () ;
      result << ") {\n"
        "    ioFound = true ;\n" ;
      GALGAS_uint index_22021_ (0) ;
      if (enumerator_21844.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_22021 (enumerator_21844.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_22021.hasCurrentObject ()) {
          result << "    ioList.appendObject (" ;
          result << enumerator_22021.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 392)).stringValue () ;
          result << ") ;\n" ;
          index_22021_.increment () ;
          enumerator_22021.gotoNextObject () ;
        }
      }
      result << "    ioList.sortArrayUsingCompareMethod() ;\n"
        "  }\n" ;
      index_21844_.increment () ;
      enumerator_21844.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static cLexiqueIntrospection lexiqueIntrospection_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "\n"
    "__attribute__ ((used))\n"
    "__attribute__ ((unused)) (getKeywordLists_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << ", getKeywordsForIdentifier_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "uint32_t C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::styleIndexForTerminal (const int32_t inTerminalIndex) const {\n"
    "  static const uint32_t kTerminalSymbolStyles [" ;
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)).stringValue () ;
  result << "] = {0" ;
  GALGAS_uint index_23160_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_23160 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_23160.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_23160.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 412)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_23160.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 412)).stringValue () ;
      result << " */" ;
      index_23160_.increment () ;
      enumerator_23160.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return (inTerminalIndex >= 0) \? kTerminalSymbolStyles [inTerminalIndex] : 0 ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::styleNameForIndex (const uint32_t inStyleIndex) const {\n"
    "  C_String result ;\n"
    "  if (inStyleIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 423)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 423)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 423)).stringValue () ;
  result << ") {\n"
    "    static const char * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 424)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 424)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 424)).stringValue () ;
  result << "] = {\n"
    "      \"\"" ;
  GALGAS_uint index_24044_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_24044 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_24044.hasCurrentObject ()) {
      result << ",\n"
        "      " ;
      result << enumerator_24044.current_mName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 427)).stringValue () ;
      index_24044_.increment () ;
      enumerator_24044.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = kStyleArray [inStyleIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                  const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                  const GALGAS_lexicalFunctionListAST & in_UNICODE_5F_TEST_5F_FUNCTIONS
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "\n"
    "#import \"OC_Lexique.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                    E X T E R N    R O U T I N E S                                             \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_503_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_503 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap (), kENUMERATION_UP) ;
    while (enumerator_503.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_503.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "void scanner_cocoa_routine_" ;
        result << enumerator_503.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "BOOL * ioScanningOk" ;
        GALGAS_uint index_732_ (0) ;
        if (enumerator_503.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_732 (enumerator_503.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_732.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << extensionGetter_cppConstInFormalArgument (enumerator_732.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 14)).stringValue () ;
            result << extensionGetter_cocoaTypeName (enumerator_732.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 15)).stringValue () ;
            result << extensionGetter_cocoaPointerInFormalArgument (enumerator_732.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 16)).stringValue () ;
            result << " " ;
            result << enumerator_732.current_mArgumentNameForComment (HERE).stringValue () ;
            index_732_.increment () ;
            enumerator_732.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_503_.increment () ;
      enumerator_503.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                    E X T E R N    F U N C T I O N S                                           \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_1561_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1561 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap (), kENUMERATION_UP) ;
    while (enumerator_1561.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1561.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "\n" ;
        result << extensionGetter_cppTypeName (enumerator_1561.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue () ;
        result << " scanner_cocoa_function_" ;
        result << enumerator_1561.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "BOOL * ioScanningOk" ;
        GALGAS_uint index_1766_ (0) ;
        if (enumerator_1561.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_1766 (enumerator_1561.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1766.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "const " ;
            result << extensionGetter_cppTypeName (enumerator_1766.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 33)).stringValue () ;
            result << " " ;
            result << enumerator_1766.current_mArgumentNameForComment (HERE).stringValue () ;
            index_1766_.increment () ;
            enumerator_1766.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_1561_.increment () ;
      enumerator_1561.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N                               \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "enum {" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "_1_" ;
  GALGAS_uint index_2438_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_2438 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_2438.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_2438.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).stringValue () ;
      index_2438_.increment () ;
      enumerator_2438.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//        U N I C O D E    T E S T    F U N C T I O N S                                          \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_2965_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_2965 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_2965.hasCurrentObject ()) {
      result << "bool " ;
      result << enumerator_2965.current_mFunctionName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 60)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) ;\n"
        "\n" ;
      index_2965_.increment () ;
      enumerator_2965.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                     S C A N N E R    C L A S S                                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "@interface OC_Lexique_" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << " : OC_Lexique {\n"
    "//--- Attributes\n" ;
  GALGAS_uint index_3565_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_3565 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_3565.hasCurrentObject ()) {
      result << "  @private " ;
      result << extensionGetter_cocoaTypeName (enumerator_3565.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 72)).stringValue () ;
      result << " mLexicalAttribute_" ;
      result << enumerator_3565.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " ;\n" ;
      index_3565_.increment () ;
      enumerator_3565.gotoNextObject () ;
    }
  }
  result << "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (C_Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & /* in_LEXIQUE_5F_CLASS_5F_NAME */,
                                                                                  const GALGAS_lexiqueAnalysisContext & /* in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "- (NSUInteger) terminalVocabularyCount ;\n"
    "\n"
    "- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;\n"
    "\n"
    "- (void) parseLexicalTokenForLexicalColoring ;\n"
    "\n"
    "- (NSUInteger) styleCount ;\n"
    "\n"
    "- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;\n"
    "\n"
    "- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;\n"
    "\n"
    "- (NSString *) indexingDirectory ;\n"
    "\n"
    "- (NSArray *) indexingTitles ; // Array of NSString\n"
    "\n"
    "- (BOOL) isTemplateLexique ;\n"
    "\n"
    "- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;\n"
    "\n"
    "@end\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaImplementationZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                          const GALGAS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                          const GALGAS_terminalList & /* in_TERMINAL_5F_LIST */,
                                                                                          const GALGAS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                          const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                          const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                          const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                          const GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                          const GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                          const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                          const GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                          const GALGAS_lexicalFunctionListAST & in_UNICODE_5F_TEST_5F_FUNCTIONS
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#import \"" ;
  result << in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue () ;
  result << ".h\"\n"
    "#import \"PMDebug.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//            Unicode test functions                                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    " \n" ;
  GALGAS_uint index_472_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_472 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_472.hasCurrentObject ()) {
      result << "bool " ;
      result << enumerator_472.current_mFunctionName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 10)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) {\n"
        "  return " ;
      result << callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_472.current_mLexicalExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 11)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_472_.increment () ;
      enumerator_472.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "@implementation OC_Lexique_" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                           Template Replacements                                               \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 24)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "static NSArray * kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 25)).stringValue () ;
    result << " ; // Of NSString \n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                           Template Delimiters                                                 \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 34)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "static NSArray * kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 35)).stringValue () ;
    result << " ;\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (instancetype) init {\n"
    "  self = [super init] ;\n"
    "  if (self) {\n"
    "    noteObjectAllocation (self) ;\n" ;
  GALGAS_uint index_2138_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2138 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2138.hasCurrentObject ()) {
      result << "    mLexicalAttribute_" ;
      result << enumerator_2138.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " = " ;
      result << extensionGetter_cocoaInitializationCode (enumerator_2138.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 45)).stringValue () ;
      result << " ;\n" ;
      index_2138_.increment () ;
      enumerator_2138.gotoNextObject () ;
    }
  }
  result << "  }\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 48)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  if (nil == kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 49)).stringValue () ;
    result << ") {\n"
      "    kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue () ;
    result << " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_2629_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      cEnumerator_templateDelimitorList enumerator_2629 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
      while (enumerator_2629.hasCurrentObject ()) {
        result << "      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@" ;
        result << enumerator_2629.current_mStartString (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 52)).stringValue () ;
        result << " endString:" ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2629.current_mEndString (HERE).readProperty_string ().getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 53)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          result << "nil" ;
        }else if (kBoolFalse == test_3) {
          result << "@" ;
          result << enumerator_2629.current_mEndString (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 56)).stringValue () ;
        }
        result << " discardStartString:" ;
        result << enumerator_2629.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue () ;
        result << "],\n" ;
        index_2629_.increment () ;
        enumerator_2629.gotoNextObject () ;
      }
    }
    result << "      nil\n"
      "    ] ;\n"
      "  }\n" ;
  }else if (kBoolFalse == test_2) {
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 66)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "  if (nil == kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 67)).stringValue () ;
    result << ") {\n"
      "\n"
      "    kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 68)).stringValue () ;
    result << " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_3356_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_3356 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3356.hasCurrentObject ()) {
        result << "      @" ;
        result << enumerator_3356.current_mMatchString (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 70)).stringValue () ;
        result << ", " ;
        index_3356_.increment () ;
        enumerator_3356.gotoNextObject () ;
      }
    }
    result << "      nil\n"
      "    ] ;\n"
      "  }\n" ;
  }else if (kBoolFalse == test_4) {
  }
  result << "  return self ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (void) dealloc {\n"
    "  noteObjectDeallocation (self) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                 I N D E X I N G    D I R E C T O R Y                                          \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSString *) indexingDirectory {\n"
    "  return @" ;
  result << in_INDEXING_5F_DIRECTORY.getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 92)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                 I N D E X I N G    T I T L E S                                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSArray *) indexingTitles { // Array of NSString\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_INDEXING_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 103)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_4626_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      cEnumerator_indexingListAST enumerator_4626 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4626.hasCurrentObject ()) {
        result << "    @" ;
        result << enumerator_4626.current_mIndexComment (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 107)).stringValue () ;
        result << ",\n" ;
        index_4626_.increment () ;
        enumerator_4626.gotoNextObject () ;
      }
    }
    result << "    NULL\n"
      "  ] ;\n" ;
  }else if (kBoolFalse == test_5) {
    result << "\n"
      "  return [NSArray array] ;\n" ;
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//            Terminal Symbols as end of script in template mark                                 \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 124)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_uint index_5480_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      cEnumerator_terminalList enumerator_5480 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_5480 = enumerator_5480.hasCurrentObject () ;
      if (nonEmpty_enumerator_5480) {
        result << "static const BOOL kEndOfScriptInTemplateArray_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)).stringValue () ;
        result << " [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_5480.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_5480.current_mIsEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 127)).stringValue () ;
        result << " /* " ;
        result << enumerator_5480.current_mTerminalName (HERE).readProperty_string ().stringValue () ;
        result << " */" ;
        if (enumerator_5480.hasNextObject ()) {
          result << ",\n" ;
        }
        index_5480_.increment () ;
        enumerator_5480.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_5480) {
        result << "\n"
          "} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_6) {
  }
  result << "\n"
    "\n" ;
  GALGAS_uint index_5773_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ().isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_5773 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap (), kENUMERATION_UP) ;
    while (enumerator_5773.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_5773.current_mShouldBeGenerated (HERE).boolEnum () ;
      if (kBoolTrue == test_7) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "//\n"
          "//             Key words table '" ;
        result << enumerator_5773.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "'      \n"
          "//\n"
          "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "static const C_cocoa_lexique_table_entry ktable_for_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 142)).stringValue () ;
        result << "_" ;
        result << enumerator_5773.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " [" ;
        result << enumerator_5773.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 142)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 142)).stringValue () ;
        result << "] = {\n" ;
        GALGAS_uint index_6455_ (0) ;
        if (enumerator_5773.current_mTokenSortedList (HERE).isValid ()) {
          cEnumerator_tokenSortedlist enumerator_6455 (enumerator_5773.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
          while (enumerator_6455.hasCurrentObject ()) {
            result << "  {" ;
            result << enumerator_6455.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue () ;
            result << ", " ;
            result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
            result << "_1_" ;
            result << enumerator_6455.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue () ;
            result << "}" ;
            if (enumerator_6455.hasNextObject ()) {
              result << ",\n" ;
            }
            index_6455_.increment () ;
            enumerator_6455.gotoNextObject () ;
          }
        }
        result << "\n"
          "} ;\n"
          "\n"
          "static NSInteger search_into_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).stringValue () ;
        result << "_" ;
        result << enumerator_5773.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (NSString * inSearchedString) {\n"
          "  return searchStringInTable (inSearchedString, ktable_for_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).stringValue () ;
        result << "_" ;
        result << enumerator_5773.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << ", " ;
        result << enumerator_5773.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).stringValue () ;
        result << ") ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_7) {
      }
      index_5773_.increment () ;
      enumerator_5773.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//               P A R S E    L E X I C A L    T O K E N                                         \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (void) parseLexicalTokenForLexicalColoring {\n"
    "  mLoop = YES ;\n"
    "  BOOL scanningOk = YES ;\n"
    "  mTokenCode = 0 ;\n"
    "  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n"
    "    mTokenStartLocation = mCurrentLocation ;\n" ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 167)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 168)).stringValue () ;
    result << " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n"
      "      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 169)).stringValue () ;
    result << " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n"
      "      if (foundEndDelimitor) {\n"
      "        mMatchedTemplateDelimiterIndex = -1 ;\n"
      "      }\n"
      "    }\n"
      "    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n"
      "      " ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 175)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      result << "\n"
        "      [self searchForReplacementPattern:kTemplateReplacementArray_" ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 176)).stringValue () ;
      result << "] ;\n"
        "      " ;
    }else if (kBoolFalse == test_9) {
    }
    result << "\n"
      "      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 178)).stringValue () ;
    result << "] ;\n"
      "      if (mMatchedTemplateDelimiterIndex < 0) {\n"
      "        [self advance] ;\n"
      "        mTokenCode = -2 ;\n"
      "      }\n"
      "    }\n"
      "    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n" ;
    GALGAS_uint index_8808_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_8808 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_8808.hasCurrentObject ()) {
        result << "      " ;
        result << extensionGetter_cocoaResetPrefix (enumerator_8808.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 186)).stringValue () ;
        result << "mLexicalAttribute_" ;
        result << enumerator_8808.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << extensionGetter_cocoaReset (enumerator_8808.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 186)).stringValue () ;
        result << " ;\n" ;
        index_8808_.increment () ;
        enumerator_8808.gotoNextObject () ;
      }
    }
    result << "      mTokenStartLocation = mCurrentLocation ;\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_9034_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_9034 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_9034.hasCurrentObject ()) {
        result << callExtensionGetter_generateCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_9034.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 192)).stringValue () ;
        index_9034_.increment () ;
        enumerator_9034.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ())) ;
    }
    result << "if ([self testForInputChar:'\\0']) { // End of source text \? \n"
      "        mTokenCode = " ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
    result << "_1_ ; // Empty string code\n"
      "      }else{ // Unknown input character\n"
      "        scanningOk = NO ;\n"
      "      }\n"
      "    }\n"
      "    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 201)).stringValue () ;
    result << " [mTokenCode - 1]) {\n"
      "      mMatchedTemplateDelimiterIndex = -1 ;\n"
      "    }\n"
      "  //--- Error \?\n"
      "    if (! scanningOk) {\n"
      "      mTokenCode = -1 ;\n"
      "      [self advance] ;\n"
      "    }" ;
  }else if (kBoolFalse == test_8) {
    GALGAS_uint index_9672_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_9672 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_9672.hasCurrentObject ()) {
        result << "    " ;
        result << extensionGetter_cocoaResetPrefix (enumerator_9672.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 210)).stringValue () ;
        result << "mLexicalAttribute_" ;
        result << enumerator_9672.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << extensionGetter_cocoaReset (enumerator_9672.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 210)).stringValue () ;
        result << " ;\n" ;
        index_9672_.increment () ;
        enumerator_9672.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n" ;
    if (GALGAS_uint ((uint32_t) 4U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 4U).uintValue ()) ;
    }
    GALGAS_uint index_9894_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_9894 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_9894.hasCurrentObject ()) {
        result << callExtensionGetter_generateCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_9894.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 216)).stringValue () ;
        index_9894_.increment () ;
        enumerator_9894.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 4U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 4U).uintValue ())) ;
    }
    result << "if ([self testForInputChar:'\\0']) { // End of source text \? \n"
      "      mTokenCode = " ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
    result << "_1_ ; // Empty string code\n"
      "    }else{ // Unknown input character\n"
      "      scanningOk = NO ;\n"
      "      [self advance] ;\n"
      "    }\n"
      "  //--- Error \?\n"
      "    if (! scanningOk) {\n"
      "      mTokenCode = -1 ;\n"
      "    }" ;
  }
  result << "\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                   T E R M I N A L    C O U N T                                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSUInteger) terminalVocabularyCount {\n"
    "  return " ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 239)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 239)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                     S T Y L E   C O U N T                                                     \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSUInteger) styleCount {\n"
    "  return " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 249)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 249)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 249)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                I S    T E M P L A T E    L E X I Q U E                                        \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (BOOL) isTemplateLexique {\n"
    "  return " ;
  result << GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 259)).objectCompare (GALGAS_uint ((uint32_t) 0U))).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 259)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {\n"
    "  static const NSUInteger kTerminalSymbolStyles [" ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)).stringValue () ;
  result << "] = {0" ;
  GALGAS_uint index_12316_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_12316 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_12316.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_12316.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_12316.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).stringValue () ;
      result << " */" ;
      index_12316_.increment () ;
      enumerator_12316.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return kTerminalSymbolStyles [inTerminal] ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {\n"
    "  static const BOOL kTerminalAtomicSelection [" ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)).stringValue () ;
  result << "] = {NO" ;
  GALGAS_uint index_13174_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_13174 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_13174.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_13174.current_mAtomicSelection (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 285)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_13174.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 285)).stringValue () ;
      result << " */" ;
      index_13174_.increment () ;
      enumerator_13174.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return kTerminalAtomicSelection [inTokenIndex] ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//             S T Y L E   N A M E    F O R    I N D E X                                         \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {\n"
    "  NSString * result = nil ;\n"
    "  if ((inIndex >= 0) && (inIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 298)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 298)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 298)).stringValue () ;
  result << ")) {\n"
    "    NSString * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).stringValue () ;
  result << "] = {\n"
    "      @\"Default Style\"" ;
  GALGAS_uint index_14029_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_14029 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14029.hasCurrentObject ()) {
      result << ",\n"
        "      @" ;
      result << enumerator_14029.current_mComment (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 302)).stringValue () ;
      index_14029_.increment () ;
      enumerator_14029.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = kStyleArray [inIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//         S T Y L E   I D E N T I F I E R    F O R    I N D E X                                 \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {\n"
    "  NSString * result = nil ;\n"
    "  if ((inIndex >= 0) && (inIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 317)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 317)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 317)).stringValue () ;
  result << ")) {\n"
    "    NSString * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).stringValue () ;
  result << "] = {\n"
    "      @\"" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\"" ;
  GALGAS_uint index_14837_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_14837 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14837.hasCurrentObject ()) {
      result << ",\n"
        "      @\"" ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "-" ;
      result << enumerator_14837.current_mName (HERE).readProperty_string ().stringValue () ;
      result << "\"" ;
      index_14837_.increment () ;
      enumerator_14837.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = kStyleArray [inIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//         L E X I Q U E   I D E N T I F I E R                                                   \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSString *) lexiqueIdentifier {\n"
    "  return @\"" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "@end\n"
    "\n" ;
  return GALGAS_string (result) ;
}

