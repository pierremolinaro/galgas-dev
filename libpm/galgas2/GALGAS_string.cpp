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

GALGAS_string GALGAS_string::getter_HTMLRepresentation (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    result = GALGAS_string (mString.HTMLRepresentation ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_string::getter_nowhere (LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid ()) {
    result.mProperty_string = * this ;
    result.mProperty_location = GALGAS_location::constructor_nowhere (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_string::getter_here (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (isValid ()) {
    result.mProperty_string = * this ;
    result.mProperty_location = GALGAS_location::constructor_here (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_string::getter_fileExists (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    result = GALGAS_bool (C_FileManager::fileExistsAtPath (mString)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_string::getter_directoryExists (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    result = GALGAS_bool (C_FileManager::directoryExists (mString)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_string::getter_count (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mString.length ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_range GALGAS_string::getter_range (UNUSED_LOCATION_ARGS) const {
  GALGAS_range result ;
  if (isValid ()) {
    result = GALGAS_range (GALGAS_uint (0), GALGAS_uint ((uint32_t) mString.length ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_md_35_ (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    result = GALGAS_string (mString.md5 ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_utf_33__32_Representation (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    String s ;
    s.appendUTF32LiteralStringConstant (mString) ;
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_utf_38_RepresentationEscapingQuestionMark (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    const bool escapeQuestionMark = true ;
    const String s = mString.utf8RepresentationEnclosedWithin ('"', escapeQuestionMark) ;
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_utf_38_Representation (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    const bool escapeQuestionMark = false ;
    const String s = mString.utf8RepresentationEnclosedWithin ('"', escapeQuestionMark) ;
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_cStringRepresentation (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    const bool escapeQuestionMark = true ;
    const String s = mString.utf8RepresentationEnclosedWithin ('"', escapeQuestionMark) ;
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_utf_38_RepresentationEnclosedWithin (const GALGAS_char & inCharacter COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inCharacter.isValid ()) {
    const bool escapeQuestionMark = true ;
    const String s = mString.utf8RepresentationEnclosedWithin (inCharacter.charValue (), escapeQuestionMark) ;
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_string::getter_utf_38_Length (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    C_Data data ;
    data.addString (mString) ;
    result = GALGAS_uint (uint32_t (data.count ())) ;
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_utf_38_RepresentationWithoutDelimiters (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    String s ;
    s.addStringAsCLiteralStringConstantWithoutDelimiters (mString) ;
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_utf_38_RepresentationWithUnicodeEscaping (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    result = GALGAS_string (mString.utf8RepresentationWithUnicodeEscaping ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_identifierRepresentation (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    result = GALGAS_string (mString.identifierRepresentation ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_nameRepresentation (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    result = GALGAS_string (mString.nameRepresentation ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_fileNameRepresentation (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    result = GALGAS_string (mString.fileNameRepresentation ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_assemblerRepresentation (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    result = GALGAS_string (mString.assemblerRepresentation ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_decodedStringFromRepresentation (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    bool ok = true ;
    const String r = mString.decodedStringFromRepresentation (ok) ;
    if (ok) {
      result = GALGAS_string (r) ;
    }else{
      inCompiler->onTheFlyRunTimeError (
        "@string decodedStringFromRepresentation getter called with a string that is not a valid string representation"
        COMMA_THERE
      ) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_subStringFromIndex (const GALGAS_uint & inStartIndex
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (inStartIndex.isValid ()) {
    result = GALGAS_string (mString.subStringFromIndex ((int32_t) inStartIndex.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_rightSubString (const GALGAS_uint & inLength
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (inLength.isValid ()) {
    result = GALGAS_string (mString.rightSubString ((int32_t) inLength.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_leftSubString (const GALGAS_uint & inLength
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (inLength.isValid ()) {
    result = GALGAS_string (mString.leftSubString ((int32_t) inLength.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_subString (const GALGAS_uint & inStart,
                                               const GALGAS_uint & inLength
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if ((inStart.isValid ()) && (inLength.isValid ())) {
    const int32_t start = (int32_t) inStart.uintValue () ;
    const int32_t aLength = (int32_t) inLength.uintValue () ;
    result = GALGAS_string (mString.subString (start, aLength)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_absolutePathFromPath (const GALGAS_string & inBasePath
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (inBasePath.isValid ()) {
    const String path = mString ;
    const int32_t stringLength = path.length () ;
    String r ;
    if ((stringLength > 0) && (UNICODE_VALUE (path (0 COMMA_HERE)) == '/')) {
      r = path ;
    }else{
      r = inBasePath.mString ;
      r.addUnicodeChar (TO_UNICODE ('/') COMMA_HERE) ;
      r.addString (path) ;
    }
    result = GALGAS_string (r.stringByStandardizingPath ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_relativePathFromPath (const GALGAS_string & inReferencePath
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inReferencePath.isValid ()) {
    result = GALGAS_string (C_FileManager::relativePathFromPath (mString, inReferencePath.mString)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_char GALGAS_string::getter_lastCharacter (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_char result ;
  if (isValid ()) {
    if (mString.length () == 0) {
      inCompiler->onTheFlyRunTimeError (
        "@string lastCharacter getter called on empty string"
        COMMA_THERE
      ) ;
    }else{
      result = GALGAS_char (mString.lastCharacter (THERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_stringByStandardizingPath (UNUSED_LOCATION_ARGS) const {
  return GALGAS_string (mString.stringByStandardizingPath ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_pathExtension (UNUSED_LOCATION_ARGS) const {
  return GALGAS_string (mString.pathExtension ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_char GALGAS_string::getter_firstCharacterOrNul (UNUSED_LOCATION_ARGS) const {
  return GALGAS_char (mString.readCharOrNul (0 COMMA_HERE)) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_stringByDeletingPathExtension (UNUSED_LOCATION_ARGS) const {
  return GALGAS_string (mString.stringByDeletingPathExtension ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_stringByDeletingLastPathComponent (UNUSED_LOCATION_ARGS) const {
  return GALGAS_string (mString.stringByDeletingLastPathComponent ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_stringByCapitalizingFirstCharacter (UNUSED_LOCATION_ARGS) const {
  return GALGAS_string (mString.stringByCapitalizingFirstCharacter ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_uppercaseString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_string (mString.uppercaseString ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_lowercaseString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_string (mString.lowercaseString ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_reversedString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_string (mString.reversedString ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_stringByTrimmingWhiteSpaces (UNUSED_LOCATION_ARGS) const {
  return GALGAS_string (mString.stringByTrimmingSeparators ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_string::getter_currentColumn (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint (mString.currentColumn ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_stringByLeftPadding (const GALGAS_uint & inPaddedStringLength,
                                                         const GALGAS_char & inPaddingChar
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if ((inPaddedStringLength.isValid ()) && (inPaddingChar.isValid ())) {
    const utf32 paddingChar = inPaddingChar.charValue () ;
    const int32_t paddedStringLength = (int32_t) inPaddedStringLength.uintValue () ;
    const int32_t paddingLength = paddedStringLength - mString.length () ;
    String s ; s.setCapacity ((uint32_t) paddedStringLength) ;
    for (int32_t i=0 ; i<paddingLength ; i++) {
      s.addUnicodeChar (paddingChar COMMA_HERE) ;
    }
    s.addString (mString) ;
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_stringByRightPadding (const GALGAS_uint & inPaddedStringLength,
                                                          const GALGAS_char & inPaddingChar
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if ((inPaddedStringLength.isValid ()) && (inPaddingChar.isValid ())) {
    const utf32 paddingChar = inPaddingChar.charValue () ;
    const int32_t paddedStringLength = (int32_t) inPaddedStringLength.uintValue () ;
    const int32_t paddingLength = paddedStringLength - mString.length () ;
    String s ; s.setCapacity ((uint32_t) paddedStringLength) ;
    s.addString (mString) ;
    for (int32_t i=0 ; i<paddingLength ; i++) {
      s.addUnicodeChar (paddingChar COMMA_HERE) ;
    }
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_stringByLeftAndRightPadding (const GALGAS_uint & inPaddedStringLength,
                                                                 const GALGAS_char & inPaddingChar
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if ((inPaddedStringLength.isValid ()) && (inPaddingChar.isValid ())) {
    const utf32 paddingChar = inPaddingChar.charValue () ;
    const int32_t paddedStringLength = (int32_t) inPaddedStringLength.uintValue () ;
    const int32_t paddingLength = paddedStringLength - mString.length () ;
    String s ; s.setCapacity ((uint32_t) paddedStringLength) ;
    for (int32_t i=0 ; i<(paddingLength / 2) ; i++) {
      s.addUnicodeChar (paddingChar COMMA_HERE) ;
    }
    s.addString (mString) ;
    for (int32_t i=paddingLength / 2 ; i<paddingLength ; i++) {
      s.addUnicodeChar (paddingChar COMMA_HERE) ;
    }
    result = GALGAS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_lastPathComponent (UNUSED_LOCATION_ARGS) const {
  return GALGAS_string (mString.lastPathComponent ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_stringByReplacingStringByString (const GALGAS_string & inSearchedString,
                                                                     const GALGAS_string & inReplacementString,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if ((inSearchedString.isValid ()) && (inReplacementString.isValid ())) {
    if (inSearchedString.mString.length () == 0) {
      inCompiler->onTheFlyRunTimeError (
        "@string stringByReplacingStringByString getter called with empty searched string"
        COMMA_THERE
      ) ;
    }else{
      bool ok = false ;
      uint32_t replacementCount = 0 ;
      const String s = mString.stringByReplacingStringByString (inSearchedString.mString, inReplacementString.mString, replacementCount, ok) ;
      result = GALGAS_string (s) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_stringByRemovingCharacterAtIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (inIndex.isValid ()) {
    if (inIndex.uintValue () < (uint32_t) mString.length ()) {
      String s = mString ;
      s.suppress ((int32_t) inIndex.uintValue (), 1 COMMA_THERE) ;
      result = GALGAS_string (s) ;
    }else{
      inCompiler->onTheFlyRunTimeError (
        "@string stringByRemovingCharacterAtIndex getter called with index greater or equal to length"
        COMMA_THERE
      ) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_char GALGAS_string::getter_characterAtIndex (const GALGAS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_char result ;
  if (isValid () && inIndex.isValid ()) {
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
      result = GALGAS_char (mString (idx COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_string::getter_containsCharacter (const GALGAS_char & inCharacter
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid () && inCharacter.isValid ()) {
    result = GALGAS_bool (mString.containsCharacter (inCharacter.charValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_string::getter_containsCharacterInRange (const GALGAS_char & inFirstCharacter,
                                                            const GALGAS_char & inLastCharacter
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid () && inFirstCharacter.isValid () && inLastCharacter.isValid ()) {
    result = GALGAS_bool (mString.containsCharacterInRange (inFirstCharacter.charValue (), inLastCharacter.charValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_unixPathWithNativePath (UNUSED_LOCATION_ARGS) const {
  return GALGAS_string (C_FileManager::unixPathWithNativePath (mString)) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_nativePathWithUnixPath (UNUSED_LOCATION_ARGS) const {
  return GALGAS_string (C_FileManager::nativePathWithUnixPath (mString)) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_string::getter_componentsSeparatedByString (const GALGAS_string & inSeparator
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (inSeparator.isValid ()) {
    result = GALGAS_stringlist::constructor_emptyList (THERE) ;
    TC_UniqueArray <String> components ;
    mString.componentsSeparatedByString (inSeparator.mString, components) ;
    for (int32_t i=0 ; i<components.count () ; i++) {
      result.addAssign_operation (GALGAS_string (components (i COMMA_HERE)) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sint GALGAS_string::getter_system (UNUSED_LOCATION_ARGS) const {
  GALGAS_sint result ;
  if (isValid ()) {
    result = GALGAS_sint (::system (mString.cString (HERE))) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sint GALGAS_string::getter_commandWithArguments (const GALGAS_stringlist & inArguments,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_sint result ;
  if (isValid () && inArguments.isValid ()) {
    String command = String ("'") + mString + "'" ;
    for (uint32_t i=0 ; i<inArguments.count () ; i++) {
      command.addString (" '") ;
      command.addString (inArguments.getter_mValueAtIndex (GALGAS_uint (i), inCompiler COMMA_THERE).stringValue ()) ;
      command.addString ("'") ;
    }
    result = GALGAS_sint (::system (command.cString (HERE))) ;
  }
  return result ;
}

 //--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_string::getter_hiddenCommandWithArguments (const GALGAS_stringlist & inArguments,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid () && inArguments.isValid ()) {
    String command = String ("'") + mString + "'" ;
    for (uint32_t i=0 ; i<inArguments.count () ; i++) {
      command.addString (" '") ;
      command.addString (inArguments.getter_mValueAtIndex (GALGAS_uint (i), inCompiler COMMA_THERE).stringValue ()) ;
      command.addString ("'") ;
    }
    result = GALGAS_string (command).getter_popen (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void recursiveSearchForRegularFiles (const String & inUnixStartPath,
                                            const bool inRecursiveSearch,
                                            const String & inRelativePath,
                                            GALGAS_stringlist & ioResult) {
  const String nativeStartPath = C_FileManager::nativePathWithUnixPath (inUnixStartPath) ;
  DIR * dir = ::opendir (nativeStartPath.cString (HERE)) ;
  if (dir != nullptr) {
    struct dirent  * current = readdir (dir) ;
    while (current != nullptr) {
      if (current->d_name [0] != '.') {
        String name = nativeStartPath ;
        name.addString ("/") ;
        name.addString (current->d_name) ;
        if (C_FileManager::directoryExistsWithNativePath (name)) {
          if (inRecursiveSearch) {
            recursiveSearchForRegularFiles (name,
                                            inRecursiveSearch,
                                            inRelativePath + current->d_name + "/",
                                            ioResult) ;
          }
        }else if (C_FileManager::fileExistsAtPath (name)) {
          const String relativePath = inRelativePath + current->d_name ;
          ioResult.addAssign_operation (GALGAS_string (relativePath) COMMA_HERE) ;
        }
      }
      current = readdir (dir) ;
    }
    closedir (dir) ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_string::getter_regularFiles (const GALGAS_bool & inRecursiveSearch
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (inRecursiveSearch.isValid ()) {
    result = GALGAS_stringlist::constructor_emptyList (THERE) ;
    recursiveSearchForRegularFiles (mString,
                                    inRecursiveSearch.boolValue (),
                                    "",
                                    result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void recursiveSearchForHiddenFiles (const String & inUnixStartPath,
                                           const bool inRecursiveSearch,
                                           const String & inRelativePath,
                                           GALGAS_stringlist & ioResult) {
  const String nativeStartPath = C_FileManager::nativePathWithUnixPath (inUnixStartPath) ;
  DIR * dir = ::opendir (nativeStartPath.cString (HERE)) ;
  if (dir != nullptr) {
    struct dirent  * current = readdir (dir) ;
    while (current != nullptr) {
      if ((strlen (current->d_name) > 1) && (current->d_name [0] == '.') && (strcmp (current->d_name, "..") != 0)) {
        String name = nativeStartPath ;
        name.addString ("/") ;
        name.addString (current->d_name) ;
        if (C_FileManager::directoryExistsWithNativePath (name)) {
          if (inRecursiveSearch) {
            recursiveSearchForHiddenFiles (name,
                                           inRecursiveSearch,
                                           inRelativePath + current->d_name + "/",
                                           ioResult) ;
          }
        }else if (C_FileManager::fileExistsAtPath (name)) {
          const String relativePath = inRelativePath + current->d_name ;
          ioResult.addAssign_operation (GALGAS_string (relativePath) COMMA_HERE) ;
        }
      }
      current = readdir (dir) ;
    }
    closedir (dir) ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_string::getter_hiddenFiles (const GALGAS_bool & inRecursiveSearch
                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (inRecursiveSearch.isValid ()) {
    result = GALGAS_stringlist::constructor_emptyList (THERE) ;
    recursiveSearchForHiddenFiles (mString,
                                   inRecursiveSearch.boolValue (),
                                   "",
                                   result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void recursiveSearchForDirectories (const String & inUnixStartPath,
                                           const bool inRecursiveSearch,
                                           const String & inRelativePath,
                                           GALGAS_stringlist & ioResult) {
  const String nativeStartPath = C_FileManager::nativePathWithUnixPath (inUnixStartPath) ;
  DIR * dir = ::opendir (nativeStartPath.cString (HERE)) ;
  if (dir != nullptr) {
    struct dirent  * current = readdir (dir) ;
    while (current != nullptr) {
      if (current->d_name [0] != '.') {
        String name = nativeStartPath ;
        name.addString ("/") ;
        name.addString (current->d_name) ;
        if (C_FileManager::directoryExistsWithNativePath (name)) {
          const String relativePath = inRelativePath + current->d_name ;
          ioResult.addAssign_operation (GALGAS_string (relativePath) COMMA_HERE) ;
          if (inRecursiveSearch) {
            recursiveSearchForDirectories (name,
                                           inRecursiveSearch,
                                           inRelativePath + current->d_name + "/",
                                           ioResult) ;
          }
        }
      }
      current = readdir (dir) ;
    }
    closedir (dir) ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_string::getter_directories (const GALGAS_bool & inRecursiveSearch
                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (inRecursiveSearch.isValid ()) {
    result = GALGAS_stringlist::constructor_emptyList (THERE) ;
    if (C_FileManager::directoryExists (mString)) {
      recursiveSearchForDirectories (mString,
                                     inRecursiveSearch.boolValue (),
                                     "",
                                     result) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void recursiveSearchForRegularFiles (const String & inUnixStartPath,
                                            GALGAS_stringlist inExtensionList,
                                            const bool inRecursiveSearch,
                                            const String & inRelativePath,
                                            GALGAS_stringlist & ioResult) {
  const String nativeStartPath = C_FileManager::nativePathWithUnixPath (inUnixStartPath) ;
  DIR * dir = ::opendir (nativeStartPath.cString (HERE)) ;
  if (dir != nullptr) {
    struct dirent  * current = readdir (dir) ;
    while (current != nullptr) {
      if (current->d_name [0] != '.') {
        String name = nativeStartPath ;
        name.addString ("/") ;
        name.addString (current->d_name) ;
        if (C_FileManager::directoryExistsWithNativePath (name)) {
          if (inRecursiveSearch) {
            recursiveSearchForRegularFiles (name,
                                            inExtensionList,
                                            inRecursiveSearch,
                                            inRelativePath + current->d_name + "/",
                                            ioResult) ;
          }
        }else if (C_FileManager::fileExistsAtPath (name)) {
          const String extension = name.pathExtension () ;
          bool extensionFound = false ;
          cEnumerator_stringlist currentExtension (inExtensionList, kENUMERATION_UP) ;
          while (currentExtension.hasCurrentObject () && ! extensionFound) {
            extensionFound = currentExtension.current_mValue (HERE).stringValue () == extension ;
            currentExtension.gotoNextObject () ;
          }
          if (extensionFound) {
            const String relativePath = inRelativePath + current->d_name ;
            ioResult.addAssign_operation (GALGAS_string (relativePath) COMMA_HERE) ;
          }
        }
      }
      current = readdir (dir) ;
    }
    closedir (dir) ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_string::getter_regularFilesWithExtensions (const GALGAS_bool & inRecursiveSearch,
                                                                    const GALGAS_stringlist & inExtensionList
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if ((inRecursiveSearch.isValid ()) && (inExtensionList.isValid ())) {
    result = GALGAS_stringlist::constructor_emptyList (THERE) ;
    if (C_FileManager::directoryExists (mString)) {
      recursiveSearchForRegularFiles (mString,
                                      inExtensionList,
                                      inRecursiveSearch.boolValue (),
                                      "",
                                      result) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void recursiveSearchForDirectories (const String & inUnixStartPath,
                                           GALGAS_stringlist inExtensionList,
                                           const bool inRecursiveSearch,
                                           const String & inRelativePath,
                                           GALGAS_stringlist & ioResult) {
  const String nativeStartPath = C_FileManager::nativePathWithUnixPath (inUnixStartPath) ;
  DIR * dir = ::opendir (nativeStartPath.cString (HERE)) ;
  if (dir != nullptr) {
    struct dirent  * current = readdir (dir) ;
    while (current != nullptr) {
      if (current->d_name [0] != '.') {
        String name = nativeStartPath ;
        name.addString ("/") ;
        name.addString (current->d_name) ;
        if (C_FileManager::directoryExistsWithNativePath (name)) {
        //--- Look for extension
          const String extension = name.pathExtension () ;
          bool extensionFound = false ;
          cEnumerator_stringlist currentExtension (inExtensionList, kENUMERATION_UP) ;
          while (currentExtension.hasCurrentObject () && ! extensionFound) {
            extensionFound = currentExtension.current_mValue (HERE).stringValue () == extension ;
            currentExtension.gotoNextObject () ;
          }
          if (extensionFound) {
            const String relativePath = inRelativePath + current->d_name ;
            ioResult.addAssign_operation (GALGAS_string (relativePath) COMMA_HERE) ;
          }
        //--- Recursive Search ?
          if (inRecursiveSearch) {
            recursiveSearchForDirectories (name,
                                           inExtensionList,
                                           inRecursiveSearch,
                                           inRelativePath + current->d_name + "/",
                                           ioResult) ;
          }
        }
      }
      current = readdir (dir) ;
    }
    closedir (dir) ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_string::getter_directoriesWithExtensions (const GALGAS_bool & inRecursiveSearch,
                                                                   const GALGAS_stringlist & inExtensionList
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (isValid () && inRecursiveSearch.isValid () && inExtensionList.isValid ()) {
    result = GALGAS_stringlist::constructor_emptyList (THERE) ;
    if (C_FileManager::directoryExists (mString)) {
      recursiveSearchForDirectories (mString,
                                     inExtensionList,
                                     inRecursiveSearch.boolValue (),
                                     "",
                                     result) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_string::getter_doesEnvironmentVariableExist (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    result = GALGAS_bool (::getenv (mString.cString (HERE)) != nullptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_string::getter_capacity (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint ((uint32_t) mString.capacity ())  ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_string::getter_isDecimalUnsignedNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    uint32_t r = 0 ;
    bool ok = false ;
    mString.convertToUInt32 (r, ok) ;
    result = GALGAS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_string::getter_decimalUnsignedNumber (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    uint32_t r = 0 ;
    bool ok = false ;
    mString.convertToUInt32 (r, ok) ;
    if (ok) {
      result = GALGAS_uint (r) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("cannot convert a string to a decimal @uint number" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_string::getter_isDecimalUnsigned_36__34_Number (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    uint64_t r = 0 ;
    bool ok = false ;
    mString.convertToUInt64 (r, ok) ;
    result = GALGAS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_ GALGAS_string::getter_decimalUnsigned_36__34_Number (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_ result ;
  if (isValid ()) {
    uint64_t r = 0 ;
    bool ok = false ;
    mString.convertToUInt64 (r, ok) ;
    if (ok) {
      result = GALGAS_uint_36__34_ (r) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("cannot convert a string to a decimal @uint64 number" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_string::getter_isDecimalSignedNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    int32_t r = 0 ;
    bool ok = false ;
    mString.convertToSInt32 (r, ok) ;
    result = GALGAS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sint GALGAS_string::getter_decimalSignedNumber (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_sint result ;
  if (isValid ()) {
    int32_t r = 0 ;
    bool ok = false ;
    mString.convertToSInt32 (r, ok) ;
    if (ok) {
      result = GALGAS_sint (r) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("cannot convert a string to a decimal @sint number" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_string::getter_isDecimalSigned_36__34_Number (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    int64_t r = 0 ;
    bool ok = false ;
    mString.convertToSInt64 (r, ok) ;
    result = GALGAS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_ GALGAS_string::getter_decimalSigned_36__34_Number (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_sint_36__34_ result ;
  if (isValid ()) {
    int64_t r = 0 ;
    bool ok = false ;
    mString.convertToSInt64 (r, ok) ;
    if (ok) {
      result = GALGAS_sint_36__34_ (r) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("cannot convert a string to a decimal @sint64 number" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_string::getter_isDecimalSignedBigInt (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    bool ok = mString.length () > 0 ;
  //--- Sign
    int32_t idx = 0 ;
    if (ok) {
      const utf32 c = mString (0 COMMA_HERE) ;
      if ((UNICODE_VALUE (c) == '+') || (UNICODE_VALUE (c) == '-')) {
        idx = 1 ;
      }
    }
    while ((idx < mString.length ()) && ok) {
      const utf32 c = mString (idx COMMA_HERE) ;
      idx += 1 ;
      ok = (UNICODE_VALUE (c) >= '0') && (UNICODE_VALUE (c) <= '9') ;
    }
    result = GALGAS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_string::getter_decimalSignedBigInt (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (isValid ()) {
    bool ok = false ;
    BigSigned bigint (mString.cString (HERE), BigUnsignedBase::ten, ok) ;
    if (ok) {
      result = GALGAS_bigint (bigint) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("cannot convert a string to a decimal @bigint number" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_double GALGAS_string::getter_doubleNumber (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_double result ;
  if (isValid ()) {
    double doubleValue = 0.0 ;
    bool ok = true ;
    mString.convertToDouble (doubleValue, ok) ;
    if (ok) {
      result = GALGAS_double (doubleValue) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("cannot convert a string to a double number: it contains invalid character" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_string::getter_isDoubleNumber (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    double doubleValue = 0.0 ;
    bool ok = true ;
    mString.convertToDouble (doubleValue, ok) ;
    result = GALGAS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_string::getter_isSymbolicLink (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid ()) {
    result = GALGAS_bool (C_FileManager::isSymbolicLink (mString)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Getter popen
#endif

//--------------------------------------------------------------------------------------------------
// http://msdn.microsoft.com/en-us/library/ms682499%28VS.85%29.aspx

#if (COMPILE_FOR_WINDOWS == 1) || defined(__CYGWIN__)
  #include <windows.h>
  #include <iostream>

  static bool CreateChildProcess (HANDLE g_hChildStd_OUT_Wr,
                                  HANDLE g_hChildStd_IN_Rd,
                                  const char * /* inCommandLine */) {
  //--- Create a child process that uses the previously created pipes for STDIN and STDOUT.
     TCHAR szCmdline [] = TEXT ("dir") ;
     TCHAR application [] = TEXT ("c:\\windows\\system32\\command.com") ;
  //--- Set up members of the PROCESS_INFORMATION structure.
     PROCESS_INFORMATION piProcInfo ;
     ZeroMemory (& piProcInfo, sizeof (PROCESS_INFORMATION)) ;
  //--- Set up members of the STARTUPINFO structure.
     STARTUPINFO siStartInfo ;
     ZeroMemory (& siStartInfo, sizeof (STARTUPINFO)) ;
     siStartInfo.cb = sizeof (STARTUPINFO) ;
     siStartInfo.hStdError = g_hChildStd_OUT_Wr ;
     siStartInfo.hStdOutput = g_hChildStd_OUT_Wr ;
     siStartInfo.hStdInput = g_hChildStd_IN_Rd ;
     siStartInfo.dwFlags |= STARTF_USESTDHANDLES ;
  //-- Create the child process.
     const bool bSuccess = 0 != CreateProcess (
       application,   // Application
       szCmdline,     // command line
       nullptr,          // process security attributes
       nullptr,          // primary thread security attributes
       TRUE,          // handles are inherited
       0,             // creation flags
       nullptr,          // use parent's environment
       nullptr,          // use parent's current directory
       & siStartInfo, // STARTUPINFO pointer
       & piProcInfo   // receives PROCESS_INFORMATION
     ) ;
     if (bSuccess) {
     // Close handles to the child process and its primary thread.
     // Some applications might keep these handles to monitor the status
     // of the child process, for example.
       CloseHandle (piProcInfo.hProcess) ;
       CloseHandle (piProcInfo.hThread) ;
     }else{ // CreateProcess Error
       DWORD error = GetLastError () ;
       std::cout << "'CreateProcess' error: " << error << std::endl ;
     }
   //---
     return bSuccess ;
  }

  GALGAS_string GALGAS_string::getter_popen (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
    GALGAS_string result ;
    if (isValid ()) {
    // Create a pipe for the child process's STDIN.
      HANDLE g_hChildStd_OUT_Wr = nullptr ;
      HANDLE g_hChildStd_OUT_Rd = nullptr ;
      HANDLE g_hChildStd_IN_Wr = nullptr ;
      HANDLE g_hChildStd_IN_Rd = nullptr ;
      SECURITY_ATTRIBUTES saAttr ;
      saAttr.nLength = sizeof (SECURITY_ATTRIBUTES) ;
      saAttr.bInheritHandle = TRUE ;
      saAttr.lpSecurityDescriptor = nullptr ;
      String errorMessage ;
      bool ok = 0 != CreatePipe (& g_hChildStd_OUT_Rd, & g_hChildStd_OUT_Wr, & saAttr, 0) ;
      if (! ok) {
        errorMessage.addString ("@string popen: 'CreatePipe' error") ;
      }else{
        ok = SetHandleInformation (g_hChildStd_OUT_Rd, HANDLE_FLAG_INHERIT, 0) ;
        if (! ok) {
          errorMessage.addString ("@string popen: 'SetHandleInformation' error") ;
        }
      }
      if (ok) {
        ok = CreatePipe (& g_hChildStd_IN_Rd, & g_hChildStd_IN_Wr, & saAttr, 0) ;
        if (! ok) {
          errorMessage.addString ("@string popen: 'CreatePipe (2)' error") ;
        }
      }
      if (ok) {
        ok = SetHandleInformation (g_hChildStd_IN_Wr, HANDLE_FLAG_INHERIT, 0) ;
        if (! ok) {
          errorMessage.addString ("@string popen: 'SetHandleInformation (2)' error") ;
        }
      }
      if (ok) {
        ok = CreateChildProcess (g_hChildStd_OUT_Wr, g_hChildStd_IN_Rd, mString.cString (HERE)) ;
        if (! ok) {
          errorMessage.addString ("@string popen: 'CreateChildProcess' error") ;
        }
      }
      if (! ok) {
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        C_Data response ;
        bool loop = true ;
        while (loop) {
          const size_t kBufferSize = 1000 ;
          uint8_t buffer [kBufferSize] ;
          DWORD readLength = 0 ;
          loop = ReadFile (g_hChildStd_OUT_Rd, buffer, kBufferSize, & readLength, nullptr) ;
          loop = readLength > 0 ;
          response.appendDataFromPointer (buffer, readLength) ;
        }
        String s ;
        String::parseUTF8 (response, 0, s) ;
        result = GALGAS_string (s) ;
      }
      CloseHandle (g_hChildStd_IN_Wr) ;
      CloseHandle (g_hChildStd_IN_Rd) ;
      CloseHandle (g_hChildStd_OUT_Wr) ;
      CloseHandle (g_hChildStd_OUT_Rd) ;
    }
    return result ;
  }

#else

  GALGAS_string GALGAS_string::getter_popen (Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) const {
    GALGAS_string result ;
    if (isValid ()) {
      FILE * f = popen (mString.cString (HERE), "r") ;
      C_Data response ;
      bool loop = true ;
      while (loop) {
        const size_t kBufferSize = 1000 ;
        uint8_t buffer [kBufferSize] ;
        const size_t readLength = fread (buffer, 1, kBufferSize, f) ;
        loop = readLength > 0 ;
        response.appendDataFromPointer (buffer, (int32_t) readLength) ;
      }
      pclose (f) ;
      String s ;
      response.appendByte ('\0') ;
      String::parseUTF8 (response, 0, s) ;
      result = GALGAS_string (s) ;
    }
    return result ;
  }
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
