//---------------------------------------------------------------------------*
//                                                                           *
//  'C_galgas_io'                                                            *
//                                                                           *
//  This file is part of libpm library                                       *
//                                                                           *
//  Copyright (C) 1996, ..., 2011 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This library is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU Lesser General Public License as published    *
//  by the Free Software Foundation; either version 2 of the License, or     *
//  (at your option) any later version.                                      *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "galgas2/C_galgas_io.h"
#include "files/C_TextFileWrite.h"
#include "streams/C_ConsoleOut.h"
#include "streams/C_ErrorOut.h"
#include "collections/TC_LinkedList.h"
#include "command_line_interface/C_builtin_CLI_Options.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/C_galgas_class_inspector.h"

//---------------------------------------------------------------------------*

#include <string.h>
#include <limits.h>
#include <errno.h>
#include <stdlib.h>
#include <ctype.h>

//---------------------------------------------------------------------------*

C_unicode_lexique_table_entry::
C_unicode_lexique_table_entry (const utf32 * inEntryString,
                               const PMSInt16 inEntryStringLength,
                               const PMSInt16 inTokenCode) :
mEntryString (inEntryString),
mEntryStringLength (inEntryStringLength),
mTokenCode (inTokenCode) {
}

//---------------------------------------------------------------------------*

C_unicode_lexique_table_entry::
C_unicode_lexique_table_entry (const C_unicode_lexique_table_entry & inOperand) :
mEntryString (inOperand.mEntryString),
mEntryStringLength (inOperand.mEntryStringLength),
mTokenCode (inOperand.mTokenCode) {
}

//---------------------------------------------------------------------------*

C_UserCancelException:: C_UserCancelException (void) {
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Exceptions
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//  Exception raised when maximum error count is reached                     *
//                                                                           *
//---------------------------------------------------------------------------*

const char * max_error_count_reached_exception::what (void) const throw () {
  return "The maximum error count is reached" ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//  Exception raised when maximum warning count is reached                   *
//                                                                           *
//---------------------------------------------------------------------------*

const char * max_warning_count_reached_exception::what (void) const throw () {
  return "The maximum warning count is reached" ;
} ;

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Class C_galgas_io
#endif

//---------------------------------------------------------------------------*

static PMSInt32 maxErrors (void) {
  PMSInt32 result = (PMSInt32) gOption_galgas_5F_cli_5F_options_max_5F_errors.mValue ;
  return (result == 0) ? 100 : result ;
}

//---------------------------------------------------------------------------*

static PMSInt32 maxWarnings (void) {
  PMSInt32 result = (PMSInt32) gOption_galgas_5F_cli_5F_options_max_5F_warnings.mValue ;
  return (result == 0) ? 100 : result ;
}

//---------------------------------------------------------------------------*

C_galgas_io::
C_galgas_io (LOCATION_ARGS) :
C_SharedObject (THERE),
mMaxErrorCount (maxErrors ()),
mMaxWarningCount (maxWarnings ()),
mDirectoriesToExclude (),
mErrorTotalCount (0),
mCurrentFileErrorCount (0),
mCurrentWarningCount (0),
mTotalWarningCount (0),
mCheckedLines (0),
mGeneratedLines (0),
mPreservedLines (0),
mGeneratedFileCount (0) {
}

//---------------------------------------------------------------------------*
//                                                                           *
//    Construct error or warning location message                            *
//                                                                           *
//---------------------------------------------------------------------------*

C_String C_galgas_io::
errorOrWarningLocationString (const C_LocationInSource & inErrorLocation,
                              const C_SourceTextInString * inSourceTextPtr) const {
  C_String result ;
  if (inSourceTextPtr != NULL) {
    macroValidSharedObject (inSourceTextPtr, const C_SourceTextInString) ;
    const C_String textLine = inSourceTextPtr->getLineForLocation (inErrorLocation) ;
    result << inSourceTextPtr->sourceFilePath ()
           << ":" << cStringWithSigned (inErrorLocation.mLineNumber)
           << ":" << cStringWithSigned (inErrorLocation.mColumnNumber) << ": " ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

void C_galgas_io::
constructErrorOrWarningLocationMessage (C_String & ioMessage, 
                                        const C_LocationInSource & inErrorLocation,
                                        const C_SourceTextInString * inSourceTextPtr) const {
  if (inSourceTextPtr != NULL) {
    macroValidSharedObject (inSourceTextPtr, const C_SourceTextInString) ;
    const C_String textLine = inSourceTextPtr->getLineForLocation (inErrorLocation) ;
  //--- Construct message
    ioMessage << errorOrWarningLocationString (inErrorLocation, inSourceTextPtr) ;
    if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
      ioMessage << "\n" << textLine << "\n" ;
    //--- Point out column error
      for (PMSInt32 i=1 ; i<inErrorLocation.mColumnNumber ; i++) {
        ioMessage << "-" ;
      }
      ioMessage << "^\n" ;
    }
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//    This method is called by lexique for signaling lexical warning         *
//                                                                           *
//---------------------------------------------------------------------------*

void C_galgas_io::
signalLexicalWarning (const C_SourceTextInString * inSourceTextPtr,
                      const C_LocationInSource & inWarningLocation,
                      const C_String & inLexicalWarningMessage
                      COMMA_LOCATION_ARGS) {
//--- Increment warning count
  mCurrentWarningCount ++ ;
  mTotalWarningCount ++ ;
//--- Construct location warning message
  C_String warningMessage ;
  constructErrorOrWarningLocationMessage (warningMessage, inWarningLocation, inSourceTextPtr) ;
//--- Add warning
  warningMessage << (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue ? "lexical " : "")
                 << "warning: " << inLexicalWarningMessage << "\n" ;
//--- Add source location information
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
      warningMessage << "[Raised from file '" << C_String (IN_SOURCE_FILE).lastPathComponent ()
                     << "' at line " << cStringWithSigned (IN_SOURCE_LINE) << "]\n" ;
    }
  #endif
//--- Append source string
  if (inSourceTextPtr != NULL) {
    macroValidSharedObject (inSourceTextPtr, const C_SourceTextInString) ;
    inSourceTextPtr->appendSourceContents (warningMessage) ;
  }
//--- Print
  ggs_printWarning (warningMessage) ;
//--- Warning max count reached ?
  if ((maxWarningCount () > 0) && (totalWarningCount () >= maxWarningCount ())) {
    throw max_warning_count_reached_exception () ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//    This method is called by lexique for signaling lexical error           *
//                                                                           *
//---------------------------------------------------------------------------*

void C_galgas_io::
signalLexicalError (const C_SourceTextInString * inSourceTextPtr,
                    const C_LocationInSource & inErrorLocation,
                    const C_String & inLexicalErrorMessage
                    COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
  mCurrentFileErrorCount ++ ;
//--- Construct location error message
  C_String errorMessage ;
  constructErrorOrWarningLocationMessage (errorMessage, inErrorLocation, inSourceTextPtr) ;
//--- Construct parsing error message
  errorMessage << (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue ? "lexical " : "")
               << "error: " << inLexicalErrorMessage << "\n" ;
//--- Add source location information
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
      errorMessage << "[Raised from file '" << C_String (IN_SOURCE_FILE).lastPathComponent ()
                   << "' at line " << cStringWithSigned (IN_SOURCE_LINE) << "]\n" ;
    }
  #endif
//--- Append source string
  if (inSourceTextPtr != NULL) {
    macroValidSharedObject (inSourceTextPtr, const C_SourceTextInString) ;
    inSourceTextPtr->appendSourceContents (errorMessage) ;
  }
//--- Print
  ggs_printError (errorMessage) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//    This method is called by lexique for signaling parsing error           *
//                                                                           *
//---------------------------------------------------------------------------*

void C_galgas_io::
signalParsingError (const C_SourceTextInString * inSourceTextPtr,
                    const C_LocationInSource & inErrorLocation,
                    const C_String & inFoundTokenMessage,
                    const TC_UniqueArray <C_String> & inAcceptedTokenNames
                    COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
  mCurrentFileErrorCount ++ ;
//--- Construct location error message
  C_String errorMessage ;
  constructErrorOrWarningLocationMessage (errorMessage, inErrorLocation, inSourceTextPtr) ;
//--- Construct parsing error message
  errorMessage << (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue ? "syntax " : "")
               << "error: found " << inFoundTokenMessage <<", accepted:\n" ;  
  for (PMSInt32 i=0 ; i<inAcceptedTokenNames.count () ; i++) {
    if (! gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
      errorMessage << errorOrWarningLocationString (inErrorLocation, inSourceTextPtr)
                   << "error: " ;
    }
    errorMessage << "-  " << inAcceptedTokenNames (i COMMA_HERE) << "\n" ;  
  }
//--- Add source location information
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
      errorMessage << "[Raised from file '" << C_String (IN_SOURCE_FILE).lastPathComponent ()
                   << "' at line " << cStringWithSigned (IN_SOURCE_LINE) << "]\n" ;
    }
  #endif
//--- Append source string
  if (inSourceTextPtr != NULL) {
    macroValidSharedObject (inSourceTextPtr, const C_SourceTextInString) ;
    inSourceTextPtr->appendSourceContents (errorMessage) ;
  }
//--- Print
  ggs_printError (errorMessage) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//            Method called for signaling an extract error                   *
//                                                                           *
//---------------------------------------------------------------------------*

void C_galgas_io::
signalExtractError (const C_SourceTextInString * inSourceTextPtr,
                    const C_LocationInSource & inErrorLocation,
                    const TC_UniqueArray <C_String> & inExpectedClassesErrorStringsArray,
                    const C_String & inActualFoundClassErrorString
                    COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
  mCurrentFileErrorCount ++ ;
//--- Construct location error message
  C_String errorMessage ;
  constructErrorOrWarningLocationMessage (errorMessage, inErrorLocation, inSourceTextPtr) ;
//--- Print extract error
  errorMessage << (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue ? "semantic " : "")
               << "error: I have found:\n" ;
  if (! gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
    errorMessage << errorOrWarningLocationString (inErrorLocation, inSourceTextPtr)
                 << "error: " ;
  }
  errorMessage << "  - " << inActualFoundClassErrorString <<";\n" ;
  if (! gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
    errorMessage << errorOrWarningLocationString (inErrorLocation, inSourceTextPtr)
                 << "error: " ;
  }
  errorMessage << "I was expected:\n" ;
  if (! gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
    errorMessage << errorOrWarningLocationString (inErrorLocation, inSourceTextPtr)
                 << "error: " ;
  }
  errorMessage << "  - " << inExpectedClassesErrorStringsArray (0 COMMA_HERE) ;
  for (PMSInt32 i=1 ; i<inExpectedClassesErrorStringsArray.count () ; i++) {
    errorMessage << ";\n" ;
    if (! gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
      errorMessage << errorOrWarningLocationString (inErrorLocation, inSourceTextPtr)
                   << "error: " ;
    }
    errorMessage << "  - " << inExpectedClassesErrorStringsArray (i COMMA_HERE) ;  
  }
  errorMessage << ".\n" ;
//--- Add source location information
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
      errorMessage << "[Raised from file '" << C_String (IN_SOURCE_FILE).lastPathComponent ()
                   << "' at line " << cStringWithSigned (IN_SOURCE_LINE) << "]\n" ;
    }
  #endif
//--- Append source string
  if (inSourceTextPtr != NULL) {
    macroValidSharedObject (inSourceTextPtr, const C_SourceTextInString) ;
    inSourceTextPtr->appendSourceContents (errorMessage) ;
  }
//--- Print
  ggs_printError (errorMessage) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//            Method called for signaling a cast error                       *
//                                                                           *
//---------------------------------------------------------------------------*

void C_galgas_io::
signalCastError (const C_SourceTextInString * inSourceTextPtr,
                 const C_LocationInSource & inErrorLocation,
                 const std::type_info * inBaseClass,
                 const bool inUseKindOfClass,
                 const C_String & inActualFoundClassErrorString
                 COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
  mCurrentFileErrorCount ++ ;
//--- Construct location error message
  C_String errorMessage ;
  constructErrorOrWarningLocationMessage (errorMessage, inErrorLocation, inSourceTextPtr) ;
//--- Construct expected class message array
  TC_UniqueArray <C_String> expectedClassMessageArray ;
  const C_galgas_class_inspector * p = C_galgas_class_inspector::root () ;
  bool found = false ;
  while ((p != NULL) && ! found) {
    if (p->mClassID == inBaseClass) {
      found = true ;
      expectedClassMessageArray.addObject (p->mClassMessage) ;
    }
    p = p->mNextClass ;
  }
  if (inUseKindOfClass) {
    TC_UniqueArray <const std::type_info *> classIDarray ;
    classIDarray.addObject (inBaseClass) ;
    bool loop = true ;
    while (loop) {
      loop = false ;
      p = C_galgas_class_inspector::root () ;
      while (p != NULL) {
        if (classIDarray.containsObjectEqualTo (p->mSuperClassID)
          && ! classIDarray.containsObjectEqualTo (p->mClassID)) {
          loop = true ;
          classIDarray.addObject (p->mClassID) ;
          expectedClassMessageArray.addObject (p->mClassMessage) ;
        }
        p = p->mNextClass ;
      }
    }
  }
//--- Print extract error
  expectedClassMessageArray.sortArrayUsingCompareMethod () ;
  errorMessage << (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue ? "semantic " : "")
               << "error: I have found:\n" ;
  if (! gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
    errorMessage << errorOrWarningLocationString (inErrorLocation, inSourceTextPtr)
                 << "error: " ;
  }
  errorMessage << "  - " << inActualFoundClassErrorString <<";\n" ;
  if (! gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
    errorMessage << errorOrWarningLocationString (inErrorLocation, inSourceTextPtr)
                 << "error: " ;
  }
  errorMessage << "I was expected:\n" ;
  if (! gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
    errorMessage << errorOrWarningLocationString (inErrorLocation, inSourceTextPtr)
                 << "error: " ;
  }
  errorMessage << "  - " << expectedClassMessageArray (0 COMMA_HERE) ;
  for (PMSInt32 i=1 ; i<expectedClassMessageArray.count () ; i++) {
    errorMessage << ";\n" ;
    if (! gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
      errorMessage << errorOrWarningLocationString (inErrorLocation, inSourceTextPtr)
                   << "error: " ;
    }
    errorMessage << "  - " << expectedClassMessageArray (i COMMA_HERE) ;  
  }
  errorMessage << ".\n" ;
//--- Add source location information
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
      errorMessage << "[Raised from file '" << C_String (IN_SOURCE_FILE).lastPathComponent ()
                   << "' at line " << cStringWithSigned (IN_SOURCE_LINE) << "]\n" ;
    }
  #endif
//--- Append source string
  if (inSourceTextPtr != NULL) {
    macroValidSharedObject (inSourceTextPtr, const C_SourceTextInString) ;
    inSourceTextPtr->appendSourceContents (errorMessage) ;
  }
//--- Print
  ggs_printError (errorMessage) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//---------------------------------------------------------------------------*

void C_galgas_io::
signalSemanticWarning (const C_SourceTextInString * inSourceTextPtr,
                       const C_LocationInSource & inWarningLocation,
                       const C_String & inWarningMessage
                       COMMA_LOCATION_ARGS) {
//--- Increment warning count
  mCurrentWarningCount ++ ;
  mTotalWarningCount ++ ;
//--- Construct location error message
  C_String warningMessage ;
  constructErrorOrWarningLocationMessage (warningMessage, inWarningLocation, inSourceTextPtr) ;
//--- Add warning
  warningMessage << (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue ? "semantic " : "")
                 << "warning: " << inWarningMessage << "\n" ;
//--- Add source location information
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
      warningMessage << "[Raised from file '" << C_String (IN_SOURCE_FILE).lastPathComponent ()
                     << "' at line " << cStringWithSigned (IN_SOURCE_LINE) << "]\n" ;
    }
  #endif
//--- Append source string
  if (inSourceTextPtr != NULL) {
    macroValidSharedObject (inSourceTextPtr, const C_SourceTextInString) ;
    inSourceTextPtr->appendSourceContents (warningMessage) ;
  }
//--- Print
  ggs_printWarning (warningMessage) ;
//--- Warning max count reached ?
  if ((maxWarningCount () > 0) && (totalWarningCount () >= maxWarningCount ())) {
    throw max_warning_count_reached_exception () ;
  }
}

//---------------------------------------------------------------------------*

void C_galgas_io::
signalSemanticError (const C_SourceTextInString * inSourceTextPtr,
                     const C_LocationInSource & inErrorLocation,
                     const C_String & inErrorMessage
                     COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
  mCurrentFileErrorCount ++ ;
//--- Construct location error message
  C_String errorMessage ;
  constructErrorOrWarningLocationMessage (errorMessage, inErrorLocation, inSourceTextPtr) ;
//--- Print error
  errorMessage << (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue ? "semantic " : "")
               << "error: " << inErrorMessage << "\n" ;
//--- Add source location information
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
      errorMessage << "[Raised from file '" << C_String (IN_SOURCE_FILE).lastPathComponent ()
                   << "' at line " << cStringWithSigned (IN_SOURCE_LINE) << "]\n" ;
    }
  #endif
//--- Append source string
  if (inSourceTextPtr != NULL) {
    macroValidSharedObject (inSourceTextPtr, const C_SourceTextInString) ;
    inSourceTextPtr->appendSourceContents (errorMessage) ;
  }
//--- Print
  ggs_printError (errorMessage) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//---------------------------------------------------------------------------*

void C_galgas_io::signalRunTimeError (const C_String & inRunTimeErrorMessage
                                      COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
  mCurrentFileErrorCount ++ ;
//--- Construct location error message
  C_String errorMessage ;
  errorMessage << "Run Time Error: " << inRunTimeErrorMessage << "\n" ;
//--- Add source location information
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
      errorMessage << "[Raised from file '" << C_String (IN_SOURCE_FILE).lastPathComponent ()
                   << "' at line " << cStringWithSigned (IN_SOURCE_LINE) << "]\n" ;
    }
  #endif
//--- Print
  ggs_printError (errorMessage) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//---------------------------------------------------------------------------*

void C_galgas_io::signalRunTimeWarning (const C_String & inWarningMessage
                                        COMMA_LOCATION_ARGS) {
//--- Increment warning count
  mCurrentWarningCount ++ ;
  mTotalWarningCount ++ ;
//--- Construct location error message
  C_String warningMessage ;
  warningMessage << "Run Time Warning: " << inWarningMessage << "\n" ;
//--- Add source location information
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
      warningMessage << "[Raised from file '" << C_String (IN_SOURCE_FILE).lastPathComponent ()
                     << "' at line " << cStringWithSigned (IN_SOURCE_LINE) << "]\n" ;
    }
  #endif
//--- Print
  ggs_printWarning (warningMessage) ;
//--- Warning max count reached ?
  if ((maxWarningCount () > 0) && (totalWarningCount () >= maxWarningCount ())) {
    throw max_warning_count_reached_exception () ;
  }
}

//---------------------------------------------------------------------------*

void C_galgas_io::
printFileErrorMessage (const C_String & inSourceFileName,
                       const C_String & inErrorMessage
                       COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
  mCurrentFileErrorCount ++ ;
//--- Print error
  C_String errorMessage ;
  errorMessage << "in file " << inSourceFileName << "\nerror : " << inErrorMessage << "\n" ;
//--- Add source location information
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
      errorMessage << "[Raised from file '" << C_String (IN_SOURCE_FILE).lastPathComponent ()
                   << "' at line " << cStringWithSigned (IN_SOURCE_LINE) << "]\n" ;
    }
  #endif
//--- Print
  ggs_printError (errorMessage) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= Actual Message Print
#endif

//---------------------------------------------------------------------------*

static const utf32 COCOA_MESSAGE_ID = TO_UNICODE (1) ;
static const utf32 COCOA_REWRITE_SUCCESS_ID = TO_UNICODE (2) ;
static const utf32 COCOA_WARNING_ID = TO_UNICODE (3) ;
static const utf32 COCOA_ERROR_ID   = TO_UNICODE (4) ;
static const utf32 COCOA_FILE_CREATION_SUCCESS_ID = TO_UNICODE (5) ;

//---------------------------------------------------------------------------*
//                                                                           *
//    Method called for printing an error (on stderr)                        *
//                                                                           *
//---------------------------------------------------------------------------*

void C_galgas_io::ggs_printError (const C_String & inMessage) {
  if (cocoaOutput ()) {
    co.appendUnicodeCharacter (COCOA_ERROR_ID COMMA_HERE) ;
    co << inMessage ;
    co.appendUnicodeCharacter (COCOA_MESSAGE_ID COMMA_HERE) ;
    co.flush () ;
  }else{
    ce.setForeColor (kRedForeColor) ;
    co.setTextAttribute (kBoldTextAttribute) ;
    ce << inMessage ;
    ce.setTextAttribute (kAllAttributesOff) ;
    ce.flush () ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//    Method called for printing a warning (on stderr)                       *
//                                                                           *
//---------------------------------------------------------------------------*

void C_galgas_io::ggs_printWarning (const C_String & inMessage) {
  if (cocoaOutput ()) {
    co.appendUnicodeCharacter (COCOA_WARNING_ID COMMA_HERE) ;
    co << inMessage ;
    co.appendUnicodeCharacter (COCOA_MESSAGE_ID COMMA_HERE) ;
    co.flush () ;
  }else{
    co.setForeColor (kYellowForeColor) ;
    co.setTextAttribute (kBoldTextAttribute) ;
    co << inMessage ;
    co.setTextAttribute (kAllAttributesOff) ;
    co.flush () ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//    Method called for printing a success message (on stdout)               *
//                                                                           *
//---------------------------------------------------------------------------*

void C_galgas_io::ggs_printRewriteFileSuccess (const C_String & inMessage) {
  if (cocoaOutput ()) {
    co.appendUnicodeCharacter (COCOA_REWRITE_SUCCESS_ID COMMA_HERE) ;
    co << inMessage;
    co.appendUnicodeCharacter (COCOA_MESSAGE_ID COMMA_HERE) ;
    co.flush () ;
  }else{
    co.setForeColor (kBlueForeColor) ;
    co.setTextAttribute (kBoldTextAttribute) ;
    co << inMessage ;
    co.setTextAttribute (kAllAttributesOff) ;
    co.flush () ;
  }
}

//---------------------------------------------------------------------------*

void C_galgas_io::ggs_printCreatedFileSuccess (const C_String & inMessage) {
  if (cocoaOutput ()) {
    co.appendUnicodeCharacter (COCOA_FILE_CREATION_SUCCESS_ID COMMA_HERE) ;
    co << inMessage ;
    co.appendUnicodeCharacter (COCOA_MESSAGE_ID COMMA_HERE) ;
    co.flush () ;
  }else{
    co.setForeColor (kBlueForeColor) ;
    co.setTextAttribute (kBoldTextAttribute) ;
    co << inMessage ;
    co.setTextAttribute (kAllAttributesOff) ;
    co.flush () ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//    Methods called for printing a message (on stdout)                      *
//                                                                           *
//---------------------------------------------------------------------------*

void C_galgas_io::ggs_printMessage (const C_String & inMessage) {
  co << inMessage ;
  co.flush () ;
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= cToken
#endif

//---------------------------------------------------------------------------*

cToken::cToken (void) :
mNextToken (NULL),
mStartLocation (),
mEndLocation (),
mTemplateStringBeforeToken (),
mTokenCode (0) {
}

//---------------------------------------------------------------------------*

cToken::~cToken (void) {
}

//---------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark ========= C_parsingContext
#endif

//---------------------------------------------------------------------------*

C_parsingContext::C_parsingContext (void) :
mParsingArrayIndex (0),
mLocation (),
mCurrentTokenPtr (NULL),
mCurrentChar (TO_UNICODE ('\0')),
mPreviousChar (TO_UNICODE ('\0')),
mTemplateString () {
} 

//---------------------------------------------------------------------------*

C_parsingContext::C_parsingContext (const C_parsingContext & inSource) :
mParsingArrayIndex (inSource.mParsingArrayIndex),
mLocation (inSource.mLocation),
mCurrentTokenPtr (inSource.mCurrentTokenPtr),
mCurrentChar (inSource.mCurrentChar),
mPreviousChar (inSource.mPreviousChar),
mTemplateString (inSource.mTemplateString) {
} 

//---------------------------------------------------------------------------*

C_parsingContext & C_parsingContext::operator = (const C_parsingContext & inSource) {
  mParsingArrayIndex = inSource.mParsingArrayIndex ;
  mLocation = inSource.mLocation ;
  mCurrentTokenPtr = inSource.mCurrentTokenPtr ;
  mCurrentChar = inSource.mCurrentChar ;
  mPreviousChar = inSource.mPreviousChar ;
  mTemplateString = inSource.mTemplateString ;
  return * this ;
}

//---------------------------------------------------------------------------*
