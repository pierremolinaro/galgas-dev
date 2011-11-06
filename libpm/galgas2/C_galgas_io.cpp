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

static PMUInt32 mCheckedLines ;

PMUInt32 checkedLineCount (void) { return mCheckedLines ; } ;

void incrementCheckedFileCount (const PMUInt32 inIncrement) {
  mCheckedLines += inIncrement ;
}

//---------------------------------------------------------------------------*

static PMUInt32 mGeneratedLines ;

PMUInt32 generatedLineCount (void) { return mGeneratedLines ; } ;

void incrementGeneratedLileCount (const PMUInt32 inIncrement) {
  mGeneratedLines += inIncrement ;
}

//---------------------------------------------------------------------------*

static PMUInt32 mPreservedLines ;

PMUInt32 preservedLineCount (void) { return mPreservedLines ; }

void incrementPreservedLileCount (const PMUInt32 inIncrement) {
  mPreservedLines += inIncrement ;
}

//---------------------------------------------------------------------------*

static PMUInt32 mGeneratedFileCount ;

PMUInt32 generatedFileCount (void) { return mGeneratedFileCount ; } ;

void incrementGeneratedFileCount (void) {
  mGeneratedFileCount ++ ;
}

//---------------------------------------------------------------------------*

PMSInt32 maxErrorCount (void) {
  PMSInt32 result = (PMSInt32) gOption_galgas_5F_cli_5F_options_max_5F_errors.mValue ;
  return (result == 0) ? 100 : result ;
}

//---------------------------------------------------------------------------*

static PMSInt32 mErrorTotalCount ;

PMSInt32 totalErrorCount (void) {
  return mErrorTotalCount ;
}

//---------------------------------------------------------------------------*

PMSInt32 maxWarningCount (void) {
  PMSInt32 result = (PMSInt32) gOption_galgas_5F_cli_5F_options_max_5F_warnings.mValue ;
  return (result == 0) ? 100 : result ;
}

//---------------------------------------------------------------------------*

static PMSInt32 mTotalWarningCount ;

PMSInt32 totalWarningCount (void) {
  return mTotalWarningCount ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//    Construct error or warning location message                            *
//                                                                           *
//---------------------------------------------------------------------------*

C_String
errorOrWarningLocationString (const C_LocationInSource & inErrorLocation,
                              const C_SourceTextInString * inSourceTextPtr) {
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

void constructErrorOrWarningLocationMessage (C_String & ioMessage, 
                                             const C_LocationInSource & inErrorLocation,
                                             const C_SourceTextInString * inSourceTextPtr) {
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

void 
signalLexicalWarning (const C_SourceTextInString * inSourceTextPtr,
                      const C_LocationInSource & inWarningLocation,
                      const C_String & inLexicalWarningMessage
                      COMMA_LOCATION_ARGS) {
//--- Increment warning count
  mTotalWarningCount ++ ;
//--- Construct location warning message
  C_String warningMessage ;
//--- Add warning
  warningMessage << (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue ? "lexical " : "")
                 << "warning: " << inLexicalWarningMessage << "\n" ;
//--- Print
  ggs_printWarning (inSourceTextPtr, inWarningLocation, warningMessage COMMA_THERE) ;
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

void 
signalLexicalError (const C_SourceTextInString * inSourceTextPtr,
                    const C_LocationInSource & inErrorLocation,
                    const C_String & inLexicalErrorMessage
                    COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
//--- Construct parsing error message
  C_String errorMessage ;
  errorMessage << (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue ? "lexical " : "")
               << "error: " << inLexicalErrorMessage << "\n" ;
//--- Print
  ggs_printError (inSourceTextPtr, inErrorLocation, errorMessage COMMA_THERE) ;
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

void signalParsingError (const C_SourceTextInString * inSourceTextPtr,
                         const C_LocationInSource & inErrorLocation,
                         const C_String & inFoundTokenMessage,
                         const TC_UniqueArray <C_String> & inAcceptedTokenNames
                         COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
//--- Construct location error message
  C_String errorMessage ;
//--- Construct parsing error message
  errorMessage << (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue ? "syntax " : "")
               << "error: found " << inFoundTokenMessage <<", accepted:\n" ;  
  for (PMSInt32 i=0 ; i<inAcceptedTokenNames.count () ; i++) {
    errorMessage << "-  " << inAcceptedTokenNames (i COMMA_HERE) << "\n" ;  
  }
//--- Print
  ggs_printError (inSourceTextPtr, inErrorLocation, errorMessage COMMA_THERE) ;
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

void signalExtractError (const C_SourceTextInString * inSourceTextPtr,
                         const C_LocationInSource & inErrorLocation,
                         const TC_UniqueArray <C_String> & inExpectedClassesErrorStringsArray,
                         const C_String & inActualFoundClassErrorString
                         COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
//--- Construct location error message
  C_String errorMessage ;
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
//--- Print
  ggs_printError (inSourceTextPtr, inErrorLocation, errorMessage COMMA_THERE) ;
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

void signalCastError (const C_SourceTextInString * inSourceTextPtr,
                      const C_LocationInSource & inErrorLocation,
                      const std::type_info * inBaseClass,
                      const bool inUseKindOfClass,
                      const C_String & inActualFoundClassErrorString
                      COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
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
  C_String errorMessage ;
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
//--- Print
  ggs_printError (inSourceTextPtr, inErrorLocation, errorMessage COMMA_THERE) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//---------------------------------------------------------------------------*

void 
signalSemanticWarning (const C_SourceTextInString * inSourceTextPtr,
                       const C_LocationInSource & inWarningLocation,
                       const C_String & inWarningMessage
                       COMMA_LOCATION_ARGS) {
//--- Increment warning count
  mTotalWarningCount ++ ;
//--- Construct location error message
  C_String warningMessage ;
//--- Add warning
  warningMessage << (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue ? "semantic " : "")
                 << "warning: " << inWarningMessage << "\n" ;
//--- Print
  ggs_printWarning (inSourceTextPtr, inWarningLocation, warningMessage COMMA_THERE) ;
//--- Warning max count reached ?
  if ((maxWarningCount () > 0) && (totalWarningCount () >= maxWarningCount ())) {
    throw max_warning_count_reached_exception () ;
  }
}

//---------------------------------------------------------------------------*

void fatalError (const C_String & inErrorMessage,
                 const char * inSourceFile,
                 const int inSourceLine) {
//--- Increment error count
  mErrorTotalCount ++ ;
//--- Error message
  C_String errorMessage ;
  errorMessage << inErrorMessage << " in file '" << inSourceFile << "', line " << cStringWithSigned (inSourceLine) << "\n" ;
  ggs_printError (NULL, C_LocationInSource (), errorMessage COMMA_HERE) ;
  throw max_error_count_reached_exception () ;
}

//---------------------------------------------------------------------------*

void signalSemanticError (const C_SourceTextInString * inSourceTextPtr,
                          const C_LocationInSource & inErrorLocation,
                          const C_String & inErrorMessage
                          COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
//--- Construct location error message
  C_String errorMessage ;
//--- Print error
  errorMessage << "semantic error: " << inErrorMessage << "\n" ;
//--- Print
  ggs_printError (inSourceTextPtr, inErrorLocation, errorMessage COMMA_THERE) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//---------------------------------------------------------------------------*

void signalRunTimeError (const C_String & inRunTimeErrorMessage
                         COMMA_LOCATION_ARGS) {
//--- Increment error count
  mErrorTotalCount ++ ;
//--- Construct location error message
  C_String errorMessage ;
  errorMessage << "Run Time Error: " << inRunTimeErrorMessage << "\n" ;
//--- Print
  ggs_printError (NULL, C_LocationInSource (), errorMessage COMMA_THERE) ;
//--- Error max count reached ?
  if ((maxErrorCount () > 0) && (totalErrorCount () >= maxErrorCount ())) {
    throw max_error_count_reached_exception () ;
  }
}

//---------------------------------------------------------------------------*

void signalRunTimeWarning (const C_String & inWarningMessage
                           COMMA_LOCATION_ARGS) {
//--- Increment warning count
  mTotalWarningCount ++ ;
//--- Construct location error message
  C_String warningMessage ;
  warningMessage << "Run Time Warning: " << inWarningMessage << "\n" ;
//--- Print
  ggs_printWarning (NULL, C_LocationInSource (), warningMessage COMMA_THERE) ;
//--- Warning max count reached ?
  if ((maxWarningCount () > 0) && (totalWarningCount () >= maxWarningCount ())) {
    throw max_warning_count_reached_exception () ;
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
//    Method called for printing an error                                    *
//                                                                           *
//---------------------------------------------------------------------------*

void ggs_printError (const C_SourceTextInString * inSourceTextPtr,
                     const C_LocationInSource & inErrorLocation,
                     const C_String & inMessage
                     COMMA_LOCATION_ARGS) {
  if (gOption_generic_5F_cli_5F_options_xml.mValue) {
    co << "<error\n" ;
    if (inSourceTextPtr != NULL) {
      macroValidSharedObject (inSourceTextPtr, const C_SourceTextInString) ;
      co << "  file=\"" << inSourceTextPtr->sourceFilePath () << "\"\n"
            "  line=\"" << cStringWithUnsigned (inErrorLocation.mLineNumber) << "\"\n"
            "  column=\"" << cStringWithUnsigned (inErrorLocation.mColumnNumber) << "\"\n"
    //     << "  endColumn=" << cStringWithUnsigned (inSourceEndColumn) << "\n"
      ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
        co << "  sourceFile=\"" << C_String (IN_SOURCE_FILE).lastPathComponent () << "\"\n"
           << "  sourceLine=\"" << cStringWithSigned (IN_SOURCE_LINE) << "\"\n" ;
      }
    #endif
    co << "  message=\"" << inMessage.XMLEscapedString () << "\"\n"
       << "/>\n" ;
  }else{
    C_String errorMessage ;
    constructErrorOrWarningLocationMessage (errorMessage, inErrorLocation, inSourceTextPtr) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
        errorMessage << "[Raised from file '" << C_String (IN_SOURCE_FILE).lastPathComponent ()
                     << "' at line " << cStringWithSigned (IN_SOURCE_LINE) << "]\n" ;
      }
    #endif
    errorMessage << inMessage ;
  //--- Append source string
    if (inSourceTextPtr != NULL) {
      macroValidSharedObject (inSourceTextPtr, const C_SourceTextInString) ;
      inSourceTextPtr->appendSourceContents (errorMessage) ;
    }
    if (cocoaOutput ()) {
      co.appendUnicodeCharacter (COCOA_ERROR_ID COMMA_HERE) ;
      co << errorMessage ;
      co.appendUnicodeCharacter (COCOA_MESSAGE_ID COMMA_HERE) ;
    }else{
      co.setForeColor (kRedForeColor) ;
      co.setTextAttribute (kBoldTextAttribute) ;
      co << errorMessage ;
      co.setTextAttribute (kAllAttributesOff) ;
    }
  }
  co.flush () ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//    Method called for printing a warning                                   *
//                                                                           *
//---------------------------------------------------------------------------*

void ggs_printWarning (const C_SourceTextInString * inSourceTextPtr,
                       const C_LocationInSource & inWarningLocation,
                       const C_String & inMessage
                       COMMA_LOCATION_ARGS) {
  if (gOption_generic_5F_cli_5F_options_xml.mValue) {
    co << "<warning\n" ;
    if (inSourceTextPtr != NULL) {
      macroValidSharedObject (inSourceTextPtr, const C_SourceTextInString) ;
      co << "  file=\"" << inSourceTextPtr->sourceFilePath () << "\"\n"
            "  line=\"" << cStringWithUnsigned (inWarningLocation.mLineNumber) << "\"\n"
            "  column=\"" << cStringWithUnsigned (inWarningLocation.mColumnNumber) << "\"\n"
    //     << "  endColumn=" << cStringWithUnsigned (inSourceEndColumn) << "\n"
      ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
        co << "  sourceFile=\"" << C_String (IN_SOURCE_FILE).lastPathComponent () << "\"\n"
           << "  sourceLine=\"" << cStringWithSigned (IN_SOURCE_LINE) << "\"\n" ;
      }
    #endif
    co << "  message=\"" << inMessage.XMLEscapedString () << "\"\n"
       << "/>\n" ;
  }else{
    C_String warningMessage ;
    constructErrorOrWarningLocationMessage (warningMessage, inWarningLocation, inSourceTextPtr) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
        warningMessage << "[Raised from file '" << C_String (IN_SOURCE_FILE).lastPathComponent ()
                       << "' at line " << cStringWithSigned (IN_SOURCE_LINE) << "]\n" ;
      }
    #endif
    warningMessage << inMessage ;
  //--- Append source string
    if (inSourceTextPtr != NULL) {
      macroValidSharedObject (inSourceTextPtr, const C_SourceTextInString) ;
      inSourceTextPtr->appendSourceContents (warningMessage) ;
    }
    if (cocoaOutput ()) {
      co.appendUnicodeCharacter (COCOA_WARNING_ID COMMA_HERE) ;
      co << warningMessage ;
      co.appendUnicodeCharacter (COCOA_MESSAGE_ID COMMA_HERE) ;
    }else{
      co.setForeColor (kYellowForeColor) ;
      co.setTextAttribute (kBoldTextAttribute) ;
      co << warningMessage ;
      co.setTextAttribute (kAllAttributesOff) ;
    }
  }
  co.flush () ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//    Method called for printing a success message                           *
//                                                                           *
//---------------------------------------------------------------------------*

void ggs_printFileOperationSuccess (const C_String & inMessage
                                    COMMA_LOCATION_ARGS) {
  if (gOption_generic_5F_cli_5F_options_xml.mValue) {
    co << "<fileOperation\n" ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
        co << "  sourceFile=\"" << C_String (IN_SOURCE_FILE).lastPathComponent () << "\"\n"
           << "  sourceLine=" << cStringWithSigned (IN_SOURCE_LINE) << "\n" ;
      }
    #endif
    co << "  message=\"" << inMessage.XMLEscapedString () << "\"\n"
       << "/>\n" ;
  }else{
    if (cocoaOutput ()) {
      co.appendUnicodeCharacter (COCOA_REWRITE_SUCCESS_ID COMMA_HERE) ;
      co << inMessage;
      co.appendUnicodeCharacter (COCOA_MESSAGE_ID COMMA_HERE) ;
    }else{
      co.setForeColor (kBlueForeColor) ;
      co.setTextAttribute (kBoldTextAttribute) ;
      co << inMessage ;
      co.setTextAttribute (kAllAttributesOff) ;
    }
  }
  co.flush () ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//    Methods called for printing a message                                  *
//                                                                           *
//---------------------------------------------------------------------------*

void ggs_printMessage (const C_String & inMessage
                       COMMA_LOCATION_ARGS) {
  if (gOption_generic_5F_cli_5F_options_xml.mValue) {
    co << "<message\n" ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      if (gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue) {
        co << "  sourceFile=\"" << C_String (IN_SOURCE_FILE).lastPathComponent () << "\"\n"
           << "  sourceLine=" << cStringWithSigned (IN_SOURCE_LINE) << "\n" ;
      }
    #endif
    co << "  message=\"" << inMessage.XMLEscapedString () << "\"\n"
       << "/>\n" ;
  }else{
    co << inMessage ;
  }
  co.flush () ;
}

//---------------------------------------------------------------------------*

void writeXMLHeader (void) {
  if (gOption_generic_5F_cli_5F_options_xml.mValue) {
    co << "<?xml version=\"1.0\"?>\n"
          "<galgas>\n" ;
  }
}

//---------------------------------------------------------------------------*

void writeXMLEpilogue (void) {
  if (gOption_generic_5F_cli_5F_options_xml.mValue) {
    co << "</galgas>\n" ;
  }
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
