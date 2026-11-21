//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2006, ..., 2026 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "execution-mode.h"
#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------
//
//   EXECUTION MODE
//
//--------------------------------------------------------------------------------------------------

static EnumExecutionMode gExecutionMode = kExecutionModeNormal ;
static String gModeLatexSuffixString ;
static String gModeIndexingOutputFilePath ;

//--------------------------------------------------------------------------------------------------

void setExecutionMode (String & outErrorMessage) {
  const String mode = gBuildOption_mode.mValue ;
  GenericUniqueArray <String> modeComponents ;
  mode.componentsSeparatedByString (":", modeComponents) ;
  if (mode == "") {
    gExecutionMode = kExecutionModeNormal ;
  }else if (mode == "lexical-only") {
    gExecutionMode = kExecutionModeLexicalAnalysisOnly ;
  }else if (mode == "syntax-only") {
    gExecutionMode = kExecutionModeSyntaxAnalysisOnly ;
  }else if ((modeComponents.count () == 2) && (modeComponents (0 COMMA_HERE) == "indexing")) {
    gExecutionMode = kExecutionModeIndexing ;
    gModeIndexingOutputFilePath = modeComponents (1 COMMA_HERE) ;
  }else if ((modeComponents.count () == 2) && (modeComponents (0 COMMA_HERE) == "latex")) {
    gExecutionMode = kExecutionModeLatex ;
    gModeLatexSuffixString = modeComponents (1 COMMA_HERE) ;
    bool ok = true ;
    for (int32_t i=0 ; (i<gModeLatexSuffixString.length ()) && ok ; i++) {
      const uint32_t c = gModeLatexSuffixString.charAtIndex (i COMMA_HERE).u32 () ;
      ok = ((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')) ;
    }
    if (! ok) {
      outErrorMessage.appendCString ("** Fatal Error: invalid '--mode=latex:suffix' parameter; suffix should contain only letters\n") ;
    }
  }else if ((modeComponents.count () == 1) && (mode == "latex")) {
    gExecutionMode = kExecutionModeLatex ;
    gModeLatexSuffixString = "" ;
  }else{
    outErrorMessage.appendCString ("** Fatal Error: invalid '--mode=") ;
    outErrorMessage.appendString (mode) ;
    outErrorMessage.appendCString ("' parameter; it should be:\n"
      "  --mode=                     default mode: perform compilation;\n"
      "  --mode=lexical-only         perform only lexical analysis;\n"
      "  --mode=syntax-only          perform only syntax analysis;\n"
      "  --mode=latex:suffix         perform latex formatting.\n") ;
  }
}

//--------------------------------------------------------------------------------------------------

EnumExecutionMode executionMode (void) {
  return gExecutionMode ;
}

//--------------------------------------------------------------------------------------------------

bool executionModeIsLexicalAnalysisOnly (void) {
  return gExecutionMode == kExecutionModeLexicalAnalysisOnly ;
}

//--------------------------------------------------------------------------------------------------

bool executionModeIsSyntaxAnalysisOnly (void) {
  return gExecutionMode == kExecutionModeSyntaxAnalysisOnly ;
}

//--------------------------------------------------------------------------------------------------

bool executionModeIsIndexing (void) {
  return gExecutionMode == kExecutionModeIndexing ;
}

//--------------------------------------------------------------------------------------------------

bool executionModeIsLatex (void) {
  return gExecutionMode == kExecutionModeLatex ;
}

//--------------------------------------------------------------------------------------------------

String latexModeStyleSuffixString (void) {
  return gModeLatexSuffixString ;
}

//--------------------------------------------------------------------------------------------------

String indexingModeOutputFilePath (void) {
  return gModeIndexingOutputFilePath ;
}

//--------------------------------------------------------------------------------------------------

static void epilogueAction (void) {
  gModeLatexSuffixString.removeAll () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue prologueEpilogue (nullptr, epilogueAction) ;

//--------------------------------------------------------------------------------------------------

