//--------------------------------------------------------------------------------------------------
//
//  'GGS_sint' : galgas sint32                                                                
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2004, ..., 2019 Pierre Molinaro.
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

GGS_sint::GGS_sint (void) :
AC_GALGAS_root (),
mIsValid (false),
mSIntValue (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_sint::GGS_sint (const int32_t inValue) :
AC_GALGAS_root (),
mIsValid (true),
mSIntValue (inValue) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sint::objectCompare (const GGS_sint & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mSIntValue < inOperand.mSIntValue) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mSIntValue > inOperand.mSIntValue) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::class_func_max (UNUSED_LOCATION_ARGS) {
  return GGS_sint (INT32_MAX) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::class_func_min (UNUSED_LOCATION_ARGS) {
  return GGS_sint (INT32_MIN) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_sint::getter_uint (Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    if (mSIntValue < 0) {
      inCompiler->onTheFlyRunTimeError ("cannot convert a negative @sint into unsigned value" COMMA_THERE) ;
    }else{
      result = GGS_uint (uint32_t (mSIntValue)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_sint::getter_uint_36__34_ (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid ()) {
    if (mSIntValue < 0) {
      inCompiler->onTheFlyRunTimeError ("cannot convert a negative @sint into unsigned value" COMMA_THERE) ;
    }else{
      result = GGS_uint_36__34_ ((uint64_t) mSIntValue) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ GGS_sint::getter_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_sint_36__34_ result ;
  if (isValid ()) {
    result = GGS_sint_36__34_ (mSIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_sint::getter_double (UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    result = GGS_double ((double) mSIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_sint::getter_bigint (UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid ()) {
    result = GGS_bigint (BigSigned (mSIntValue)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_sint::getter_string (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ; s.appendSigned (mSIntValue) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_sint::getter_hexString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    const uint32_t v = (uint32_t) mSIntValue ;
    String s = "0x" ;
    s.appendUnsignedHex8 (v) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_sint::getter_hexStringSeparatedBy (const GGS_char & inSeparator,
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
      s.appendUnsignedHex ((uint32_t) mSIntValue) ;
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

GGS_string GGS_sint::getter_xString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    const uint32_t v = (uint32_t) mSIntValue ;
    String s ; s.appendUnsignedHex8 (v) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sint::description (String & ioString,
                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@sint:") ;
  if (isValid ()) {
    ioString.appendSigned (mSIntValue) ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sint::increment_operation_no_overflow (void) {
  mSIntValue += 1 ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sint::decrement_operation_no_overflow (void) {
  mSIntValue -= 1 ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sint::increment_operation (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (mSIntValue == INT32_MAX) {
      inCompiler->onTheFlyRunTimeError ("@sint ++ operation overflow" COMMA_THERE) ;
      drop () ;
    }else{
      mSIntValue += 1 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sint::decrement_operation (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (mSIntValue == INT32_MIN) {
      inCompiler->onTheFlyRunTimeError ("@sint -- operation underflow" COMMA_THERE) ;
      drop () ;
    }else{
      mSIntValue -= 1 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sint::plusAssignOperation (const GGS_sint inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mSIntValue + inOperand.mSIntValue ;
    const bool signA = mSIntValue >= 0 ;
    const bool signB = inOperand.mSIntValue >= 0 ;
    const bool signR = r >= 0 ;
    const bool ovf = (signA == signB) && (signA != signR) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@sint += operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mSIntValue = r ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sint::minusAssignOperation (const GGS_sint inOperand,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mSIntValue - inOperand.mSIntValue ;
    const bool ovf = (mSIntValue >= inOperand.mSIntValue) != (r >= 0) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@sint -= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mSIntValue = r ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sint::mulAssignOperation (const GGS_sint inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mSIntValue * inOperand.mSIntValue ;
    bool ovf = false ;
    if (inOperand.mSIntValue == -1) {
      ovf = mSIntValue == INT32_MIN ;
    }else if (inOperand.mSIntValue != 0) {
      ovf = (r / inOperand.mSIntValue) != mSIntValue ;
    }
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@sint *= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mSIntValue = r ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sint::divAssignOperation (const GGS_sint inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mSIntValue == 0) {
      inCompiler->onTheFlyRunTimeError ("@sint /= divide by zero" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mSIntValue /= inOperand.mSIntValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::add_operation_no_ovf (const GGS_sint & inOperand) const {
  GGS_sint result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_sint (mSIntValue + inOperand.mSIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::add_operation (const GGS_sint & inOperand,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mSIntValue + inOperand.mSIntValue ;
    const bool signA = mSIntValue >= 0 ;
    const bool signB = inOperand.mSIntValue >= 0 ;
    const bool signR = r >= 0 ;
    const bool ovf = (signA == signB) && (signA != signR) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@sint + operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_sint (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sint::getter_canAdd (const GGS_sint & inOperand
                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mSIntValue + inOperand.mSIntValue ;
    const bool signA = mSIntValue >= 0 ;
    const bool signB = inOperand.mSIntValue >= 0 ;
    const bool signR = r >= 0 ;
    const bool ovf = (signA == signB) && (signA != signR) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::substract_operation (const GGS_sint & inOperand,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mSIntValue - inOperand.mSIntValue ;
    const bool ovf = (mSIntValue >= inOperand.mSIntValue) != (r >= 0) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@sint - operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_sint (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sint::getter_canSubstract (const GGS_sint & inOperand
                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mSIntValue - inOperand.mSIntValue ;
    const bool ovf = (mSIntValue >= inOperand.mSIntValue) != (r >= 0) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::substract_operation_no_ovf (const GGS_sint & inOperand2) const {
  GGS_sint result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_sint (mSIntValue - inOperand2.mSIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::multiply_operation_no_ovf (const GGS_sint & inOperand2) const {
  GGS_sint result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_sint (mSIntValue * inOperand2.mSIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::multiply_operation (const GGS_sint & inOperand,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mSIntValue * inOperand.mSIntValue ;
    bool ovf = false ;
    if (inOperand.mSIntValue == -1) {
      ovf = mSIntValue == INT32_MIN ;
    }else if (inOperand.mSIntValue != 0) {
      ovf = (r / inOperand.mSIntValue) != mSIntValue ;
    }
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@sint * operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_sint (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sint::getter_canMultiply (const GGS_sint & inOperand
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mSIntValue * inOperand.mSIntValue ;
    bool ovf = false ;
    if (inOperand.mSIntValue == -1) {
      ovf = mSIntValue == INT32_MIN ;
    }else if (inOperand.mSIntValue != 0) {
      ovf = (r / inOperand.mSIntValue) != mSIntValue ;
    }
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::divide_operation (const GGS_sint & inOperand,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid () && inOperand.isValid ()) {
    if (mSIntValue == 0) {
      inCompiler->onTheFlyRunTimeError ("@sint divide by zero" COMMA_THERE) ;
    }else if ((mSIntValue == INT32_MIN) && (inOperand.mSIntValue == -1)) {
      inCompiler->onTheFlyRunTimeError ("@sint / operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_sint (mSIntValue / inOperand.mSIntValue) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sint::getter_canDivide (const GGS_sint & inOperand
                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const bool ok = (mSIntValue != 0) && !((mSIntValue == INT32_MIN) && (inOperand.mSIntValue == -1)) ;
    result = GGS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::divide_operation_no_ovf (const GGS_sint & inOperand) const {
  GGS_sint result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_sint ((inOperand.mSIntValue == 0) ? 0 : (mSIntValue / inOperand.mSIntValue)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::modulo_operation (const GGS_sint & inOperand2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid () && inOperand2.isValid ()) {
    if (mSIntValue == 0) {
      inCompiler->onTheFlyRunTimeError ("@sint divide by zero in modulo operation" COMMA_THERE) ;
    }else{
      result = GGS_sint (mSIntValue % inOperand2.mSIntValue) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::operator_unary_minus (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid ()) {
    if (mSIntValue == INT32_MIN) {
      inCompiler->onTheFlyRunTimeError ("@sint unary '-' operation underflow" COMMA_THERE) ;
    }else{
      result = GGS_sint (- mSIntValue) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::operator_unary_minus_no_ovf (void) const {
  GGS_sint result ;
  if (isValid ()) {
    result = GGS_sint (- mSIntValue) ;
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::left_shift_operation (const GGS_uint inShiftOperand,
                                         Compiler * /* inCompiler*/
                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid () && inShiftOperand.isValid ()) {
    result = GGS_sint (mSIntValue << (inShiftOperand.uintValue () & 31)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::left_shift_operation (const GGS_bigint inShiftOperand,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@sint left shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_sint (mSIntValue << (inShiftOperand.bigintValue ().uint32 () & 31)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::right_shift_operation (const GGS_uint inShiftOperand,
                                          Compiler * /* inCompiler*/
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid () && inShiftOperand.isValid ()) {
    result = GGS_sint (mSIntValue >> (inShiftOperand.uintValue () & 31)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::right_shift_operation (const GGS_bigint inShiftOperand,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@sint right shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_sint (mSIntValue >> (inShiftOperand.bigintValue ().uint32 () & 31)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::operator_and (const GGS_sint & inOperand2
                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_sint (mSIntValue & inOperand2.mSIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::operator_or (const GGS_sint & inOperand2
                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_sint (mSIntValue | inOperand2.mSIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::operator_xor (const GGS_sint & inOperand2
                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_sint (mSIntValue ^ inOperand2.mSIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_sint::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid ()) {
    result = GGS_sint (~ mSIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
