//--------------------------------------------------------------------------------------------------
//
//  'TextFileWrite' : a class for stream writing text files
//
//  This file is part of libpm library
//
//  Copyright (C) 1999, ..., 2011 Pierre Molinaro.
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

#include "files/TextFileWrite.h"
#include "time/DateTime.h"
#include "strings/unicode_character_cpp.h"
#include "files/FileManager.h"

//--------------------------------------------------------------------------------------------------

#include <string.h>

//--------------------------------------------------------------------------------------------------

TextFileWrite::TextFileWrite (const String & inFileName) :
AbstractFileHandle (inFileName, "wt"),
mBufferLength (0) {
}

//--------------------------------------------------------------------------------------------------
//                                Close
//--------------------------------------------------------------------------------------------------

//bool TextFileWrite::close (void) {
//  bool ok = true ;
//  if (mFilePtr != nullptr) {
//    if (mBufferLength > 0) {
//      ::fprintf (mFilePtr, "%.*s", (int) mBufferLength, mBuffer) ;
//      mBufferLength = 0 ;
//    }
//    ok = ::fclose (mFilePtr) == 0 ; // Flushes the file, then closes it
//    mFilePtr = nullptr ;
//  }
//  return ok ;
//}

//--------------------------------------------------------------------------------------------------
//                             Destructor
// Cannot call the virtual 'close' method in destructor
//--------------------------------------------------------------------------------------------------

//TextFileWrite::~TextFileWrite (void) {
//  if ((mFilePtr != nullptr) && (mBufferLength > 0)) {
//    ::fprintf (mFilePtr, "%.*s", (int) mBufferLength, mBuffer) ;
//    mBufferLength = 0 ;
//  }
//}

//--------------------------------------------------------------------------------------------------
//                  Write a character string into the file
//--------------------------------------------------------------------------------------------------

void TextFileWrite::performActualCharArrayOutput (const char * inCharArray,
                                                    const int32_t inArrayCount) {
  if (isOpened () && (inArrayCount > 0)) {
    if ((mBufferLength + inArrayCount) < kFileBufferSize) {
      ::memcpy (& mBuffer [mBufferLength], inCharArray, (size_t) inArrayCount) ;
      mBufferLength += inArrayCount ;
    }else{
      if (mBufferLength > 0) {
        appendUTF8String (size_t (mBufferLength), mBuffer) ;
//        ::fprintf (mFilePtr, "%.*s", (int) mBufferLength, mBuffer) ;
        mBufferLength = 0 ;
      }
      appendUTF8String (size_t (inArrayCount), inCharArray) ;
//      ::fprintf (mFilePtr, "%.*s", (int) inArrayCount, inCharArray) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void TextFileWrite::performActualUnicodeArrayOutput (const utf32 * inCharArray,
                                                       const int32_t inArrayCount) {
  if (isOpened () && (inArrayCount > 0)) {
    for (int32_t i=0 ; i<inArrayCount ; i++) {
      char buffer [5] ;
      const int32_t length = UTF8StringFromUTF32Character (inCharArray [i], buffer) ;
      if ((mBufferLength + length) > kFileBufferSize) {
        appendUTF8String (size_t (mBufferLength), mBuffer) ;
//        ::fprintf (mFilePtr, "%.*s", (int) mBufferLength, mBuffer) ;
        mBufferLength = 0 ;
      }
      ::memcpy (& mBuffer [mBufferLength], buffer, (size_t) length) ;
      mBufferLength += length ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//                   Flush print
//--------------------------------------------------------------------------------------------------

void TextFileWrite::flush (void) {
  if (isOpened ()) {
    if (mBufferLength > 0) {
      appendUTF8String (size_t (mBufferLength), mBuffer) ;
//      ::fprintf (mFilePtr, "%.*s", (int) mBufferLength, mBuffer) ;
      mBufferLength = 0 ;
    }
    Super::flush () ;
  }
}

//--------------------------------------------------------------------------------------------------
