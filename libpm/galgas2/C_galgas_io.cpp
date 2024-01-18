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

#include "C_galgas_io.h"
#include "C_ConsoleOut.h"
#include "C_ErrorOut.h"
#include "C_builtin_CLI_Options.h"
#include "F_Analyze_CLI_Options.h"
#include "C_galgas_CLI_Options.h"
#include "C_galgas_class_inspector.h"
#include "F_verbose_output.h"
#include "cIssueDescriptor.h"
#include "Compiler.h"

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
    result.appendString (inSourceText.sourceFilePath ()) ;
    result.appendString (":") ;
    result.appendSigned (inIssue.mStartLocation.lineNumber ()) ;
    result.appendString (":") ;
    result.appendSigned (inIssue.mStartLocation.columnNumber ()) ;
    result.appendString (":") ;
    result.appendSigned (inIssue.mEndLocation.columnNumber ()) ;
    result.appendString (":\n") ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static String constructErrorOrWarningLocationMessage (const String & inMessage,
                                                        const C_IssueWithFixIt & inIssue,
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
      result.appendString ("\n") ;
    //--- Underline issue
      for (int32_t i=1 ; i<inIssue.mStartLocation.columnNumber () ; i++) {
        result.appendString ("-") ;
      }
      for (int32_t i=inIssue.mStartLocation.columnNumber () ; i <= inIssue.mEndLocation.columnNumber () ; i++) {
        result.appendString ("^") ;
      }
      result.appendString ("\n") ;
    //--- Add fix it suggestions
      const String ZeroWidthSpace = stringWithUnicodeCharacter (TO_UNICODE (0x200B)) ;
      for (int32_t i=0 ; i<inIssue.mFixItArray.count () ; i++) {
        const C_FixItDescription d = inIssue.mFixItArray (i COMMA_HERE) ;
        switch (d.kind()) {
        case kFixItRemove :
          result.appendString ("Fix-it, remove\n") ;
          break ;
        case kFixItReplace :
          result.appendString ("Fix-it, replace with ") ;
          result.appendString (ZeroWidthSpace) ;
          result.appendString (d.actionString()) ;
          result.appendString ("\n") ;
          break ;
        case kFixItInsertBefore :
          result.appendString ("Fix-it, insert before: ") ;
          result.appendString (ZeroWidthSpace) ;
          result.appendString (d.actionString()) ;
          result.appendString ("\n") ;
          break ;
        case kFixItInsertAfter :
          result.appendString ("Fix-it, insert after: ") ;
          result.appendString (ZeroWidthSpace) ;
          result.appendString (d.actionString()) ;
          result.appendString ("\n") ;
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
  warningMessage.appendString (verboseOutput () ? "lexical " : "") ;
  warningMessage.appendString ("warning #") ;
  warningMessage.appendSigned (mTotalWarningCount) ;
  warningMessage.appendString (": ") ;
  warningMessage.appendString (inLexicalWarningMessage) ;
  warningMessage.appendString ("\n") ;
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
  errorMessage.appendString (verboseOutput () ? "lexical " : "") ;
  errorMessage.appendString ("error #") ;
  errorMessage.appendSigned (mErrorTotalCount) ;
  errorMessage.appendString (": ") ;
  errorMessage.appendString (inLexicalErrorMessage) ;
  errorMessage.appendString ("\n") ;
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
  errorMessage.appendString (verboseOutput () ? "syntax " : "") ;
  errorMessage.appendString ("error #") ;
  errorMessage.appendSigned (mErrorTotalCount) ;
  errorMessage.appendString (": found ") ;
  errorMessage.appendString (inFoundTokenMessage) ;
  errorMessage.appendString (", expected:\n") ;
  for (int32_t i=0 ; i<inAcceptedTokenNames.count () ; i++) {
    errorMessage.appendString ("-  ") ;
   errorMessage.appendString (inAcceptedTokenNames (i COMMA_HERE)) ;
   errorMessage.appendString ("\n") ;
  }
//--- Previous token location
  errorMessage.appendString ("Previous token end location:") ;
  errorMessage.appendSigned (inPreviousTokenEndLocation.lineNumber ()) ;
  errorMessage.appendString (":") ;
  errorMessage.appendSigned (inPreviousTokenEndLocation.columnNumber ()) ;
  errorMessage.appendString ("\n") ;
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
  errorMessage.appendString (verboseOutput () ? "semantic " : "") ;
  errorMessage.appendString ("error: I have found:\n") ;
  if (! verboseOutput ()) {
    errorMessage.appendString (errorOrWarningLocationString (inIssue, inSourceText)) ;
    errorMessage.appendString ("error: ") ;
  }
  errorMessage.appendString ("  - ") ;
  errorMessage.appendString (inActualFoundClassErrorString) ;
  errorMessage.appendString (";\n") ;
  if (! verboseOutput ()) {
    errorMessage.appendString (errorOrWarningLocationString (inIssue, inSourceText)) ;
    errorMessage.appendString ("error: ") ;
  }
  errorMessage.appendString ("I was expected:\n") ;
  if (! verboseOutput ()) {
    errorMessage.appendString (errorOrWarningLocationString (inIssue, inSourceText)) ;
    errorMessage.appendString ("error: ") ;
  }
  errorMessage.appendString ("  - ") ;
  errorMessage.appendString (inExpectedClassesErrorStringsArray (0 COMMA_HERE)) ;
  for (int32_t i=1 ; i<inExpectedClassesErrorStringsArray.count () ; i++) {
    errorMessage.appendString (";\n") ;
    if (! verboseOutput ()) {
      errorMessage.appendString (errorOrWarningLocationString (inIssue, inSourceText)) ;
      errorMessage.appendString ("error: ") ;
    }
    errorMessage.appendString ("  - ") ;
    errorMessage.appendString (inExpectedClassesErrorStringsArray (i COMMA_HERE)) ;
  }
  errorMessage.appendString (".\n") ;
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
  errorMessage.appendString (verboseOutput () ? "semantic " : "") ;
  errorMessage.appendString ("error: I have found:\n") ;
  if (! verboseOutput ()) {
    errorMessage.appendString (errorOrWarningLocationString (inIssue, inSourceText)) ;
    errorMessage.appendString ("error: ") ;
  }
  errorMessage.appendString ("  - ") ;
  errorMessage.appendString (inActualFoundClassErrorString) ;
  errorMessage.appendString (";\n") ;
  if (! verboseOutput ()) {
    errorMessage.appendString (errorOrWarningLocationString (inIssue, inSourceText)) ;
    errorMessage.appendString ("error: ") ;
  }
  errorMessage.appendString ("I was expected:\n") ;
  if (! verboseOutput ()) {
    errorMessage.appendString (errorOrWarningLocationString (inIssue, inSourceText)) ;
    errorMessage.appendString ("error: ") ;
  }
  if (expectedClassMessageArray.count () > 0) {
    errorMessage.appendString ("  - ") ;
    errorMessage.appendString (expectedClassMessageArray (0 COMMA_HERE)) ;
    for (int32_t i=1 ; i<expectedClassMessageArray.count () ; i++) {
      errorMessage.appendString (";\n") ;
      if (! verboseOutput ()) {
        errorMessage.appendString (errorOrWarningLocationString (inIssue, inSourceText)) ;
        errorMessage.appendString ("error: ") ;
      }
      errorMessage.appendString ("  - ") ;
      errorMessage.appendString (expectedClassMessageArray (i COMMA_HERE)) ;
    }
  }
  errorMessage.appendString (".\n") ;
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
  warningMessage.appendString (verboseOutput () ? "semantic " : "") ;
  warningMessage.appendString ("warning #") ;
  warningMessage.appendSigned (mTotalWarningCount) ;
  warningMessage.appendString (": ") ;
  warningMessage.appendString (inWarningMessage) ;
  warningMessage.appendString ("\n") ;
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
  errorMessage.appendString ("semantic error #") ;
  errorMessage.appendSigned (mErrorTotalCount) ;
  errorMessage.appendString (": ") ;
  errorMessage.appendString (inErrorMessage) ;
  errorMessage.appendString ("\n") ;
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
  String errorMessage = "Run Time Error #" ;
  errorMessage.appendSigned (mErrorTotalCount) ;
  errorMessage.appendString (": ") ;
  errorMessage.appendString (inRunTimeErrorMessage) ;
  errorMessage.appendString ("\n") ;
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
  String warningMessage = "Run Time Warning #" ;
  warningMessage.appendSigned (mTotalWarningCount) ;
  warningMessage.appendString (": ") ;
  warningMessage.appendString (inWarningMessage) ;
  warningMessage.appendString ("\n") ;
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
      errorMessage.appendString ("[Error raised from file '") ;
      errorMessage.appendString (String (IN_SOURCE_FILE).lastPathComponent ()) ;
      errorMessage.appendString ("' at line ") ;
      errorMessage.appendSigned (IN_SOURCE_LINE) ;
      errorMessage.appendString ("]\n") ;
    }
  #endif
//--- Append source string
  if (! executionModeIsIndexing ()) {
    if (cocoaOutput ()) {
      gCout.setForeColor (kRedForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout.appendUnicodeChar (COCOA_ERROR_ID COMMA_HERE) ;
      gCout.appendString (errorMessage) ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ; ;
      gCout.flush () ;
    }else{
      gCout.setForeColor (kRedForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout.appendString (errorMessage) ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ; ;
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
  String errorMessage = inErrorMessage ;
  errorMessage.appendString (" in file '") ;
  errorMessage.appendString (inSourceFile) ;
  errorMessage.appendString ("', line ") ;
  errorMessage.appendSigned (inSourceLine) ;
  errorMessage.appendString ("\n") ;
//----
  String message = constructErrorOrWarningLocationMessage (errorMessage, C_IssueWithFixIt (), SourceTextInString ()) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (verboseOutput ()) {
      message.appendString ("[Error raised from file '") ;
      message.appendString (String (inSourceFile).lastPathComponent ()) ;
      message.appendString ("' at line ") ;
      message.appendSigned (inSourceLine) ;
      message.appendString ("]\n") ;
    }
  #endif
//--- Append source string
  if (! executionModeIsIndexing ()) {
    if (cocoaOutput ()) {
      gCout.setForeColor (kRedForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout.appendUnicodeChar (COCOA_ERROR_ID COMMA_HERE) ;
      gCout.appendString (message) ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ; ;
      gCout.flush () ;
    }else{
      gCout.setForeColor (kRedForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout.appendString (message) ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ; ;
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
      warningMessage.appendString ("[Warning raised from file '") ;
      warningMessage.appendString (String (IN_SOURCE_FILE).lastPathComponent ()) ;
      warningMessage.appendString ("' at line ") ;
      warningMessage.appendSigned (IN_SOURCE_LINE) ;
      warningMessage.appendString ("]\n") ;
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
      gCout.appendUnicodeChar (COCOA_WARNING_ID COMMA_HERE) ;
      gCout.appendString (warningMessage) ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ; ;
      gCout.flush () ;
    }else{
      gCout.setForeColor (kYellowForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout.appendString (warningMessage) ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout.appendNewLine () ; ;
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
      gCout.appendString (inMessage) ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout.flush () ;
    }else{
      gCout.setForeColor (kGreenForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout.appendString (inMessage) ;
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
      gCout.appendString (inMessage) ;
      gCout.setTextAttribute (kAllAttributesOff) ;
      gCout.flush () ;
    }else{
      gCout.setForeColor (kBlueForeColor) ;
      gCout.setTextAttribute (kBoldTextAttribute) ;
      gCout.appendString (inMessage) ;
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
        message.appendString ("[Displayed from file '") ;
        message.appendString (String (IN_SOURCE_FILE).lastPathComponent ()) ;
        message.appendString ("' at line ") ;
        message.appendSigned (IN_SOURCE_LINE) ;
        message.appendString ("]\n") ;
      }
    #endif
    gCout.appendString (message) ;
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
