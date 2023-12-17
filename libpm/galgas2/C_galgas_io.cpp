//--------------------------------------------------------------------------------------------------
//
//  'C_galgas_io'
//
//  This file is part of libpm library
//
//  Copyright (C) 1996, ..., 2017 Pierre Molinaro.
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

#include "galgas2/C_galgas_io.h"
#include "streams/C_ConsoleOut.h"
#include "streams/C_ErrorOut.h"
#include "command_line_interface/C_builtin_CLI_Options.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/C_galgas_class_inspector.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cIssueDescriptor.h"
#include "galgas2/Compiler.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark C_unicode_lexique_table_entry
#endif

//--------------------------------------------------------------------------------------------------

C_unicode_lexique_table_entry::C_unicode_lexique_table_entry (const utf32 * inEntryString,
                                                              const int16_t inEntryStringLength,
                                                              const int16_t inTokenCode) :
mEntryString (inEntryString),
mEntryStringLength (inEntryStringLength),
mTokenCode (inTokenCode) {
}

//--------------------------------------------------------------------------------------------------

C_unicode_lexique_table_entry::C_unicode_lexique_table_entry (const C_unicode_lexique_table_entry & inOperand) :
mEntryString (inOperand.mEntryString),
mEntryStringLength (inOperand.mEntryStringLength),
mTokenCode (inOperand.mTokenCode) {
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Exceptions
#endif

//--------------------------------------------------------------------------------------------------
//
//  Exception raised when maximum error count is reached
//
//--------------------------------------------------------------------------------------------------

const char * max_error_count_reached_exception::what (void) const throw () {
  return "The maximum error count is reached" ;
} ;

//--------------------------------------------------------------------------------------------------
//
//  Exception raised when maximum warning count is reached
//
//--------------------------------------------------------------------------------------------------

static const char * kMaxWarning = "The maximum warning count is reached" ;

//--------------------------------------------------------------------------------------------------

const char * max_warning_count_reached_exception::what (void) const throw () {
  return kMaxWarning ;
} ;

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Class C_galgas_io
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
//
//    Construct error or warning location message
//
//--------------------------------------------------------------------------------------------------

static String errorOrWarningLocationString (const C_IssueWithFixIt & inIssue,
                                              const SourceTextInString & inSourceText) {
  String result ;
  if (inSourceText.isValid ()) {
    const String textLine = inSourceText.getLineForLocation (inIssue.mStartLocation) ;
    result += inSourceText.sourceFilePath () ;
    result += ":" ;
    result.appendSigned (inIssue.mStartLocation.lineNumber ()) ;
    result += ":" ;
    result.appendSigned (inIssue.mStartLocation.columnNumber ()) ;
    result += ":" ;
    result.appendSigned (inIssue.mEndLocation.columnNumber ()) ;
    result += ":\n" ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static String constructErrorOrWarningLocationMessage (const String & inMessage,
                                                        const C_IssueWithFixIt & inIssue,
                                                        const SourceTextInString & inSourceText) {
  String result ;
  if (!inSourceText.isValid ()) {
    result += inMessage ;
  }else{
  //--- Construct message
    result += errorOrWarningLocationString (inIssue, inSourceText) ;
    result += inMessage ;
    if (verboseOutput ()) {
      const String textLine = inSourceText.getLineForLocation (inIssue.mStartLocation) ;
      result += textLine ;
      result += "\n" ;
    //--- Underline issue
      for (int32_t i=1 ; i<inIssue.mStartLocation.columnNumber () ; i++) {
        result += "-" ;
      }
      for (int32_t i=inIssue.mStartLocation.columnNumber () ; i <= inIssue.mEndLocation.columnNumber () ; i++) {
        result += "^" ;
      }
      result += "\n" ;
    //--- Add fix it suggestions
      const String ZeroWidthSpace = stringWithUnicodeCharacter (TO_UNICODE (0x200B)) ;
      for (int32_t i=0 ; i<inIssue.mFixItArray.count () ; i++) {
        const C_FixItDescription d = inIssue.mFixItArray (i COMMA_HERE) ;
        switch (d.kind()) {
        case kFixItRemove :
          result += "Fix-it, remove\n" ;
          break ;
        case kFixItReplace :
          result += "Fix-it, replace with " ;
          result += ZeroWidthSpace ;
          result += d.actionString() ;
          result += "\n" ;
          break ;
        case kFixItInsertBefore :
          result += "Fix-it, insert before: " ;
          result += ZeroWidthSpace ;
          result += d.actionString() ;
          result += "\n" ;
          break ;
        case kFixItInsertAfter :
          result += "Fix-it, insert after: " ;
          result += ZeroWidthSpace ;
          result += d.actionString() ;
          result += "\n" ;
          break ;
        }
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//    This method is called by lexique for signaling lexical warning
//
//--------------------------------------------------------------------------------------------------

void signalLexicalWarning (Compiler * inCompiler,
                           const SourceTextInString & inSourceText,
                           const C_IssueWithFixIt & inIssue,
                           const String & inLexicalWarningMessage
                           COMMA_LOCATION_ARGS) {
//--- Increment warning count
  mTotalWarningCount ++ ;
//--- Construct location warning message
  String warningMessage ;
//--- Add warning
  warningMessage += (verboseOutput () ? "lexical " : "") ;
  warningMessage += "warning #" ;
  warningMessage.appendSigned (mTotalWarningCount) ;
  warningMessage += ": " ;
  warningMessage += inLexicalWarningMessage ;
  warningMessage += "\n" ;
//--- Print
  ggs_printWarning (inCompiler, inSourceText, inIssue, warningMessage COMMA_THERE) ;
//--- Warning max count reached ?
  if ((maxWarningCount () > 0) && (totalWarningCount () >= maxWarningCount ())) {
    throw max_warning_count_reached_exception () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//    This method is called by lexique for signaling lexical error
//
//--------------------------------------------------------------------------------------------------

void signalLexicalError (Compiler * inCompiler,
                         const SourceTextInString & inSourceText,
                         const C_IssueWithFixIt & inIssue,
                         const String & inLexicalErrorMessage
                         COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
//--- Construct parsing error message
  String errorMessage ;
  errorMessage += (verboseOutput () ? "lexical " : "") ;
  errorMessage += "error #" ;
  errorMessage.appendSigned (mErrorTotalCount) ;
  errorMessage += ": " ;
  errorMessage += inLexicalErrorMessage ;
  errorMessage += "\n" ;
//--- Print
  ggs_printError (inCompiler, inSourceText, inIssue, errorMessage COMMA_THERE) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//    This method is called by lexique for signaling parsing error
//
//--------------------------------------------------------------------------------------------------

void signalParsingError (Compiler * inCompiler,
                         const SourceTextInString & inSourceText,
                         const LocationInSource & inPreviousTokenEndLocation,
                         const C_IssueWithFixIt & inIssue,
                         const String & inFoundTokenMessage,
                         const TC_UniqueArray <String> & inAcceptedTokenNames
                         COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
//--- Construct location error message
  String errorMessage ;
//--- Construct parsing error message
  errorMessage += (verboseOutput () ? "syntax " : "") ;
  errorMessage += "error #" ;
  errorMessage.appendSigned (mErrorTotalCount) ;
  errorMessage += ": found " ;
  errorMessage += inFoundTokenMessage ;
  errorMessage += ", expected:\n" ;
  for (int32_t i=0 ; i<inAcceptedTokenNames.count () ; i++) {
    errorMessage += "-  " ;
   errorMessage += inAcceptedTokenNames (i COMMA_HERE) ;
   errorMessage += "\n" ;
  }
//--- Previous token location
  errorMessage += "Previous token end location:" ;
  errorMessage.appendSigned (inPreviousTokenEndLocation.lineNumber ()) ;
  errorMessage += ":" ;
  errorMessage.appendSigned (inPreviousTokenEndLocation.columnNumber ()) ;
  errorMessage += "\n" ;
//--- Print
  ggs_printError (inCompiler, inSourceText, inIssue, errorMessage COMMA_THERE) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//            Method called for signaling an extract error
//
//--------------------------------------------------------------------------------------------------

void signalExtractError (Compiler * inCompiler,
                         const SourceTextInString & inSourceText,
                         const C_IssueWithFixIt & inIssue,
                         const TC_UniqueArray <String> & inExpectedClassesErrorStringsArray,
                         const String & inActualFoundClassErrorString
                         COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
//--- Construct location error message
  String errorMessage ;
//--- Print extract error
  errorMessage += (verboseOutput () ? "semantic " : "") ;
  errorMessage += "error: I have found:\n" ;
  if (! verboseOutput ()) {
    errorMessage += errorOrWarningLocationString (inIssue, inSourceText) ;
    errorMessage += "error: " ;
  }
  errorMessage += "  - " ;
  errorMessage += inActualFoundClassErrorString ;
  errorMessage += ";\n" ;
  if (! verboseOutput ()) {
    errorMessage += errorOrWarningLocationString (inIssue, inSourceText) ;
    errorMessage += "error: " ;
  }
  errorMessage += "I was expected:\n" ;
  if (! verboseOutput ()) {
    errorMessage += errorOrWarningLocationString (inIssue, inSourceText) ;
    errorMessage += "error: " ;
  }
  errorMessage += "  - " ;
  errorMessage += inExpectedClassesErrorStringsArray (0 COMMA_HERE) ;
  for (int32_t i=1 ; i<inExpectedClassesErrorStringsArray.count () ; i++) {
    errorMessage += ";\n" ;
    if (! verboseOutput ()) {
      errorMessage += errorOrWarningLocationString (inIssue, inSourceText) ;
      errorMessage += "error: " ;
    }
    errorMessage += "  - " ;
    errorMessage += inExpectedClassesErrorStringsArray (i COMMA_HERE) ;
  }
  errorMessage += ".\n" ;
//--- Print
  ggs_printError (inCompiler, inSourceText, inIssue, errorMessage COMMA_THERE) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//            Method called for signaling a cast error
//
//--------------------------------------------------------------------------------------------------

void signalCastError (Compiler * inCompiler,
                      const SourceTextInString & inSourceText,
                      const C_IssueWithFixIt & inIssue,
                      const std::type_info * inBaseClass,
                      const bool inUseKindOfClass,
                      const String & inActualFoundClassErrorString
                      COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
//--- Construct expected class message array
  TC_UniqueArray <String> expectedClassMessageArray ;
  const C_galgas_class_inspector * p = C_galgas_class_inspector::root () ;
  bool found = false ;
  while ((p != nullptr) && ! found) {
    if (p->mClassID == inBaseClass) {
      found = true ;
      expectedClassMessageArray.appendObject (p->mClassMessage) ;
    }
    p = p->mNextClass ;
  }
  if (inUseKindOfClass) {
    TC_UniqueArray <const std::type_info *> classIDarray ;
    classIDarray.appendObject (inBaseClass) ;
    bool loop = true ;
    while (loop) {
      loop = false ;
      p = C_galgas_class_inspector::root () ;
      while (p != nullptr) {
        if (classIDarray.containsObjectEqualTo (p->mSuperClassID)
          && ! classIDarray.containsObjectEqualTo (p->mClassID)) {
          loop = true ;
          classIDarray.appendObject (p->mClassID) ;
          expectedClassMessageArray.appendObject (p->mClassMessage) ;
        }
        p = p->mNextClass ;
      }
    }
  }
//--- Print extract error
  String errorMessage ;
  expectedClassMessageArray.sortArrayUsingCompareMethod () ;
  errorMessage += (verboseOutput () ? "semantic " : "") ;
  errorMessage += "error: I have found:\n" ;
  if (! verboseOutput ()) {
    errorMessage += errorOrWarningLocationString (inIssue, inSourceText) ;
    errorMessage += "error: " ;
  }
  errorMessage += "  - " ;
  errorMessage += inActualFoundClassErrorString ;
  errorMessage += ";\n" ;
  if (! verboseOutput ()) {
    errorMessage += errorOrWarningLocationString (inIssue, inSourceText) ;
    errorMessage += "error: " ;
  }
  errorMessage += "I was expected:\n" ;
  if (! verboseOutput ()) {
    errorMessage += errorOrWarningLocationString (inIssue, inSourceText) ;
    errorMessage += "error: " ;
  }
  if (expectedClassMessageArray.count () > 0) {
    errorMessage += "  - " ;
    errorMessage += expectedClassMessageArray (0 COMMA_HERE) ;
    for (int32_t i=1 ; i<expectedClassMessageArray.count () ; i++) {
      errorMessage += ";\n" ;
      if (! verboseOutput ()) {
        errorMessage += errorOrWarningLocationString (inIssue, inSourceText) ;
        errorMessage += "error: " ;
      }
      errorMessage += "  - " ;
      errorMessage += expectedClassMessageArray (i COMMA_HERE) ;
    }
  }
  errorMessage += ".\n" ;
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
                            const C_IssueWithFixIt & inIssue,
                            const String & inWarningMessage
                            COMMA_LOCATION_ARGS) {
//--- Increment warning count
  mTotalWarningCount ++ ;
//--- Construct location error message
  String warningMessage ;
//--- Add warning
  warningMessage += (verboseOutput () ? "semantic " : "") ;
  warningMessage += "warning #" ;
  warningMessage.appendSigned (mTotalWarningCount) ;
  warningMessage += ": " ;
  warningMessage += inWarningMessage ;
  warningMessage += "\n" ;
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
                          const C_IssueWithFixIt & inIssue,
                          const String & inErrorMessage
                          COMMA_LOCATION_ARGS) {
  const LocationInSource inEndErrorLocation = inIssue.mStartLocation ;
//--- Increment error count
  mErrorTotalCount ++ ;
//--- Construct location error message
  String errorMessage ;
//--- Print error
  errorMessage += "semantic error #" ;
  errorMessage.appendSigned (mErrorTotalCount) ;
  errorMessage += ": " ;
  errorMessage += inErrorMessage ;
  errorMessage += "\n" ;
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
  mErrorTotalCount ++ ;
//--- Construct location error message
  String errorMessage ;
  errorMessage += "Run Time Error #" ;
  errorMessage.appendSigned (mErrorTotalCount) ;
  errorMessage += ": " ;
  errorMessage += inRunTimeErrorMessage ;
  errorMessage += "\n" ;
//--- Print
  ggs_printError (inCompiler, SourceTextInString (), C_IssueWithFixIt (), errorMessage COMMA_THERE) ;
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
  mTotalWarningCount ++ ;
//--- Construct location error message
  String warningMessage ;
  warningMessage += "Run Time Warning #" ;
  warningMessage.appendSigned (mTotalWarningCount) ;
  warningMessage += ": " ;
  warningMessage += inWarningMessage ;
  warningMessage += "\n" ;
//--- Print
  ggs_printWarning (inCompiler, SourceTextInString (), C_IssueWithFixIt (), warningMessage COMMA_THERE) ;
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
//
//    Method called for printing an error
//
//--------------------------------------------------------------------------------------------------

void ggs_printError (Compiler * inCompiler,
                     const SourceTextInString & inSourceText,
                     const C_IssueWithFixIt & inIssue,
                     const String & inMessage
                     COMMA_LOCATION_ARGS) {
//--- Append to issue array
  const cIssueDescriptor issue (
    true,
    inSourceText.sourceFilePath (),
    inIssue.mStartLocation.lineNumber (),
    inIssue.mStartLocation.columnNumber (),
    inIssue.mEndLocation.columnNumber (),
    inMessage
  ) ;
  inCompiler->appendIssue (issue) ;
//---
  String errorMessage = constructErrorOrWarningLocationMessage (inMessage, inIssue, inSourceText) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (verboseOutput ()) {
      errorMessage += "[Error raised from file '" ;
      errorMessage += String (IN_SOURCE_FILE).lastPathComponent () ;
      errorMessage += "' at line " ;
      errorMessage.appendSigned (IN_SOURCE_LINE) ;
      errorMessage += "]\n" ;
    }
  #endif
//--- Append source string
  if (! executionModeIsIndexing ()) {
    if (cocoaOutput ()) {
      gCout.setForeColor (kRedForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout.appendUnicodeCharacter (COCOA_ERROR_ID COMMA_HERE) ;
      gCout += errorMessage ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout += "\n" ;
      gCout.flush () ;
    }else{
      gCout.setForeColor (kRedForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout += errorMessage ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout += "\n" ;
      gCout.flush () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void fatalError (const String & inErrorMessage,
                 const char * inSourceFile,
                 const int inSourceLine) {
//--- Increment error count
  mErrorTotalCount ++ ;
//--- Error message
  String errorMessage ;
  errorMessage += inErrorMessage ;
  errorMessage += " in file '" ;
  errorMessage += inSourceFile ;
  errorMessage += "', line " ;
  errorMessage.appendSigned (inSourceLine) ;
  errorMessage += "\n" ;
//----
  String message = constructErrorOrWarningLocationMessage (errorMessage, C_IssueWithFixIt (), SourceTextInString ()) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (verboseOutput ()) {
      message += "[Error raised from file '" ;
      message += String (inSourceFile).lastPathComponent () ;
      message += "' at line " ;
      message.appendSigned (inSourceLine) ;
      message += "]\n" ;
    }
  #endif
//--- Append source string
  if (! executionModeIsIndexing ()) {
    if (cocoaOutput ()) {
      gCout.setForeColor (kRedForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout.appendUnicodeCharacter (COCOA_ERROR_ID COMMA_HERE) ;
      gCout += message ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout += "\n" ;
      gCout.flush () ;
    }else{
      gCout.setForeColor (kRedForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout += message ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout += "\n" ;
      gCout.flush () ;
    }
  }
  exit (1) ;
}

//--------------------------------------------------------------------------------------------------
//
//    Method called for printing a warning
//
//--------------------------------------------------------------------------------------------------

void ggs_printWarning (Compiler * inCompiler,
                       const SourceTextInString & inSourceText,
                       const C_IssueWithFixIt & inIssue,
                       const String & inMessage
                       COMMA_LOCATION_ARGS) {
//--- Append to issue array
  const cIssueDescriptor issue (
    false,
    inSourceText.sourceFilePath (),
    inIssue.mStartLocation.lineNumber (),
    inIssue.mStartLocation.columnNumber (),
    inIssue.mEndLocation.columnNumber (),
    inMessage
  ) ;
  inCompiler->appendIssue (issue) ;
//---
  String warningMessage = constructErrorOrWarningLocationMessage (inMessage, inIssue, inSourceText) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (verboseOutput ()) {
      warningMessage += "[Warning raised from file '" ;
      warningMessage += String (IN_SOURCE_FILE).lastPathComponent () ;
      warningMessage += "' at line " ;
      warningMessage.appendSigned (IN_SOURCE_LINE) ;
      warningMessage += "]\n" ;
    }
  #endif
//--- Append source string
  if (inSourceText.isValid ()) {
    inSourceText.appendSourceContents (warningMessage) ;
  }
  if (! executionModeIsIndexing ()) {
    if (cocoaOutput ()) {
      gCout.setForeColor (kYellowForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout.appendUnicodeCharacter (COCOA_WARNING_ID COMMA_HERE) ;
      gCout += warningMessage ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout += "\n" ;
      gCout.flush () ;
    }else{
      gCout.setForeColor (kYellowForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout += warningMessage ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout += "\n" ;
      gCout.flush () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//    Method called for printing a success message
//
//--------------------------------------------------------------------------------------------------

void ggs_printFileOperationSuccess (const String & inMessage) {
  if (! executionModeIsIndexing ()) {
    if (cocoaOutput ()) {
      gCout.setForeColor (kGreenForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout += inMessage;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout.flush () ;
    }else{
      gCout.setForeColor (kGreenForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout += inMessage ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout.flush () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//    Method called for printing a file creation success
//
//--------------------------------------------------------------------------------------------------

void ggs_printFileCreationSuccess (const String & inMessage) {
  if (! executionModeIsIndexing ()) {
    if (cocoaOutput ()) {
      gCout.setForeColor (kBlueForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout += inMessage;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout.flush () ;
    }else{
      gCout.setForeColor (kBlueForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout += inMessage ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout.flush () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//    Methods called for printing a message
//
//--------------------------------------------------------------------------------------------------

void ggs_printMessage (const String & inMessage
                       COMMA_LOCATION_ARGS) {
  if (! executionModeIsIndexing ()) {
    String message = inMessage ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      if (verboseOutput ()) {
        message += "[Displayed from file '" ;
        message += String (IN_SOURCE_FILE).lastPathComponent () ;
        message += "' at line " ;
        message.appendSigned (IN_SOURCE_LINE) ;
        message += "]\n" ;
      }
    #endif
    gCout += message ;
    gCout.flush () ;
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
// mIsOptional (false),
mTokenCode (0) {
}

//--------------------------------------------------------------------------------------------------

cToken::~cToken (void) {
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark C_parsingContext
#endif

//--------------------------------------------------------------------------------------------------

C_parsingContext::C_parsingContext (void) :
mParsingArrayIndex (0),
mLocation (),
mCurrentTokenPtr (nullptr),
mCurrentChar (TO_UNICODE ('\0')),
mPreviousChar (TO_UNICODE ('\0')),
mTemplateString () {
}

//--------------------------------------------------------------------------------------------------

C_parsingContext::C_parsingContext (const C_parsingContext & inSource) :
mParsingArrayIndex (inSource.mParsingArrayIndex),
mLocation (inSource.mLocation),
mCurrentTokenPtr (inSource.mCurrentTokenPtr),
mCurrentChar (inSource.mCurrentChar),
mPreviousChar (inSource.mPreviousChar),
mTemplateString (inSource.mTemplateString) {
}

//--------------------------------------------------------------------------------------------------

C_parsingContext & C_parsingContext::operator = (const C_parsingContext & inSource) {
  mParsingArrayIndex = inSource.mParsingArrayIndex ;
  mLocation = inSource.mLocation ;
  mCurrentTokenPtr = inSource.mCurrentTokenPtr ;
  mCurrentChar = inSource.mCurrentChar ;
  mPreviousChar = inSource.mPreviousChar ;
  mTemplateString = inSource.mTemplateString ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------
