//--------------------------------------------------------------------------------------------------
//
//   GGS_char                                                                                 
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2002, ..., 2016 Pierre Molinaro.
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
#include "Compiler.h"
#include "utf32.h"

//--------------------------------------------------------------------------------------------------

#include <ctype.h>

//--------------------------------------------------------------------------------------------------

#if COMPILE_FOR_WINDOWS == 0
  #include <termios.h>
  #include <string.h>
  #include <unistd.h>
  #include <sys/ioctl.h>
#endif

//--------------------------------------------------------------------------------------------------

GGS_char::GGS_char (void) :
AC_GALGAS_root (),
mIsValid (false),
mCharValue (utf32 (0)) {
}

//--------------------------------------------------------------------------------------------------

#if (COMPILE_FOR_WINDOWS == 1) || defined(__CYGWIN__)
  GGS_char GGS_char::class_func_unicodeCharacterFromRawKeyboard (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
    inCompiler->onTheFlyRunTimeError (
      "@char unicodeCharacterFromRawKeyboard constructor is not implemented for Windows"
      COMMA_THERE
    ) ;
    return GGS_char () ; // Poison value
  }
#else
  static void waitForRawInput (void) {
    bool waiting = true ;
    while (waiting) {
      int bytesAvailable = 0 ;
      ioctl (STDIN_FILENO, FIONREAD, & bytesAvailable) ;
      waiting = bytesAvailable == 0 ;
      if (waiting) {
        usleep (10000) ; // 10 ms
      }
    }
  }

  GGS_char GGS_char::class_func_unicodeCharacterFromRawKeyboard (Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  //--- Save current configuration
    struct termios termios_orig ;
    tcgetattr (STDIN_FILENO, &termios_orig) ;
  //--- Set new configuration
    struct termios raw ;
    tcgetattr (STDIN_FILENO, &raw) ;
    cfmakeraw (& raw) ;
    raw.c_oflag = OPOST | OCRNL ;
    raw.c_iflag = 0 ;
    raw.c_lflag = ISIG ;
    tcsetattr (STDIN_FILENO, TCSANOW, & raw);
  //--- Wait for input character
    waitForRawInput () ;
  //--- Get character
    uint8_t c = '\0' ;
    ssize_t unusedResult __attribute__ ((unused)) = read (STDIN_FILENO, & c, 1) ;
  //--- ASCII ?
    uint32_t unicodeChar = c ;
    if ((unicodeChar & 0xE0) == 0xC0) { // 2 bytes
      unicodeChar &= 0x1F ;
      unicodeChar <<= 6 ;
      waitForRawInput () ;
      unusedResult = read (STDIN_FILENO, & c, 1) ;
      c &= 0x3F ;
      unicodeChar |= c ;
    }else if ((unicodeChar & 0xF0) == 0xE0) { // 3 bytes
      unicodeChar &= 0x0F ;
      unicodeChar <<= 6 ;
      waitForRawInput () ;
      unusedResult = read (STDIN_FILENO, & c, 1) ;
      c &= 0x3F ;
      unicodeChar |= c ;
      unicodeChar <<= 6 ;
      waitForRawInput () ;
      unusedResult = read (STDIN_FILENO, & c, 1) ;
      c &= 0x3F ;
      unicodeChar |= c ;
    }else if ((unicodeChar & 0xF8) == 0xF0) { // 4 bytes
      unicodeChar &= 0x0F ;
      unicodeChar <<= 6 ;
      waitForRawInput () ;
      unusedResult = read (STDIN_FILENO, & c, 1) ;
      c &= 0x3F ;
      unicodeChar |= c ;
      unicodeChar <<= 6 ;
      waitForRawInput () ;
      unusedResult = read (STDIN_FILENO, & c, 1) ;
      c &= 0x3F ;
      unicodeChar |= c ;
      unicodeChar <<= 6 ;
      waitForRawInput () ;
      unusedResult = read (STDIN_FILENO, & c, 1) ;
      c &= 0x3F ;
      unicodeChar |= c ;
    }
  //--- Restore configuration
    tcsetattr (STDIN_FILENO, TCSANOW, &termios_orig) ;
  //--- Return input character
    return GGS_char (utf32 (unicodeChar)) ;
  }
#endif

//--------------------------------------------------------------------------------------------------

GGS_char::GGS_char (const utf32 inValue) :
AC_GALGAS_root (),
mIsValid (true),
mCharValue (inValue) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_char::objectCompare (const GGS_char & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = int32_t (mCharValue.u32 ()) - int32_t (inOperand.mCharValue.u32 ()) ;
    if (r < 0) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_char::description (String & ioString,
                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@char:") ;
  if (isValid ()) {
    if (isprint (int (mCharValue.u32 ()))) {
      ioString.appendCString ("'") ;
      ioString.appendChar (mCharValue) ;
      ioString.appendCString ("'") ;
    }else{
      ioString.appendString (mCharValue.unicodeName ()) ;
    }
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_char::getter_string (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendChar (mCharValue) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_char::getter_utf_33__32_CharConstantRepresentation (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendCString ("utf32 (") ;
    s.appendStringAsCLiteralCharConstant (mCharValue) ;
    s.appendCString (")") ;
    result = GGS_string (s) ;
  }
  return result ;

}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_char::getter_uint (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mCharValue.u32 ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_char::getter_isalnum (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (
        ((mCharValue.u32 () >= '0') && (mCharValue.u32 () <= '9'))
     || ((mCharValue.u32 () >= 'a') && (mCharValue.u32 () <= 'z'))
     || ((mCharValue.u32 () >= 'A') && (mCharValue.u32 () <= 'Z'))
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_char::getter_isalpha (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (
      ((mCharValue.u32 () >= 'a') && (mCharValue.u32 () <= 'z'))
      || ((mCharValue.u32 () >= 'A') && (mCharValue.u32 () <= 'Z'))
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_char::getter_iscntrl (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (((mCharValue.u32 () >= 1) && (mCharValue.u32 () <= 31)) || (mCharValue.u32 () == 127)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_char::getter_isdigit (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool  (((mCharValue.u32 () >= '0') && (mCharValue.u32 () <= '9'))) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_char::getter_islower (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (((mCharValue.u32 () >= 'a') && (mCharValue.u32 () <= 'z'))) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_char::getter_isupper (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (((mCharValue.u32 () >= 'A') && (mCharValue.u32 () <= 'Z'))) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_char::getter_isxdigit (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (((mCharValue.u32 () >= '0') && (mCharValue.u32 () <= '9'))
                               || ((mCharValue.u32 () >= 'a') && (mCharValue.u32 () <= 'f'))
                               || ((mCharValue.u32 () >= 'A') && (mCharValue.u32 () <= 'F'))) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_char::getter_isUnicodeLetter (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mCharValue.isLetter ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_char::getter_isUnicodeMark (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mCharValue.isMark ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_char::getter_isUnicodeSymbol (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mCharValue.isSymbol ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_char::getter_isUnicodeCommand (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mCharValue.isCommand ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_char::getter_isUnicodeSeparator (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mCharValue.isSeparator ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_char::getter_isUnicodePunctuation (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mCharValue.isPunctuation ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_char::getter_isUnicodeNumber (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mCharValue.isNumber ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_char::getter_unicodeName (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mCharValue.unicodeName ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_char GGS_char::getter_unicodeToLower (UNUSED_LOCATION_ARGS) const {
  GGS_char result ;
  if (isValid ()) {
    result = GGS_char (mCharValue.toLower ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_char GGS_char::getter_unicodeToUpper (UNUSED_LOCATION_ARGS) const {
  GGS_char result ;
  if (isValid ()) {
    result = GGS_char (mCharValue.toUpper ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_char::getter_utf_38_Length (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mCharValue.utf8Length ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_char GGS_char::class_func_unicodeCharacterWithUnsigned (const GGS_uint & inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_char result ;
  if (inValue.isValid ()) {
    result = GGS_char (utf32 (inValue.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_char GGS_char::class_func_replacementCharacter (UNUSED_LOCATION_ARGS) {
  return GGS_char (UNICODE_REPLACEMENT_CHARACTER) ;
}

//--------------------------------------------------------------------------------------------------
