//--------------------------------------------------------------------------------------------------
//
//  'C_Compiler' : the compiler base class ;
//
//  This file is part of libpm library
//
//  Copyright (C) 2009, ..., 2015 Pierre Molinaro.
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

#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "files/C_TextFileWrite.h"
#include "files/C_FileManager.h"
#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "all-predefined-types.h"
#include "utilities/MF_MemoryControl.h"
#include "galgas2/F_verbose_output.h"

//--------------------------------------------------------------------------------------------------
//
//        Syntax error message for 'end of source':
//
//--------------------------------------------------------------------------------------------------

const char * C_Compiler::kEndOfSourceLexicalErrorMessage = "end of source" ;

//--------------------------------------------------------------------------------------------------

bool C_Compiler::performGeneration (void) {
  return (! gOption_galgas_5F_builtin_5F_options_do_5F_not_5F_generate_5F_any_5F_file.mValue)
      && (executionMode () == kExecutionModeNormal) ;
}

//--------------------------------------------------------------------------------------------------

bool C_Compiler::performLogFileRead (void) {
  return gOption_galgas_5F_builtin_5F_options_log_5F_file_5F_read.mValue ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Constructor and destructor
#endif

//--------------------------------------------------------------------------------------------------
//
//        Constructor and destructor
//
//--------------------------------------------------------------------------------------------------

C_Compiler::C_Compiler (C_Compiler * inCallerCompiler
                        COMMA_LOCATION_ARGS) :
C_SharedObject (THERE),
mCallerCompiler (nullptr),
mIssueArray (),
mSentString (),
mSentStringIsValid (true),
mTemplateString (),
mTemplateStringLocation (),
mSourceText (),
mCurrentLocation (),
mStartLocationForHere (),
mEndLocationForHere (),
mStartLocationForNext (),
mEndLocationForNext () {
  macroAssignSharedObject (mCallerCompiler, inCallerCompiler) ;
}

//--------------------------------------------------------------------------------------------------

C_Compiler::~C_Compiler (void) {
  macroDetachSharedObject (mCallerCompiler) ;
}

//--------------------------------------------------------------------------------------------------

String C_Compiler::sourceFilePath (void) const {
  return mSourceText.sourceFilePath () ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Issue
#endif

//--------------------------------------------------------------------------------------------------

void C_Compiler::appendIssue (const cIssueDescriptor & inIssue) {
  if (nullptr == mCallerCompiler) {
    mIssueArray.appendObject (inIssue) ;
  }else{
    mCallerCompiler->appendIssue (inIssue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void C_Compiler::writeIssueJSONFile (const String & inFile) {
  if (performGeneration ()) {
    String s ("[\n") ;
    bool isFirst = true ;
    for (int32_t i=0 ; i<mIssueArray.count () ; i++) {
      mIssueArray (i COMMA_HERE).appendToJSONstring (s, isFirst) ;
      isFirst = false ;
    }
    s += "\n]\n" ;
    const bool ok = C_FileManager::writeStringToFile (s, inFile) ;
    if (!ok) {
      const String message (String ("Cannot write to '") + inFile + "'") ;
      fatalError (message, "", 0) ;
    }
  }else{
    ggs_printWarning (this, C_SourceTextInString (), C_IssueWithFixIt (), String ("Need to replace '") + inFile + "'.\n" COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Sent String Management
#endif

//--------------------------------------------------------------------------------------------------

GALGAS_string C_Compiler::sentString (void) const {
  GALGAS_string result ;
  if (mSentStringIsValid) {
   result = GALGAS_string (mSentString) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Template String Management
#endif

//--------------------------------------------------------------------------------------------------

GALGAS_string C_Compiler::retrieveAndResetTemplateString (void) {
  const String s = mTemplateString ;
  mTemplateString.setLengthToZero () ;
  return GALGAS_string (s) ;
}

//--------------------------------------------------------------------------------------------------

void C_Compiler::resetTemplateString (void) {
  mTemplateString.setLengthToZero () ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Scanner configuration
#endif

//--------------------------------------------------------------------------------------------------

void C_Compiler::resetAndLoadSourceFromText (const C_SourceTextInString & inSourceText) {
  mSourceText = inSourceText ;
  mCurrentLocation.resetWithSourceText (mSourceText) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark On the fly semantic error Message
#endif

//--------------------------------------------------------------------------------------------------

void C_Compiler::onTheFlySemanticError (const String & inErrorMessage
                                        COMMA_LOCATION_ARGS) {
  signalSemanticError (this,
                       sourceText (),
                       C_IssueWithFixIt (mCurrentLocation, mCurrentLocation, TC_Array <C_FixItDescription> ()),
                       inErrorMessage
                       COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark On the fly semantic Warning Message
#endif

//--------------------------------------------------------------------------------------------------

void C_Compiler::onTheFlySemanticWarning (const String & inWarningMessage
                                          COMMA_LOCATION_ARGS) {
  signalSemanticWarning (this,
                         sourceText (),
                         C_IssueWithFixIt (mCurrentLocation, mCurrentLocation, TC_Array <C_FixItDescription> ()),
                         inWarningMessage
                         COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Print Message
#endif

//--------------------------------------------------------------------------------------------------

void C_Compiler::printMessage (const GALGAS_string & inMessage
                               COMMA_LOCATION_ARGS) {
  if (inMessage.isValid ()) {
    ggs_printMessage (inMessage.stringValue () COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void C_Compiler::printMessage (const String & inMessage
                               COMMA_LOCATION_ARGS) {
  String s ;
  s += inMessage ;
  ggs_printMessage (s COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Log File Read
#endif

//--------------------------------------------------------------------------------------------------

void C_Compiler::logFileRead (const String & inFilePath) {
  if (performLogFileRead ()) {
    printf ("Reading '%s' file.\n", inFilePath.cString (HERE)) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Loop variant run time error
#endif

//--------------------------------------------------------------------------------------------------

void C_Compiler::loopRunTimeVariantError (LOCATION_ARGS) {
  onTheFlyRunTimeError ("loop variant run-time error" COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Cast error
#endif

//--------------------------------------------------------------------------------------------------

void C_Compiler::castError (const String & inTargetTypeName,
                            const C_galgas_type_descriptor * inObjectDynamicTypeDescriptor
                            COMMA_LOCATION_ARGS) {
  String m ;
  m += "cannot cast an @" ;
  m += inObjectDynamicTypeDescriptor->mGalgasTypeName ;
  m += " to an @" ;
  m += inTargetTypeName ;
  onTheFlyRunTimeError (m COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS Error
#endif

//--------------------------------------------------------------------------------------------------

void C_Compiler::semanticErrorAtLocation (const GALGAS_location & inErrorLocation,
                                          const String & inErrorMessage,
                                          const TC_Array <C_FixItDescription> & inFixItArray
                                          COMMA_LOCATION_ARGS) {
  if (inErrorLocation.isValid ()) { // No error raised if not built
    if (!inErrorLocation.sourceText ().isValid ()) {
      onTheFlyRunTimeError (inErrorMessage COMMA_THERE) ;
    }else{
      signalSemanticError (this,
                           inErrorLocation.sourceText (),
                           C_IssueWithFixIt (inErrorLocation.startLocation (), inErrorLocation.endLocation (), inFixItArray),
                           inErrorMessage
                           COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void C_Compiler::emitSemanticError (const GALGAS_location & inErrorLocation,
                                    const GALGAS_string & inErrorMessage,
                                    const TC_Array <C_FixItDescription> & inFixItArray
                                    COMMA_LOCATION_ARGS) {
  if (inErrorLocation.isValid () && inErrorMessage.isValid ()) {
    const String errorMessage = inErrorMessage.stringValue () ;
    if (!inErrorLocation.sourceText ().isValid ()) {
      onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      signalSemanticError (this,
                           inErrorLocation.sourceText (),
                           C_IssueWithFixIt (inErrorLocation.startLocation (), inErrorLocation.endLocation (), inFixItArray),
                           errorMessage
                           COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void C_Compiler::semanticErrorWith_K_message (const GALGAS_lstring & inKey,
                                              TC_UniqueArray <String> & ioNearestKeyArray,
                                              const char * in_K_ErrorMessage
                                              COMMA_LOCATION_ARGS) {
  const String key = inKey.mProperty_string.stringValue () ;
//--- Build error message
  String message ;
  bool perCentFound = false ;
  const String searchErrorMessage (in_K_ErrorMessage) ;
  const int32_t errorMessageLength = searchErrorMessage.length () ;
  for (int32_t i=0 ; i<errorMessageLength ; i++) {
    const utf32 c = searchErrorMessage (i COMMA_HERE) ;
    if (perCentFound) {
      if (UNICODE_VALUE (c) == 'K') {
        message += key ;
      }
      perCentFound = false ;
    }else if (UNICODE_VALUE (c) == '%') {
      perCentFound = true ;
    }else{
      message.appendUnicodeCharacter (c COMMA_HERE) ;
    }
  }
//--- Add nearest keys, if any
  TC_Array <C_FixItDescription> fixItArray ;
  for (int32_t i=0 ; i<ioNearestKeyArray.count () ; i++) {
    fixItArray.appendObject (C_FixItDescription (kFixItReplace, ioNearestKeyArray (i COMMA_HERE))) ;
  }
//--- Emit error message
  const GALGAS_location key_location = inKey.mProperty_location ;
  semanticErrorAtLocation (key_location, message, fixItArray COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void C_Compiler::semanticErrorWith_K_L_message (const GALGAS_lstring & inKey,
                                                const char * in_K_L_ErrorMessage,
                                                const GALGAS_location & inExistingKeyLocation
                                                COMMA_LOCATION_ARGS) {
  const String key = inKey.mProperty_string.stringValue () ;
//--- Build error message
  String message ;
  bool perCentFound = false ;
  const String searchErrorMessage (in_K_L_ErrorMessage) ;
  const int32_t errorMessageLength = searchErrorMessage.length () ;
  for (int32_t i=0 ; i<errorMessageLength ; i++) {
    const utf32 c = searchErrorMessage (i COMMA_HERE) ;
    if (perCentFound) {
      if (UNICODE_VALUE (c) == 'K') {
        message += key ;
      }else if (UNICODE_VALUE (c) == 'L') {
        if (!inExistingKeyLocation.isValid ()) {
          message += "<<unknown>>" ;
        }else if (inExistingKeyLocation.getter_isNowhere (HERE).boolEnum () == kBoolTrue) {
          message += "<<unknown>>" ;
        }else{
          message += inExistingKeyLocation.getter_startLocationString (this COMMA_THERE).stringValue () ;
        }
      }
      perCentFound = false ;
    }else if (UNICODE_VALUE (c) == '%') {
      perCentFound = true ;
    }else{
      message.appendUnicodeCharacter (c COMMA_HERE) ;
    }
  }
//--- Emit error message
  const GALGAS_location key_location = inKey.mProperty_location ;
  semanticErrorAtLocation (key_location, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void C_Compiler::semanticWarningWith_K_L_message (const GALGAS_lstring & inKey,
                                                  const char * in_K_L_ErrorMessage,
                                                  const GALGAS_location & inExistingKeyLocation
                                                  COMMA_LOCATION_ARGS) {
  const String key = inKey.mProperty_string.stringValue () ;
//--- Build error message
  String message ;
  bool perCentFound = false ;
  const String searchErrorMessage (in_K_L_ErrorMessage) ;
  const int32_t errorMessageLength = searchErrorMessage.length () ;
  for (int32_t i=0 ; i<errorMessageLength ; i++) {
    const utf32 c = searchErrorMessage (i COMMA_HERE) ;
    if (perCentFound) {
      if (UNICODE_VALUE (c) == 'K') {
        message += key ;
      }else if (UNICODE_VALUE (c) == 'L') {
        message += inExistingKeyLocation.getter_startLocationString (this COMMA_THERE).stringValue () ;
      }
      perCentFound = false ;
    }else if (UNICODE_VALUE (c) == '%') {
      perCentFound = true ;
    }else{
      message.appendUnicodeCharacter (c COMMA_HERE) ;
    }
  }
//--- Emit error message
  const GALGAS_location key_location = inKey.mProperty_location ;
  semanticWarningAtLocation (key_location, message COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS Warnings
#endif

//--------------------------------------------------------------------------------------------------

void C_Compiler::semanticWarningAtLocation (const GALGAS_location & inWarningLocation,
                                            const String & inWarningMessage
                                            COMMA_LOCATION_ARGS) {
  if (inWarningLocation.isValid ()) { // No warning raised if not built
    if (!inWarningLocation.sourceText ().isValid ()) {
      signalRunTimeWarning (this, inWarningMessage COMMA_THERE) ;
    }else{
      signalSemanticWarning (this,
                             inWarningLocation.sourceText (),
                             C_IssueWithFixIt (inWarningLocation.startLocation (), inWarningLocation.endLocation (), TC_Array <C_FixItDescription> ()),
                             inWarningMessage
                             COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void C_Compiler::emitSemanticWarning (const GALGAS_location & inWarningLocation,
                                      const GALGAS_string & inWarningMessage,
                                      const TC_Array <C_FixItDescription> & inFixItArray
                                      COMMA_LOCATION_ARGS) {
  if (inWarningLocation.isValid () && inWarningMessage.isValid ()) {
    const String warningMessage = inWarningMessage.stringValue () ;
    if (!inWarningLocation.sourceText ().isValid ()) {
      signalRunTimeWarning (this, warningMessage COMMA_THERE) ;
    }else{
      signalSemanticWarning (this,
                             inWarningLocation.sourceText (),
                             C_IssueWithFixIt (inWarningLocation.startLocation (), inWarningLocation.endLocation (), inFixItArray),
                             warningMessage
                             COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Run Time Error
#endif

//--------------------------------------------------------------------------------------------------

void C_Compiler::onTheFlyRunTimeError (const String & inRunTimeErrorMessage
                                       COMMA_LOCATION_ARGS) {
  signalRunTimeError (this, inRunTimeErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark here, next
#endif

//--------------------------------------------------------------------------------------------------

GALGAS_location C_Compiler::here (void) const {
  return GALGAS_location (mStartLocationForHere, mEndLocationForHere, mSourceText) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location C_Compiler::separator (void) const {
  return GALGAS_location (mEndLocationForHere, mStartLocationForNext, mSourceText) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location C_Compiler::next (void) const {
  return GALGAS_location (mStartLocationForNext, mEndLocationForNext, mSourceText) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Check And Generate File
#endif

//--------------------------------------------------------------------------------------------------
//
//   C H E C K    A N D    G E N E R A T E   F I L E
//
//--------------------------------------------------------------------------------------------------

static const char START_OF_USER_ZONE_1 [] =  "--- START OF USER ZONE 1\n" ;
static const char END_OF_USER_ZONE_1   [] =  "--- END OF USER ZONE 1\n" ;
static const char START_OF_USER_ZONE_2 [] =  "--- START OF USER ZONE 2\n" ;
static const char END_OF_USER_ZONE_2   [] =  "--- END OF USER ZONE 2\n" ;

//--------------------------------------------------------------------------------------------------

void C_Compiler::generateFile (const String & inLineCommentPrefix,
                               const TC_UniqueArray <String> & inDirectoriesToExclude,
                               const String & inFileName,
                               const String & inHeader,
                               const String & inDefaultUserZone1,
                               const String & inGeneratedZone2,
                               const String & inDefaultUserZone2,
                               const String & inGeneratedZone3,
                               const bool inMakeExecutable) {
  generateFileWithPatternFromPathes (sourceFilePath ().stringByDeletingLastPathComponent (),
                          inDirectoriesToExclude,
                          inLineCommentPrefix,
                          inFileName,
                          inHeader,
                          inDefaultUserZone1,
                          inGeneratedZone2,
                          inDefaultUserZone2,
                          inGeneratedZone3,
                          inMakeExecutable) ;
}

//--------------------------------------------------------------------------------------------------

void C_Compiler::generateFileFromPathes (const String & inStartPath,
                                         const TC_UniqueArray <String> & inDirectoriesToExclude,
                                         const String & inFileName,
                                         const String & inContents) {
//--- Verbose option ?
  const bool verboseOptionOn = verboseOutput () ;
//--- Start path : by default, use source file directory
  const String startPath = (inStartPath.length () == 0)
   ? sourceFilePath ().stringByDeletingLastPathComponent ()
   : inStartPath ;
//--- Search file in directory
  const String fullPathName = C_FileManager::findFileInDirectory (startPath, inFileName, inDirectoriesToExclude) ;
  if (fullPathName.length () == 0) {
  //--- File does not exist : create it
    String fileName = startPath ;
    fileName.appendString ("/") ;
    fileName.appendString (inFileName) ;
    const String directory = fileName.stringByDeletingLastPathComponent () ;
    C_FileManager::makeDirectoryIfDoesNotExist (directory) ;
    if (performGeneration ()) {
      C_TextFileWrite f (fileName) ;
      bool ok = f.isOpened () ;
      if (! ok) {
        String message ;
        message += "Cannot open '" ;
        message += fileName ;
        message += "' file in write mode." ;
        onTheFlySemanticError (message COMMA_HERE) ;
      }
      f += inContents ;
      if (verboseOptionOn) {
        ggs_printFileOperationSuccess (String ("Created '") + fileName + "'.\n") ;
      }
    }else{
      ggs_printWarning (this, C_SourceTextInString(), C_IssueWithFixIt (), String ("Need to create '") + fileName + "'.\n" COMMA_HERE) ;
    }
  }else{
    const String previousContents = C_FileManager::stringWithContentOfFile (fullPathName) ;
    const bool same = previousContents == inContents ;
    if (! same) {
      if (performGeneration ()) {
        C_TextFileWrite f (fullPathName) ;
        if (! f.isOpened ()) {
          String message ;
          message += "Cannot open '" ;
          message += fullPathName ;
          message += "' file in write mode." ;
          onTheFlySemanticError (message COMMA_HERE) ;
        }else{
          f += inContents ;
          if (verboseOptionOn) {
            ggs_printFileOperationSuccess (String ("Replaced '") + fullPathName + "'.\n") ;
          }
        }
      }else{
        ggs_printWarning (this, C_SourceTextInString (), C_IssueWithFixIt (), String ("Need to replace '") + fullPathName + "'.\n" COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void C_Compiler::generateFileWithPatternFromPathes (
  const String & inStartPath,
  const TC_UniqueArray <String> & inDirectoriesToExclude,
  const String & inLineCommentPrefix,
  const String & inFileName,
  const String & inHeader,
  const String & inDefaultUserZone1,
  const String & inGeneratedZone2,
  const String & inDefaultUserZone2,
  const String & inGeneratedZone3,
  const bool inMakeExecutable
) {
//--- Verbose option ?
  const bool verboseOptionOn = verboseOutput () ;
//--- User zones
  const String kSTART_OF_USER_ZONE_1 = String (inLineCommentPrefix) + START_OF_USER_ZONE_1 ;
  const String kEND_OF_USER_ZONE_1   = String (inLineCommentPrefix) + END_OF_USER_ZONE_1 ;
  const String kSTART_OF_USER_ZONE_2 = String (inLineCommentPrefix) + START_OF_USER_ZONE_2 ;
  const String kEND_OF_USER_ZONE_2   = String (inLineCommentPrefix) + END_OF_USER_ZONE_2 ;
//--- Start path : by default, use source file directory
  const String startPath = (inStartPath.length () == 0)
    ? sourceFilePath ().stringByDeletingLastPathComponent ()
    : inStartPath
  ;
//--- Search file in directory
  const String fullPathName = C_FileManager::findFileInDirectory (startPath, inFileName, inDirectoriesToExclude) ;
  if (fullPathName.length () == 0) {
  //--- File does not exist : create it
    String fileName = startPath ;
    fileName.appendString ("/") ;
    fileName.appendString (inFileName) ;
    const String directory = fileName.stringByDeletingLastPathComponent () ;
    C_FileManager::makeDirectoryIfDoesNotExist (directory) ;
    if (performGeneration ()) {
      C_TextFileWrite f (fileName) ;
      bool ok = f.isOpened () ;
      if (! ok) {
        String message ;
        message += "Cannot open '" ;
        message += fileName ;
        message += "' file in write mode." ;
        onTheFlySemanticError (message COMMA_HERE) ;
      }
      f += inHeader ;
      f += kSTART_OF_USER_ZONE_1 ;
      f += inDefaultUserZone1 ;
      f += kEND_OF_USER_ZONE_1 ;
      f += inGeneratedZone2 ;
      f += kSTART_OF_USER_ZONE_2 ;
      f += inDefaultUserZone2 ;
      f += kEND_OF_USER_ZONE_2 ;
      f += inGeneratedZone3 ;
      if (verboseOptionOn) {
        ggs_printFileCreationSuccess (String ("Created '") + fileName + "'.\n") ;
      }

      f.close () ;
      if (inMakeExecutable) {
        #if COMPILE_FOR_WINDOWS == 0
          struct stat fileStat ;
          ::stat (fileName.cString (HERE), & fileStat) ;
          ::chmod (fileName.cString (HERE), fileStat.st_mode | S_IXUSR | S_IXGRP | S_IXOTH) ;
        #endif
      }
    }else{
      ggs_printWarning (this, C_SourceTextInString (), C_IssueWithFixIt (), String ("Need to create '") + fileName + "'.\n" COMMA_HERE) ;
    }
  }else{
    String firstUserPart ;
    String secondUserPart ;
    String firstGeneratedPart ;
    String secondGeneratedPart ;
    logFileRead (fullPathName) ;
    String s = C_FileManager::stringWithContentOfFile (fullPathName) ;
    TC_UniqueArray <String> stringArray ;
    s.componentsSeparatedByString (kSTART_OF_USER_ZONE_1, stringArray) ;
    String header ;
    bool ok = stringArray.count () == 2 ;
    if (ok) {
      header = stringArray (0 COMMA_HERE) ;
      s = stringArray (1 COMMA_HERE) ;
      s.componentsSeparatedByString (kEND_OF_USER_ZONE_1, stringArray) ;
      ok = stringArray.count () == 2 ;
    }
    if (ok) {
      firstUserPart = stringArray (0 COMMA_HERE) ;
      s = stringArray (1 COMMA_HERE) ;
      s.componentsSeparatedByString (kSTART_OF_USER_ZONE_2, stringArray) ;
      ok = stringArray.count () == 2 ;
    }
    if (ok) {
      firstGeneratedPart = stringArray (0 COMMA_HERE) ;
      s = stringArray (1 COMMA_HERE) ;
      s.componentsSeparatedByString (kEND_OF_USER_ZONE_2, stringArray) ;
      ok = stringArray.count () == 2 ;
    }
    if (ok) {
      secondUserPart = stringArray (0 COMMA_HERE) ;
      secondGeneratedPart = stringArray (1 COMMA_HERE) ;
    }
    if (! ok) {
      ggs_printError (this, C_SourceTextInString (), C_IssueWithFixIt (), String ("BAD FILE '") + fullPathName + "'.\n" COMMA_HERE) ;
    }else if ((header == inHeader) && (firstGeneratedPart == inGeneratedZone2) && (secondGeneratedPart == inGeneratedZone3)) {
    }else if (performGeneration ()) {
      C_TextFileWrite f (fullPathName) ;
      ok = f.isOpened () ;
      if (! ok) {
        String message ;
        message += "Cannot open '" ;
        message += fullPathName ;
        message += "' file in write mode." ;
        onTheFlySemanticError (message COMMA_HERE) ;
      }
      f += inHeader ;
      f += kSTART_OF_USER_ZONE_1 ;
      f += firstUserPart ;
      f += kEND_OF_USER_ZONE_1 ;
      f += inGeneratedZone2 ;
      f += kSTART_OF_USER_ZONE_2 ;
      f += secondUserPart ;
      f += kEND_OF_USER_ZONE_2 ;
      f += inGeneratedZone3 ;
      if (verboseOptionOn) {
        ggs_printFileOperationSuccess (String ("Replaced '") + fullPathName + "'.\n") ;
      }
      f.close () ;
      if (inMakeExecutable) {
        #if COMPILE_FOR_WINDOWS == 0
          struct stat fileStat ;
          ::stat (fullPathName.cString (HERE), & fileStat) ;
          ::chmod (fullPathName.cString (HERE), fileStat.st_mode | S_IXUSR | S_IXGRP | S_IXOTH) ;
        #endif
      }
    }else{
      ggs_printWarning (this, C_SourceTextInString (), C_IssueWithFixIt (), String ("Need to replace '") + fullPathName + "'.\n" COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
