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
  GALGAS_string var_projectName_2433 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 40)) ;
  GALGAS_string var_galgas_5F_sources_5F_DIR_2522 = constinArgument_inProjectPath.add_operation (GALGAS_string ("/galgas-sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 42)) ;
  var_galgas_5F_sources_5F_DIR_2522.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 43)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 44))).method_writeToFile (constinArgument_inProjectPath.add_operation (GALGAS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)).add_operation (GALGAS_string (".galgasProject"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 44)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 45))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2522.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)).add_operation (GALGAS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 45)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 46))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2522.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)).add_operation (GALGAS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 46)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 47))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2522.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)).add_operation (GALGAS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 47)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 48))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2522.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (GALGAS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 49))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2522.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)).add_operation (GALGAS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 50))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2522.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (GALGAS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName_2433 COMMA_SOURCE_FILE ("projectCreation.galgas", 51))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2522.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (var_projectName_2433, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (GALGAS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)) ;
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
      GALGAS_string var_projectName_4191 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 63)) ;
      GALGAS_bool var_ok_4244 = var_projectName_4191.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 64)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas", 64)) ;
      GALGAS_uint var_idx_4308 = GALGAS_uint ((uint32_t) 1U) ;
      if (var_projectName_4191.getter_length (SOURCE_FILE ("projectCreation.galgas", 66)).isValid ()) {
        uint32_t variant_4321 = var_projectName_4191.getter_length (SOURCE_FILE ("projectCreation.galgas", 66)).uintValue () ;
        bool loop_4321 = true ;
        while (loop_4321) {
          loop_4321 = GALGAS_bool (kIsStrictInf, var_idx_4308.objectCompare (var_projectName_4191.getter_length (SOURCE_FILE ("projectCreation.galgas", 67)))).operator_and (var_ok_4244 COMMA_SOURCE_FILE ("projectCreation.galgas", 67)).isValid () ;
          if (loop_4321) {
            loop_4321 = GALGAS_bool (kIsStrictInf, var_idx_4308.objectCompare (var_projectName_4191.getter_length (SOURCE_FILE ("projectCreation.galgas", 67)))).operator_and (var_ok_4244 COMMA_SOURCE_FILE ("projectCreation.galgas", 67)).boolValue () ;
          }
          if (loop_4321 && (0 == variant_4321)) {
            loop_4321 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas", 66)) ;
          }
          if (loop_4321) {
            variant_4321 -- ;
            GALGAS_char var_c_4409 = var_projectName_4191.getter_characterAtIndex (var_idx_4308, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 68)) ;
            var_ok_4244 = var_c_4409.getter_isalnum (SOURCE_FILE ("projectCreation.galgas", 69)).operator_or (GALGAS_bool (kIsEqual, var_c_4409.objectCompare (GALGAS_char (TO_UNICODE (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas", 69)) ;
            var_idx_4308.increment_operation (inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 70)) ;
          }
        }
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_ok_4244.operator_not (SOURCE_FILE ("projectCreation.galgas", 72)).boolEnum () ;
        if (kBoolTrue == test_1) {
          inCompiler->printMessage (GALGAS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4191, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 73)).add_operation (GALGAS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character.\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 74))  COMMA_SOURCE_FILE ("projectCreation.galgas", 73)) ;
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_ok_4244.boolEnum () ;
        if (kBoolTrue == test_2) {
          var_ok_4244 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas", 78)).operator_not (SOURCE_FILE ("projectCreation.galgas", 78)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_ok_4244.operator_not (SOURCE_FILE ("projectCreation.galgas", 79)).boolEnum () ;
            if (kBoolTrue == test_3) {
              inCompiler->printMessage (GALGAS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 80)).add_operation (GALGAS_string ("' directory already exists.***\n"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 80))  COMMA_SOURCE_FILE ("projectCreation.galgas", 80)) ;
            }
          }
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_ok_4244.boolEnum () ;
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
  GALGAS_string var_s_26316 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 629)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_s_26316.getter_length (SOURCE_FILE ("templateSyntax.galgas", 630)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_outResultingInstructionList.addAssign_operation (GALGAS_templateInstructionStringAST::constructor_new (var_s_26316  COMMA_SOURCE_FILE ("templateSyntax.galgas", 631))  COMMA_SOURCE_FILE ("templateSyntax.galgas", 631)) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_3867 ;
  const GALGAS_templateGetterCallInExpressionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_receiverExpression_3867, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 71)) ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_3912 = var_receiverExpression_3867.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = var_receiverType_3912.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 79)).getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas", 79)) ;
    if (kBoolTrue != test_2.boolEnum ()) {
      test_2 = var_receiverType_3912.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 79)).getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 79)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateGetterCallInExpressionAST temp_3 = object ;
      test_1 = GALGAS_bool (kIsEqual, temp_3.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 80)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_templateGetterCallInExpressionAST temp_4 = object ;
        GALGAS_bool var_isPublic_4216 ;
        GALGAS_bool var_unused_0_4219 ;
        GALGAS_unifiedTypeMap_2D_entry var_propertyType_4237 ;
        const bool optionalResult4184 = var_receiverType_3912.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 81)).optional_searchKey (temp_4.readProperty_mGetterName ().readProperty_string (), var_isPublic_4216, var_unused_0_4219, var_propertyType_4237) ;
        if (!optionalResult4184) {
          test_1 = kBoolFalse ;
        }
        if (kBoolTrue == test_1) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall.readProperty_value ()).boolEnum () ;
            if (kBoolTrue == test_5) {
              const GALGAS_templateGetterCallInExpressionAST temp_6 = object ;
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 83)) ;
            }
          }
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isPublic_4216.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 85)).boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_templateGetterCallInExpressionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray10  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 86)) ;
            }
          }
          const GALGAS_templateGetterCallInExpressionAST temp_11 = object ;
          const GALGAS_templateGetterCallInExpressionAST temp_12 = object ;
          outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_4237, temp_11.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_3867, temp_12.readProperty_mGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 88)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_getterMap var_getterMap_5538 = var_receiverType_3912.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 110)) ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_5647 ;
    GALGAS_methodKind var_kind_5672 ;
    GALGAS_bool var_hasCompilerArgument_5706 ;
    GALGAS_unifiedTypeMap_2D_entry var_returnedType_5749 ;
    GALGAS_stringlist var_fieldList_5767 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 116)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GALGAS_templateGetterCallInExpressionAST temp_14 = object ;
      test_13 = var_getterMap_5538.getter_hasKey (temp_14.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 117)).boolEnum () ;
      if (kBoolTrue == test_13) {
        const GALGAS_templateGetterCallInExpressionAST temp_15 = object ;
        GALGAS_location joker_5947 ; // Joker input parameter
        GALGAS_methodQualifier joker_6009_2 ; // Joker input parameter
        GALGAS_string joker_6009_1 ; // Joker input parameter
        var_getterMap_5538.method_searchKey (temp_15.readProperty_mGetterName (), var_kind_5672, var_getterFormalArgumentTypeList_5647, joker_5947, var_hasCompilerArgument_5706, var_returnedType_5749, joker_6009_2, joker_6009_1, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 118)) ;
      }
    }
    if (kBoolFalse == test_13) {
      GALGAS_uint var_matchingReaderCount_6064 = GALGAS_uint ((uint32_t) 0U) ;
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = GALGAS_bool (kIsEqual, var_receiverType_3912.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 128)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 128)))).boolEnum () ;
        if (kBoolTrue == test_16) {
          var_getterFormalArgumentTypeList_5647 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 129)) ;
          var_hasCompilerArgument_5706 = GALGAS_bool (true) ;
          var_returnedType_5749 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("templateAnalysis.galgas", 131)) ;
          var_kind_5672 = GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 132)) ;
          cEnumerator_typedPropertyList enumerator_6360 (var_receiverType_3912.getter_mCurrentTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 133)), kENUMERATION_UP) ;
          while (enumerator_6360.hasCurrentObject ()) {
            GALGAS_getterMap var_aMap_6438 = enumerator_6360.current_mPropertyTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 134)) ;
            const GALGAS_templateGetterCallInExpressionAST temp_17 = object ;
            const cMapElement_getterMap * objectArray_6487 = (const cMapElement_getterMap *) var_aMap_6438.readAccessForWithInstruction (temp_17.readProperty_mGetterName ().readProperty_string ()) ;
            if (NULL != objectArray_6487) {
                macroValidSharedObject (objectArray_6487, cMapElement_getterMap) ;
              var_matchingReaderCount_6064.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 136)) ;
              var_getterFormalArgumentTypeList_5647 = objectArray_6487->mProperty_mArgumentTypeList ;
              var_hasCompilerArgument_5706 = objectArray_6487->mProperty_mHasCompilerArgument ;
              var_returnedType_5749 = objectArray_6487->mProperty_mReturnedType ;
              var_kind_5672 = objectArray_6487->mProperty_mKind ;
              var_fieldList_5767.addAssign_operation (enumerator_6360.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 141)) ;
            }
            enumerator_6360.gotoNextObject () ;
          }
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = GALGAS_bool (kIsEqual, var_matchingReaderCount_6064.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_18) {
              const GALGAS_templateGetterCallInExpressionAST temp_19 = object ;
              const GALGAS_templateGetterCallInExpressionAST temp_20 = object ;
              TC_Array <C_FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_19.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_3912.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 146)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 146)).add_operation (temp_20.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 146)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 146)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 145)) ;
              var_getterFormalArgumentTypeList_5647.drop () ; // Release error dropped variable
              var_hasCompilerArgument_5706.drop () ; // Release error dropped variable
              var_returnedType_5749.drop () ; // Release error dropped variable
              var_kind_5672.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_18) {
            enumGalgasBool test_22 = kBoolTrue ;
            if (kBoolTrue == test_22) {
              test_22 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_6064.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_22) {
                GALGAS_string var_s_7201 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_7228 (var_fieldList_5767, kENUMERATION_UP) ;
                while (enumerator_7228.hasCurrentObject ()) {
                  var_s_7201.plusAssign_operation(enumerator_7228.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 152)) ;
                  if (enumerator_7228.hasNextObject ()) {
                    var_s_7201.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 153)) ;
                  }
                  enumerator_7228.gotoNextObject () ;
                }
                const GALGAS_templateGetterCallInExpressionAST temp_23 = object ;
                const GALGAS_templateGetterCallInExpressionAST temp_24 = object ;
                TC_Array <C_FixItDescription> fixItArray25 ;
                inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_3912.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)).add_operation (var_s_7201, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 157)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 155)) ;
                var_getterFormalArgumentTypeList_5647.drop () ; // Release error dropped variable
                var_hasCompilerArgument_5706.drop () ; // Release error dropped variable
                var_returnedType_5749.drop () ; // Release error dropped variable
                var_kind_5672.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (kBoolFalse == test_16) {
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = GALGAS_bool (kIsEqual, var_getterMap_5538.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_26) {
            const GALGAS_templateGetterCallInExpressionAST temp_27 = object ;
            TC_Array <C_FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_3912.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)), fixItArray28  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 161)) ;
            var_getterFormalArgumentTypeList_5647.drop () ; // Release error dropped variable
            var_hasCompilerArgument_5706.drop () ; // Release error dropped variable
            var_returnedType_5749.drop () ; // Release error dropped variable
            var_kind_5672.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_26) {
          const GALGAS_templateGetterCallInExpressionAST temp_29 = object ;
          const GALGAS_templateGetterCallInExpressionAST temp_30 = object ;
          TC_Array <C_FixItDescription> fixItArray31 ;
          appendFixItActions (fixItArray31, kFixItReplace, var_getterMap_5538.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 168))) ;
          inCompiler->emitSemanticError (temp_29.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverType_3912.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 166)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 166)).add_operation (temp_30.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 166)).add_operation (GALGAS_string ("' getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 166)), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 165)) ;
          var_getterFormalArgumentTypeList_5647.drop () ; // Release error dropped variable
          var_hasCompilerArgument_5706.drop () ; // Release error dropped variable
          var_returnedType_5749.drop () ; // Release error dropped variable
          var_kind_5672.drop () ; // Release error dropped variable
        }
      }
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_templateGetterCallInExpressionAST temp_33 = object ;
      test_32 = GALGAS_bool (kIsNotEqual, temp_33.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 172)).objectCompare (var_getterFormalArgumentTypeList_5647.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 172)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        const GALGAS_templateGetterCallInExpressionAST temp_34 = object ;
        const GALGAS_templateGetterCallInExpressionAST temp_35 = object ;
        const GALGAS_templateGetterCallInExpressionAST temp_36 = object ;
        TC_Array <C_FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (temp_34.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_35.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)).add_operation (var_receiverType_3912.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)).add_operation (var_getterFormalArgumentTypeList_5647.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 174)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (temp_36.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 175)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 174)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 175)), fixItArray37  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 173)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_32) {
      GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_8669 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 177)) ;
      const GALGAS_templateGetterCallInExpressionAST temp_38 = object ;
      cEnumerator_templateExpressionListAST enumerator_8738 (temp_38.readProperty_mExpressionList (), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_8803 (var_getterFormalArgumentTypeList_5647, kENUMERATION_UP) ;
      while (enumerator_8738.hasCurrentObject () && enumerator_8803.hasCurrentObject ()) {
        enumGalgasBool test_39 = kBoolTrue ;
        if (kBoolTrue == test_39) {
          test_39 = GALGAS_bool (kIsNotEqual, enumerator_8803.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8738.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_39) {
            GALGAS_string temp_40 ;
            const enumGalgasBool test_41 = GALGAS_bool (kIsNotEqual, enumerator_8803.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_41) {
              temp_40 = enumerator_8803.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 180)) ;
            }else if (kBoolFalse == test_41) {
              temp_40 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_8920 = GALGAS_string ("!").add_operation (temp_40, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 180)) ;
            TC_Array <C_FixItDescription> fixItArray42 ;
            appendFixItActions (fixItArray42, kFixItReplace, var_s_8920) ;
            inCompiler->emitSemanticError (enumerator_8738.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_8920, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 181)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 181)), fixItArray42  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 181)) ;
          }
        }
        GALGAS_semanticExpressionForGeneration var_exp_9450 ;
        callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_8738.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_exp_9450, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_8803.current_mFormalArgumentType (HERE), var_exp_9450.readProperty_mResultType (), enumerator_8738.current_mEndOfExpressionLocation (HERE), var_exp_9450, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)) ;
        }
        var_constructorEffectiveParameterList_8669.addAssign_operation (var_exp_9450  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 191)) ;
        enumerator_8738.gotoNextObject () ;
        enumerator_8803.gotoNextObject () ;
      }
      const GALGAS_templateGetterCallInExpressionAST temp_43 = object ;
      const GALGAS_templateGetterCallInExpressionAST temp_44 = object ;
      outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_5749, temp_43.readProperty_mGetterName ().readProperty_location (), var_kind_5672, var_receiverExpression_3867, var_fieldList_5767, temp_44.readProperty_mGetterName ().readProperty_string (), var_constructorEffectiveParameterList_8669, var_hasCompilerArgument_5706  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 193)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_constructorType_10547 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 217)) ;
  GALGAS_constructorMap var_constructorMap_10721 = var_constructorType_10547.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 219)) ;
  GALGAS_unifiedTypeMap_2D_entry var_returnedType_10821 ;
  GALGAS_bool var_hasCompilerArgument_10853 ;
  GALGAS_functionSignature var_constructorFormalArgumentTypeList_10912 ;
  const GALGAS_templateConstructorAST temp_1 = object ;
  const cMapElement_constructorMap * objectArray_10919 = (const cMapElement_constructorMap *) var_constructorMap_10721.readAccessForWithInstruction (temp_1.readProperty_mConstructorName ().readProperty_string ()) ;
  if (NULL != objectArray_10919) {
      macroValidSharedObject (objectArray_10919, cMapElement_constructorMap) ;
    var_constructorFormalArgumentTypeList_10912 = objectArray_10919->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_10853 = objectArray_10919->mProperty_mHasCompilerArgument ;
    var_returnedType_10821 = objectArray_10919->mProperty_mReturnedType ;
  }else{
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_constructorMap_10721.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 229)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_templateConstructorAST temp_3 = object ;
        const GALGAS_templateConstructorAST temp_4 = object ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 231)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 231)), fixItArray5  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 230)) ;
        var_constructorFormalArgumentTypeList_10912.drop () ; // Release error dropped variable
        var_hasCompilerArgument_10853.drop () ; // Release error dropped variable
        var_returnedType_10821.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_templateConstructorAST temp_6 = object ;
      const GALGAS_templateConstructorAST temp_7 = object ;
      const GALGAS_templateConstructorAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      appendFixItActions (fixItArray9, kFixItReplace, var_constructorMap_10721.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 237))) ;
      inCompiler->emitSemanticError (temp_6.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_7.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 235)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 235)).add_operation (temp_8.readProperty_mConstructorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 235)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 235)), fixItArray9  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 234)) ;
      var_constructorFormalArgumentTypeList_10912.drop () ; // Release error dropped variable
      var_hasCompilerArgument_10853.drop () ; // Release error dropped variable
      var_returnedType_10821.drop () ; // Release error dropped variable
    }
  }
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_11734 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_templateConstructorAST temp_11 = object ;
    test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 242)).objectCompare (var_constructorFormalArgumentTypeList_10912.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 242)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_templateConstructorAST temp_12 = object ;
      const GALGAS_templateConstructorAST temp_13 = object ;
      const GALGAS_templateConstructorAST temp_14 = object ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mConstructorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)).add_operation (var_constructorType_10547.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)).add_operation (var_constructorFormalArgumentTypeList_10912.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 245)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 244)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (temp_14.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 246)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)), fixItArray15  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 243)) ;
      var_constructorEffectiveParameterList_11734.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_constructorEffectiveParameterList_11734 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 249)) ;
    const GALGAS_templateConstructorAST temp_16 = object ;
    cEnumerator_templateExpressionListAST enumerator_12313 (temp_16.readProperty_mExpressionList (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_12378 (var_constructorFormalArgumentTypeList_10912, kENUMERATION_UP) ;
    while (enumerator_12313.hasCurrentObject () && enumerator_12378.hasCurrentObject ()) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsNotEqual, enumerator_12378.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_12313.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_12378.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = enumerator_12378.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 252)) ;
          }else if (kBoolFalse == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_12496 = GALGAS_string ("!").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 252)) ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          appendFixItActions (fixItArray20, kFixItReplace, var_s_12496) ;
          inCompiler->emitSemanticError (enumerator_12313.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12496, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)), fixItArray20  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_13021 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_12313.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_exp_13021, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 257)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_12378.current_mFormalArgumentType (HERE), var_exp_13021.readProperty_mResultType (), enumerator_12313.current_mEndOfExpressionLocation (HERE), var_exp_13021, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)) ;
      }
      var_constructorEffectiveParameterList_11734.addAssign_operation (var_exp_13021  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 264)) ;
      enumerator_12313.gotoNextObject () ;
      enumerator_12378.gotoNextObject () ;
    }
  }
  const GALGAS_templateConstructorAST temp_21 = object ;
  const GALGAS_templateConstructorAST temp_22 = object ;
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_10821, temp_21.readProperty_mConstructorName ().readProperty_location (), var_constructorType_10547, temp_22.readProperty_mConstructorName ().readProperty_string (), var_constructorEffectiveParameterList_11734, var_hasCompilerArgument_10853  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 268)) ;
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
  inCompiler->emitSemanticError (temp_0.readProperty_mFileWrapperName ().readProperty_location (), GALGAS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 287)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_14944 ;
  const GALGAS_templateAndOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_14944, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 301)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15170 ;
  const GALGAS_templateAndOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_15170, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 308)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_15245 = var_leftExpression_14944.readProperty_mResultType () ;
  {
  const GALGAS_templateAndOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_15245, var_rightExpression_15170.readProperty_mResultType (), var_leftType_15245.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 319)).getter_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas", 319)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_15170, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 316)) ;
  }
  const GALGAS_templateAndOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_15245, temp_3.readProperty_mOperatorLocation (), var_leftExpression_14944, GALGAS_binaryOperator::constructor_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas", 329)), var_rightExpression_15170  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 325)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_16271 ;
  const GALGAS_templateOrOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_16271, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 343)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16497 ;
  const GALGAS_templateOrOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_16497, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 350)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_16572 = var_leftExpression_16271.readProperty_mResultType () ;
  {
  const GALGAS_templateOrOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_16572, var_rightExpression_16497.readProperty_mResultType (), var_leftType_16572.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 361)).getter_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas", 361)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_16497, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 358)) ;
  }
  const GALGAS_templateOrOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_16572, temp_3.readProperty_mOperatorLocation (), var_leftExpression_16271, GALGAS_binaryOperator::constructor_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas", 371)), var_rightExpression_16497  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 367)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_17597 ;
  const GALGAS_templateXorOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_17597, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 385)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_17823 ;
  const GALGAS_templateXorOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_17823, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 392)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_17898 = var_leftExpression_17597.readProperty_mResultType () ;
  {
  const GALGAS_templateXorOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_17898, var_rightExpression_17823.readProperty_mResultType (), var_leftType_17898.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 403)).getter_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas", 403)), GALGAS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_17823, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 400)) ;
  }
  const GALGAS_templateXorOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_17898, temp_3.readProperty_mOperatorLocation (), var_leftExpression_17597, GALGAS_binaryOperator::constructor_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas", 413)), var_rightExpression_17823  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 409)) ;
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
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 426)) ;
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
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 437)) ;
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
  GALGAS_string var_s_19771 = GALGAS_string::makeEmptyString () ;
  const GALGAS_templateLiteralStringExpressionAST temp_0 = object ;
  cEnumerator_stringlist enumerator_19790 (temp_0.readProperty_mLiteralStringList (), kENUMERATION_UP) ;
  while (enumerator_19790.hasCurrentObject ()) {
    var_s_19771.plusAssign_operation(enumerator_19790.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 450)) ;
    enumerator_19790.gotoNextObject () ;
  }
  const GALGAS_templateLiteralStringExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_19771  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 452)) ;
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
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_uint ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 463)) ;
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
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mSIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_sint ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 477)) ;
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
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUInt_36__34_Type (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_uint_36__34_ ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 491)) ;
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
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mSInt_36__34_Type (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_sint_36__34_ ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 505)) ;
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
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mLiteralChar ().readProperty_location (), temp_1.readProperty_mLiteralChar ().readProperty_char ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 519)) ;
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
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mLiteralDouble ().readProperty_location (), temp_1.readProperty_mLiteralDouble ().readProperty_double ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 532)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_24048 ;
  const GALGAS_templateNotOperatorAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_24048, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 548)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_24118 = var_expression_24048.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_24118.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 556)).getter_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas", 556)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 556)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateNotOperatorAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_24118.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 558)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 558)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 557)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateNotOperatorAST temp_4 = object ;
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_24118, temp_4.readProperty_mOperatorLocation (), var_expression_24048  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 562)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_25069 ;
  const GALGAS_templateLogicalNegateAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_25069, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 579)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_25139 = var_expression_25069.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_25139.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 587)).getter_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas", 587)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 587)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateLogicalNegateAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_25139.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 589)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 589)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 588)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateLogicalNegateAST temp_4 = object ;
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_25139, temp_4.readProperty_mOperatorLocation (), var_expression_25069  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 593)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_26107 ;
  const GALGAS_templateTestDynamicClassAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_26107, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 609)) ;
  const GALGAS_templateTestDynamicClassAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_castType_26153 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_1.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 616)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_expression_26107.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 618)).getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 618)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMap_2D_entry var_t_26438 = var_castType_26153 ;
      GALGAS_bool var_found_26469 = GALGAS_bool (kIsEqual, var_t_26438.objectCompare (var_expression_26107.readProperty_mResultType ())) ;
      if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 622)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 622)).isValid ()) {
        uint32_t variant_26508 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 622)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 622)).uintValue () ;
        bool loop_26508 = true ;
        while (loop_26508) {
          loop_26508 = var_found_26469.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 623)).operator_and (var_t_26438.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 623)).getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 623)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 623)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 623)).isValid () ;
          if (loop_26508) {
            loop_26508 = var_found_26469.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 623)).operator_and (var_t_26438.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 623)).getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 623)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 623)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 623)).boolValue () ;
          }
          if (loop_26508 && (0 == variant_26508)) {
            loop_26508 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("templateAnalysis.galgas", 622)) ;
          }
          if (loop_26508) {
            variant_26508 -- ;
            var_t_26438 = var_t_26438.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 624)) ;
            var_found_26469 = GALGAS_bool (kIsEqual, var_t_26438.objectCompare (var_expression_26107.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_26469.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 627)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_templateTestDynamicClassAST temp_4 = object ;
          const GALGAS_templateTestDynamicClassAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 629)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 629)).add_operation (var_expression_26107.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 629)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 629)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 628)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_26107.readProperty_mLocation (), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_expression_26107.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 632)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 633)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 632)) ;
  }
  const GALGAS_templateTestDynamicClassAST temp_8 = object ;
  const GALGAS_templateTestDynamicClassAST temp_9 = object ;
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_26107, temp_9.readProperty_mTypeComparisonKind (), var_castType_26153  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 636)) ;
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
  GALGAS_lstring var_usefulnessName_27675 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 652)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_27675 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 653)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_27982 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_28027 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_28072 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_28119 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_28170 ;
  const GALGAS_templateOptionAccessAST temp_1 = object ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_27982, var_boolOptionMap_28027, var_uintOptionMap_28072, var_stringOptionMap_28119, var_stringListOptionMap_28170, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 654)) ;
  const GALGAS_templateOptionAccessAST temp_2 = object ;
  GALGAS_bool var_found_28186 = var_boolOptionMap_28027.getter_hasKey (temp_2.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 662)) ;
  GALGAS_unifiedTypeMap_2D_entry var_returnedType_28277 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_28186.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 664)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_templateOptionAccessAST temp_4 = object ;
      var_found_28186 = var_uintOptionMap_28072.getter_hasKey (temp_4.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 665)) ;
      var_returnedType_28277 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_28186.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 668)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_templateOptionAccessAST temp_6 = object ;
      var_found_28186 = var_stringOptionMap_28119.getter_hasKey (temp_6.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 669)) ;
      var_returnedType_28277 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_28186.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 672)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_templateOptionAccessAST temp_8 = object ;
      var_found_28186 = var_stringListOptionMap_28170.getter_hasKey (temp_8.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 673)) ;
      var_returnedType_28277 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_28186.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_templateOptionAccessAST temp_11 = object ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_templateOptionAccessAST temp_12 = object ;
          const GALGAS_templateOptionAccessAST temp_13 = object ;
          const GALGAS_templateOptionAccessAST temp_14 = object ;
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_28277, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_27982, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 678)) ;
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
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_27982, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 686)) ;
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
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_27982, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 694)) ;
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
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_27982, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 702)) ;
              }
            }
            if (kBoolFalse == test_25) {
              const GALGAS_templateOptionAccessAST temp_30 = object ;
              TC_Array <C_FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 710)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_stringset var_s_30281 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("templateAnalysis.galgas", 713)) ;
    cEnumerator_commandLineOptionMap enumerator_30308 (var_boolOptionMap_28027, kENUMERATION_UP) ;
    while (enumerator_30308.hasCurrentObject ()) {
      var_s_30281.addAssign_operation (enumerator_30308.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 715)) ;
      enumerator_30308.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_30376 (var_uintOptionMap_28072, kENUMERATION_UP) ;
    while (enumerator_30376.hasCurrentObject ()) {
      var_s_30281.addAssign_operation (enumerator_30376.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 718)) ;
      enumerator_30376.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_30444 (var_stringOptionMap_28119, kENUMERATION_UP) ;
    while (enumerator_30444.hasCurrentObject ()) {
      var_s_30281.addAssign_operation (enumerator_30444.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 721)) ;
      enumerator_30444.gotoNextObject () ;
    }
    const GALGAS_templateOptionAccessAST temp_32 = object ;
    const GALGAS_templateOptionAccessAST temp_33 = object ;
    const GALGAS_templateOptionAccessAST temp_34 = object ;
    TC_Array <C_FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_30281) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 724)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 724)).add_operation (temp_34.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 724)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 724)), fixItArray35  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 723)) ;
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
  GALGAS_lstring var_usefulnessName_31262 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 740)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_31262 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 741)) ;
  }
  GALGAS_functionSignature var_functionSignature_31566 ;
  GALGAS_unifiedTypeMap_2D_entry var_resultType_31608 ;
  GALGAS_bool var_isInternal_31634 ;
  const GALGAS_templateFunctionCallAST temp_1 = object ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_31566, var_resultType_31608, var_isInternal_31634, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 743)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_31634.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateFunctionCallAST temp_3 = object ;
      GALGAS_location var_procDeclarationLocation_31711 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 751)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_templateFunctionCallAST temp_5 = object ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 752)).objectCompare (var_procDeclarationLocation_31711.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 752)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_templateFunctionCallAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_31711.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_templateFunctionCallAST temp_9 = object ;
    test_8 = GALGAS_bool (kIsNotEqual, var_functionSignature_31566.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 757)).objectCompare (temp_9.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 757)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_templateFunctionCallAST temp_10 = object ;
      const GALGAS_templateFunctionCallAST temp_11 = object ;
      const GALGAS_templateFunctionCallAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 759)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 759)).add_operation (var_functionSignature_31566.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 759)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 759)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 759)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 759)).add_operation (temp_12.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("templateAnalysis.galgas", 760)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 760)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 760)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 758)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_32450 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 764)) ;
    const GALGAS_templateFunctionCallAST temp_14 = object ;
    cEnumerator_functionSignature enumerator_32538 (var_functionSignature_31566, kENUMERATION_UP) ;
    cEnumerator_templateExpressionListAST enumerator_32615 (temp_14.readProperty_mExpressionList (), kENUMERATION_UP) ;
    while (enumerator_32538.hasCurrentObject () && enumerator_32615.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_32839 ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_32615.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_32839, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 766)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_32538.current_mFormalArgumentType (HERE), var_expression_32839.readProperty_mResultType (), enumerator_32615.current_mEndOfExpressionLocation (HERE), var_expression_32839, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 772)) ;
      }
      var_semanticExpressionListForGeneration_32450.addAssign_operation (var_expression_32839  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 773)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_32538.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_32615.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_32538.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_32538.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 775)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_33115 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 775)) ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_33115) ;
          inCompiler->emitSemanticError (enumerator_32615.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_33115, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 776)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 776)), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 776)) ;
        }
      }
      enumerator_32538.gotoNextObject () ;
      enumerator_32615.gotoNextObject () ;
    }
    const GALGAS_templateFunctionCallAST temp_19 = object ;
    const GALGAS_templateFunctionCallAST temp_20 = object ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_31608, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_32450  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 780)) ;
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
  inCompiler->emitSemanticError (temp_0.readProperty_mTemplateName ().readProperty_location (), GALGAS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 798)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_type_35030 ;
  GALGAS_string var_sourceVariableCppName_35057 ;
  const GALGAS_templateVarInExpressionAST temp_0 = object ;
  constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap ().method_searchKey (temp_0.readProperty_mVarName (), var_type_35030, var_sourceVariableCppName_35057, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 813)) ;
  const GALGAS_templateVarInExpressionAST temp_1 = object ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_35030, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_35057, var_sourceVariableCppName_35057  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 814)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_35981 ;
  const GALGAS_templateAddOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_35981, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 832)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_36207 ;
  const GALGAS_templateAddOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_36207, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 839)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_36282 = var_leftExpression_35981.readProperty_mResultType () ;
  {
  const GALGAS_templateAddOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_36282, var_rightExpression_36207.readProperty_mResultType (), var_leftType_36282.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 850)).getter_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas", 850)), GALGAS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_36207, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 847)) ;
  }
  const GALGAS_templateAddOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_36282, temp_3.readProperty_mOperatorLocation (), var_leftExpression_35981, GALGAS_binaryOperator::constructor_add (SOURCE_FILE ("templateAnalysis.galgas", 860)), var_rightExpression_36207  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 856)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_37470 ;
  const GALGAS_templateSubOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_37470, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 876)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_37696 ;
  const GALGAS_templateSubOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_37696, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 883)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_37771 = var_leftExpression_37470.readProperty_mResultType () ;
  {
  const GALGAS_templateSubOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_37771, var_rightExpression_37696.readProperty_mResultType (), var_leftType_37771.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 894)).getter_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas", 894)), GALGAS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_37696, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 891)) ;
  }
  const GALGAS_templateSubOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_37771, temp_3.readProperty_mOperatorLocation (), var_leftExpression_37470, GALGAS_binaryOperator::constructor_sub (SOURCE_FILE ("templateAnalysis.galgas", 904)), var_rightExpression_37696  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 900)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_38971 ;
  const GALGAS_templateMultiplyOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_38971, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 920)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_39197 ;
  const GALGAS_templateMultiplyOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_39197, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 927)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_39272 = var_leftExpression_38971.readProperty_mResultType () ;
  {
  const GALGAS_templateMultiplyOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_39272, var_rightExpression_39197.readProperty_mResultType (), var_leftType_39272.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 938)).getter_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas", 938)), GALGAS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_39197, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 935)) ;
  }
  const GALGAS_templateMultiplyOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_39272, temp_3.readProperty_mOperatorLocation (), var_leftExpression_38971, GALGAS_binaryOperator::constructor_multiply_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 948)), var_rightExpression_39197  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 944)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_40473 ;
  const GALGAS_templateDivideOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_40473, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 964)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_40699 ;
  const GALGAS_templateDivideOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_40699, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 971)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_40774 = var_leftExpression_40473.readProperty_mResultType () ;
  {
  const GALGAS_templateDivideOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_40774, var_rightExpression_40699.readProperty_mResultType (), var_leftType_40774.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 982)).getter_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas", 982)), GALGAS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_40699, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 979)) ;
  }
  const GALGAS_templateDivideOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_40774, temp_3.readProperty_mOperatorLocation (), var_leftExpression_40473, GALGAS_binaryOperator::constructor_divide_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 992)), var_rightExpression_40699  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 988)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_41973 ;
  const GALGAS_templateModuloOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_41973, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1008)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_42199 ;
  const GALGAS_templateModuloOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_42199, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1015)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_42274 = var_leftExpression_41973.readProperty_mResultType () ;
  {
  const GALGAS_templateModuloOperationAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_42274, var_rightExpression_42199.readProperty_mResultType (), var_leftType_42274.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1026)).getter_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas", 1026)), GALGAS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_42199, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1023)) ;
  }
  const GALGAS_templateModuloOperationAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_42274, temp_3.readProperty_mOperatorLocation (), var_leftExpression_41973, GALGAS_binaryOperator::constructor_modulo_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 1036)), var_rightExpression_42199  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1032)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_43433 ;
  const GALGAS_templateUnaryMinusOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_43433, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1052)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_43503 = var_expression_43433.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_43503.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1060)).getter_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas", 1060)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1060)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateUnaryMinusOperationAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_43503.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1062)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1062)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1062)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1061)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateUnaryMinusOperationAST temp_4 = object ;
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_43503, temp_4.readProperty_mOperatorLocation (), var_expression_43433  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1066)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_44745 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_44745, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1084)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_44819 = var_expression_44745.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = GALGAS_bool (kIsNotEqual, var_type_44819.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1092)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 1092)))) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = var_type_44819.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1092)).getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 1092)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1092)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structFieldAccessTemplateExpressionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructFieldName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct ou a class"), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1093)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_45057 = var_type_44819.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1095)) ;
  GALGAS_bool var_isPublic_45141 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_5 = object ;
  GALGAS_bool joker_45143 ; // Joker input parameter
  var_propertyMap_45057.method_searchKey (temp_5.readProperty_mStructFieldName (), var_isPublic_45141, joker_45143, var_type_44819, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1096)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isPublic_45141.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1097)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_structFieldAccessTemplateExpressionAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mStructFieldName ().readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1098)) ;
    }
  }
  const GALGAS_structFieldAccessTemplateExpressionAST temp_9 = object ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_10 = object ;
  outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_type_44819, temp_9.readProperty_mOperatorLocation (), var_expression_44745, temp_10.readProperty_mStructFieldName ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1101)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_46231 ;
  const GALGAS_templateEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_46231, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1120)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_46461 ;
  const GALGAS_templateEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_46461, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1127)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_46536 = var_leftExpression_46231.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_46603 = var_rightExpression_46461.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftType_46536.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1136)).readProperty_string ().objectCompare (var_rightType_46603.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1136)).readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_46536.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1138)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1138)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1138)).add_operation (var_rightType_46603.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1138)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1138)).add_operation (GALGAS_string ("': '==' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1138)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1137)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_templateEqualTestAST temp_5 = object ;
    outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_46231, GALGAS_comparison::constructor_equal (SOURCE_FILE ("templateAnalysis.galgas", 1146)), var_rightExpression_46461  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1142)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_47757 ;
  const GALGAS_templateNonEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_47757, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1161)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_47987 ;
  const GALGAS_templateNonEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_47987, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1168)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_48062 = var_leftExpression_47757.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_48129 = var_rightExpression_47987.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftType_48062.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1177)).readProperty_string ().objectCompare (var_rightType_48129.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1177)).readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateNonEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_48062.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1179)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1179)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1179)).add_operation (var_rightType_48129.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1179)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1179)).add_operation (GALGAS_string ("': '!=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1179)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_templateNonEqualTestAST temp_5 = object ;
    outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_47757, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("templateAnalysis.galgas", 1187)), var_rightExpression_47987  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1183)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_49285 ;
  const GALGAS_templateStrictInfTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_49285, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1202)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_49515 ;
  const GALGAS_templateStrictInfTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_49515, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1209)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_49590 = var_leftExpression_49285.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_49657 = var_rightExpression_49515.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_49590.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1218)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1218)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1218)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateStrictInfTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_49590.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1220)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1220)).add_operation (GALGAS_string ("' and does not support the '<' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1220)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1219)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_49590.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1222)).objectCompare (var_rightType_49657.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1222)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateStrictInfTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_49590.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)).add_operation (var_rightType_49657.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)).add_operation (GALGAS_string ("': '<' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1223)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateStrictInfTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_49285, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("templateAnalysis.galgas", 1232)), var_rightExpression_49515  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1228)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_51008 ;
  const GALGAS_templateInfOrEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_51008, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1247)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_51238 ;
  const GALGAS_templateInfOrEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_51238, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1254)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_51313 = var_leftExpression_51008.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_51380 = var_rightExpression_51238.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_51313.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1263)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1263)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1263)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateInfOrEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_51313.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1265)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1265)).add_operation (GALGAS_string ("' and does not support the '<=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1265)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1264)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_51313.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1267)).objectCompare (var_rightType_51380.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1267)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateInfOrEqualTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_51313.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)).add_operation (var_rightType_51380.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)).add_operation (GALGAS_string ("': '<=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1268)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateInfOrEqualTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_51008, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1277)), var_rightExpression_51238  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1273)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_52735 ;
  const GALGAS_templateStrictSupTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_52735, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1292)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_52965 ;
  const GALGAS_templateStrictSupTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_52965, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1299)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_53040 = var_leftExpression_52735.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_53107 = var_rightExpression_52965.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_53040.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1308)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1308)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1308)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateStrictSupTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_53040.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1310)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1310)).add_operation (GALGAS_string ("' and does not support the '>' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1310)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_53040.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1312)).objectCompare (var_rightType_53107.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1312)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateStrictSupTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_53040.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)).add_operation (var_rightType_53107.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)).add_operation (GALGAS_string ("': '>' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1313)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateStrictSupTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_52735, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("templateAnalysis.galgas", 1322)), var_rightExpression_52965  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1318)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_54460 ;
  const GALGAS_templateSupOrEqualTestAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_54460, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1337)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_54690 ;
  const GALGAS_templateSupOrEqualTestAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_54690, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1344)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_54765 = var_leftExpression_54460.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_54832 = var_rightExpression_54690.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_54765.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1353)).getter_isComparable (SOURCE_FILE ("templateAnalysis.galgas", 1353)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1353)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateSupOrEqualTestAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_54765.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1355)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1355)).add_operation (GALGAS_string ("' and does not support the '>=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1355)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1354)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_leftType_54765.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1357)).objectCompare (var_rightType_54832.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1357)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateSupOrEqualTestAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_54765.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1359)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1359)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1359)).add_operation (var_rightType_54832.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1359)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1359)).add_operation (GALGAS_string ("': '>=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1359)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1358)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateSupOrEqualTestAST temp_8 = object ;
      outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mOperatorLocation (), var_leftExpression_54460, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1367)), var_rightExpression_54690  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1363)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_56194 ;
  const GALGAS_templateLeftShiftOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_56194, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1382)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_56424 ;
  const GALGAS_templateLeftShiftOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_56424, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1389)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_56499 = var_leftExpression_56194.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_56566 = var_rightExpression_56424.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_56499.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1398)).getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1398)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1398)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateLeftShiftOperationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_56499.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1400)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1400)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1399)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_rightType_56566.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1402)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateLeftShiftOperationAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_56566.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1404)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1404)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1404)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1403)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateLeftShiftOperationAST temp_8 = object ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_56499, temp_8.readProperty_mOperatorLocation (), var_leftExpression_56194, GALGAS_binaryOperator::constructor_leftShift (SOURCE_FILE ("templateAnalysis.galgas", 1412)), var_rightExpression_56424  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1408)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_57838 ;
  const GALGAS_templateRightShiftOperationAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_leftExpression_57838, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1427)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_58068 ;
  const GALGAS_templateRightShiftOperationAST temp_1 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_rightExpression_58068, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1434)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_58143 = var_leftExpression_57838.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_rightType_58210 = var_rightExpression_58068.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_leftType_58143.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1443)).getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1443)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1443)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateRightShiftOperationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (var_leftType_58143.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1445)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1445)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1445)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1444)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_rightType_58210.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1447)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateRightShiftOperationAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_58210.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1449)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1449)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1449)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1448)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateRightShiftOperationAST temp_8 = object ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_58143, temp_8.readProperty_mOperatorLocation (), var_leftExpression_57838, GALGAS_binaryOperator::constructor_rightShift (SOURCE_FILE ("templateAnalysis.galgas", 1457)), var_rightExpression_58068  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1453)) ;
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
  cEnumerator_templateInstructionListAST enumerator_59954 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_59954.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((const cPtr_templateInstructionAST *) enumerator_59954.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1485)) ;
    enumerator_59954.gotoNextObject () ;
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
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionStringForGeneration::constructor_new (temp_0.readProperty_mTemplateString ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1502))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1502)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_61229 ;
  const GALGAS_templateInstructionExpressionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_61229, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1513)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_61229.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1519)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionExpressionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GALGAS_string ("expression type should be '@string' (it is '@").add_operation (var_expression_61229.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1520)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1520)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1520)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1520)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionForGeneration::constructor_new (var_expression_61229  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1522))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1522)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_62041 ;
  const GALGAS_templateBlockInstructionAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_62041, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1533)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_62041.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1539)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateBlockInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GALGAS_string ("expression type should be '@uint' (it is '@").add_operation (var_expression_62041.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1540)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1540)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1540)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1540)) ;
    }
  }
  GALGAS_templateInstructionListForGeneration var_blockInstructionList_62236 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1542)) ;
  {
  const GALGAS_templateBlockInstructionAST temp_4 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_4.readProperty_mBlockInstructionList (), var_blockInstructionList_62236, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1543)) ;
  }
  const GALGAS_templateBlockInstructionAST temp_5 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateBlockInstructionForGeneration::constructor_new (var_expression_62041, temp_5.readProperty_mLocation (), var_blockInstructionList_62236  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1550))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1550)) ;
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
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1561))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1561)) ;
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
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1572))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1572)) ;
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
  GALGAS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList_64049 = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1584)) ;
  const GALGAS_templateInstructionIfAST temp_0 = object ;
  cEnumerator_templateInstructionIfBranchListAST enumerator_64135 (temp_0.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_64135.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_64333 ;
    callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_64135.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_64333, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1586)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_expression_64333.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1592)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_64333.readProperty_mLocation (), GALGAS_string ("'if' expression type should be '@bool' (it is '@").add_operation (var_expression_64333.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1593)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1593)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1593)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1593)) ;
      }
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_64546 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1595)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, enumerator_64135.current_mInstructionList (HERE), var_instructionList_64546, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1596)) ;
    }
    var_templateInstructionIfBranchList_64049.addAssign_operation (var_expression_64333, var_instructionList_64546  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1603)) ;
    enumerator_64135.gotoNextObject () ;
  }
  GALGAS_templateInstructionListForGeneration var_elseInstructionList_64876 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1606)) ;
  {
  const GALGAS_templateInstructionIfAST temp_3 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_64876, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1607)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionIfForGeneration::constructor_new (var_templateInstructionIfBranchList_64049, var_elseInstructionList_64876  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1615))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1615)) ;
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
  cEnumerator_templateInstructionListForGeneration enumerator_1782 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_1782.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((const cPtr_templateInstructionForGeneration *) enumerator_1782.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 36)) ;
    enumerator_1782.gotoNextObject () ;
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
  GALGAS_string var_cppName_3025 ;
  const GALGAS_templateInstructionExpressionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3025, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 66)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (var_cppName_3025, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)) ;
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
  GALGAS_string var_indendationVarCppName_3635 ;
  const GALGAS_templateBlockInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 79)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation ((int32_t) ").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)).add_operation (GALGAS_string (".uintValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)) ;
  {
  const GALGAS_templateBlockInstructionForGeneration temp_1 = object ;
  routine_templateCodeGenerationForListInstruction (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 91)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (- ((int32_t) ").add_operation (var_indendationVarCppName_3635, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 105)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 117)) ;
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
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_5661 (temp_0.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_5661.hasCurrentObject ()) {
    GALGAS_string var_ifVarCppName_5872 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_5661.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_5872, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 130)) ;
    GALGAS_string var_testVar_5897 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 131)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 131)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_5897, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 132)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 132)).add_operation (var_ifVarCppName_5872, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 132)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 132)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 132)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_5897, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 133)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 134)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (enumerator_5661.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_5897, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)) ;
    }
    enumerator_5661.gotoNextObject () ;
  }
  {
  const GALGAS_templateInstructionIfForGeneration temp_1 = object ;
  routine_templateCodeGenerationForListInstruction (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 148)) ;
  }
  const GALGAS_templateInstructionIfForGeneration temp_2 = object ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_6800 (temp_2.readProperty_mTemplateInstructionIfBranchList (), kENUMERATION_UP) ;
  while (enumerator_6800.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 157)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 158)) ;
    enumerator_6800.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_expression_6628 ;
  const GALGAS_templateInstructionForeachAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_expression_6628, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 196)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6723 = var_expression_6628.readProperty_mResultType ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 203)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_enumerationDescriptor_6723.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 204)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_6628.readProperty_mLocation (), GALGAS_string ("expression of '@").add_operation (var_expression_6628.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 205)).add_operation (GALGAS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 205)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 205)) ;
    }
  }
  GALGAS_templateInstructionListForGeneration var_beforeInstructionList_7025 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 208)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_3 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_7025, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 209)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_4 = object ;
  GALGAS_string var_enumeratorCppName_7298 = GALGAS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 217)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 217)) ;
  GALGAS_templateVariableMap var_doVariableMap_7392 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GALGAS_templateInstructionForeachAST temp_5 = object ;
  const GALGAS_templateInstructionForeachAST temp_6 = object ;
  GALGAS_string var_cppIndexVarName_7455 = GALGAS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 219)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 219)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 219)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 220)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_templateInstructionForeachAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      const GALGAS_templateInstructionForeachAST temp_9 = object ;
      var_doVariableMap_7392.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_7455, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 222)) ;
      }
    }
  }
  switch (object->mProperty_mEnumeratedObjectProperties.enumValue ()) {
  case GALGAS_templateInstructionForEnumerationAST::kNotBuilt:
    break ;
  case GALGAS_templateInstructionForEnumerationAST::kEnum_implicit:
    {
      const cEnumAssociatedValues_templateInstructionForEnumerationAST_implicit * extractPtr_8564 = (const cEnumAssociatedValues_templateInstructionForEnumerationAST_implicit *) (object->mProperty_mEnumeratedObjectProperties.unsafePointer ()) ;
      const GALGAS_string extractedValue_7830_prefix = extractPtr_8564->mAssociatedValue0 ;
      const GALGAS_location extractedValue_7858_remplacementRange = extractPtr_8564->mAssociatedValue1 ;
      GALGAS_string var_suggestion_7880 = GALGAS_string ("(") ;
      cEnumerator_enumerationDescriptorList enumerator_7926 (var_enumerationDescriptor_6723, kENUMERATION_UP) ;
      while (enumerator_7926.hasCurrentObject ()) {
        {
        var_doVariableMap_7392.setter_insertKey (GALGAS_lstring::constructor_new (extractedValue_7830_prefix.add_operation (enumerator_7926.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 230)), var_expression_6628.readProperty_mLocation ()  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 230)), enumerator_7926.current_mEnumeratedType (HERE), var_enumeratorCppName_7298.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 232)).add_operation (enumerator_7926.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 232)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 229)) ;
        }
        var_suggestion_7880.plusAssign_operation(extractedValue_7830_prefix.add_operation (enumerator_7926.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 234)) ;
        if (enumerator_7926.hasNextObject ()) {
          var_suggestion_7880.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 236)) ;
        }
        enumerator_7926.gotoNextObject () ;
      }
      var_suggestion_7880.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 238)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          appendFixItActions (fixItArray11, kFixItReplace, var_suggestion_7880) ;
          inCompiler->emitSemanticError (extractedValue_7858_remplacementRange, GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray11  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 240)) ;
        }
      }
    }
    break ;
  case GALGAS_templateInstructionForEnumerationAST::kEnum_explicit:
    {
      const cEnumAssociatedValues_templateInstructionForEnumerationAST_explicit * extractPtr_9300 = (const cEnumAssociatedValues_templateInstructionForEnumerationAST_explicit *) (object->mProperty_mEnumeratedObjectProperties.unsafePointer ()) ;
      const GALGAS_lstringlist extractedValue_8606_enumeration = extractPtr_9300->mAssociatedValue0 ;
      const GALGAS_location extractedValue_8630_errorLocation = extractPtr_9300->mAssociatedValue1 ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, extractedValue_8606_enumeration.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 245)).objectCompare (var_enumerationDescriptor_6723.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 245)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_8630_errorLocation, var_enumerationDescriptor_6723.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 247)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 247)).add_operation (GALGAS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 247)).add_operation (extractedValue_8606_enumeration.getter_length (SOURCE_FILE ("template-for-instruction.galgas", 248)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 247)).add_operation (GALGAS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 248)), fixItArray13  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 246)) ;
        }
      }
      if (kBoolFalse == test_12) {
        cEnumerator_enumerationDescriptorList enumerator_8905 (var_enumerationDescriptor_6723, kENUMERATION_UP) ;
        cEnumerator_lstringlist enumerator_8964 (extractedValue_8606_enumeration, kENUMERATION_UP) ;
        while (enumerator_8905.hasCurrentObject () && enumerator_8964.hasCurrentObject ()) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = GALGAS_bool (kIsNotEqual, enumerator_8964.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              {
              var_doVariableMap_7392.setter_insertKey (enumerator_8964.current_mValue (HERE), enumerator_8905.current_mEnumeratedType (HERE), var_enumeratorCppName_7298.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 256)).add_operation (enumerator_8905.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 256)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 253)) ;
              }
            }
          }
          enumerator_8905.gotoNextObject () ;
          enumerator_8964.gotoNextObject () ;
        }
      }
    }
    break ;
  }
  GALGAS_templateAnalysisContext var_doAnalysisContext_9330 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_7392  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 262)) ;
  GALGAS_templateInstructionListForGeneration var_doInstructionList_9487 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 266)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_15 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_9330, temp_15.readProperty_mDoInstructionList (), var_doInstructionList_9487, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 267)) ;
  }
  GALGAS_templateInstructionListForGeneration var_betweenInstructionList_9763 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 275)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_16 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_16.readProperty_mBetweenInstructionList (), var_betweenInstructionList_9763, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 276)) ;
  }
  GALGAS_templateInstructionListForGeneration var_afterInstructionList_10045 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-for-instruction.galgas", 284)) ;
  {
  const GALGAS_templateInstructionForeachAST temp_17 = object ;
  routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_17.readProperty_mAfterInstructionList (), var_afterInstructionList_10045, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 285)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_18 = object ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionForeachForGeneration::constructor_new (temp_18.readProperty_mIsAscending (), var_expression_6628, var_enumeratorCppName_7298, var_beforeInstructionList_7025, var_doInstructionList_9487, var_cppIndexVarName_7455, var_betweenInstructionList_9763, var_afterInstructionList_10045  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 293))  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 293)) ;
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
  GALGAS_string var_foreachVarCppName_11885 ;
  const GALGAS_templateInstructionForeachForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_11885, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 329)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_templateInstructionForeachForGeneration temp_2 = object ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mIndexCppName ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 331)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionForeachForGeneration temp_3 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 332)).add_operation (GALGAS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 332)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_foreachVarCppName_11885, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 335)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 335)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 335)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 336)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (temp_4.readProperty_mExpression ().readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (temp_5.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (var_foreachVarCppName_11885, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 337)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_templateInstructionForeachForGeneration temp_10 = object ;
    const GALGAS_templateInstructionForeachForGeneration temp_11 = object ;
    test_9 = GALGAS_bool (kIsStrictSup, temp_10.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 340)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 340)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_templateInstructionForeachForGeneration temp_12 = object ;
      const GALGAS_templateInstructionForeachForGeneration temp_13 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 341)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 341)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 341)).add_operation (GALGAS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 341)) ;
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_templateInstructionForeachForGeneration temp_15 = object ;
    test_14 = GALGAS_bool (kIsStrictSup, temp_15.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 343)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_templateInstructionForeachForGeneration temp_16 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 344)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 345)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_17 = object ;
      routine_templateCodeGenerationForListInstruction (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 346)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 354)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 355)) ;
    }
  }
  const GALGAS_templateInstructionForeachForGeneration temp_18 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 357)).add_operation (GALGAS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 357)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 358)) ;
  }
  {
  const GALGAS_templateInstructionForeachForGeneration temp_19 = object ;
  routine_templateCodeGenerationForListInstruction (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 360)) ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    const GALGAS_templateInstructionForeachForGeneration temp_21 = object ;
    test_20 = GALGAS_bool (kIsStrictSup, temp_21.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 369)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_templateInstructionForeachForGeneration temp_22 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (temp_22.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 370)).add_operation (GALGAS_string (".hasNextObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 370)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 371)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_23 = object ;
      routine_templateCodeGenerationForListInstruction (temp_23.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 372)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 380)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 381)) ;
    }
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    const GALGAS_templateInstructionForeachForGeneration temp_25 = object ;
    test_24 = GALGAS_bool (kIsStrictSup, temp_25.readProperty_mIndexCppName ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 384)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_24) {
      const GALGAS_templateInstructionForeachForGeneration temp_26 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_26.readProperty_mIndexCppName ().add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 385)) ;
    }
  }
  const GALGAS_templateInstructionForeachForGeneration temp_27 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_27.readProperty_mEnumeratorCppName ().add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 388)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 389)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 390)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    const GALGAS_templateInstructionForeachForGeneration temp_29 = object ;
    test_28 = GALGAS_bool (kIsStrictSup, temp_29.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("template-for-instruction.galgas", 392)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_28) {
      const GALGAS_templateInstructionForeachForGeneration temp_30 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 393)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 393)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 394)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_31 = object ;
      routine_templateCodeGenerationForListInstruction (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 395)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 403)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 404)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 407)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 408)) ;
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
  GALGAS_semanticExpressionForGeneration var_switchExpression_4471 ;
  const GALGAS_templateInstructionSwitchAST temp_0 = object ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_switchExpression_4471, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 124)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_switchExpression_4471.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 130)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("template-switch-instruction.galgas", 130)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_switchExpression_4471.readProperty_mLocation (), GALGAS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (var_switchExpression_4471.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 131)).add_operation (GALGAS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 132)), fixItArray2  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 131)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_4737 = var_switchExpression_4471.readProperty_mResultType ().getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 134)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_4838 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("template-switch-instruction.galgas", 135)) ;
  GALGAS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList_4957 = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 137)) ;
  const GALGAS_templateInstructionSwitchAST temp_3 = object ;
  cEnumerator_templateInstructionSwitchBranchListAST enumerator_5041 (temp_3.readProperty_mTemplateInstructionSwitchBranchList (), kENUMERATION_UP) ;
  while (enumerator_5041.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_5177 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 139)) ;
    GALGAS_bool var_firstConstant_5210 = GALGAS_bool (true) ;
    GALGAS_templateAnalysisContext var_analysisContext_5241 = constinArgument_inAnalysisContext ;
    cEnumerator_lstringlist enumerator_5278 (enumerator_5041.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_5278.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_enumConstantMap_4737.getter_hasKey (enumerator_5278.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 143)).boolEnum () ;
        if (kBoolTrue == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_constantsNamedInSwitchInstruction_4838.getter_hasKey (enumerator_5278.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 144)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_5278.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5278.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)), fixItArray6  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 145)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_4838.addAssign_operation (enumerator_5278.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 148)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_5704 ;
          GALGAS_uint joker_5654 ; // Joker input parameter
          var_enumConstantMap_4737.method_searchKey (enumerator_5278.current_mValue (HERE), joker_5654, var_associatedTypeList_5704, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 149)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_5704.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 150)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_5041.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 150)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 150)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_5278.current_mValue (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_5278.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 152)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 152)), fixItArray8  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 151)) ;
            }
          }
          if (kBoolFalse == test_7) {
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsEqual, var_associatedTypeList_5704.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 153)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_5041.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 153)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 153)).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_5278.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5278.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 155)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 155)), fixItArray10  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 154)) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_5704.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 156)).objectCompare (enumerator_5041.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 156)))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  GALGAS_string temp_12 ;
                  const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_5704.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 159)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    temp_12 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_13) {
                    temp_12 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (enumerator_5278.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5278.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)).add_operation (var_associatedTypeList_5704.getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 158)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 158)), fixItArray14  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 157)) ;
                }
              }
              if (kBoolFalse == test_11) {
                GALGAS_uint var_associatedValueIndex_6438 = GALGAS_uint ((uint32_t) 0U) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_6463 (var_associatedTypeList_5704, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_6534 (enumerator_5041.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_6463.hasCurrentObject () && enumerator_6534.hasCurrentObject ()) {
                  enumGalgasBool test_15 = kBoolTrue ;
                  if (kBoolTrue == test_15) {
                    test_15 = GALGAS_bool (kIsNotEqual, enumerator_6534.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_15) {
                      enumGalgasBool test_16 = kBoolTrue ;
                      if (kBoolTrue == test_16) {
                        test_16 = GALGAS_bool (kIsNotEqual, enumerator_6463.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 164)).objectCompare (enumerator_6534.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_16) {
                          TC_Array <C_FixItDescription> fixItArray17 ;
                          inCompiler->emitSemanticError (enumerator_6534.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (enumerator_6463.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)), fixItArray17  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_18 = kBoolTrue ;
                  if (kBoolTrue == test_18) {
                    test_18 = var_firstConstant_5210.operator_and (GALGAS_bool (kIsNotEqual, enumerator_6534.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 168)).boolEnum () ;
                    if (kBoolTrue == test_18) {
                      GALGAS_string var_cppName_6937 = GALGAS_string ("extractedValue_").add_operation (enumerator_6534.current_mExtractedValueName (HERE).readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (enumerator_6534.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)) ;
                      var_extractedAssociatedValuesForGeneration_5177.addAssign_operation (enumerator_6463.current_mType (HERE), var_cppName_6937, var_associatedValueIndex_6438  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 170)) ;
                      {
                      var_analysisContext_5241.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_6534.current_mExtractedValueName (HERE), enumerator_6463.current_mType (HERE), var_cppName_6937, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 171)) ;
                      }
                    }
                  }
                  var_associatedValueIndex_6438.increment_operation (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 173)) ;
                  enumerator_6463.gotoNextObject () ;
                  enumerator_6534.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_5278.current_mValue (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_5278.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (var_switchExpression_4471.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)), fixItArray19  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 177)) ;
      }
      var_firstConstant_5210 = GALGAS_bool (false) ;
      enumerator_5278.gotoNextObject () ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_7562 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("template-switch-instruction.galgas", 182)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_5241, enumerator_5041.current_mInstructionList (HERE), var_instructionList_7562, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 183)) ;
    }
    var_templateInstructionSwitchBranchList_4957.addAssign_operation (enumerator_5041.current_mConstantList (HERE), var_extractedAssociatedValuesForGeneration_5177, enumerator_5041.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 193)), var_instructionList_7562  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 190)) ;
    enumerator_5041.gotoNextObject () ;
  }
  GALGAS_stringset var_forgottenConstants_7989 = var_enumConstantMap_4737.getter_keySet (SOURCE_FILE ("template-switch-instruction.galgas", 197)).substract_operation (var_constantsNamedInSwitchInstruction_4838, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 197)) ;
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_7989.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 198)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_20) {
      GALGAS_string var_s_8111 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_8129 (var_forgottenConstants_7989, kENUMERATION_UP) ;
      while (enumerator_8129.hasCurrentObject ()) {
        var_s_8111.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_8129.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 201)) ;
        enumerator_8129.gotoNextObject () ;
      }
      const GALGAS_templateInstructionSwitchAST temp_21 = object ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mSwitchExpressionEndLocation (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_8111, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 204)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 203)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchForGeneration::constructor_new (var_switchExpression_4471.readProperty_mResultType (), var_switchExpression_4471, var_templateInstructionSwitchBranchList_4957  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 207))  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 207)) ;
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
  GALGAS_string var_switchVarCppName_10067 ;
  const GALGAS_templateInstructionSwitchForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_10067, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 243)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVarCppName_10067, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 251)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 251)) ;
  const GALGAS_templateInstructionSwitchForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 252)).add_operation (GALGAS_string ("::kNotBuilt :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 252)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 253)) ;
  const GALGAS_templateInstructionSwitchForGeneration temp_2 = object ;
  cEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_10414 (temp_2.readProperty_mTemplateInstructionSwitchBranchList (), kENUMERATION_UP) ;
  while (enumerator_10414.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_10479 (enumerator_10414.current_mConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_10479.hasCurrentObject ()) {
      const GALGAS_templateInstructionSwitchForGeneration temp_3 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 257)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 257)).add_operation (enumerator_10479.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 258)).add_operation (GALGAS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 257)) ;
      enumerator_10479.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 260)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 261)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_10414.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 262)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_templateInstructionSwitchForGeneration temp_5 = object ;
        GALGAS_string var_type_10850 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (temp_5.readProperty_mEnumType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 263)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 263)).add_operation (enumerator_10414.current_mConstantList (HERE).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 264)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 264)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 264)) ;
        GALGAS_string var_varPtr_11006 = GALGAS_string ("extractPtr_").add_operation (enumerator_10414.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 265)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_10850, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (var_varPtr_11006, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (var_type_10850, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (var_switchVarCppName_10067, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 266)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_11205 (enumerator_10414.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_11205.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (enumerator_11205.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 268)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 268)).add_operation (enumerator_11205.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 268)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 268)).add_operation (var_varPtr_11006, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (enumerator_11205.current_mIndex (HERE).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 268)) ;
          enumerator_11205.gotoNextObject () ;
        }
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsStrictSup, enumerator_10414.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("template-switch-instruction.galgas", 272)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 273)) ;
        }
        {
        routine_templateCodeGenerationForListInstruction (enumerator_10414.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 274)) ;
        }
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 282)) ;
        }
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 284)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 285)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 286)) ;
    }
    enumerator_10414.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 289)) ;
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
  cEnumerator_lexicalAttributeListAST enumerator_20980 (constinArgument_inLexicalAttributeList, kENUMERATION_UP) ;
  while (enumerator_20980.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inLexicalTypeMap.getter_hasKey (enumerator_20980.current_mTypeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 516)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_lexicalTypeEnum var_lexicalType_21145 ;
        constinArgument_inLexicalTypeMap.method_searchKey (enumerator_20980.current_mTypeName (HERE), var_lexicalType_21145, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 517)) ;
        {
        ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_20980.current_mName (HERE), var_lexicalType_21145, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 518)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_m_21237 = GALGAS_string::makeEmptyString () ;
      var_m_21237.plusAssign_operation(GALGAS_string ("the @").add_operation (enumerator_20980.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)).add_operation (GALGAS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 521)) ;
      cEnumerator_lexicalTypeMap enumerator_21353 (constinArgument_inLexicalTypeMap, kENUMERATION_UP) ;
      while (enumerator_21353.hasCurrentObject ()) {
        var_m_21237.plusAssign_operation(GALGAS_string (" @").add_operation (enumerator_21353.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 523)) ;
        if (enumerator_21353.hasNextObject ()) {
          var_m_21237.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 525)) ;
        }
        enumerator_21353.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_20980.current_mTypeName (HERE).readProperty_location (), var_m_21237, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 527)) ;
    }
    enumerator_20980.gotoNextObject () ;
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
  cEnumerator_lexicalFunctionListAST enumerator_7639 (constinArgument_inLexicalFunctionListAST, kENUMERATION_UP) ;
  while (enumerator_7639.hasCurrentObject ()) {
    callExtensionMethod_checkUnicodeConstants ((const cPtr_lexicalFunctionExpressionAST *) enumerator_7639.current (HERE).readProperty_mLexicalExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 180)) ;
    enumerator_7639.gotoNextObject () ;
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
  GALGAS_bool var_progress_8088 = GALGAS_bool (true) ;
  GALGAS_lexicalFunctionListAST var_lexicalFunctionListAST_8124 = constinArgument_inLexicalFunctionListAST ;
  if (constinArgument_inLexicalFunctionListAST.getter_length (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).isValid ()) {
    uint32_t variant_8158 = constinArgument_inLexicalFunctionListAST.getter_length (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)).uintValue () ;
    bool loop_8158 = true ;
    while (loop_8158) {
      loop_8158 = var_progress_8088.isValid () ;
      if (loop_8158) {
        loop_8158 = var_progress_8088.boolValue () ;
      }
      if (loop_8158 && (0 == variant_8158)) {
        loop_8158 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 199)) ;
      }
      if (loop_8158) {
        variant_8158 -- ;
        var_progress_8088 = GALGAS_bool (false) ;
        GALGAS_lexicalFunctionListAST var_temporaryLexicalFunctionListAST_8277 = var_lexicalFunctionListAST_8124 ;
        var_lexicalFunctionListAST_8124 = GALGAS_lexicalFunctionListAST::constructor_emptyList (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 202)) ;
        cEnumerator_lexicalFunctionListAST enumerator_8393 (var_temporaryLexicalFunctionListAST_8277, kENUMERATION_UP) ;
        while (enumerator_8393.hasCurrentObject ()) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = outArgument_outUnicodeTestFunctions.getter_hasKey (enumerator_8393.current (HERE).readProperty_mFunctionName ().readProperty_string () COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 204)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (enumerator_8393.current (HERE).readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("Unicode test function already defined"), fixItArray2  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 205)) ;
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = callExtensionGetter_callsDefinedUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_8393.current (HERE).readProperty_mLexicalExpression ().ptr (), outArgument_outUnicodeTestFunctions, inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 206)).boolEnum () ;
              if (kBoolTrue == test_3) {
                outArgument_outUnicodeTestFunctions.addAssign_operation (enumerator_8393.current (HERE).readProperty_mFunctionName ().readProperty_string ()  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 207)) ;
                var_progress_8088 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_3) {
              var_temporaryLexicalFunctionListAST_8277.addAssign_operation (enumerator_8393.current (HERE).readProperty_mFunctionName (), enumerator_8393.current (HERE).readProperty_mLexicalExpression ()  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 210)) ;
            }
          }
          enumerator_8393.gotoNextObject () ;
        }
      }
    }
  }
  cEnumerator_lexicalFunctionListAST enumerator_8955 (var_lexicalFunctionListAST_8124, kENUMERATION_UP) ;
  while (enumerator_8955.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (enumerator_8955.current (HERE).readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("Circular definition of this lexical Unicode test function"), fixItArray4  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 215)) ;
    enumerator_8955.gotoNextObject () ;
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
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 38)) ;
  GALGAS_stringlist var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 39)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 40)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 40)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 40)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 41)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 41)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 41)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 42)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inErrorNotHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 43)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoASCIIcharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 45))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 45)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 44)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 51)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 52)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 53)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 54)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 54)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 54)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 55)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inErrorNotDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 56)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoASCIIcharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 58))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 58)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 57)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 64)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 65)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 66)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterCharacterIntoString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 68))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 68)), var_lexicalRoutineFormalArgumentList_2055, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 70)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 67)) ;
  }
  {
  GALGAS_lexicalRoutineFormalArgumentList temp_0 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)) ;
  temp_0.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 76)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("resetString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75)), temp_0, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 77)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 74)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 81)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 82)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 83)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_string ("ioDouble")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 84)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inConversionError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 85)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertStringToDouble"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 87))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 87)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 86)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 93)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 94)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 95)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 95)), GALGAS_string ("ioCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 95)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 96)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 96)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 96)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterCharacterIntoCharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 98))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 98)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 97)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 104)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 105)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 106)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 106)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 106)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 107)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 109))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 109)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 108)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 115)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 116)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 117)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 117)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 117)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 118)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 120))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 120)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 119)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 126)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 127)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 128)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 128)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 128)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 129)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 129)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 129)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 130)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUIntToSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 132))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 132)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 131)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 138)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 139)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 140)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 140)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 140)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 141)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 141)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 141)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 142)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUInt64ToSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 144))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 144)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 143)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 150)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 151)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 152)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 152)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 152)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 153)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 153)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 153)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 154)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 155)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 157))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 157)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 156)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 163)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 164)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 165)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 165)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 165)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 166)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 166)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 166)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 167)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 168)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 169)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 176)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 177)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 178)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 178)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 178)) ;
  {
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 182)) ;
  temp_1.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 182)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDecimalDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 180))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 180)), var_lexicalRoutineFormalArgumentList_2055, temp_1, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 179)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 186)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), GALGAS_string ("inBinaryDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 187)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 188)) ;
  {
  GALGAS_stringlist temp_2 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 192)) ;
  temp_2.addAssign_operation (GALGAS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 192)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinaryDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 190))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 190)), var_lexicalRoutineFormalArgumentList_2055, temp_2, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 189)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 196)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 197)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 198)) ;
  {
  GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 202)) ;
  temp_3.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 202)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200)), var_lexicalRoutineFormalArgumentList_2055, temp_3, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 199)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 206)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 207)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 208)) ;
  {
  GALGAS_stringlist temp_4 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 212)) ;
  temp_4.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 212)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210)), var_lexicalRoutineFormalArgumentList_2055, temp_4, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 209)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 216)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 217)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219)), var_lexicalRoutineFormalArgumentList_2055, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 221)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 218)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 225)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 226)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 227)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 227)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 227)) ;
  {
  GALGAS_stringlist temp_5 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 231)) ;
  temp_5.addAssign_operation (GALGAS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 231)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertBinaryStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 229))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 229)), var_lexicalRoutineFormalArgumentList_2055, temp_5, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 228)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 235)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 236)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 236)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 236)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 237)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 237)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 237)) ;
  {
  GALGAS_stringlist temp_6 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 241)) ;
  temp_6.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 241)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 239))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 239)), var_lexicalRoutineFormalArgumentList_2055, temp_6, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 238)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 245)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 246)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 247)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 247)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 247)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 248)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 248)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 248)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 249)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 250)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 252))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 252)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 251)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 258)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 259)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 260)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 260)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 260)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 261)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 261)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 261)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 262)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 263)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 265))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 265)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 264)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 271)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 272)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 273)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 273)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 273)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 274)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 274)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 274)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 275)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 276)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 278))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 278)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 277)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 284)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 285)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 286)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 286)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 286)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 287)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 287)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 287)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 288)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 289)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 291))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 291)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 290)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 297)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 298)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 298)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 298)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 299)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 299)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 299)) ;
  {
  GALGAS_stringlist temp_7 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  temp_7.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  temp_7.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 301))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 301)), var_lexicalRoutineFormalArgumentList_2055, temp_7, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 300)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 307)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 308)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 309)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 309)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 309)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 310)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 310)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 310)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 311)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 312)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 314))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 314)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 313)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 320)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 321)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 322)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 322)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 322)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 323)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 323)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 323)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 324)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 325)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 327))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 327)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 326)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 333)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 334)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 335)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 335)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 335)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 336)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 336)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 336)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 337)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 338)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 340))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 340)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 339)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 346)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 347)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 348)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 348)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 348)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 349)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 349)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 349)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 350)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 351)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterOctDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 353))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 353)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 352)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 359)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 360)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 361)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 361)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 361)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 362)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 362)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 362)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 363)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 364)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterOctDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 366))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 366)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 365)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 372)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 373)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 374)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 374)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 374)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 375)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 375)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 375)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 376)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("multiplyUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 378))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 378)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 377)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 384)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 385)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 386)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 386)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 386)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 387)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 387)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 387)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 388)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("multiplyUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 390))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 390)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 389)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 396)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 397)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 398)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 398)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 398)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 399)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 399)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 399)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 400)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 401)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 403))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 403)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 402)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 409)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 410)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 411)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 411)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 411)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 412)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 412)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 412)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 413)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 414)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 416))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 416)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 415)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 422)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 423)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 424)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 424)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 424)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 425)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 425)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 425)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 426)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 427)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 429))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 429)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 428)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 435)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 436)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 437)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 437)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 437)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 438)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 438)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 438)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 439)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 440)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 442))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 442)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 441)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 448)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 449)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 450)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 450)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 450)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 451)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 451)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 451)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inUnassignedUnicodeValueError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 452)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUnsignedNumberToUnicodeChar"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 454))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 454)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 453)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 460)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 461)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 462)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 462)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 462)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 463)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 463)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 463)) ;
  var_errorMessageList_2095.addAssign_operation (GALGAS_string ("inUnassignedHTMLSequenceError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 464)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHTMLSequenceToUnicodeCharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 466))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 466)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 465)) ;
  }
  var_lexicalRoutineFormalArgumentList_2055 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 472)) ;
  var_errorMessageList_2095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 473)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 474)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 474)), GALGAS_string ("inCodePointString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 474)) ;
  var_lexicalRoutineFormalArgumentList_2055.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 475)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 475)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 475)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("codePointToUnicode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 477))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 477)), var_lexicalRoutineFormalArgumentList_2055, var_errorMessageList_2095, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 476)) ;
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
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalTypeList_22045 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 491)) ;
  var_lexicalTypeList_22045.addAssign_operation (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 492)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 492)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("toLower"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 494))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 494)), var_lexicalTypeList_22045, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 496)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 493)) ;
  }
  var_lexicalTypeList_22045 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 501)) ;
  var_lexicalTypeList_22045.addAssign_operation (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 502)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 502)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("toUpper"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 504))  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 504)), var_lexicalTypeList_22045, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 506)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 503)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'printPredefinedLexicalActions'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_23055 ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap_23055, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 518)) ;
  }
  GALGAS_string var_s_23138 = GALGAS_string::makeEmptyString () ;
  var_s_23138.plusAssign_operation(GALGAS_string ("**************** Prefined lexical routines  ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 521)) ;
  cEnumerator_lexicalRoutineMap enumerator_23281 (var_lexicalRoutineMap_23055, kENUMERATION_UP) ;
  while (enumerator_23281.hasCurrentObject ()) {
    var_s_23138.plusAssign_operation(enumerator_23281.current_lkey (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 523)) ;
    cEnumerator_lexicalRoutineFormalArgumentList enumerator_23414 (enumerator_23281.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_23414.hasCurrentObject ()) {
      var_s_23138.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_lexicalFormalModeName (enumerator_23414.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)).add_operation (extensionGetter_lexicalTypeBaseName (enumerator_23414.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)).add_operation (enumerator_23414.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)) ;
      enumerator_23414.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_23636 (enumerator_23281.current_mErrorMessageList (HERE), kENUMERATION_UP) ;
    const bool bool_0 = true ;
    if (enumerator_23636.hasCurrentObject () && bool_0) {
      var_s_23138.plusAssign_operation(GALGAS_string (" error"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 528)) ;
      while (enumerator_23636.hasCurrentObject () && bool_0) {
        var_s_23138.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_23636.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 529)) ;
        enumerator_23636.gotoNextObject () ;
        if (enumerator_23636.hasCurrentObject () && bool_0) {
          var_s_23138.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 530)) ;
        }
      }
    }
    var_s_23138.plusAssign_operation(GALGAS_string (" ;\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)) ;
    enumerator_23281.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_23880 ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap_23880, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 535)) ;
  }
  var_s_23138.plusAssign_operation(GALGAS_string ("**************** Prefined lexical functions ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 537)) ;
  cEnumerator_lexicalFunctionMap enumerator_24098 (var_lexicalFunctionMap_23880, kENUMERATION_UP) ;
  while (enumerator_24098.hasCurrentObject ()) {
    var_s_23138.plusAssign_operation(enumerator_24098.current_lkey (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 539)) ;
    cEnumerator_lexicalFunctionFormalArgumentList enumerator_24191 (enumerator_24098.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_24191.hasCurrentObject ()) {
      var_s_23138.plusAssign_operation(GALGAS_string (" \?@").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24191.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)).add_operation (enumerator_24191.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)) ;
      enumerator_24191.gotoNextObject () ;
    }
    var_s_23138.plusAssign_operation(GALGAS_string (" -> @").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24098.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_24098.current_mReplacementFunctionName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_s_23138.plusAssign_operation(GALGAS_string ("Note: the '").add_operation (enumerator_24098.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)).add_operation (GALGAS_string ("' function is obsolete: use '"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)).add_operation (enumerator_24098.current_mReplacementFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)).add_operation (GALGAS_string ("' function.\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)) ;
      }
    }
    var_s_23138.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)) ;
    enumerator_24098.gotoNextObject () ;
  }
  var_s_23138.plusAssign_operation(GALGAS_string ("************************************************************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 550)) ;
  inCompiler->printMessage (var_s_23138  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 551)) ;
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
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_6354 (temp_1.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_6354.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_6354.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)) ;
    enumerator_6354.gotoNextObject () ;
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
  cEnumerator_lexicalSendSearchListAST enumerator_9576 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_9576.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)) ;
    result_result.plusAssign_operation(GALGAS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_9576.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)).add_operation (GALGAS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)).add_operation (enumerator_9576.current_mAttributeName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)) ;
    result_result.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 204)) ;
    enumerator_9576.gotoNextObject () ;
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
  cEnumerator_lexicalInstructionListAST enumerator_11340 (temp_0.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_11340.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_11340.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 244)) ;
    enumerator_11340.gotoNextObject () ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_1 = object ;
  cEnumerator_lexicalWhileBranchListAST enumerator_11533 (temp_1.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_11533.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 249)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_11533.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 250)) ;
    result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 251)) ;
    {
    result_result.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 252)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_11758 (enumerator_11533.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_11758.hasCurrentObject ()) {
      result_result.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_11758.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 254)) ;
      enumerator_11758.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 256)) ;
    }
    if (enumerator_11533.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 258)) ;
    }
    enumerator_11533.gotoNextObject () ;
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
  cEnumerator_lexicalSelectBranchListAST enumerator_12534 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_12534.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 278)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_12534.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 279)) ;
    result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 280)) ;
    {
    result_result.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 281)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_12761 (enumerator_12534.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_12761.hasCurrentObject ()) {
      result_result.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12761.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 283)) ;
      enumerator_12761.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 285)) ;
    }
    if (enumerator_12534.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 287)) ;
    }
    enumerator_12534.gotoNextObject () ;
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
      cEnumerator_lexicalInstructionListAST enumerator_13124 (temp_3.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
      while (enumerator_13124.hasCurrentObject ()) {
        result_result.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13124.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 294)) ;
        enumerator_13124.gotoNextObject () ;
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
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_13734 (temp_1.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_13734.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_13734.current_mLexicalRoutineActualArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 309)) ;
    enumerator_13734.gotoNextObject () ;
  }
  const GALGAS_lexicalRoutineInstructionAST temp_2 = object ;
  cEnumerator_lstringlist enumerator_13863 (temp_2.readProperty_mErrorMessageList (), kENUMERATION_UP) ;
  while (enumerator_13863.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 312)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 312)).add_operation (enumerator_13863.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 312)) ;
    enumerator_13863.gotoNextObject () ;
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
  GALGAS_tokenSortedlist var_tokenSortedList_17574 ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = object ;
  GALGAS_lexicalExplicitTokenListMap joker_17552 ; // Joker input parameter
  GALGAS_bool joker_17576 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_17552, var_tokenSortedList_17574, joker_17576, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 384)) ;
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_17623 (var_tokenSortedList_17574, kENUMERATION_DOWN) ;
  while (enumerator_17623.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 387)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 387)) ;
    result_result.plusAssign_operation(enumerator_17623.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 388)) ;
    result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 389)) ;
    result_result.plusAssign_operation(enumerator_17623.current_mName (HERE).getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 390)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 390)) ;
    result_result.plusAssign_operation(GALGAS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 391)) ;
    result_result.plusAssign_operation(GALGAS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_17623.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 392)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 392)) ;
    result_result.plusAssign_operation(GALGAS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 394)) ;
    result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 395)) ;
    enumerator_17623.gotoNextObject () ;
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
  result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 406)) ;
  result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 407)) ;
  {
  result_result.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 408)) ;
  }
  const GALGAS_lexicalExplicitRuleAST temp_1 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_18553 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_18553.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_18553.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 410)) ;
    enumerator_18553.gotoNextObject () ;
  }
  {
  result_result.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 412)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 413)) ;
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
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_6211 (temp_1.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_6211.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_6211.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 127)) ;
    if (enumerator_6211.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 128)) ;
    }
    enumerator_6211.gotoNextObject () ;
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
  GALGAS_lexicalTypeEnum var_lexicalType_7261 ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = object ;
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_lexicalType_7261, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 147)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_needsReferenceInInputOutputInCocoa (var_lexicalType_7261, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 149)).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 150)) ;
    }
  }
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_2 = object ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mLexicalAttribute_").add_operation (temp_2.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 152)) ;
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
  result_outGeneratedCode = callExtensionGetter_generateCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 160)) ;
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
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 176)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 176)).add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 176)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 176)) ;
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
  cEnumerator_lexicalSendSearchListAST enumerator_9966 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_9966.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 204)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 205)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 205)).add_operation (enumerator_9966.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 205)).add_operation (GALGAS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 205)).add_operation (enumerator_9966.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 205)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 205)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)) ;
    enumerator_9966.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 208)) ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = object ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 209)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)) ;
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
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 219)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 219)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 219)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 219)) ;
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
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 229)) ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_0 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_11354 (temp_0.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_11354.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_11354.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 232)) ;
    enumerator_11354.gotoNextObject () ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_1 = object ;
  cEnumerator_lexicalWhileBranchListAST enumerator_11562 (temp_1.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_11562.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 237)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_11562.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 238)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 239)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 240)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_11840 (enumerator_11562.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_11840.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_11840.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 242)) ;
      enumerator_11840.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 244)) ;
    }
    if (enumerator_11562.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 246)) ;
    }
    enumerator_11562.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"
    "  mLoop = NO ;\n"
    "}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 248)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 251)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}while (mLoop && scanningOk) ;\n"
    "mLoop = YES ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 252)) ;
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
  cEnumerator_lexicalSelectBranchListAST enumerator_12723 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_12723.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 266)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_12723.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 267)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 268)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 269)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_13003 (enumerator_12723.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_13003.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13003.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 271)) ;
      enumerator_13003.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 273)) ;
    }
    if (enumerator_12723.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 275)) ;
    }
    enumerator_12723.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mDefaultInstructionList ().getter_length (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 278)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 279)) ;
      {
      result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 280)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = object ;
      cEnumerator_lexicalInstructionListAST enumerator_13421 (temp_3.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
      while (enumerator_13421.hasCurrentObject ()) {
        result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13421.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 282)) ;
        enumerator_13421.gotoNextObject () ;
      }
      {
      result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 284)) ;
      }
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 286)) ;
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
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 295)).add_operation (GALGAS_string (" (& scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 295)) ;
  const GALGAS_lexicalRoutineInstructionAST temp_1 = object ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_14109 (temp_1.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_14109.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_14109.current_mLexicalRoutineActualArgument (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 297)) ;
    enumerator_14109.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 299)) ;
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
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 308)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 308)).add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 308)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 308)) ;
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
  result_outGeneratedCode = GALGAS_string ("scanningPointStructForCocoa locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 335)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 335)) ;
  const GALGAS_lexicalTagInstructionAST temp_1 = object ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("[self saveScanningPoint: & locationForTag_").add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)) ;
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
  result_outGeneratedCode = GALGAS_string ("[self restoreScanningPoint: & locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 345)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 345)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = object ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)).add_operation (temp_1.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)) ;
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
  GALGAS_tokenSortedlist var_tokenSortedList_17927 ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = object ;
  GALGAS_lexicalExplicitTokenListMap joker_17905 ; // Joker input parameter
  GALGAS_bool joker_17929 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_17905, var_tokenSortedList_17927, joker_17929, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 373)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_17986 (var_tokenSortedList_17927, kENUMERATION_DOWN) ;
  while (enumerator_17986.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && [self testForInputString:@"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 376)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_17986.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 377)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 378)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)).add_operation (enumerator_17986.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 380)) ;
    enumerator_17986.gotoNextObject () ;
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
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 391)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 392)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 393)) ;
  }
  const GALGAS_lexicalExplicitRuleAST temp_1 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_18883 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_18883.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_18883.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 395)) ;
    enumerator_18883.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 397)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 398)) ;
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
  GALGAS_lexicalSentValueList joker_7075 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mDefaultSentTerminal (), joker_7075, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 163)) ;
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
  GALGAS_lexicalTypeEnum var_attributeLexicalType_10983 ;
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_10983, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 240)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_10983.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_10983, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 246)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 247)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 248)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 249)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 246)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 260)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 261)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 262)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 263)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 261)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 274)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalUnsignedInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GALGAS_string ("type error, a literal character has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 275)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 276)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 277)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 275)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 288)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCurrentCharacterInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 289)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 290)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 291)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 289)) ;
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
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_13718 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_13753 ;
  GALGAS_string var_replacementFunctionName_13786 ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = object ;
  GALGAS_bool joker_13792 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_13718, var_returnedLexicalFormalType_13753, var_replacementFunctionName_13786, joker_13792, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 302)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName_13786.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_13786, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 311)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 311)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 311)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType_13753.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_13753, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 315)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 316)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 317)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 318)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 315)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalFunctionInputArgumentAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList_13718.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 322)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 322)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_9 = object ;
      const GALGAS_lexicalFunctionInputArgumentAST temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 324)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 323)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 324)).add_operation (var_lexicalFormalTypeList_13718.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 326)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 325)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 326)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 323)) ;
    }
  }
  const GALGAS_lexicalFunctionInputArgumentAST temp_12 = object ;
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_14785 (var_lexicalFormalTypeList_13718, kENUMERATION_UP) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_14841 (temp_12.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_14785.hasCurrentObject () && enumerator_14841.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_14841.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_14785.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 330)) ;
    enumerator_14785.gotoNextObject () ;
    enumerator_14841.gotoNextObject () ;
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
  GALGAS_lexicalTypeEnum var_attributeLexicalType_15994 ;
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_15994, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 351)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_15994.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_15994, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 357)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 358)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 359)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 360)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 357)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 371)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 372)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 373)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 374)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 372)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 385)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalUnsignedInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GALGAS_string ("type error, a literal unsigned value has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 386)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 387)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 388)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 386)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 399)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCurrentCharacterInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 400)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 401)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 402)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 400)) ;
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
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_18732 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_18767 ;
  GALGAS_string var_replacementFunctionName_18800 ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = object ;
  GALGAS_bool joker_18806 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_18732, var_returnedLexicalFormalType_18767, var_replacementFunctionName_18800, joker_18806, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 413)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName_18800.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_18800, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 422)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 422)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 422)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType_18767.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_18767, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 426)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 427)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 428)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 429)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 426)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalFunctionInputArgumentAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList_18732.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 433)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 433)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_9 = object ;
      const GALGAS_lexicalFunctionInputArgumentAST temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 435)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 434)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 435)).add_operation (var_lexicalFormalTypeList_18732.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 437)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 436)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 434)) ;
    }
  }
  const GALGAS_lexicalFunctionInputArgumentAST temp_12 = object ;
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_19799 (var_lexicalFormalTypeList_18732, kENUMERATION_UP) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_19855 (temp_12.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_19799.hasCurrentObject () && enumerator_19855.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_19855.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_19799.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 441)) ;
    enumerator_19799.gotoNextObject () ;
    enumerator_19855.gotoNextObject () ;
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
  GALGAS_lexicalTypeEnum var_attributeLexicalType_21138 ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_21138, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 464)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_21138.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputOutputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_21138, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 470)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 471)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 472)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 473)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 470)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 477)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalAttributeInputOutputArgumentAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualPassingModeLocation (), GALGAS_string ("the output mode (!) is required here, not an output/input mode"), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 478)) ;
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
  callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), ioArgument_ioLexiqueAnalysisContext, inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 489)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 494)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFormalInputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualPassingModeLocation (), GALGAS_string ("the output/input mode (!\?) is required here, not an input mode"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 495)) ;
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
  cEnumerator_lexicalSendSearchListAST enumerator_23281 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_23281.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GALGAS_bool (true), enumerator_23281.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 513)) ;
    }
    GALGAS_lexicalTypeEnum joker_23507 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_23281.current_mAttributeName (HERE), joker_23507, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 514)) ;
    enumerator_23281.gotoNextObject () ;
  }
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = object ;
  callExtensionMethod_checkLexicalDefaultAction ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 516)) ;
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
  GALGAS_lexicalSentValueList joker_23964 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mSentTerminal (), joker_23964, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 524)) ;
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
  cEnumerator_lexicalWhileBranchListAST enumerator_24289 (temp_0.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_24289.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_24289.current_mWhileExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 533)) ;
    GALGAS_lexicalTagMap var_tagMap_24413 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 534)) ;
    cEnumerator_lexicalInstructionListAST enumerator_24483 (enumerator_24289.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_24483.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_24483.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_24413, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 536)) ;
      enumerator_24483.gotoNextObject () ;
    }
    enumerator_24289.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_24620 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 539)) ;
  const GALGAS_lexicalRepeatInstructionAST temp_1 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_24688 (temp_1.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_24688.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_24688.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_24620, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 541)) ;
    enumerator_24688.gotoNextObject () ;
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
  cEnumerator_lexicalSelectBranchListAST enumerator_25136 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_25136.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_25136.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 551)) ;
    GALGAS_lexicalTagMap var_tagMap_25262 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 552)) ;
    cEnumerator_lexicalInstructionListAST enumerator_25332 (enumerator_25136.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_25332.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_25332.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_25262, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 554)) ;
      enumerator_25332.gotoNextObject () ;
    }
    enumerator_25136.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_25470 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 557)) ;
  const GALGAS_lexicalSelectInstructionAST temp_1 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_25538 (temp_1.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
  while (enumerator_25538.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_25538.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_25470, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 559)) ;
    enumerator_25538.gotoNextObject () ;
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
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_26073 ;
  GALGAS_stringlist var_routineErrorMessageList_26106 ;
  const GALGAS_lexicalRoutineInstructionAST temp_0 = object ;
  GALGAS_bool joker_26112 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalRoutineMessageMap ().method_searchKey (temp_0.readProperty_mRoutineName (), var_lexicalRoutineFormalArgumentList_26073, var_routineErrorMessageList_26106, joker_26112, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 568)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalRoutineInstructionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, var_lexicalRoutineFormalArgumentList_26073.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 575)).objectCompare (temp_2.readProperty_mActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 575)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalRoutineInstructionAST temp_3 = object ;
      const GALGAS_lexicalRoutineInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this lexical routine call names ").add_operation (temp_4.readProperty_mActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 577)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 576)).add_operation (GALGAS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 577)).add_operation (var_lexicalRoutineFormalArgumentList_26073.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 579)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 578)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 579)), fixItArray5  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 576)) ;
    }
  }
  const GALGAS_lexicalRoutineInstructionAST temp_6 = object ;
  cEnumerator_lexicalRoutineFormalArgumentList enumerator_26620 (var_lexicalRoutineFormalArgumentList_26073, kENUMERATION_UP) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_26689 (temp_6.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_26620.hasCurrentObject () && enumerator_26689.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_26689.current_mLexicalRoutineActualArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_26620.current_mLexicalFormalArgumentMode (HERE), enumerator_26620.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 583)) ;
    enumerator_26620.gotoNextObject () ;
    enumerator_26689.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalRoutineInstructionAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, var_routineErrorMessageList_26106.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 590)).objectCompare (temp_8.readProperty_mErrorMessageList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 590)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalRoutineInstructionAST temp_9 = object ;
      const GALGAS_lexicalRoutineInstructionAST temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this lexical routine call names ").add_operation (temp_10.readProperty_mErrorMessageList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 592)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 591)).add_operation (GALGAS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 592)).add_operation (var_routineErrorMessageList_26106.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 594)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 593)).add_operation (GALGAS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 594)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 591)) ;
    }
  }
  const GALGAS_lexicalRoutineInstructionAST temp_12 = object ;
  cEnumerator_lstringlist enumerator_27329 (temp_12.readProperty_mErrorMessageList (), kENUMERATION_UP) ;
  while (enumerator_27329.hasCurrentObject ()) {
    cMapElement_lexicalMessageMap * objectArray_27368 = (cMapElement_lexicalMessageMap *) ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, enumerator_27329.current_mValue (HERE), kSearchErrorMessage_lexicalMessageMap_searchKey  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 598)) ;
    if (NULL != objectArray_27368) {
      macroValidSharedObject (objectArray_27368, cMapElement_lexicalMessageMap) ;
      objectArray_27368->mProperty_mMessageIsUsed = GALGAS_bool (true) ;
    }
    enumerator_27329.gotoNextObject () ;
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
  ioArgument_ioTagMap.method_searchKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 616)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = object ;
  GALGAS_lexicalSentValueList joker_28177 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_1.readProperty_mTerminalName (), joker_28177, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 617)) ;
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
  GALGAS_lexicalSentValueList joker_28535 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mTerminalName (), joker_28535, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 625)) ;
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
  ioArgument_ioTagMap.setter_insertKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 633)) ;
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
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 642)) ;
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
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 650)) ;
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
  GALGAS_lexicalExplicitTokenListMap joker_30375 ; // Joker input parameter
  GALGAS_tokenSortedlist joker_30378 ; // Joker input parameter
  GALGAS_bool joker_30381 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_30375, joker_30378, joker_30381, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 664)) ;
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
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 671)) ;
  GALGAS_lexicalTagMap var_tagMap_30730 = GALGAS_lexicalTagMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 672)) ;
  const GALGAS_lexicalExplicitRuleAST temp_1 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_30755 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_30755.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_30755.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_30730, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 674)) ;
    enumerator_30755.gotoNextObject () ;
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

