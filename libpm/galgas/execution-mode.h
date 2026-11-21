//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2006, ..., 2015 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "BoolCommandLineOption.h"
#include "UIntCommandLineOption.h"
#include "StringCommandLineOption.h"

//--------------------------------------------------------------------------------------------------

void setExecutionMode (String & outErrorMessage) ;

typedef enum {
 kExecutionModeNormal,
 kExecutionModeLexicalAnalysisOnly,
 kExecutionModeSyntaxAnalysisOnly,
 kExecutionModeIndexing,
 kExecutionModeLatex
} EnumExecutionMode ;

EnumExecutionMode executionMode (void) ;

bool executionModeIsLexicalAnalysisOnly (void) ;

bool executionModeIsSyntaxAnalysisOnly (void) ;

bool executionModeIsIndexing (void) ;

bool executionModeIsLatex (void) ;

String latexModeStyleSuffixString (void) ;

String indexingModeOutputFilePath (void) ;

//--------------------------------------------------------------------------------------------------
