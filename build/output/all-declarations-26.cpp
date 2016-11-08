#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-26.h"


#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      print_tool_help_message                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileExtensions [] = {
  "galgas",
  "galgasTemplate",
  "galgasProject",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileHelpMessages [] = {
  "a GALGAS source file",
  "a GALGAS Template source file",
  "a GALGAS project source file",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

const char * projectVersionString (void) {
  return "3.2.14" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Routine 'before'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_before (C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GALGAS_string var_creationProjectName_2618 = GALGAS_string (gOption_galgas_5F_cli_5F_options_create_5F_project.getter_value ()) ;
    {
    routine_projectCreation (var_creationProjectName_2618, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 44)) ;
    }
  }
  {
    const enumGalgasBool test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_printPredefinedLexicalActions (inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 51)) ;
      }
    }
  }
  {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, GALGAS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_updateLIBPMatPath (GALGAS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.getter_value ()), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 59)) ;
      }
    }
  }
  {
    const enumGalgasBool test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_check_5F_gmp.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_checkGMP (inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 69)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Routine 'after'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_0'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_parentDirectory_4355 = constinArgument_inSourceFile.mProperty_string.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 84)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 84)) ;
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 85)) ;
  temp_0.addAssign_operation (GALGAS_string ("galgasProject")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 85)) ;
  GALGAS_stringlist var_candidateProjectFiles_4477 = var_parentDirectory_4355.getter_regularFilesWithExtensions (GALGAS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgas_prgm.galgas", 85)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_candidateProjectFiles_4477.getter_length (SOURCE_FILE ("galgas_prgm.galgas", 86)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_inSourceFile.getter_location (SOURCE_FILE ("galgas_prgm.galgas", 87)), GALGAS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 87)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_candidateProjectFiles_4477.getter_length (SOURCE_FILE ("galgas_prgm.galgas", 88)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_s_4733 = GALGAS_string ("several project files in source file parent directory:") ;
      cEnumerator_stringlist enumerator_4828 (var_candidateProjectFiles_4477, kENUMERATION_UP) ;
      while (enumerator_4828.hasCurrentObject ()) {
        var_s_4733.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_4828.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 91)) ;
        enumerator_4828.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.getter_location (SOURCE_FILE ("galgas_prgm.galgas", 93)), var_s_4733, fixItArray4  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 93)) ;
    }else if (kBoolFalse == test_3) {
      GALGAS_string var_projectFilePath_4926 = var_parentDirectory_4355.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 95)).add_operation (var_candidateProjectFiles_4477.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 95)) ;
      {
      routine_parseAndAnalyzeProject (GALGAS_lstring::constructor_new (var_projectFilePath_4926, constinArgument_inSourceFile.mProperty_location  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 96)), constinArgument_inSourceFile.mProperty_string, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 96)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_1'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__31_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST joker_5879 ; // Joker input parameter
  cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, joker_5879  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 110)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_2'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__32_ (const GALGAS_lstring constinArgument_inProjectSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_parseAndAnalyzeProject (constinArgument_inProjectSourceFile, GALGAS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 123)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      M A I N    F O R    L I B P M                                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonLexique = NULL ;
    macroMyNew (commonLexique, C_Compiler (NULL COMMA_HERE)) ;
    try{
      routine_before (commonLexique COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonLexique) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonLexique->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "galgas") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonLexique COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_33_Grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_33_Grammar::performOnlySyntaxAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_33_Grammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_33_Grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgasTemplate") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__31_ (sourceFilePath, commonLexique COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_templateGrammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_templateGrammar::performOnlySyntaxAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_templateGrammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_templateGrammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgasProject") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__32_ (sourceFilePath, commonLexique COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_33_ProjectGrammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_33_ProjectGrammar::performOnlySyntaxAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_33_ProjectGrammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_33_ProjectGrammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonLexique COMMA_HERE) ;
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std:: exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonLexique) ;
  }
  return returnCode ;
}

