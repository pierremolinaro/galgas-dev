//--------------------------------------------------------------------------------------------------
//
//  'GALGAS_string' : class of galgas string
//
//  This file is part of libpm library
//
//  Copyright (C) 1996, ..., 2023 Pierre Molinaro.
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

#include "all-predefined-types.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/Compiler.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "strings/unicode_character_cpp.h"
#include "galgas2/C_galgas_io.h"
#include "files/C_FileManager.h"
#include "files/C_BinaryFileWrite.h"
#include "galgas2/F_verbose_output.h"

//--------------------------------------------------------------------------------------------------

#include <math.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <iostream>
#include <sys/types.h>

//--------------------------------------------------------------------------------------------------

#ifndef COMPILE_FOR_WINDOWS
  #error COMPILE_FOR_WINDOWS is undefined
#endif

#if COMPILE_FOR_WINDOWS == 0
  #include <pwd.h>
#endif

#if COMPILE_FOR_WINDOWS == 1
  #include <Shlobj.h>
#endif

//--------------------------------------------------------------------------------------------------
//
//     C++ Management
//
//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark C++ Management
#endif

//--------------------------------------------------------------------------------------------------

GALGAS_string::GALGAS_string (void) :
AC_GALGAS_root (),
mIsValid (false),
mString () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_string::GALGAS_string (const String & inString) :
AC_GALGAS_root (),
mIsValid (true),
mString (inString) {
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::drop (void) {
  mIsValid = false ;
  mString.releaseString () ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::makeEmptyString (void) {
  GALGAS_string result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_string::objectCompare (const GALGAS_string & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mString.compare (inOperand.mString) ;
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------

void GALGAS_string::description (String & ioString,
                                 const int32_t /* inIndentation */) const {
  ioString.addString ("<@string:") ;
  if (isValid ()) {
    ioString.addString ("\"") ;
    ioString.addString (mString) ;
    ioString.addString ("\"") ;
  }else{
    ioString.addString ("not built") ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     Constructors
//
//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Constructors
#endif

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_stringByRepeatingString (const GALGAS_string & inString,
                                                                  const GALGAS_uint & inCount
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result ;
  if (inString.isValid () && inCount.isValid ()) {
    String s ;
    for (uint32_t i=0 ; i<inCount.uintValue () ; i++) {
      s.addString (inString.stringValue ()) ;
    }
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_newWithStdIn (UNUSED_LOCATION_ARGS) {
  return GALGAS_string (String::newWithStdIn ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_CppChar (const GALGAS_char & inCharacter
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result ;
  if (inCharacter.isValid ()) {
    String s ;
    s.addStringAsCLiteralCharConstant (inCharacter.charValue ()) ;
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_CppLineComment (UNUSED_LOCATION_ARGS) {
  String s ; s.addCppHyphenLineComment () ;
  return GALGAS_string (s) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_CppTitleComment (const GALGAS_string & inTitle
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result ;
  if (inTitle.isValid ()) {
    String s ;
    s.addCppTitleComment (inTitle.mString) ;
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_CppSpaceComment (UNUSED_LOCATION_ARGS) {
  String s ; s.addCppSpaceLineComment () ;
  return GALGAS_string (s) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_CppString (const GALGAS_string & inString
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result ;
  if (inString.isValid ()) {
    String s ;
    s.addStringAsCLiteralStringConstant (inString.mString) ;
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#if COMPILE_FOR_WINDOWS == 0
  GALGAS_string GALGAS_string::constructor_homeDirectory (UNUSED_LOCATION_ARGS) {
    return GALGAS_string (getpwuid (getuid ())->pw_dir) ;
  }
#endif

#if COMPILE_FOR_WINDOWS == 1
  GALGAS_string GALGAS_string::constructor_homeDirectory (UNUSED_LOCATION_ARGS) {
    char path [MAX_PATH] ;
    SHGetFolderPath (nullptr, CSIDL_PROFILE, nullptr, 0, path) ;
    return GALGAS_string (path).getter_unixPathWithNativePath (HERE) ;
  }
#endif

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_stringWithSequenceOfCharacters (const GALGAS_char & inCharacter,
                                                                         const GALGAS_uint & inCount
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result ;
  if ((inCount.isValid ()) && (inCharacter.isValid ())) {
    const utf32 character = inCharacter.charValue () ;
    String s ;
    for (uint32_t i=0 ; i<inCount.uintValue () ; i++) {
      s.addUnicodeChar (character COMMA_HERE) ;
    }
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_stringWithSourceFilePath (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_string (inCompiler->sourceFilePath ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_stringWithContentsOfFile (const GALGAS_string & inFilePath,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (inFilePath.isValid ()) {
    inCompiler->logFileRead (inFilePath.mString) ;
    if (C_FileManager::fileExistsAtPath (inFilePath.mString)) {
      result = GALGAS_string (C_FileManager::stringWithContentOfFile (inFilePath.mString)) ;
    }else{
      String message ;
      message.addString ("cannot read '") ;
      message.addString (inFilePath.mString) ;
      message.addString ("' file (does not exist)") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_stringWithCurrentDirectory (UNUSED_LOCATION_ARGS) {
  return GALGAS_string (C_FileManager::currentDirectory ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_stringWithEnvironmentVariable (const GALGAS_string & inEnvironmentVariableName,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (inEnvironmentVariableName.isValid ()) {
    const char * value = ::getenv (inEnvironmentVariableName.mString.cString (HERE)) ;
    if (value == nullptr) {
      String message ;
      message.addString ("the '") ;
      message.addString (inEnvironmentVariableName.mString) ;
      message.addString ("' environment variable does not exist") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = GALGAS_string (value) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_stringWithEnvironmentVariableOrEmpty (const GALGAS_string & inEnvironmentVariableName
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result ;
  if (inEnvironmentVariableName.isValid ()) {
    const char * value = ::getenv (inEnvironmentVariableName.mString.cString (HERE)) ;
    result = GALGAS_string (value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_componentsJoinedByString (const GALGAS_stringlist & inComponents,
                                                                   const GALGAS_string & inSeparator
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result ;
  if ((inComponents.isValid ()) && (inSeparator.isValid ())) {
    bool first = true ;
    String s ;
    cEnumerator_stringlist current (inComponents, kENUMERATION_UP) ;
    while (current.hasCurrentObject ()) {
      if (first) {
        first = false ;
      }else{
        s.addString (inSeparator.mString) ;
      }
      s.addString (current.current_mValue (HERE).mString) ;
      current.gotoNextObject () ;
    }
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_stringWithCurrentDateTime (UNUSED_LOCATION_ARGS) {
  time_t currentTime = ::time (nullptr) ;
  struct tm currentTimeTM ;
  #if COMPILE_FOR_WINDOWS == 0
   ::localtime_r (&currentTime, &currentTimeTM) ; // Mac, Linux
  #else
   ::localtime_s (&currentTimeTM, &currentTime) ; // Windows
  #endif
  char timeString [128] ;
  bool ok = currentTime >= 0 ;
  if (ok) {
    ::strftime (timeString, sizeof (timeString), "Www Mmm dd hh:mm:ss yyyy", & currentTimeTM) ;
//    timeString = ::ctime (& currentTime) ;
//    ok = timeString != nullptr ;
//    if (ok) {
//      const size_t length = ::strlen (timeString) ;
//      ok = length > 0 ;
//      if (ok) {
//        timeString [length - 1] = '\0' ; // Suppress trailing '\n'
//      }
//    }
  }
  return GALGAS_string (ok ? timeString : "") ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_retrieveAndResetTemplateString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  return inCompiler->retrieveAndResetTemplateString () ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_separatorString (Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  return inCompiler->separatorString () ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::constructor_stringWithSymbolicLinkContents (const GALGAS_string & inSymbolicLink,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (inSymbolicLink.isValid ()) {
    bool ok = false ;
    const String r = C_FileManager::stringWithSymbolicLinkContents (inSymbolicLink.mString, ok) ;
    if (ok) {
      result = GALGAS_string (r) ;
    }else{
      String s ;
      s.addString ("'@string stringWithSymbolicLinkContents' error; receiver's value '") ;
      s.addString (inSymbolicLink.mString) ;
      s.addString ("' is not a symbolic link") ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     Operators
//
//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Operators
#endif

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::add_operation (const GALGAS_string & inOperand2,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GALGAS_string (mString + inOperand2.mString) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::plusAssign_operation (GALGAS_string inOperand,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mString.addString (inOperand.mString) ;
  }else{
    drop () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//     Getters
//
//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Getters
#endif

//--------------------------------------------------------------------------------------------------
//
//     Methods
//
//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Methods
#endif

//--------------------------------------------------------------------------------------------------

void GALGAS_string::method_makeDirectory (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const bool ok = C_FileManager::makeDirectoryIfDoesNotExist (mString) ;
  if (! ok) {
    String message ;
    message.addString ("cannot create '") ;
    message.addString (mString) ;
    message.addString ("' directory") ;
    inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::method_makeDirectoryAndWriteToFile (GALGAS_string inFilePath,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (isValid () && inFilePath.isValid ()) {
  //--- Make directory
    const String directory = inFilePath.mString.stringByDeletingLastPathComponent () ;
    bool ok = C_FileManager::makeDirectoryIfDoesNotExist (directory) ;
    if (! ok) {
      String message = "cannot create '" ;
      message.addString (directory) ;
      message.addString ("' directory") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      method_writeToFile (inFilePath, inCompiler COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::method_makeDirectoryAndWriteToExecutableFile (GALGAS_string inFilePath,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (isValid () && inFilePath.isValid ()) {
  //--- Make directory
    const String directory = inFilePath.mString.stringByDeletingLastPathComponent () ;
    bool ok = C_FileManager::makeDirectoryIfDoesNotExist (directory) ;
    if (! ok) {
      String message = "cannot create '" ;
      message.addString (directory) ;
      message.addString ("' directory") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      method_writeToExecutableFile (inFilePath, inCompiler COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::method_writeToFile (GALGAS_string inFilePath,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (isValid () && inFilePath.isValid ()) {
    if (Compiler::performGeneration ()) {
      const bool fileAlreadyExists = C_FileManager::fileExistsAtPath (inFilePath.mString) ;
      const bool verboseOptionOn = verboseOutput () ;
      const bool ok = C_FileManager::writeStringToFile (mString, inFilePath.mString) ;
      if (ok && verboseOptionOn && fileAlreadyExists) {
        ggs_printFileOperationSuccess (String ("Replaced '") + inFilePath.mString + "'.\n") ;
      }else if (ok && verboseOptionOn && ! fileAlreadyExists) {
        ggs_printFileCreationSuccess (String ("Created '") + inFilePath.mString + "'.\n") ;
      }else if (! ok) {
        String message = "cannot write '" ;
        message.addString (inFilePath.mString) ;
        message.addString ("' file") ;
        inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
      }
    }else{
      ggs_printWarning (inCompiler, SourceTextInString (), C_IssueWithFixIt (), String ("Need to write '") + inFilePath.mString + "'." COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::method_writeToFileWhenDifferentContents (GALGAS_string inFilePath,
                                                             GALGAS_bool & outFileWritten,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (isValid () && inFilePath.isValid ()) {
    bool needToWrite = true ;
    const bool fileAlreadyExists = C_FileManager::fileExistsAtPath (inFilePath.mString) ;
    if (fileAlreadyExists) {
      inCompiler->logFileRead (inFilePath.mString) ;
      const String readContents = C_FileManager::stringWithContentOfFile (inFilePath.mString) ;
      needToWrite = mString.compare (readContents) != 0 ;
    }
    outFileWritten = GALGAS_bool (needToWrite) ;
    if (needToWrite) {
      if (Compiler::performGeneration ()) {
        const bool verboseOptionOn = verboseOutput () ;
        bool ok = C_FileManager::makeDirectoryIfDoesNotExist (inFilePath.mString.stringByDeletingLastPathComponent ()) ;
        if (! ok) {
          String message = "cannot create '" ;
          message.addString (inFilePath.mString) ;
          message.addString ("' directory") ;
          inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
          outFileWritten.drop () ;
        }else{
          ok = C_FileManager::writeStringToFile (mString, inFilePath.mString) ;
          if (ok && verboseOptionOn && fileAlreadyExists) {
            ggs_printFileOperationSuccess (String ("Replaced '") + inFilePath.mString + "'.\n") ;
          }else if (ok && verboseOptionOn && ! fileAlreadyExists) {
            ggs_printFileCreationSuccess (String ("Created '") + inFilePath.mString + "'.\n") ;
          }else if (! ok) {
            String message = "cannot write '" ;
            message.addString (inFilePath.mString) ;
            message.addString ("' file") ;
            inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
            outFileWritten.drop () ;
          }
        }
      }else{
        ggs_printWarning (inCompiler, SourceTextInString (), C_IssueWithFixIt (), String ("Need to write '") + inFilePath.mString + "'." COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::method_writeToExecutableFile (GALGAS_string inFilePath,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (isValid () && inFilePath.isValid ()) {
    const bool fileAlreadyExists = C_FileManager::fileExistsAtPath (inFilePath.mString) ;
    if (Compiler::performGeneration ()) {
      const bool verboseOptionOn = verboseOutput () ;
      const bool ok = C_FileManager::writeStringToExecutableFile (mString, inFilePath.mString) ;
      if (ok && verboseOptionOn && fileAlreadyExists) {
        ggs_printFileOperationSuccess (String ("Replaced '") + inFilePath.mString + "'.\n") ;
      }else if (ok && verboseOptionOn && ! fileAlreadyExists) {
        ggs_printFileCreationSuccess (String ("Created '") + inFilePath.mString + "'.\n") ;
      }else if (! ok) {
        String message = "cannot write '" ;
        message.addString (inFilePath.mString) ;
        message.addString ("' file") ;
        inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
      }
    }else{
      ggs_printWarning (inCompiler, SourceTextInString (), C_IssueWithFixIt (), String ("Need to write '") + inFilePath.mString + "'." COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::method_writeToExecutableFileWhenDifferentContents (GALGAS_string inFilePath,
                                                                       GALGAS_bool & outFileWritten,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (isValid () && inFilePath.isValid ()) {
    bool needToWrite = true ;
    const bool fileAlreadyExists = C_FileManager::fileExistsAtPath (inFilePath.mString) ;
    if (fileAlreadyExists) {
      inCompiler->logFileRead (inFilePath.mString) ;
      const String readContents = C_FileManager::stringWithContentOfFile (inFilePath.mString) ;
      needToWrite = mString.compare (readContents) != 0 ;
    }
    outFileWritten = GALGAS_bool (needToWrite) ;
    if (needToWrite) {
      if (Compiler::performGeneration ()) {
        const bool verboseOptionOn = verboseOutput () ;
        bool ok = C_FileManager::makeDirectoryIfDoesNotExist (inFilePath.mString.stringByDeletingLastPathComponent ()) ;
        if (! ok) {
          String message = "cannot create '" ;
          message.addString (inFilePath.mString) ;
          message.addString ("' directory") ;
          inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
          outFileWritten.drop () ;
        }else{
          ok = C_FileManager::writeStringToExecutableFile (mString, inFilePath.mString) ;
          if (ok && verboseOptionOn && fileAlreadyExists) {
            ggs_printFileOperationSuccess (String ("Replaced '") + inFilePath.mString + "'.\n") ;
          }else if (ok && verboseOptionOn && ! fileAlreadyExists) {
            ggs_printFileCreationSuccess (String ("Created '") + inFilePath.mString + "'.\n") ;
          }else if (! ok) {
            String message = "cannot write '" ;
            message.addString (inFilePath.mString) ;
            message.addString ("' file") ;
            inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
            outFileWritten.drop () ;
          }
        }
      }else{
        ggs_printWarning (inCompiler, SourceTextInString (), C_IssueWithFixIt (), String ("Need to write '") + inFilePath.mString + "'." COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::method_makeSymbolicLinkWithPath (GALGAS_string inPath,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (isValid () && inPath.isValid ()) {
    const bool ok = C_FileManager::makeSymbolicLinkWithPath (inPath.mString, mString) ;
    if (! ok) {
        String s = "'@string makeSymbolicLinkWithPath' error; cannot make a symbolic link with receiver's value '" ;
        s.addString (mString) ;
        s.addString ("' and path given '") ;
        s.addString (inPath.mString) ;
        s.addString ("' by argument's value") ;
        inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//     Setters
//
//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Setters
#endif

//--------------------------------------------------------------------------------------------------

void GALGAS_string::setter_appendSpacesUntilColumn (GALGAS_uint inColumnIndex,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inColumnIndex.isValid ()) {
    mString.appendSpacesUntilColumn (inColumnIndex.uintValue ()) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::setter_setCapacity (GALGAS_uint inNewCapacity,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inNewCapacity.isValid ()) {
    if (inNewCapacity.uintValue () <= ((uint32_t) INT32_MAX)) {
      mString.setCapacity (inNewCapacity.uintValue ()) ;
    }else{
      String message = "setCapacity argument value (" ;
      message.addUnsigned (inNewCapacity.uintValue ()) ;
      message.addString (") too large (should be <= 2**31-1)") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::setter_incIndentation (GALGAS_uint inIndentation,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inIndentation.isValid ()) {
    mString.incIndentation ((int32_t) inIndentation.uintValue ()) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::setter_decIndentation (GALGAS_uint inIndentation,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inIndentation.isValid ()) {
    mString.incIndentation (- ((int32_t) inIndentation.uintValue ())) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::setter_setCharacterAtIndex (GALGAS_char inCharacter,
                                                GALGAS_uint inIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && (inCharacter.isValid ()) && (inIndex.isValid ())) {
    const int32_t idx = (int32_t) inIndex.uintValue () ;
    const int32_t stringLength = mString.length () ;
    if (idx >= stringLength) {
      String message = "string index (" ;
      message.addSigned (idx) ;
      message.addString (") too large (string length: ") ;
      message.addSigned (stringLength) ;
      message.addString (")") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      mString.setUnicodeCharacterAtIndex (inCharacter.charValue (), idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::setter_insertCharacterAtIndex (GALGAS_char inCharacter,
                                                   GALGAS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && (inCharacter.isValid ()) && (inIndex.isValid ())) {
    const int32_t idx = (int32_t) inIndex.uintValue () ;
    const int32_t stringLength = mString.length () ;
    if (idx > stringLength) {
      String message = "string index (" ;
      message.addSigned (idx) ;
      message.addString (") too large (string length: ") ;
      message.addSigned (stringLength) ;
      message.addString (")") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      mString.insertCharacterAtIndex (inCharacter.charValue (), idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::setter_removeCharacterAtIndex (GALGAS_char & outChar,
                                                   GALGAS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  outChar.drop () ;
  if (isValid () && (inIndex.isValid ())) {
    const int32_t idx = (int32_t) inIndex.uintValue () ;
    const int32_t stringLength = mString.length () ;
    if (idx >= stringLength) {
      String message = "string index (" ;
      message.addSigned (idx) ;
      message.addString (") too large (string length: ") ;
      message.addSigned (stringLength) ;
      message.addString (")") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      outChar = GALGAS_char (mString (idx COMMA_HERE)) ;
      mString.suppress (idx, 1 COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//     Type methods
//
//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Type methods
#endif


//--------------------------------------------------------------------------------------------------

void GALGAS_string::class_method_deleteFile (GALGAS_string inFilePath,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    if (! Compiler::performGeneration ()) {
      ggs_printWarning (inCompiler, SourceTextInString (), C_IssueWithFixIt (), String ("Need to delete '") + inFilePath.mString + "'.\n" COMMA_THERE) ;
    }else if (inFilePath.mString.length () == 0) {
      inCompiler->onTheFlyRunTimeError ("cannot perform file delete: file name is an empty string" COMMA_THERE) ;
    }else{
      const String errorMessage = C_FileManager::deleteFile (inFilePath.mString) ;
      if (errorMessage.length () == 0) {
        ggs_printFileOperationSuccess (String ("Deleted '") + inFilePath.mString + "'.\n") ;
      }else{
        String message = "cannot perform delete '" ;
        message.addString (inFilePath.mString) ;
        message.addString ("' file: ") ;
        message.addString (errorMessage) ;
        inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::class_method_deleteFileIfExists (GALGAS_string inFilePath,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if ((inFilePath.isValid ()) && C_FileManager::fileExistsAtPath (inFilePath.mString)) {
    class_method_deleteFile (inFilePath, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::class_method_removeEmptyDirectory (GALGAS_string inDirectoryPath,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (inDirectoryPath.isValid ()) {
    if (! Compiler::performGeneration ()) {
      ggs_printWarning (inCompiler, SourceTextInString (), C_IssueWithFixIt (), String ("Need to remove directory '") + inDirectoryPath.mString + "'.\n" COMMA_THERE) ;
    }else if (inDirectoryPath.mString.length () == 0) {
      inCompiler->onTheFlyRunTimeError ("cannot perform directory removing: directory path is an empty string" COMMA_THERE) ;
    }else{
      const String errorMessage = C_FileManager::removeDirectory (inDirectoryPath.mString) ;
      if (errorMessage.length () > 0) {
        String message = "cannot perform directory removing: " ;
        message.addString (errorMessage) ;
        inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

static String recursiveRemoveDirectory (const String & inUnixDirectoryPath) {
  String result ;
  const String nativeStartPath = C_FileManager::nativePathWithUnixPath (inUnixDirectoryPath) ;
  DIR * dir = ::opendir (nativeStartPath.cString (HERE)) ;
  if (dir != nullptr) {
    struct dirent  * current = readdir (dir) ;
    while ((current != nullptr) && (result.length () == 0)) {
      if ((strcmp (current->d_name, ".") != 0) && (strcmp (current->d_name, "..") != 0)) {
        String name = nativeStartPath ;
        name.addString ("/") ;
        name.addString (current->d_name) ;
        if (C_FileManager::directoryExistsWithNativePath (name)) {
          recursiveRemoveDirectory (name) ;
        }else if (C_FileManager::fileExistsAtPath (name)) {
          result = C_FileManager::deleteFile (name) ;
        }
      }
      current = readdir (dir) ;
    }
    closedir (dir) ;
  }
  if (result.length () == 0) {
    result = C_FileManager::removeDirectory (inUnixDirectoryPath) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::class_method_removeDirectoryRecursively (GALGAS_string inDirectoryPath,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (inDirectoryPath.isValid ()) {
    if (! Compiler::performGeneration ()) {
      ggs_printWarning (inCompiler, SourceTextInString (), C_IssueWithFixIt (), String ("Need to remove directory '") + inDirectoryPath.mString + "'.\n" COMMA_THERE) ;
    }else if (inDirectoryPath.mString.length () == 0) {
      inCompiler->onTheFlyRunTimeError ("cannot perform directory removing: directory path is an empty string" COMMA_THERE) ;
    }else{
      String errorMessage = recursiveRemoveDirectory (inDirectoryPath.mString) ;
      if (errorMessage.length () > 0) {
        String message = "cannot perform directory removing: " ;
        message.addString (errorMessage) ;
        inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

static bool writeFile (const String & inMessage,
                       const String & inFullPathName,
                       const C_Data & inCurrentData,
                       Compiler * inCompiler) {
  bool ok = true ;
  if (inCompiler->performGeneration ()) {
    const bool verboseOptionOn = verboseOutput () ;
    const String directory = inFullPathName.stringByDeletingLastPathComponent () ;
    C_FileManager::makeDirectoryIfDoesNotExist (directory) ;
    C_BinaryFileWrite binaryFile (inFullPathName) ;
    ok = binaryFile.isOpened () ;
    if (! ok) {
      String message = "Cannot open '" ;
      message.addString (inFullPathName) ;
      message.addString ("' file in write mode.") ;
      inCompiler->onTheFlySemanticError (message COMMA_HERE) ;
    }
    binaryFile.appendData (inCurrentData) ;
  //--- Close file
    if (ok) {
      ok = binaryFile.close () ;
    }
    if (ok && verboseOptionOn) {
      ggs_printFileOperationSuccess (inMessage + " '" + inFullPathName + "'.\n") ;
    }
  }else{
    ggs_printWarning (inCompiler, SourceTextInString(), C_IssueWithFixIt (), String ("Need to write '") + inFullPathName + "'." COMMA_HERE) ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static bool updateFile (const String & inFullPathName,
                        const String & inContents,
                        Compiler * inCompiler) {
  C_Data currentData ; currentData.addString (inContents) ;
//--- Compare file length
  const uint64_t fileSize = C_FileManager::fileSize (inFullPathName) ;
  bool needsToWriteFile = fileSize != (uint64_t) currentData.count () ;
  bool ok = true ;
//--- Read file
  if (! needsToWriteFile) {
    C_Data fileData ;
    ok = C_FileManager::binaryDataWithContentOfFile (inFullPathName, fileData) ;
    if (ok) {
      needsToWriteFile = fileData != currentData ;
    }
  }
//--- File needs to be updated
  if (ok && needsToWriteFile) {
    ok = writeFile ("Updated", inFullPathName, currentData, inCompiler) ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static void generateFile (const String & inStartPath,
                          const String & inFileName,
                          const String & inContents,
                          const bool inMakeExecutable,
                          Compiler * inCompiler) {
  bool ok = true ;
//--- File exists ?
  const TC_UniqueArray <String> directoriesToExclude ;
  const String fullPathName = C_FileManager::findFileInDirectory (inStartPath, inFileName, directoriesToExclude) ;
  if (fullPathName.length () == 0) { // No, does not exist
    C_Data currentData ; currentData.addString (inContents) ;
    ok = writeFile ("Created", inStartPath + "/" + inFileName, currentData, inCompiler) ;
  }else{ //--- File exists: read it
    ok = updateFile (fullPathName, inContents, inCompiler) ;
  }
//--- Make file executable
  if (ok && inMakeExecutable) {
    #if COMPILE_FOR_WINDOWS == 0
      struct stat fileStat ;
      ::stat (fullPathName.cString (HERE), & fileStat) ;
      ::chmod (fullPathName.cString (HERE), fileStat.st_mode | S_IXUSR | S_IXGRP | S_IXOTH) ;
    #endif
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::class_method_generateFile (GALGAS_string inStartPath,
                                               GALGAS_string inFileName,
                                               GALGAS_string inContents,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (inStartPath.isValid () && inFileName.isValid () && inContents.isValid ()) {
    generateFile (inStartPath.mString, inFileName.mString, inContents.mString, false, inCompiler) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_string::class_method_generateFileWithPattern (GALGAS_string inStartPath,
                                                          GALGAS_string inFileName,
                                                          GALGAS_string inLineCommentPrefix,
                                                          GALGAS_string inHeader,
                                                          GALGAS_string inDefaultUserZone1,
                                                          GALGAS_string inGeneratedZone2,
                                                          GALGAS_string inDefaultUserZone2,
                                                          GALGAS_string inGeneratedZone3,
                                                          GALGAS_bool inMakeExecutable,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const bool built = (inStartPath.isValid ())
    && (inFileName.isValid ())
    && (inLineCommentPrefix.isValid ())
    && (inDefaultUserZone1.isValid ())
    && (inHeader.isValid ())
    && (inDefaultUserZone2.isValid ())
    && (inDefaultUserZone2.isValid ())
    && (inGeneratedZone3.isValid ())
    && (inMakeExecutable.isValid ())
  ;
  if (built) {
    TC_UniqueArray <String> directoriesToExclude ;
    inCompiler->generateFileWithPatternFromPathes (
      inStartPath.mString,
      directoriesToExclude,
      inLineCommentPrefix.mString,
      inFileName.mString,
      inHeader.mString,
      inDefaultUserZone1.mString,
      inGeneratedZone2.mString,
      inDefaultUserZone2.mString,
      inGeneratedZone3.mString,
      inMakeExecutable.boolValue ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_string::optional_extractBigInt (GALGAS_bigint & outBigInt) const {
  bool extracted = false ;
  outBigInt.drop () ;
  if (isValid () && (mString.length () > 0)) {
    extracted = true ;
    const BigSigned bigint (mString.cString (HERE), BigUnsignedBase::ten, extracted) ;
    if (extracted) {
      outBigInt = GALGAS_bigint (bigint) ;
    }
  }
  return extracted ;
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void GALGAS_string::printNonNullClassInstanceProperties (const char * inPropertyName) const {
    if (isValid ()) {
      gCout.addString ("    ") ;
      gCout.addString (inPropertyName) ;
      gCout.addString (" : ") ;
      gCout.addString (mString) ;
      gCout.addNL () ; ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------
