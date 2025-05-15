//--------------------------------------------------------------------------------------------------
//
//  'GGS_string' : class of galgas string
//
//  This file is part of libpm library
//
//  Copyright (C) 1996, ..., 2024 Pierre Molinaro.
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
#include "C_galgas_CLI_Options.h"
#include "Compiler.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "unicode_character_cpp.h"
#include "galgas-input-output.h"
#include "FileManager.h"
#include "BinaryFileWrite.h"
#include "F_verbose_output.h"

//--------------------------------------------------------------------------------------------------

#include <math.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <iostream>
#include <sys/types.h>

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Getters
#endif

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_string::getter_hasPrefix (const GGS_string & inPrefix
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inPrefix.isValid ()) {
    bool r = stringValue().length () >= inPrefix.stringValue ().length () ;
    int32_t idx = 0 ;
    while (r && (idx < inPrefix.stringValue ().length ())) {
      r = stringValue().charAtIndex (idx COMMA_HERE) == inPrefix.stringValue().charAtIndex (idx COMMA_HERE) ;
      idx += 1 ;
    }
    result = GGS_bool (r) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_string::getter_hasSuffix (const GGS_string & inPrefix
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inPrefix.isValid ()) {
    bool r = stringValue().length () >= inPrefix.stringValue ().length () ;
    int32_t idx = 0 ;
    while (r && (idx < inPrefix.stringValue ().length ())) {
      const int32_t leftIdx = stringValue().length () - inPrefix.stringValue ().length () + idx ;
      r = stringValue().charAtIndex (leftIdx COMMA_HERE) == inPrefix.stringValue().charAtIndex (idx COMMA_HERE) ;
      idx += 1 ;
    }
    result = GGS_bool (r) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint_3F_ GGS_string::getter_bigint (UNUSED_LOCATION_ARGS) const {
  GGS_bigint_3F_ result ;
  if (isValid ()) {
    bool extracted = true ;
    const BigSigned bigint (mString.cString (), BigUnsignedBase::ten, extracted) ;
    if (extracted) {
      result = GGS_bigint (bigint) ;
    }else{
      result = GGS_bigint_3F_::init_nil () ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_HTMLRepresentation (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mString.HTMLRepresentation ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_string::getter_nowhere (LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid ()) {
    result.mProperty_string = * this ;
    result.mProperty_location = GGS_location::class_func_nowhere (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_string::getter_here (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid ()) {
    result.mProperty_string = * this ;
    result.mProperty_location = GGS_location::class_func_here (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_string::getter_fileExists (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (FileManager::fileExistsAtPath (mString)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_string::getter_directoryExists (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (FileManager::directoryExists (mString)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_string::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint ((uint32_t) mString.length ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_string::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (GGS_uint (0), GGS_uint ((uint32_t) mString.length ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_md_35_ (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mString.md5 ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_sha_32__35__36_ (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mString.sha256 ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_utf_33__32_Representation (const GGS_bool & inAppendZeroTerminator
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inAppendZeroTerminator.isValid ()) {
    String s ;
    s.appendUTF32LiteralStringConstant (mString, inAppendZeroTerminator.boolValue ()) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_utf_38_RepresentationEscapingQuestionMark (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    const bool escapeQuestionMark = true ;
    const String s = mString.utf8RepresentationEnclosedWithin ('"', escapeQuestionMark) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_utf_38_Representation (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    const bool escapeQuestionMark = false ;
    const String s = mString.utf8RepresentationEnclosedWithin ('"', escapeQuestionMark) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_cStringRepresentation (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    const bool escapeQuestionMark = true ;
    const String s = mString.utf8RepresentationEnclosedWithin ('"', escapeQuestionMark) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_utf_38_RepresentationEnclosedWithin (const GGS_char & inCharacter COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inCharacter.isValid ()) {
    const bool escapeQuestionMark = true ;
    const String s = mString.utf8RepresentationEnclosedWithin (inCharacter.charValue (), escapeQuestionMark) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_string::getter_utf_38_Length (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    U8Data data ;
    data.appendString (mString) ;
    result = GGS_uint (uint32_t (data.count ())) ;
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_utf_38_RepresentationWithoutDelimiters (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendStringAsCLiteralStringConstantWithoutDelimiters (mString) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_utf_38_RepresentationWithUnicodeEscaping (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mString.utf8RepresentationWithUnicodeEscaping ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_identifierRepresentation (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mString.identifierRepresentation ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_nameRepresentation (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mString.nameRepresentation ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_fileNameRepresentation (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mString.fileNameRepresentation ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_assemblerRepresentation (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mString.assemblerRepresentation ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_decodedStringFromRepresentation (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    bool ok = true ;
    const String r = mString.decodedStringFromRepresentation (ok) ;
    if (ok) {
      result = GGS_string (r) ;
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

GGS_string GGS_string::getter_subStringFromIndex (const GGS_uint & inStartIndex
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (inStartIndex.isValid ()) {
    result = GGS_string (mString.subStringFromIndex ((int32_t) inStartIndex.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_rightSubString (const GGS_uint & inLength
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (inLength.isValid ()) {
    result = GGS_string (mString.rightSubString ((int32_t) inLength.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_leftSubString (const GGS_uint & inLength
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (inLength.isValid ()) {
    result = GGS_string (mString.leftSubString ((int32_t) inLength.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_subString (const GGS_uint & inStart,
                                               const GGS_uint & inLength
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if ((inStart.isValid ()) && (inLength.isValid ())) {
    const int32_t start = (int32_t) inStart.uintValue () ;
    const int32_t aLength = (int32_t) inLength.uintValue () ;
    result = GGS_string (mString.subString (start, aLength)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_absolutePathFromPath (const GGS_string & inBasePath
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (inBasePath.isValid ()) {
    const String path = mString ;
    const int32_t stringLength = path.length () ;
    String r ;
    if ((stringLength > 0) && (UNICODE_VALUE (path.charAtIndex (0 COMMA_HERE)) == '/')) {
      r = path ;
    }else{
      r = inBasePath.mString ;
      r.appendChar (TO_UNICODE ('/')) ;
      r.appendString (path) ;
    }
    result = GGS_string (r.stringByStandardizingPath ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_relativePathFromPath (const GGS_string & inReferencePath
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inReferencePath.isValid ()) {
    result = GGS_string (FileManager::relativePathFromPath (mString, inReferencePath.mString)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_char GGS_string::getter_lastCharacter (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_char result ;
  if (isValid ()) {
    if (mString.length () == 0) {
      inCompiler->onTheFlyRunTimeError (
        "@string lastCharacter getter called on empty string"
        COMMA_THERE
      ) ;
    }else{
      result = GGS_char (mString.lastChar (THERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_stringByStandardizingPath (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mString.stringByStandardizingPath ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_pathExtension (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mString.pathExtension ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_char GGS_string::getter_firstCharacterOrNul (UNUSED_LOCATION_ARGS) const {
  return GGS_char (mString.readCharOrNul (0 COMMA_HERE)) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_deletingPathExtension (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mString.deletingPathExtension ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_stringByDeletingLastPathComponent (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mString.stringByDeletingLastPathComponent ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_capitalizingFirstCharacter (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mString.capitalizingFirstCharacter ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_uppercaseString (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mString.uppercaseString ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_lowercaseString (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mString.lowercaseString ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_reversedString (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mString.reversedString ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_stringByTrimmingWhiteSpaces (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mString.stringByTrimmingSeparators ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_string::getter_currentColumn (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mString.currentColumn ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_stringByLeftPadding (const GGS_uint & inPaddedStringLength,
                                                         const GGS_char & inPaddingChar
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if ((inPaddedStringLength.isValid ()) && (inPaddingChar.isValid ())) {
    const utf32 paddingChar = inPaddingChar.charValue () ;
    const int32_t paddedStringLength = (int32_t) inPaddedStringLength.uintValue () ;
    const int32_t paddingLength = paddedStringLength - mString.length () ;
    String s ; s.setCapacity (paddedStringLength) ;
    for (int32_t i=0 ; i<paddingLength ; i++) {
      s.appendChar (paddingChar) ;
    }
    s.appendString (mString) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_stringByRightPadding (const GGS_uint & inPaddedStringLength,
                                                          const GGS_char & inPaddingChar
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if ((inPaddedStringLength.isValid ()) && (inPaddingChar.isValid ())) {
    const utf32 paddingChar = inPaddingChar.charValue () ;
    const int32_t paddedStringLength = (int32_t) inPaddedStringLength.uintValue () ;
    const int32_t paddingLength = paddedStringLength - mString.length () ;
    String s ; s.setCapacity (paddedStringLength) ;
    s.appendString (mString) ;
    for (int32_t i=0 ; i<paddingLength ; i++) {
      s.appendChar (paddingChar) ;
    }
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_stringByLeftAndRightPadding (const GGS_uint & inPaddedStringLength,
                                                                 const GGS_char & inPaddingChar
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if ((inPaddedStringLength.isValid ()) && (inPaddingChar.isValid ())) {
    const utf32 paddingChar = inPaddingChar.charValue () ;
    const int32_t paddedStringLength = (int32_t) inPaddedStringLength.uintValue () ;
    const int32_t paddingLength = paddedStringLength - mString.length () ;
    String s ; s.setCapacity (paddedStringLength) ;
    for (int32_t i=0 ; i<(paddingLength / 2) ; i++) {
      s.appendChar (paddingChar) ;
    }
    s.appendString (mString) ;
    for (int32_t i=paddingLength / 2 ; i<paddingLength ; i++) {
      s.appendChar (paddingChar) ;
    }
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_lastPathComponent (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mString.lastPathComponent ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_stringByReplacingStringByString (const GGS_string & inSearchedString,
                                                                     const GGS_string & inReplacementString,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if ((inSearchedString.isValid ()) && (inReplacementString.isValid ())) {
    if (inSearchedString.mString.length () == 0) {
      inCompiler->onTheFlyRunTimeError (
        "@string stringByReplacingStringByString getter called with empty searched string"
        COMMA_THERE
      ) ;
    }else{
      uint32_t replacementCount = 0 ;
      const String s = mString.stringByReplacingStringByString (inSearchedString.mString, inReplacementString.mString, replacementCount) ;
      result = GGS_string (s) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_stringByRemovingCharacterAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (inIndex.isValid ()) {
    if (inIndex.uintValue () < (uint32_t) mString.length ()) {
      String s = mString ;
      s.removeCountFromIndex (1, int32_t (inIndex.uintValue ()) COMMA_THERE) ;
      result = GGS_string (s) ;
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

GGS_char GGS_string::getter_characterAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_char result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = (int32_t) inIndex.uintValue () ;
    const int32_t stringLength = mString.length () ;
    if (idx >= stringLength) {
      String message = "string index (" ;
      message.appendSigned (idx) ;
      message.appendCString (") too large (string length: ") ;
      message.appendSigned (stringLength) ;
      message.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = GGS_char (mString.charAtIndex (idx COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_string::getter_containsCharacter (const GGS_char & inCharacter
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inCharacter.isValid ()) {
    result = GGS_bool (mString.containsChar (inCharacter.charValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_string::getter_containsCharacterInRange (const GGS_char & inFirstCharacter,
                                                            const GGS_char & inLastCharacter
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inFirstCharacter.isValid () && inLastCharacter.isValid ()) {
    result = GGS_bool (mString.containsCharInRange (inFirstCharacter.charValue (), inLastCharacter.charValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_unixPathWithNativePath (UNUSED_LOCATION_ARGS) const {
  return GGS_string (FileManager::unixPathWithNativePath (mString)) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_nativePathWithUnixPath (UNUSED_LOCATION_ARGS) const {
  return GGS_string (FileManager::nativePathWithUnixPath (mString)) ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_string::getter_componentsSeparatedByString (const GGS_string & inSeparator
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (inSeparator.isValid ()) {
    result = GGS_stringlist::class_func_emptyList (THERE) ;
    TC_UniqueArray <String> components ;
    mString.componentsSeparatedByString (inSeparator.mString, components) ;
    for (int32_t i=0 ; i<components.count () ; i++) {
      result.addAssignOperation (GGS_string (components (i COMMA_HERE)) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_string::getter_system (UNUSED_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid ()) {
    result = GGS_sint (::system (mString.cString ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_string::getter_commandWithArguments (const GGS_stringlist & inArguments,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid () && inArguments.isValid ()) {
    String command = String ("'") + mString + "'" ;
    for (uint32_t i=0 ; i<inArguments.count () ; i++) {
      command.appendCString (" '") ;
      command.appendString (inArguments.getter_mValueAtIndex (GGS_uint (i), inCompiler COMMA_THERE).stringValue ()) ;
      command.appendCString ("'") ;
    }
    result = GGS_sint (::system (command.cString ())) ;
  }
  return result ;
}

 //--------------------------------------------------------------------------------------------------

GGS_string GGS_string::getter_hiddenCommandWithArguments (const GGS_stringlist & inArguments,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inArguments.isValid ()) {
    String command = String ("'") + mString + "'" ;
    for (uint32_t i=0 ; i<inArguments.count () ; i++) {
      command.appendCString (" '") ;
      command.appendString (inArguments.getter_mValueAtIndex (GGS_uint (i), inCompiler COMMA_THERE).stringValue ()) ;
      command.appendCString ("'") ;
    }
    result = GGS_string (command).getter_popen (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void recursiveSearchForRegularFiles (const String & inUnixStartPath,
                                            const bool inRecursiveSearch,
                                            const String & inRelativePath,
                                            GGS_stringlist & ioResult) {
  const String nativeStartPath = FileManager::nativePathWithUnixPath (inUnixStartPath) ;
  DIR * dir = ::opendir (nativeStartPath.cString ()) ;
  if (dir != nullptr) {
    struct dirent  * current = readdir (dir) ;
    while (current != nullptr) {
      if (current->d_name [0] != '.') {
        String name = nativeStartPath ;
        name.appendCString ("/") ;
        name.appendString (current->d_name) ;
        if (FileManager::directoryExistsWithNativePath (name)) {
          if (inRecursiveSearch) {
            recursiveSearchForRegularFiles (name,
                                            inRecursiveSearch,
                                            inRelativePath + current->d_name + "/",
                                            ioResult) ;
          }
        }else if (FileManager::fileExistsAtPath (name)) {
          const String relativePath = inRelativePath + current->d_name ;
          ioResult.addAssignOperation (GGS_string (relativePath) COMMA_HERE) ;
        }
      }
      current = readdir (dir) ;
    }
    closedir (dir) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_string::getter_regularFiles (const GGS_bool & inRecursiveSearch
                                                      COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (inRecursiveSearch.isValid ()) {
    result = GGS_stringlist::class_func_emptyList (THERE) ;
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
                                           GGS_stringlist & ioResult) {
  const String nativeStartPath = FileManager::nativePathWithUnixPath (inUnixStartPath) ;
  DIR * dir = ::opendir (nativeStartPath.cString ()) ;
  if (dir != nullptr) {
    struct dirent  * current = readdir (dir) ;
    while (current != nullptr) {
      if ((strlen (current->d_name) > 1) && (current->d_name [0] == '.') && (strcmp (current->d_name, "..") != 0)) {
        String name = nativeStartPath ;
        name.appendCString ("/") ;
        name.appendString (current->d_name) ;
        if (FileManager::directoryExistsWithNativePath (name)) {
          if (inRecursiveSearch) {
            recursiveSearchForHiddenFiles (name,
                                           inRecursiveSearch,
                                           inRelativePath + current->d_name + "/",
                                           ioResult) ;
          }
        }else if (FileManager::fileExistsAtPath (name)) {
          const String relativePath = inRelativePath + current->d_name ;
          ioResult.addAssignOperation (GGS_string (relativePath) COMMA_HERE) ;
        }
      }
      current = readdir (dir) ;
    }
    closedir (dir) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_string::getter_hiddenFiles (const GGS_bool & inRecursiveSearch
                                                     COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (inRecursiveSearch.isValid ()) {
    result = GGS_stringlist::class_func_emptyList (THERE) ;
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
                                           GGS_stringlist & ioResult) {
  const String nativeStartPath = FileManager::nativePathWithUnixPath (inUnixStartPath) ;
  DIR * dir = ::opendir (nativeStartPath.cString ()) ;
  if (dir != nullptr) {
    struct dirent  * current = readdir (dir) ;
    while (current != nullptr) {
      if (current->d_name [0] != '.') {
        String name = nativeStartPath ;
        name.appendCString ("/") ;
        name.appendString (current->d_name) ;
        if (FileManager::directoryExistsWithNativePath (name)) {
          const String relativePath = inRelativePath + current->d_name ;
          ioResult.addAssignOperation (GGS_string (relativePath) COMMA_HERE) ;
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

GGS_stringlist GGS_string::getter_directories (const GGS_bool & inRecursiveSearch
                                                     COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (inRecursiveSearch.isValid ()) {
    result = GGS_stringlist::class_func_emptyList (THERE) ;
    if (FileManager::directoryExists (mString)) {
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
                                            GGS_stringlist inExtensionList,
                                            const bool inRecursiveSearch,
                                            const String & inRelativePath,
                                            GGS_stringlist & ioResult) {
  const String nativeStartPath = FileManager::nativePathWithUnixPath (inUnixStartPath) ;
  DIR * dir = ::opendir (nativeStartPath.cString ()) ;
  if (dir != nullptr) {
    struct dirent  * current = readdir (dir) ;
    while (current != nullptr) {
      if (current->d_name [0] != '.') {
        String name = nativeStartPath ;
        name.appendCString ("/") ;
        name.appendString (current->d_name) ;
        if (FileManager::directoryExistsWithNativePath (name)) {
          if (inRecursiveSearch) {
            recursiveSearchForRegularFiles (name,
                                            inExtensionList,
                                            inRecursiveSearch,
                                            inRelativePath + current->d_name + "/",
                                            ioResult) ;
          }
        }else if (FileManager::fileExistsAtPath (name)) {
          const String extension = name.pathExtension () ;
          bool extensionFound = false ;
          UpEnumerator_stringlist currentExtension (inExtensionList) ;
          while (currentExtension.hasCurrentObject () && ! extensionFound) {
            extensionFound = currentExtension.current_mValue (HERE).stringValue () == extension ;
            currentExtension.gotoNextObject () ;
          }
          if (extensionFound) {
            const String relativePath = inRelativePath + current->d_name ;
            ioResult.addAssignOperation (GGS_string (relativePath) COMMA_HERE) ;
          }
        }
      }
      current = readdir (dir) ;
    }
    closedir (dir) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_string::getter_regularFilesWithExtensions (const GGS_bool & inRecursiveSearch,
                                                                    const GGS_stringlist & inExtensionList
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if ((inRecursiveSearch.isValid ()) && (inExtensionList.isValid ())) {
    result = GGS_stringlist::class_func_emptyList (THERE) ;
    if (FileManager::directoryExists (mString)) {
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
                                           GGS_stringlist inExtensionList,
                                           const bool inRecursiveSearch,
                                           const String & inRelativePath,
                                           GGS_stringlist & ioResult) {
  const String nativeStartPath = FileManager::nativePathWithUnixPath (inUnixStartPath) ;
  DIR * dir = ::opendir (nativeStartPath.cString ()) ;
  if (dir != nullptr) {
    struct dirent  * current = readdir (dir) ;
    while (current != nullptr) {
      if (current->d_name [0] != '.') {
        String name = nativeStartPath ;
        name.appendCString ("/") ;
        name.appendString (current->d_name) ;
        if (FileManager::directoryExistsWithNativePath (name)) {
        //--- Look for extension
          const String extension = name.pathExtension () ;
          bool extensionFound = false ;
          UpEnumerator_stringlist currentExtension (inExtensionList) ;
          while (currentExtension.hasCurrentObject () && ! extensionFound) {
            extensionFound = currentExtension.current_mValue (HERE).stringValue () == extension ;
            currentExtension.gotoNextObject () ;
          }
          if (extensionFound) {
            const String relativePath = inRelativePath + current->d_name ;
            ioResult.addAssignOperation (GGS_string (relativePath) COMMA_HERE) ;
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

GGS_stringlist GGS_string::getter_directoriesWithExtensions (const GGS_bool & inRecursiveSearch,
                                                                   const GGS_stringlist & inExtensionList
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inRecursiveSearch.isValid () && inExtensionList.isValid ()) {
    result = GGS_stringlist::class_func_emptyList (THERE) ;
    if (FileManager::directoryExists (mString)) {
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

GGS_bool GGS_string::getter_doesEnvironmentVariableExist (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (::getenv (mString.cString ()) != nullptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_string::getter_capacity (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint ((uint32_t) mString.capacity ())  ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_string::getter_isDecimalUnsignedNumber (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    uint32_t r = 0 ;
    bool ok = false ;
    mString.convertToUInt32 (r, ok) ;
    result = GGS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_string::getter_decimalUnsignedNumber (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    uint32_t r = 0 ;
    bool ok = false ;
    mString.convertToUInt32 (r, ok) ;
    if (ok) {
      result = GGS_uint (r) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("cannot convert a string to a decimal @uint number" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_string::getter_isDecimalUnsigned_36__34_Number (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    uint64_t r = 0 ;
    bool ok = false ;
    mString.convertToUInt64 (r, ok) ;
    result = GGS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_string::getter_decimalUnsigned_36__34_Number (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid ()) {
    uint64_t r = 0 ;
    bool ok = false ;
    mString.convertToUInt64 (r, ok) ;
    if (ok) {
      result = GGS_uint_36__34_ (r) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("cannot convert a string to a decimal @uint64 number" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_string::getter_isDecimalSignedNumber (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    int32_t r = 0 ;
    bool ok = false ;
    mString.convertToSInt32 (r, ok) ;
    result = GGS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_string::getter_decimalSignedNumber (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid ()) {
    int32_t r = 0 ;
    bool ok = false ;
    mString.convertToSInt32 (r, ok) ;
    if (ok) {
      result = GGS_sint (r) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("cannot convert a string to a decimal @sint number" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_string::getter_isDecimalSigned_36__34_Number (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    int64_t r = 0 ;
    bool ok = false ;
    mString.convertToSInt64 (r, ok) ;
    result = GGS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ GGS_string::getter_decimalSigned_36__34_Number (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_sint_36__34_ result ;
  if (isValid ()) {
    int64_t r = 0 ;
    bool ok = false ;
    mString.convertToSInt64 (r, ok) ;
    if (ok) {
      result = GGS_sint_36__34_ (r) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("cannot convert a string to a decimal @sint64 number" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_string::getter_isDecimalSignedBigInt (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    bool ok = mString.length () > 0 ;
  //--- Sign
    int32_t idx = 0 ;
    if (ok) {
      const utf32 c = mString.charAtIndex (0 COMMA_HERE) ;
      if ((UNICODE_VALUE (c) == '+') || (UNICODE_VALUE (c) == '-')) {
        idx = 1 ;
      }
    }
    while ((idx < mString.length ()) && ok) {
      const utf32 c = mString.charAtIndex (idx COMMA_HERE) ;
      idx += 1 ;
      ok = (UNICODE_VALUE (c) >= '0') && (UNICODE_VALUE (c) <= '9') ;
    }
    result = GGS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_string::getter_decimalSignedBigInt (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid ()) {
    bool ok = false ;
    BigSigned bigint (mString.cString (), BigUnsignedBase::ten, ok) ;
    if (ok) {
      result = GGS_bigint (bigint) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("cannot convert a string to a decimal @bigint number" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_string::getter_doubleNumber (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    double doubleValue = 0.0 ;
    bool ok = true ;
    mString.convertToDouble (doubleValue, ok) ;
    if (ok) {
      result = GGS_double (doubleValue) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("cannot convert a string to a double number: it contains invalid character" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_string::getter_isDoubleNumber (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    double doubleValue = 0.0 ;
    bool ok = true ;
    mString.convertToDouble (doubleValue, ok) ;
    result = GGS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_string::getter_isSymbolicLink (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (FileManager::isSymbolicLink (mString)) ;
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

  GGS_string GGS_string::getter_popen (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
    GGS_string result ;
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
        errorMessage.appendCString ("@string popen: 'CreatePipe' error") ;
      }else{
        ok = SetHandleInformation (g_hChildStd_OUT_Rd, HANDLE_FLAG_INHERIT, 0) ;
        if (! ok) {
          errorMessage.appendCString ("@string popen: 'SetHandleInformation' error") ;
        }
      }
      if (ok) {
        ok = CreatePipe (& g_hChildStd_IN_Rd, & g_hChildStd_IN_Wr, & saAttr, 0) ;
        if (! ok) {
          errorMessage.appendCString ("@string popen: 'CreatePipe (2)' error") ;
        }
      }
      if (ok) {
        ok = SetHandleInformation (g_hChildStd_IN_Wr, HANDLE_FLAG_INHERIT, 0) ;
        if (! ok) {
          errorMessage.appendCString ("@string popen: 'SetHandleInformation (2)' error") ;
        }
      }
      if (ok) {
        ok = CreateChildProcess (g_hChildStd_OUT_Wr, g_hChildStd_IN_Rd, mString.cString ()) ;
        if (! ok) {
          errorMessage.appendCString ("@string popen: 'CreateChildProcess' error") ;
        }
      }
      if (! ok) {
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        U8Data response ;
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
        result = GGS_string (s) ;
      }
      CloseHandle (g_hChildStd_IN_Wr) ;
      CloseHandle (g_hChildStd_IN_Rd) ;
      CloseHandle (g_hChildStd_OUT_Wr) ;
      CloseHandle (g_hChildStd_OUT_Rd) ;
    }
    return result ;
  }

#else

  GGS_string GGS_string::getter_popen (Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) const {
    GGS_string result ;
    if (isValid ()) {
      FILE * f = popen (mString.cString (), "r") ;
      U8Data response ;
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
      result = GGS_string (s) ;
    }
    return result ;
  }
#endif

//--------------------------------------------------------------------------------------------------
