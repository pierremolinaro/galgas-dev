//-----------------------------------------------------------------------------*
//                                                                             *
//  Main for libpm project                                                     *
//                                                                             *
//-----------------------------------------------------------------------------*

#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "streams/C_ConsoleOut.h"
#include "bdd/C_BDD.h"
#include "files/C_TextFileWrite.h"

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
  const C_BDD a (0, true) ;
  const C_BDD b (1, true) ;
  const C_BDD c (2, true) ;
  const C_BDD d (3, true) ;
  const C_BDD r = a.equalTo (c) | b.equalTo (d) ;
  r.print (co) ;
  const C_String dotFileA = r.graphvizRepresentation () ;
  C_TextFileWrite f ("test1a.dot") ;
  f << dotFileA ;
//---
  const C_BDD s = a.equalTo (b) & c.equalTo (d) ;
  s.print (co) ;
  const C_String dotFileAA = s.graphvizRepresentation () ;
  C_TextFileWrite ff ("test1b.dot") ;
  ff << dotFileAA ;
//---
  const C_BDD B = C_BDD::varCompareVar (0, 4, C_BDD::kEqual, 4) ;
  B.print (co) ;
  const C_String dotFileB = B.graphvizRepresentation () ;
  C_TextFileWrite g ("test1c.dot") ;
  g << dotFileB ;
//---
  const C_BDD C = C_BDD::varCompareVar (0, 4, C_BDD::kLowerOrEqual, 4) ;
  C.print (co) ;
  const C_String dotFileC = C.graphvizRepresentation () ;
  C_TextFileWrite h ("test1d.dot") ;
  h << dotFileC ;
//---
  return 0 ;
}

//-----------------------------------------------------------------------------*
