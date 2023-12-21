//--------------------------------------------------------------------------------------------------
//
//  AC_OutputStream : an abstract output stream class                                            
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 1997, ..., 2023 Pierre Molinaro.
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

#pragma once

//--------------------------------------------------------------------------------------------------

#include "utilities/macroAssert.h"
#include "utilities/M_machine.h"
#include "strings/string_encodings.h"

//--------------------------------------------------------------------------------------------------

class String ;

//--------------------------------------------------------------------------------------------------

class AC_OutputStream {
//--- Default constructor
  protected: AC_OutputStream (void) ;

//--- Virtual destructor 
  public: virtual ~ AC_OutputStream (void) ;

//--- Appending end od line
  public: void addNL (void) ;

//--- Appending string
  public: void addString (const String inString) ; // Pass by copy (for handling 's.addString (s) ;' instruction)
  public: void appendUTF32LiteralStringConstant (const String & inUTF32String) ;

//--- Appending C string
  public: void addString (const char * inCstring) ;
  public: void addString (const char * inCstring, const int32_t inCount) ;

//--- Appending UTF32 string
  public: void appendUTF32String (const utf32 * inUTF32String) ;

//--- Appending character
  public: void addChar (const char inCharacter) ;
  public: void addUnicodeChar (const utf32 inUnicodeCharacter COMMA_LOCATION_ARGS) ;

//--- Appending uint64_t in Hex
  public: void adddHex0xUnsigned (const uint64_t inValue) ;
  public: void addUnsignedHex  (const uint64_t inValue) ;
  public: void addUnsignedHex2 (const uint64_t inValue) ;
  public: void addUnsignedHex4 (const uint64_t inValue) ;
  public: void addUnsignedHex8 (const uint64_t inValue) ;
  public: void addUnsignedHex16 (const uint64_t inValue) ;

//--- Appending uint64_t
  public: void addUnsignedWithZeroFill (const uint64_t inValue, const uint32_t inWidth) ;
  public: void addUnsigned (const uint64_t inValue) ;

//--- Appending Sint64
  public: void addSigned (const int64_t inValue) ;

//--- Appending Double
  public: void addDouble (const double inValue) ;

//--- Appending bool ("true" or"false")
  public: void addBool (const bool inValue) ;

//--- Appending Pointer value (in hex)
  public: void addPointer (const void * inValue) ;

//--- Flush print (does nothing for this class)
  public: virtual void flush (void) ;

//--- Abstract method for output single byte characters
  public: void genericCharArrayOutput (const char * inCharArray,
                                       const int32_t inArrayCount) ;

  protected: virtual void performActualCharArrayOutput (const char * inCharArray,
                                                        const int32_t inArrayCount) = 0 ;

//--- Abstract method for output unicode characters
  public: void genericUnicodeArrayOutput (const utf32 * inCharArray, const int32_t inArrayCount) ;

  protected: virtual void performActualUnicodeArrayOutput (const utf32 * inCharArray,
                                                           const int32_t inArrayCount) = 0 ;

//--- Writing spaces
  public: void addSpaces (const int32_t inSpaceCount) ;

//--- Writing a string several times
  public: void addStringMultiple (const String & inString, const int32_t inRepeatCount) ;

//--- Methods for writing comment
  public: void appendTitleComment (const String & inLineCommentPrefix,
                                   const String & inCommentString) ;
  public: void addHyphenLineCommentWithoutExtraBlankLine (const String & inLineCommentPrefix) ;
  public: void addCppHyphenLineComment (const String & inLineCommentPrefix) ;
  public: void addSpaceLineComment (const String & inLineCommentPrefix) ;
  public: void addCenterJustifiedComment (const String & inLineCommentPrefix,
                                          const String & inCommentString) ;
  public: void addComment (const String & inLineCommentPrefix,
                           const String & inCommentString) ;

//--- Methods for writing C and C++ code
  public: void addStringAsCLiteralStringConstant (const String & inCstring) ;
  public: void addStringAsCLiteralCharConstant (const utf32 c) ;
  public: void addStringAsCLiteralStringConstantWithoutDelimiters (const String & inCstring) ;

//--- Writing C++ Comments (// ...)
  public: void addCppTitleComment (const String & inCommentString) ;
  public: void addCppTitleComment (const char * inCommentString) ;
  public: void addCppHyphenLineCommentWithoutExtraBlankLine (void) ;
  public: void addCppHyphenLineComment (void) ;
  public: void addCppSpaceLineComment (void) ;
  public: void addCppCenterJustifiedComment (const String & inCommentString) ;
  public: void addCppComment (const String & inCommentString) ;

//--- Writing C Comments (/* ... */)
  public: void append_C_HyphenLineComment (void) ;
  public: void append_C_SpaceLineComment (void) ;
  
//--- Handle indentation
  public: void incIndentation (const int32_t inIncrement) {
    mIndentation += inIncrement ;
  }
  public: int32_t indentation (void) const {
    return mIndentation ;
  }

//--- Private data
  private: int32_t mIndentation ;
  private: bool mStartingLine ;
} ;

//--------------------------------------------------------------------------------------------------

String stringWithUnsigned (const uint64_t inValue) ;

String stringWithHex0xUnsigned (const uint64_t inValue) ;

String stringWithSigned (const int64_t inValue) ;

String stringWithPointer (const void * inValue) ;

String stringWithCharacter (const char inValue) ;

String stringWithUnicodeCharacter (const utf32 inValue) ;

String stringWithDouble (const double inValue) ;

//--------------------------------------------------------------------------------------------------
