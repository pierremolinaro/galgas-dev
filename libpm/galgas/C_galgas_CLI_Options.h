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

extern BoolCommandLineOption gOption_galgas_5F_builtin_5F_options_outputConcreteSyntaxTree ;

//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_galgas_5F_builtin_5F_options_log_5F_file_5F_read ;

//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_galgas_5F_builtin_5F_options_do_5F_not_5F_generate_5F_any_5F_file ;

//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error ;

//--------------------------------------------------------------------------------------------------

extern UIntCommandLineOption gOption_galgas_5F_builtin_5F_options_max_5F_errors ;

//--------------------------------------------------------------------------------------------------

extern UIntCommandLineOption gOption_galgas_5F_builtin_5F_options_max_5F_warnings ;

//--------------------------------------------------------------------------------------------------

extern StringCommandLineOption gOption_galgas_5F_builtin_5F_options_mode ;

//--------------------------------------------------------------------------------------------------

extern StringCommandLineOption gOption_galgas_5F_builtin_5F_options_outputKeywordList ;

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
