#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "grammar-testsuite-5Fgrammar.h"
#include "proc-bug+map.h"
#include "proc-testsuite-5Fbigint-5Ftype.h"
#include "proc-testsuite-5Fextension-5Fmethods.h"
#include "proc-testsuite-5Fextension-5Fmutating-5Fproc.h"
#include "proc-testsuite-5Fextension-5Freaders.h"
#include "proc-testsuite-5Fextension-5Fsetters.h"
#include "proc-testsuite-5Fextern-5Ftype.h"
#include "proc-testsuite-5Ffor-5Finstruction.h"
#include "proc-testsuite-5Fforeach-5Finstruction.h"
#include "proc-testsuite-5Ffunctions.h"
#include "proc-testsuite-5Fhand-5Fcoded.h"
#include "proc-testsuite-5Fintrospection.h"
#include "proc-testsuite-5Flist.h"
#include "proc-testsuite-5Fmap.h"
#include "proc-testsuite-5Frange.h"
#include "proc-testsuite-5Freference-5Fclass.h"
#include "proc-testsuite-5Fsortedlist.h"
#include "proc-testsuite-5Fstrings.h"
#include "proc-testsuite-5Fstruct.h"
#include "proc-testsuite-5Ftype-5Fcategories.h"

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
  "testsuite",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .testsuite extension",
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

static void routine_before (Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    {
    routine_testsuite_5F_hand_5F_coded (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 5)) ;
    }
    {
    routine_testsuite_5F_foreach_5F_instruction (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 6)) ;
    }
    {
    routine_testsuite_5F_for_5F_instruction (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 7)) ;
    }
    {
    routine_testsuite_5F_list (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 8)) ;
    }
    {
    routine_testsuite_5F_sortedlist (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 9)) ;
    }
    {
    routine_testsuite_5F_struct (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 10)) ;
    }
    {
    routine_testsuite_5F_map (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 11)) ;
    }
    {
    routine_testsuite_5F_functions (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 12)) ;
    }
    {
    routine_testsuite_5F_introspection (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 13)) ;
    }
    {
    routine_testsuite_5F_extension_5F_readers (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 14)) ;
    }
    {
    routine_testsuite_5F_extension_5F_methods (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 15)) ;
    }
    {
    routine_testsuite_5F_extension_5F_setters (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 16)) ;
    }
    {
    routine_testsuite_5F_extension_5F_mutating_5F_proc (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 17)) ;
    }
    {
    routine_testsuite_5F_type_5F_categories (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 18)) ;
    }
    {
    routine_testsuite_5F_strings (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 19)) ;
    }
    {
    routine_testsuite_5F_range (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 20)) ;
    }
    {
    routine_testsuite_5F_extern_5F_type (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 22)) ;
    }
    {
    routine_testsuite_5F_bigint_5F_type (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 23)) ;
    }
    {
    routine_testsuite_5F_reference_5F_class (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 24)) ;
    }
    {
    routine_bugMap (inCompiler  COMMA_SOURCE_FILE ("testsuite_program.ggs", 25)) ;
    }
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
  cGrammar_testsuite_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile  COMMA_SOURCE_FILE ("testsuite_program.ggs", 32)) ;
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
        if (fileExtension == "testsuite") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            commonCompiler->onTheFlyRunTimeError ("Cannot handle \"--mode=lexical-only\" option: no grammar in program RULE" COMMA_HERE) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            commonCompiler->onTheFlyRunTimeError ("Cannot handle \"--mode=syntax-only\" option: no grammar in program RULE" COMMA_HERE) ;
            break ;
          case kExecutionModeIndexing :
            commonCompiler->onTheFlyRunTimeError ("Cannot handle \"--mode=indexing\" option: no grammar in program RULE" COMMA_HERE) ;
            break ;
          case kExecutionModeLatex :
            commonCompiler->onTheFlyRunTimeError ("Cannot handle \"--mode=latex\" option: no grammar in program RULE" COMMA_HERE) ;
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

