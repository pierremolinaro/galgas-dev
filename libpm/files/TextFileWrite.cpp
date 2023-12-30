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

#include "TextFileWrite.h"
#include "DateTime.h"
#include "unicode_character_cpp.h"
#include "FileManager.h"

//--------------------------------------------------------------------------------------------------

#include <string.h>

//--------------------------------------------------------------------------------------------------

TextFileWrite::TextFileWrite (const String & inFileName) :
AbstractFileHandle (inFileName, "wt") {
}

//--------------------------------------------------------------------------------------------------
//                  Write a character string into the file
//--------------------------------------------------------------------------------------------------

void TextFileWrite::performActualCharArrayOutput (const char * inCharArray,
                                                  const int32_t inArrayCount) {
  if (isOpened () && (inArrayCount > 0)) {
    appendUTF8String (size_t (inArrayCount), inCharArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

void TextFileWrite::performActualUnicodeArrayOutput (const utf32 * inCharArray,
                                                     const int32_t inArrayCount) {
  if (isOpened ()) {
    for (int32_t i=0 ; i<inArrayCount ; i++) {
      char buffer [8] ;
      const int32_t length = UTF8StringFromUTF32Character (inCharArray [i], buffer) ;
      appendUTF8String (size_t (length), buffer) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
