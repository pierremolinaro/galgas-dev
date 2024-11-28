//--------------------------------------------------------------------------------------------------
//
//  'GGS_uint_36__34_' : galgas uint64                                                        
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2006, ..., 2024 Pierre Molinaro.
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

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS Constructors
#endif

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_::GGS_uint_36__34_ (const uint64_t inValue) :
AC_GALGAS_root (),
mIsValid (true),
mUInt64Value (inValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_::GGS_uint_36__34_ (void) :
AC_GALGAS_root (),
mIsValid (false),
mUInt64Value (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::class_func_max (UNUSED_LOCATION_ARGS) {
  return GGS_uint_36__34_ (UINT64_MAX) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::class_func_uint_36__34_MaskWithCompressedBitString (const GGS_string & inBitString,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_uint_36__34_ result ;
  if (inBitString.isValid ()) {
    const int32_t bitStringLength = inBitString.stringValue ().length () ;
    bool ok = true ;
    uint64_t v = 0 ;
    for (int32_t i=0 ; (i<bitStringLength) && ok ; i++) {
      v <<= 1 ;
      const utf32 c = inBitString.stringValue ().charAtIndex (i COMMA_HERE) ;
      if ((UNICODE_VALUE (c) == '1') || (UNICODE_VALUE (c) == '0')) {
        v ++ ;
      }else if (UNICODE_VALUE (c) != 'X') {
        ok = false ;
      }
    }
    if (ok) {
      result = GGS_uint_36__34_ (v) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("incorrect bit string for 'uint64MaskWithCompressedBitString' @uint64 constructor" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::class_func_uint_36__34_BaseValueWithCompressedBitString (const GGS_string & inBitString,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_uint_36__34_ result ;
  if (inBitString.isValid ()) {
    bool ok = true ;
    uint64_t v = 0 ;
    const int32_t bitStringLength = inBitString.stringValue ().length () ;
    for (int32_t i=0 ; (i<bitStringLength) && ok ; i++) {
      v <<= 1 ;
      const utf32 c = inBitString.stringValue ().charAtIndex (i COMMA_HERE) ;
      if (UNICODE_VALUE (c) == '1') {
        v += 1 ;
      }else if ((UNICODE_VALUE (c) != '0') && (UNICODE_VALUE (c) != 'X')) {
        ok = false ;
      }
    }
    if (ok) {
      result = GGS_uint_36__34_ (v) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("incorrect bit string for 'uint64BaseValueWithCompressedBitString' @uint64_t constructor" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::class_func_uint_36__34_WithBitString (const GGS_string & inBitString,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_uint_36__34_ result ;
  if (inBitString.isValid ()) {
    bool ok = true ;
    uint64_t v = 0 ;
    const int32_t bitStringLength = inBitString.stringValue ().length () ;
    for (int32_t i=0 ; (i<bitStringLength) && ok ; i++) {
      v <<= 1 ;
      const utf32 c = inBitString.stringValue ().charAtIndex (i COMMA_HERE) ;
      if (UNICODE_VALUE (c) == '1') {
        v += 1 ;
      }else if (UNICODE_VALUE (c) != '0') {
        ok = false ;
      }
    }
    if (ok) {
      result = GGS_uint_36__34_ (v) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("incorrect bit string for 'uint64WithBitString' @uint64_t constructor" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS Operators
#endif

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::operator_and (const GGS_uint_36__34_ & inOperand2
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_uint_36__34_ (mUInt64Value & inOperand2.mUInt64Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::operator_or (const GGS_uint_36__34_ & inOperand2
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_uint_36__34_ (mUInt64Value | inOperand2.mUInt64Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::operator_xor (const GGS_uint_36__34_ & inOperand2
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_uint_36__34_ (mUInt64Value ^ inOperand2.mUInt64Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid ()) {
    result = GGS_uint_36__34_ (~ mUInt64Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::modulo_operation (const GGS_uint_36__34_ & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    if (inOperand2.mUInt64Value == 0) {
      inCompiler->onTheFlyRunTimeError ("divide by zero in @uint64 modulo operation" COMMA_THERE) ;
    }else{
      result = GGS_uint_36__34_ (mUInt64Value % inOperand2.mUInt64Value) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::left_shift_operation (const GGS_uint inShiftOperand,
                                                         Compiler * /* inCompiler*/
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    result = GGS_uint_36__34_ (mUInt64Value << (inShiftOperand.uintValue () & 63)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::left_shift_operation (const GGS_bigint inShiftOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@uint64 left shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_uint_36__34_ (mUInt64Value << (inShiftOperand.bigintValue ().uint32 () & 63)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::right_shift_operation (const GGS_uint inShiftOperand,
                                                          Compiler * /* inCompiler*/
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    result = GGS_uint_36__34_ (mUInt64Value >> (inShiftOperand.uintValue () & 63)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::right_shift_operation (const GGS_bigint inShiftOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@uint64 right shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_uint_36__34_ (mUInt64Value >> (inShiftOperand.bigintValue ().uint32 () & 63)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::multiply_operation (const GGS_uint_36__34_ & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    const uint64_t r = mUInt64Value * inOperand.mUInt64Value ;
    const bool ovf = (inOperand.mUInt64Value != 0) && ((r / inOperand.mUInt64Value) != mUInt64Value) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@uint64 * operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_uint_36__34_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_uint_36__34_::getter_canMultiply (const GGS_uint_36__34_ & inOperand
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const uint64_t r = mUInt64Value * inOperand.mUInt64Value ;
    const bool ovf = (inOperand.mUInt64Value != 0) && ((r / inOperand.mUInt64Value) != mUInt64Value) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::divide_operation (const GGS_uint_36__34_ & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mUInt64Value == 0) {
      inCompiler->onTheFlyRunTimeError ("@uint64 divide by zero" COMMA_THERE) ;
    }else{
      result = GGS_uint_36__34_ (mUInt64Value / inOperand.mUInt64Value) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_uint_36__34_::getter_canDivide (const GGS_uint_36__34_ & inOperand
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool (inOperand.mUInt64Value != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::divide_operation_no_ovf (const GGS_uint_36__34_ & inOperand) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_uint_36__34_ ((inOperand.mUInt64Value == 0) ? 0 : (mUInt64Value / inOperand.mUInt64Value)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_::increment_operation_no_overflow (void) {
  mUInt64Value ++ ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_::decrement_operation_no_overflow (void) {
  mUInt64Value -- ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_::increment_operation (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (mUInt64Value == UINT64_MAX) {
      inCompiler->onTheFlyRunTimeError ("@uint64 ++ operation overflow" COMMA_THERE) ;
      drop () ;
    }else{
      mUInt64Value ++ ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_::decrement_operation (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (mUInt64Value == 0) {
      inCompiler->onTheFlyRunTimeError ("@uint64 -- operation overflow" COMMA_THERE) ;
      drop () ;
    }else{
      mUInt64Value -- ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::add_operation_no_ovf (const GGS_uint_36__34_ & inOperand) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_uint_36__34_ (mUInt64Value + inOperand.mUInt64Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::add_operation (const GGS_uint_36__34_ & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    const uint64_t r = mUInt64Value + inOperand.mUInt64Value ;
    const bool ovf = r < mUInt64Value ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@uint64 + operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_uint_36__34_ (r) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_::plusAssign_operation (const GGS_uint_36__34_ inOperand,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const uint64_t r = mUInt64Value + inOperand.mUInt64Value ;
    const bool ovf = r < mUInt64Value ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@uint64 += operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mUInt64Value = r ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_::minusAssign_operation (const GGS_uint_36__34_ inOperand,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const bool ovf = mUInt64Value < inOperand.mUInt64Value ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@uint64 -= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mUInt64Value -= inOperand.mUInt64Value ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_::mulAssign_operation (const GGS_uint_36__34_ inOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const uint64_t r = mUInt64Value * inOperand.mUInt64Value ;
    const bool ovf = (inOperand.mUInt64Value != 0) && ((r / inOperand.mUInt64Value) != mUInt64Value) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@uint64 *= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mUInt64Value = r ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_::divAssign_operation (const GGS_uint_36__34_ inOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mUInt64Value == 0) {
      inCompiler->onTheFlyRunTimeError ("@uint64 /= divide by zero" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mUInt64Value /= inOperand.mUInt64Value ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_uint_36__34_::getter_canAdd (const GGS_uint_36__34_ & inOperand
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const uint64_t r = mUInt64Value + inOperand.mUInt64Value ;
    const bool ovf = r < mUInt64Value ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::substract_operation_no_ovf (const GGS_uint_36__34_ & inOperand2) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_uint_36__34_ (mUInt64Value - inOperand2.mUInt64Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::multiply_operation_no_ovf (const GGS_uint_36__34_ & inOperand2) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_uint_36__34_ (mUInt64Value * inOperand2.mUInt64Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_uint_36__34_::substract_operation (const GGS_uint_36__34_ & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    const uint64_t r = mUInt64Value - inOperand.mUInt64Value ;
    const bool ovf = mUInt64Value < inOperand.mUInt64Value ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@uint64 - operation underflow" COMMA_THERE) ;
    }else{
      result = GGS_uint_36__34_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_uint_36__34_::getter_canSubstract (const GGS_uint_36__34_ & inOperand
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool (mUInt64Value >= inOperand.mUInt64Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_uint_36__34_::objectCompare (const GGS_uint_36__34_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mUInt64Value < inOperand.mUInt64Value) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mUInt64Value > inOperand.mUInt64Value) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS Readers
#endif

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ GGS_uint_36__34_::getter_sint_36__34_ (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_sint_36__34_ result ;
  if (mUInt64Value > ((uint64_t) INT64_MAX)) {
    inCompiler->onTheFlyRunTimeError ("@uint64 to signed value conversion overflow" COMMA_THERE) ;
  }else{
    result = GGS_sint_36__34_ ((int64_t) mUInt64Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_uint_36__34_::getter_sint (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (mUInt64Value > ((uint64_t) INT32_MAX)) {
    inCompiler->onTheFlyRunTimeError ("@uint64 to signed value conversion overflow" COMMA_THERE) ;
  }else{
    result = GGS_sint ((int32_t) (mUInt64Value & UINT32_MAX)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint_36__34_::getter_uint (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (mUInt64Value > ((uint64_t) UINT32_MAX)) {
    inCompiler->onTheFlyRunTimeError ("64-bit unsigned value to 32-bit unsigned value conversion overflow" COMMA_THERE) ;
  }else{
    result = GGS_uint (uint32_t (mUInt64Value & UINT32_MAX)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_uint_36__34_::getter_bigint (UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid ()) {
    result = GGS_bigint (BigSigned (true, mUInt64Value)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_uint_36__34_::getter_double (UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    result = GGS_double ((double) mUInt64Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_uint_36__34_::getter_alphaString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s = "aaaaaaaaaaaaaa" ; // 2**64 values needs 14 characters (base 26) : n = 64 * log (2) / log (26)
    uint64_t v = mUInt64Value ;
    int32_t idx = 13 ;
    while (v > 0) {
      const utf32 c = TO_UNICODE (uint32_t ((v % 26) + 'a')) ;
      s.setCharAtIndex (c, idx COMMA_HERE) ;
      idx -= 1 ;
      v /= 26 ;
    }
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_uint_36__34_::getter_string (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendUnsigned (mUInt64Value) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_uint_36__34_::getter_hexString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendCString ("0x") ;
    s.appendUnsignedHex16 (mUInt64Value) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_uint_36__34_::getter_hexStringSeparatedBy (const GGS_char & inSeparator,
                                                          const GGS_uint & inGroup,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inSeparator.isValid () && inGroup.isValid ()) {
    const int group = (int) inGroup.uintValue () ;
    if (group <= 0) {
      inCompiler->onTheFlyRunTimeError ("last argument should be > 0" COMMA_THERE) ;
    }else{
      String s ;
      s.appendUnsignedHex16 (mUInt64Value) ;
      const utf32 separator = inSeparator.charValue() ;
      for (int i = (int) (s.length () - group) ; i > 0 ; i -= group) {
        s.insertCharacterAtIndex (separator, i COMMA_HERE) ;
      }
      result = GGS_string (String ("0x") + s) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_uint_36__34_::getter_xString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendUnsignedHex16 (mUInt64Value) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uint_36__34_::description (String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@uint64:") ;
  if (isValid ()) {
    ioString.appendUnsigned (mUInt64Value) ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint_36__34_::getter_uintSlice (const GGS_uint & inStartBit,
                                             const GGS_uint & inBitCount,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (inStartBit.isValid () && inBitCount.isValid ()) {
    if (inBitCount.uintValue () > 32) {
      inCompiler->onTheFlyRunTimeError ("bit count operand > 32" COMMA_THERE) ;
    }else if ((inStartBit.uintValue () + inBitCount.uintValue ()) > 64) {
      inCompiler->onTheFlyRunTimeError ("start bit + bit count operand > 64" COMMA_THERE) ;
    }else{
      uint64_t v = mUInt64Value >> inStartBit.uintValue () ;
      v &= ((1ULL << inBitCount.uintValue ()) - 1ULL) ;
      result = GGS_uint (uint32_t (v & UINT32_MAX)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
