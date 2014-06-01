//-----------------------------------------------------------------------------*
//                                                                             *
//  Main for libpm project                                                     *
//                                                                             *
//-----------------------------------------------------------------------------*

#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "streams/C_ConsoleOut.h"

//-----------------------------------------------------------------------------*

#define PROJECT_VERSION_STRING "0.0.1"

//-----------------------------------------------------------------------------*
//                                                                             *
//                      print_tool_help_message                                *
//                                                                             *
//-----------------------------------------------------------------------------*

static void print_tool_help_message (void) {
  co << "My Project\n" ;
}

//-----------------------------------------------------------------------------*

static const char * kSourceFileExtensions [] = {
  "xyzt",
  NULL
} ;    

//-----------------------------------------------------------------------------*

static const char * kSourceFileHelpMessages [] = {
  "an XYZT source file",
  NULL
} ;    

//-----------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static const char * kVersionString = "version " PROJECT_VERSION_STRING " [debug]" ;
#else
  static const char * kVersionString = "version " PROJECT_VERSION_STRING ;
#endif

//-----------------------------------------------------------------------------*
//                                                                             *
//                      M A I N    F O R    L I B P M                          *
//                                                                             *
//-----------------------------------------------------------------------------*

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         kVersionString,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  co << "Hello !\n" ;
//---
  return 0 ;
}

//-----------------------------------------------------------------------------*
