//--------------------------------------------------------------------------------------------------
//
//  'galgas-input-output'
//
//  This file is part of libpm library
//
//  Copyright (C) 1996, ..., 2025 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#include "galgas-input-output.h"
#include "ConsoleOut.h"
#include "builtin-command-line-options.h"
#include "analyzeCommandLineOptions.h"
#include "C_galgas_CLI_Options.h"
#include "C_galgas_class_inspector.h"
#include "F_verbose_output.h"
#include "IssueDescriptor.h"
#include "Compiler.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark C_unicode_lexique_table_entry
#endif

//--------------------------------------------------------------------------------------------------

C_unicode_lexique_table_entry::C_unicode_lexique_table_entry (const std::initializer_list <utf32> & inEntryString,
                                                              const int16_t inTokenCode) :
mEntryString (inEntryString),
mTokenCode (inTokenCode) {
}

//--------------------------------------------------------------------------------------------------

C_unicode_lexique_table_entry::C_unicode_lexique_table_entry (const C_unicode_lexique_table_entry & inOperand) :
mEntryString (inOperand.mEntryString),
mTokenCode (inOperand.mTokenCode) {
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Exceptions
#endif

//--------------------------------------------------------------------------------------------------
//  Exception raised when maximum error count is reached
//--------------------------------------------------------------------------------------------------

const char * max_error_count_reached_exception::what (void) const throw () {
  return "The maximum error count is reached" ;
} ;

//--------------------------------------------------------------------------------------------------
//  Exception raised when maximum warning count is reached
//--------------------------------------------------------------------------------------------------

static const char * kMaxWarning = "The maximum warning count is reached" ;

//--------------------------------------------------------------------------------------------------

const char * max_warning_count_reached_exception::what (void) const throw () {
  return kMaxWarning ;
} ;

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Class galgas-input-output
#endif

//--------------------------------------------------------------------------------------------------

int32_t maxErrorCount (void) {
  int32_t result = (int32_t) gOption_galgas_5F_builtin_5F_options_max_5F_errors.mValue ;
  return (result == 0) ? INT32_MAX : result ;
}

//--------------------------------------------------------------------------------------------------

static int32_t mErrorTotalCount ;

int32_t totalErrorCount (void) {
  return mErrorTotalCount ;
}

//--------------------------------------------------------------------------------------------------

int32_t maxWarningCount (void) {
  int32_t result = (int32_t) gOption_galgas_5F_builtin_5F_options_max_5F_warnings.mValue ;
  return (result == 0) ? INT32_MAX : result ;
}

//--------------------------------------------------------------------------------------------------

static int32_t mTotalWarningCount ;

int32_t totalWarningCount (void) {
  return mTotalWarningCount ;
}

//--------------------------------------------------------------------------------------------------
//    Construct error or warning location message
//--------------------------------------------------------------------------------------------------

static String errorOrWarningLocationString (const IssueWithFixIt & inIssue,
                                            const SourceTextInString & inSourceText) {
  String result ;
  if (inSourceText.isValid ()) {
    const String textLine = inSourceText.getLineForLocation (inIssue.mStartLocation) ;
    result.appendString (inSourceText.sourceFilePath ()) ;
    result.appendCString (":") ;
    result.appendSigned (inIssue.mStartLocation.lineNumber ()) ;
    result.appendCString (":") ;
    result.appendSigned (inIssue.mStartLocation.columnNumber ()) ;
    result.appendCString (":") ;
    result.appendSigned (inIssue.mEndLocation.columnNumber ()) ;
    result.appendCString (":\n") ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static String constructErrorOrWarningLocationMessage (const String & inMessage,
                                                      const IssueWithFixIt & inIssue,
                                                      const SourceTextInString & inSourceText) {
  String result ;
  if (!inSourceText.isValid ()) {
    result.appendString (inMessage) ;
  }else{
  //--- Construct message
    result.appendString (errorOrWarningLocationString (inIssue, inSourceText)) ;
    result.appendString (inMessage) ;
    if (verboseOutput ()) {
      const String textLine = inSourceText.getLineForLocation (inIssue.mStartLocation) ;
      result.appendString (textLine) ;
      result.appendCString ("\n") ;
    //--- Underline issue
      for (int32_t i=1 ; i<inIssue.mStartLocation.columnNumber () ; i++) {
        result.appendCString ("-") ;
      }
      for (int32_t i=inIssue.mStartLocation.columnNumber () ; i <= inIssue.mEndLocation.columnNumber () ; i++) {
        result.appendCString ("^") ;
      }
      result.appendCString ("\n") ;
    //--- Add fix it suggestions
      const String ZeroWidthSpace = stringWithUnicodeCharacter (TO_UNICODE (0x200B)) ;
      for (int32_t i=0 ; i<inIssue.mFixItArray.count () ; i++) {
        const FixItDescription d = inIssue.mFixItArray (i COMMA_HERE) ;
        switch (d.kind()) {
        case EnumFixItKind::fixItRemove :
          result.appendCString ("Fix-it, remove\n") ;
          break ;
        case EnumFixItKind::fixItReplace :
          result.appendCString ("Fix-it, replace with ") ;
          result.appendString (ZeroWidthSpace) ;
          result.appendString (d.actionString()) ;
          result.appendCString ("\n") ;
          break ;
        case EnumFixItKind::fixItInsertBefore :
          result.appendCString ("Fix-it, insert before: ") ;
          result.appendString (ZeroWidthSpace) ;
          result.appendString (d.actionString()) ;
          result.appendCString ("\n") ;
          break ;
        case EnumFixItKind::fixItInsertAfter :
          result.appendCString ("Fix-it, insert after: ") ;
          result.appendString (ZeroWidthSpace) ;
          result.appendString (d.actionString()) ;
          result.appendCString ("\n") ;
          break ;
        }
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//    This method is called by lexique for signaling lexical warning
//--------------------------------------------------------------------------------------------------

void signalLexicalWarning (Compiler * inCompiler,
                           const SourceTextInString & inSourceText,
                           const IssueWithFixIt & inIssue,
                           const String & inLexicalWarningMessage
                           COMMA_LOCATION_ARGS) {
//--- Increment warning count
  mTotalWarningCount += 1 ;
//--- Construct location warning message
  String warningMessage ;
//--- Add warning
  warningMessage.appendString (verboseOutput () ? "lexical " : "") ;
  warningMessage.appendCString ("warning #") ;
  warningMessage.appendSigned (mTotalWarningCount) ;
  warningMessage.appendCString (": ") ;
  warningMessage.appendString (inLexicalWarningMessage) ;
  warningMessage.appendCString ("\n") ;
//--- Print
  ggs_printWarning (inCompiler, inSourceText, inIssue, warningMessage COMMA_THERE) ;
//--- Warning max count reached ?
  if ((maxWarningCount () > 0) && (totalWarningCount () >= maxWarningCount ())) {
    throw max_warning_count_reached_exception () ;
  }
}

//--------------------------------------------------------------------------------------------------
//    This method is called by lexique for signaling lexical error
//--------------------------------------------------------------------------------------------------

void signalLexicalError (Compiler * inCompiler,
                         const SourceTextInString & inSourceText,
                         const IssueWithFixIt & inIssue,
                         const String & inLexicalErrorMessage
                         COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount += 1 ;
//--- Construct parsing error message
  String errorMessage ;
  errorMessage.appendString (verboseOutput () ? "lexical " : "") ;
  errorMessage.appendCString ("error #") ;
  errorMessage.appendSigned (mErrorTotalCount) ;
  errorMessage.appendCString (": ") ;
  errorMessage.appendString (inLexicalErrorMessage) ;
  errorMessage.appendCString ("\n") ;
//--- Print
  ggs_printError (inCompiler, inSourceText, inIssue, errorMessage COMMA_THERE) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//--------------------------------------------------------------------------------------------------
//    This method is called by lexique for signaling parsing error
//--------------------------------------------------------------------------------------------------

void signalParsingError (Compiler * inCompiler,
                         const SourceTextInString & inSourceText,
                         const LocationInSource & inPreviousTokenEndLocation,
                         const IssueWithFixIt & inIssue,
                         const String & inFoundTokenMessage,
                         const GenericUniqueArray <String> & inAcceptedTokenNames
                         COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount += 1 ;
//--- Construct location error message
  String errorMessage ;
//--- Construct parsing error message
  errorMessage.appendString (verboseOutput () ? "syntax " : "") ;
  errorMessage.appendCString ("error #") ;
  errorMessage.appendSigned (mErrorTotalCount) ;
  errorMessage.appendCString (": found ") ;
  errorMessage.appendString (inFoundTokenMessage) ;
  errorMessage.appendCString (", expected:\n") ;
  for (int32_t i=0 ; i<inAcceptedTokenNames.count () ; i++) {
    errorMessage.appendCString ("-  ") ;
   errorMessage.appendString (inAcceptedTokenNames (i COMMA_HERE)) ;
   errorMessage.appendCString ("\n") ;
  }
//--- Previous token location
  errorMessage.appendCString ("Previous token end location:") ;
  errorMessage.appendSigned (inPreviousTokenEndLocation.lineNumber ()) ;
  errorMessage.appendCString (":") ;
  errorMessage.appendSigned (inPreviousTokenEndLocation.columnNumber ()) ;
  errorMessage.appendCString ("\n") ;
//--- Print
  ggs_printError (inCompiler, inSourceText, inIssue, errorMessage COMMA_THERE) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//--------------------------------------------------------------------------------------------------
//            Method called for signaling an extract error
//--------------------------------------------------------------------------------------------------

void signalExtractError (Compiler * inCompiler,
                         const SourceTextInString & inSourceText,
                         const IssueWithFixIt & inIssue,
                         const GenericUniqueArray <String> & inExpectedClassesErrorStringsArray,
                         const String & inActualFoundClassErrorString
                         COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
//--- Construct location error message
  String errorMessage ;
//--- Print extract error
  errorMessage.appendString (verboseOutput () ? "semantic " : "") ;
  errorMessage.appendCString ("error: I have found:\n") ;
  if (! verboseOutput ()) {
    errorMessage.appendString (errorOrWarningLocationString (inIssue, inSourceText)) ;
    errorMessage.appendCString ("error: ") ;
  }
  errorMessage.appendCString ("  - ") ;
  errorMessage.appendString (inActualFoundClassErrorString) ;
  errorMessage.appendCString (";\n") ;
  if (! verboseOutput ()) {
    errorMessage.appendString (errorOrWarningLocationString (inIssue, inSourceText)) ;
    errorMessage.appendCString ("error: ") ;
  }
  errorMessage.appendCString ("I was expected:\n") ;
  if (! verboseOutput ()) {
    errorMessage.appendString (errorOrWarningLocationString (inIssue, inSourceText)) ;
    errorMessage.appendCString ("error: ") ;
  }
  errorMessage.appendCString ("  - ") ;
  errorMessage.appendString (inExpectedClassesErrorStringsArray (0 COMMA_HERE)) ;
  for (int32_t i=1 ; i<inExpectedClassesErrorStringsArray.count () ; i++) {
    errorMessage.appendCString (";\n") ;
    if (! verboseOutput ()) {
      errorMessage.appendString (errorOrWarningLocationString (inIssue, inSourceText)) ;
      errorMessage.appendCString ("error: ") ;
    }
    errorMessage.appendCString ("  - ") ;
    errorMessage.appendString (inExpectedClassesErrorStringsArray (i COMMA_HERE)) ;
  }
  errorMessage.appendCString (".\n") ;
//--- Print
  ggs_printError (inCompiler, inSourceText, inIssue, errorMessage COMMA_THERE) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//--------------------------------------------------------------------------------------------------

void signalSemanticWarning (Compiler * inCompiler,
                            const SourceTextInString & inSourceText,
                            const IssueWithFixIt & inIssue,
                            const String & inWarningMessage
                            COMMA_LOCATION_ARGS) {
//--- Increment warning count
  mTotalWarningCount += 1 ;
//--- Construct location error message
  String warningMessage ;
//--- Add warning
  warningMessage.appendString (verboseOutput () ? "semantic " : "") ;
  warningMessage.appendCString ("warning #") ;
  warningMessage.appendSigned (mTotalWarningCount) ;
  warningMessage.appendCString (": ") ;
  warningMessage.appendString (inWarningMessage) ;
  warningMessage.appendCString ("\n") ;
//--- Print
  ggs_printWarning (inCompiler, inSourceText, inIssue, warningMessage COMMA_THERE) ;
//--- Warning max count reached ?
  if ((maxWarningCount () > 0) && (totalWarningCount () >= maxWarningCount ())) {
    throw max_warning_count_reached_exception () ;
  }
}

//--------------------------------------------------------------------------------------------------

void signalSemanticError (Compiler * inCompiler,
                          const SourceTextInString & inSourceText,
                          const IssueWithFixIt & inIssue,
                          const String & inErrorMessage
                          COMMA_LOCATION_ARGS) {
  const LocationInSource inEndErrorLocation = inIssue.mStartLocation ;
//--- Increment error count
  mErrorTotalCount += 1 ;
//--- Construct location error message
  String errorMessage ;
//--- Print error
  errorMessage.appendCString ("semantic error #") ;
  errorMessage.appendSigned (mErrorTotalCount) ;
  errorMessage.appendCString (": ") ;
  String s = inErrorMessage.replacingStringByString (String ("\n"), String ("\\n")) ;
  errorMessage.appendString (inErrorMessage) ;
  errorMessage.appendCString ("\n") ;
//--- Print
  ggs_printError (inCompiler, inSourceText, inIssue, errorMessage COMMA_THERE) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//--------------------------------------------------------------------------------------------------

void signalRunTimeError (Compiler * inCompiler,
                         const String & inRunTimeErrorMessage
                         COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount += 1 ;
//--- Construct location error message
  String errorMessage = "Run Time Error #" ;
  errorMessage.appendSigned (mErrorTotalCount) ;
  errorMessage.appendCString (": ") ;
  errorMessage.appendString (inRunTimeErrorMessage) ;
  errorMessage.appendCString ("\n") ;
//--- Print
  ggs_printError (inCompiler, SourceTextInString (), IssueWithFixIt (), errorMessage COMMA_THERE) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//--------------------------------------------------------------------------------------------------

void signalRunTimeWarning (Compiler * inCompiler,
                           const String & inWarningMessage
                           COMMA_LOCATION_ARGS) {
//--- Increment warning count
  mTotalWarningCount += 1 ;
//--- Construct location error message
  String warningMessage = "Run Time Warning #" ;
  warningMessage.appendSigned (mTotalWarningCount) ;
  warningMessage.appendCString (": ") ;
  warningMessage.appendString (inWarningMessage) ;
  warningMessage.appendCString ("\n") ;
//--- Print
  ggs_printWarning (inCompiler, SourceTextInString (), IssueWithFixIt (), warningMessage COMMA_THERE) ;
//--- Warning max count reached ?
  if ((maxWarningCount () > 0) && (totalWarningCount () >= maxWarningCount ())) {
    throw max_warning_count_reached_exception () ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Actual Message Print
#endif

//--------------------------------------------------------------------------------------------------

static const utf32 COCOA_WARNING_ID = TO_UNICODE (3) ;
static const utf32 COCOA_ERROR_ID   = TO_UNICODE (4) ;

//--------------------------------------------------------------------------------------------------
//    Method called for printing an error
//--------------------------------------------------------------------------------------------------

void ggs_printError (Compiler * inCompiler,
                     const SourceTextInString & inSourceText,
                     const IssueWithFixIt & inIssue,
                     const String & inMessage
                     COMMA_LOCATION_ARGS) {
//--- Append to issue array
  const IssueDescriptor issue (
    true,
    inSourceText.sourceFilePath (),
    inIssue.mStartLocation.lineNumber (),
    inIssue.mStartLocation.columnNumber (),
    inIssue.mEndLocation.columnNumber (),
    inMessage
  ) ;
  inCompiler->appendIssue (issue) ;
//---
  const String errorMessage = constructErrorOrWarningLocationMessage (inMessage, inIssue, inSourceText) ;
//--- Append error string
  if (! executionModeIsIndexing ()) {
    switch (issueOutputKind ()) {
    case IssueOutputKind::swiftApp :
      gCout.appendString ("json:") ;
      gCout.appendString (issue.jsonDescriptionString (inMessage, inIssue)) ;
      gCout.appendNewLine () ;
      gCout.flush () ;
      break ;
    case IssueOutputKind::cocoa :
      gCout.setConsoleForeColor (kRedForeColor) ;
      gCout.setConsoleTextAttribute (kBoldTextAttribute) ;
      gCout.appendChar (COCOA_ERROR_ID) ;
      gCout.appendString (errorMessage) ;
      gCout.setConsoleTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ;
      gCout.flush () ;
      break ;
    case IssueOutputKind::regular :
      gCout.setConsoleForeColor (kRedForeColor) ;
      gCout.setConsoleTextAttribute (kBoldTextAttribute) ;
      gCout.appendString (errorMessage) ;
      gCout.setConsoleTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ;
      gCout.flush () ;
      break ;
    }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (verboseOutput ()) {
      gCout.appendCString ("[Error raised from file '") ;
      gCout.appendString (String (IN_SOURCE_FILE).lastPathComponent ()) ;
      gCout.appendCString ("' at line ") ;
      gCout.appendSigned (IN_SOURCE_LINE) ;
      gCout.appendCString ("]\n") ;
    }
  #endif
  }
}

//--------------------------------------------------------------------------------------------------

void ggs_fatalError (const String & inErrorMessage,
                     const char * inSourceFile,
                     const int inSourceLine) {
//--- Increment error count
  mErrorTotalCount += 1 ;
//--- Error message
  String errorMessage = inErrorMessage ;
  errorMessage.appendCString (" in file '") ;
  errorMessage.appendString (inSourceFile) ;
  errorMessage.appendCString ("', line ") ;
  errorMessage.appendSigned (inSourceLine) ;
  errorMessage.appendCString ("\n") ;
//----
  String message = constructErrorOrWarningLocationMessage (errorMessage, IssueWithFixIt (), SourceTextInString ()) ;
//--- Append source string
  if (! executionModeIsIndexing ()) {
    switch (issueOutputKind ()) {
    case IssueOutputKind::swiftApp :
      gCout.appendString ("red:") ;
      gCout.appendString (message) ;
      gCout.appendNewLine () ;
      gCout.flush () ;
      break ;
    case IssueOutputKind::cocoa :
      gCout.setConsoleForeColor (kRedForeColor) ;
      gCout.setConsoleTextAttribute (kBoldTextAttribute) ;
      gCout.appendChar (COCOA_ERROR_ID) ;
      gCout.appendString (message) ;
      gCout.setConsoleTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ;
      gCout.flush () ;
      break ;
    case IssueOutputKind::regular :
      gCout.setConsoleForeColor (kRedForeColor) ;
      gCout.setConsoleTextAttribute (kBoldTextAttribute) ;
      gCout.appendString (message) ;
      gCout.setConsoleTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ; ;
      gCout.flush () ;
      break ;
    }
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (verboseOutput ()) {
      gCout.appendCString ("[Error raised from file '") ;
      gCout.appendString (String (inSourceFile).lastPathComponent ()) ;
      gCout.appendCString ("' at line ") ;
      gCout.appendSigned (inSourceLine) ;
      gCout.appendCString ("]\n") ;
    }
  #endif
  exit (1) ;
}

//--------------------------------------------------------------------------------------------------
//    Method called for printing a warning
//--------------------------------------------------------------------------------------------------

void ggs_printWarning (Compiler * inCompiler,
                       const SourceTextInString & inSourceText,
                       const IssueWithFixIt & inIssue,
                       const String & inMessage
                       COMMA_LOCATION_ARGS) {
//--- Append to issue array
  const IssueDescriptor issue (
    false,
    inSourceText.sourceFilePath (),
    inIssue.mStartLocation.lineNumber (),
    inIssue.mStartLocation.columnNumber (),
    inIssue.mEndLocation.columnNumber (),
    inMessage
  ) ;
  inCompiler->appendIssue (issue) ;
//---
  const String warningMessage = constructErrorOrWarningLocationMessage (inMessage, inIssue, inSourceText) ;
  if (! executionModeIsIndexing ()) {
    switch (issueOutputKind ()) {
    case IssueOutputKind::swiftApp :
      gCout.appendString ("json:") ;
      gCout.appendString (issue.jsonDescriptionString (inMessage, inIssue)) ;
      gCout.appendNewLine () ;
      gCout.flush () ;
      break ;
    case IssueOutputKind::cocoa :
      gCout.setConsoleForeColor (kYellowForeColor) ;
      gCout.setConsoleTextAttribute (kBoldTextAttribute) ;
      gCout.appendChar (COCOA_WARNING_ID) ;
      gCout.appendString (warningMessage) ;
      gCout.setConsoleTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ; ;
      gCout.flush () ;
      break ;
    case IssueOutputKind::regular :
      gCout.setConsoleForeColor (kYellowForeColor) ;
      gCout.setConsoleTextAttribute (kBoldTextAttribute) ;
      gCout.appendString (warningMessage) ;
      gCout.setConsoleTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ;
      gCout.flush () ;
      break ;
    }
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (verboseOutput ()) {
      gCout.appendCString ("[Warning raised from file '") ;
      gCout.appendString (String (IN_SOURCE_FILE).lastPathComponent ()) ;
      gCout.appendCString ("' at line ") ;
      gCout.appendSigned (IN_SOURCE_LINE) ;
      gCout.appendCString ("]\n") ;
      gCout.flush () ;
    }
  #endif
}

//--------------------------------------------------------------------------------------------------
//    Method called for printing a success message
//--------------------------------------------------------------------------------------------------

void ggs_printFileOperationSuccess (const String & inMessage) {
  if (! executionModeIsIndexing ()) {
    switch (issueOutputKind ()) {
    case IssueOutputKind::swiftApp :
      gCout.appendString ("green:") ;
      gCout.appendString (inMessage) ;
      if (inMessage.lastChar (HERE) != TO_UNICODE ('\n')) {
        gCout.appendNewLine () ;
      }
      gCout.flush () ;
      break ;
    case IssueOutputKind::cocoa :
      gCout.setConsoleForeColor (kGreenForeColor) ;
      gCout.setConsoleTextAttribute (kBoldTextAttribute) ;
      gCout.appendString (inMessage) ;
      gCout.setConsoleTextAttribute (kAllAttributesOff) ;
      gCout.flush () ;
      break ;
    case IssueOutputKind::regular :
      gCout.setConsoleForeColor (kGreenForeColor) ;
      gCout.setConsoleTextAttribute (kBoldTextAttribute) ;
      gCout.appendString (inMessage) ;
      gCout.setConsoleTextAttribute (kAllAttributesOff) ;
      gCout.flush () ;
      break ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void ggs_printFileDeletionSuccess (const String & inMessage) {
  if (! executionModeIsIndexing ()) {
    switch (issueOutputKind ()) {
    case IssueOutputKind::swiftApp :
      gCout.appendString ("magenta:") ;
      gCout.appendString (inMessage) ;
      if (inMessage.lastChar (HERE) != TO_UNICODE ('\n')) {
        gCout.appendNewLine () ;
      }
      gCout.flush () ;
      break ;
    case IssueOutputKind::cocoa :
      gCout.setConsoleForeColor (kMagentaForeColor) ;
      gCout.setConsoleTextAttribute (kBoldTextAttribute) ;
      gCout.appendString (inMessage) ;
      gCout.setConsoleTextAttribute (kAllAttributesOff) ;
      gCout.flush () ;
      break ;
    case IssueOutputKind::regular :
      gCout.setConsoleForeColor (kGreenForeColor) ;
      gCout.setConsoleTextAttribute (kBoldTextAttribute) ;
      gCout.appendString (inMessage) ;
      gCout.setConsoleTextAttribute (kAllAttributesOff) ;
      gCout.flush () ;
      break ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//    Method called for printing a file creation success
//--------------------------------------------------------------------------------------------------

void ggs_printFileCreationSuccess (const String & inMessage) {
  if (! executionModeIsIndexing ()) {
    switch (issueOutputKind ()) {
    case IssueOutputKind::swiftApp :
      gCout.appendString ("blue:") ;
      gCout.appendString (inMessage) ;
      if (inMessage.lastChar (HERE) != TO_UNICODE ('\n')) {
        gCout.appendNewLine () ;
      }
      gCout.flush () ;
      break ;
    case IssueOutputKind::cocoa :
      gCout.setConsoleForeColor (kBlueForeColor) ;
      gCout.setConsoleTextAttribute (kBoldTextAttribute) ;
      gCout.appendString (inMessage) ;
      gCout.setConsoleTextAttribute (kAllAttributesOff) ;
      gCout.flush () ;
      break ;
    case IssueOutputKind::regular :
      gCout.setConsoleForeColor (kBlueForeColor) ;
      gCout.setConsoleTextAttribute (kBoldTextAttribute) ;
      gCout.appendString (inMessage) ;
      gCout.setConsoleTextAttribute (kAllAttributesOff) ;
      gCout.flush () ;
      break ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//    Methods called for printing a message
//--------------------------------------------------------------------------------------------------

void ggs_printMessage (const String & inMessage
                       COMMA_LOCATION_ARGS) {
  if (inMessage.length () > 0) {
    if (!executionModeIsIndexing ()) {
      String message = inMessage ;
      if (message.lastChar (HERE) != TO_UNICODE ('\n')) {
        message.appendString ("\n") ;
      }
      gCout.appendString (message) ;
      gCout.flush () ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      if (verboseOutput ()) {
        gCout.appendCString ("[Displayed from file '") ;
        gCout.appendString (String (IN_SOURCE_FILE).lastPathComponent ()) ;
        gCout.appendCString ("' at line ") ;
        gCout.appendSigned (IN_SOURCE_LINE) ;
        gCout.appendCString ("]\n") ;
        gCout.flush () ;
      }
    #endif
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cToken
#endif

//--------------------------------------------------------------------------------------------------

cToken::cToken (void) :
mNextToken (nullptr),
mStartLocation (),
mEndLocation (),
mTemplateStringBeforeToken (),
mSeparatorStringBeforeToken (),
mTokenCode (0) {
}

//--------------------------------------------------------------------------------------------------

cToken::~cToken (void) {
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ParsingContext
#endif

//--------------------------------------------------------------------------------------------------

ParsingContext::ParsingContext (void) :
mParsingArrayIndex (0),
mLocation (),
mCurrentTokenPtr (nullptr),
mCurrentChar (TO_UNICODE ('\0')),
mPreviousChar (TO_UNICODE ('\0')),
mTemplateString () {
}

//--------------------------------------------------------------------------------------------------

ParsingContext::ParsingContext (const ParsingContext & inSource) :
mParsingArrayIndex (inSource.mParsingArrayIndex),
mLocation (inSource.mLocation),
mCurrentTokenPtr (inSource.mCurrentTokenPtr),
mCurrentChar (inSource.mCurrentChar),
mPreviousChar (inSource.mPreviousChar),
mTemplateString (inSource.mTemplateString) {
}

//--------------------------------------------------------------------------------------------------

ParsingContext & ParsingContext::operator = (const ParsingContext & inSource) {
  mParsingArrayIndex = inSource.mParsingArrayIndex ;
  mLocation = inSource.mLocation ;
  mCurrentTokenPtr = inSource.mCurrentTokenPtr ;
  mCurrentChar = inSource.mCurrentChar ;
  mPreviousChar = inSource.mPreviousChar ;
  mTemplateString = inSource.mTemplateString ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------
