#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-declaration+a+s+t.h"
#include "grammar-class-5Fsample-5Flanguage-5Fgrammar.h"
#include "graph-inheritance+graph.h"
#include "list-declaration+list+a+s+t.h"
#include "method-declaration+a+s+t-build+graph.h"
#include "method-declaration+a+s+t-generate+code.h"

#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "LexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "classSampleLanguage",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "an '.class_sample_language' source file",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "1.0.0" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationListAST var_declarationListAST_250 ;
  var_declarationListAST_250.drop () ;
  cGrammar_class_5F_sample_5F_language_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_declarationListAST_250  COMMA_SOURCE_FILE ("class_sample_language_program.galgas", 11)) ;
  GGS_inheritanceGraph var_inheritanceGraph_321 = GGS_inheritanceGraph::init (inCompiler COMMA_HERE) ;
  UpEnumerator_declarationListAST enumerator_368 (var_declarationListAST_250) ;
  while (enumerator_368.hasCurrentObject ()) {
    callExtensionMethod_buildGraph ((cPtr_declarationAST *) enumerator_368.current_mDeclaration (HERE).ptr (), var_inheritanceGraph_321, inCompiler COMMA_SOURCE_FILE ("class_sample_language_program.galgas", 15)) ;
    enumerator_368.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_inheritanceGraph_321.getter_undefinedNodeCount (SOURCE_FILE ("class_sample_language_program.galgas", 18)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator_lstringlist enumerator_550 (var_inheritanceGraph_321.getter_undefinedNodeReferenceList (SOURCE_FILE ("class_sample_language_program.galgas", 19))) ;
      while (enumerator_550.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_550.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_550.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("class_sample_language_program.galgas", 20)).add_operation (GGS_string ("' class is not declared"), inCompiler COMMA_SOURCE_FILE ("class_sample_language_program.galgas", 20)), fixItArray1  COMMA_SOURCE_FILE ("class_sample_language_program.galgas", 20)) ;
        enumerator_550.gotoNextObject () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_declarationListAST var_sortedDeclarationListAST_784 ;
    GGS_lstringlist var_circularDefinitionClassNameList_851 ;
    GGS_lstringlist joker_815 ; // Joker input parameter
    GGS_declarationListAST joker_824 ; // Joker input parameter
    var_inheritanceGraph_321.method_topologicalSort (var_sortedDeclarationListAST_784, joker_815, joker_824, var_circularDefinitionClassNameList_851, inCompiler COMMA_SOURCE_FILE ("class_sample_language_program.galgas", 24)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_circularDefinitionClassNameList_851.getter_count (SOURCE_FILE ("class_sample_language_program.galgas", 30)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        UpEnumerator_lstringlist enumerator_956 (var_circularDefinitionClassNameList_851) ;
        while (enumerator_956.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_956.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_956.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("class_sample_language_program.galgas", 32)).add_operation (GGS_string ("' class is involved in a circular definition"), inCompiler COMMA_SOURCE_FILE ("class_sample_language_program.galgas", 32)), fixItArray3  COMMA_SOURCE_FILE ("class_sample_language_program.galgas", 32)) ;
          enumerator_956.gotoNextObject () ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      GGS_string var_codeToGenerate_1153 = GGS_string::makeEmptyString () ;
      UpEnumerator_declarationListAST enumerator_1184 (var_sortedDeclarationListAST_784) ;
      while (enumerator_1184.hasCurrentObject ()) {
        callExtensionMethod_generateCode ((cPtr_declarationAST *) enumerator_1184.current_mDeclaration (HERE).ptr (), var_codeToGenerate_1153, inCompiler COMMA_SOURCE_FILE ("class_sample_language_program.galgas", 38)) ;
        enumerator_1184.gotoNextObject () ;
      }
      GGS_string var_targetFile_1311 = constinArgument_inSourceFile.readProperty_string ().getter_deletingPathExtension (SOURCE_FILE ("class_sample_language_program.galgas", 40)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("class_sample_language_program.galgas", 40)) ;
      var_codeToGenerate_1153.method_writeToFile (var_targetFile_1311, inCompiler COMMA_SOURCE_FILE ("class_sample_language_program.galgas", 41)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  GenericUniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "classSampleLanguage") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_class_5F_sample_5F_language_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_class_5F_sample_5F_language_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_class_5F_sample_5F_language_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_class_5F_sample_5F_language_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
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
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".\n") ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

