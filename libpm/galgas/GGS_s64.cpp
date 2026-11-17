//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2006, ..., 2019 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------
//
//               GGS_sint64                                                                   
//
//--------------------------------------------------------------------------------------------------

GGS_s_36__34_::GGS_s_36__34_ (void) :
AC_GALGAS_root (),
mIsValid (false),
mS64 (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_::GGS_s_36__34_ (const int64_t inValue) :
AC_GALGAS_root (),
mIsValid (true),
mS64 (inValue) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_s_36__34_::objectCompare (const GGS_s_36__34_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mS64 < inOperand.mS64) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mS64 > inOperand.mS64) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::class_func_max (UNUSED_LOCATION_ARGS) {
  return GGS_s_36__34_ (INT64_MAX) ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::class_func_min (UNUSED_LOCATION_ARGS) {
  return GGS_s_36__34_ (INT64_MIN) ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_s_36__34_::getter_u_36__34_ (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (mS64 < 0) {
    inCompiler->onTheFlyRunTimeError ("cannot convert a negative @s64 into an @u64" COMMA_THERE) ;
  }else{
    result = GGS_u_36__34_ ((uint64_t) mS64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_s_36__34_::getter_uint (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (mS64 < 0) {
    inCompiler->onTheFlyRunTimeError ("cannot convert a negative @s64 into an uint" COMMA_THERE) ;
  }else if (mS64 > ((int64_t) UINT32_MAX)) {
    inCompiler->onTheFlyRunTimeError ("@s64 conversion to unsigned value overflow" COMMA_THERE) ;
  }else{
    result = GGS_uint ((uint32_t) (mS64 & UINT32_MAX)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_s_36__34_::getter_sint (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (mS64 < INT32_MIN) {
    inCompiler->onTheFlyRunTimeError ("conversion from 64-bit signed value to 32-bit signed value overflow" COMMA_THERE) ;
  }else if (mS64 > INT32_MAX) {
    inCompiler->onTheFlyRunTimeError ("conversion from 64-bit signed value to 32-bit signed value overflow" COMMA_THERE) ;
  }else{
    result = GGS_sint ((int32_t) (mS64 & UINT32_MAX)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_s_36__34_::getter_bigint (UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid ()) {
    result = GGS_bigint (BigSigned (mS64)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_s_36__34_::getter_f_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ ((double) mS64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_s_36__34_::getter_string (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendSigned (mS64) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_s_36__34_::getter_hexString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    const uint64_t v = (uint64_t) mS64 ;
    String s ;
    s.appendCString ("0x") ;
    s.appendUnsignedHex16 (v) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_s_36__34_::getter_hexStringSeparatedBy (const GGS_char & inSeparator,
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
      s.appendUnsignedHex ((uint64_t) mS64) ;
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

GGS_string GGS_s_36__34_::getter_xString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    const uint64_t v = (uint64_t) mS64 ;
    String s ; s.appendUnsignedHex16 (v) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_s_36__34_::description (String & ioString,
                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@s64:") ;
  ioString.appendSigned (mS64) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS_s_36__34_::plusAssignOperation (const GGS_s_36__34_ inOperand,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const int64_t r = mS64 + inOperand.mS64 ;
    const bool signA = mS64 >= 0 ;
    const bool signB = inOperand.mS64 >= 0 ;
    const bool signR = r >= 0 ;
    const bool ovf = (signA == signB) && (signA != signR) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@sint64 += operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mS64 = r ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_s_36__34_::minusAssignOperation (const GGS_s_36__34_ inOperand,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const int64_t r = mS64 - inOperand.mS64 ;
    const bool ovf = (mS64 >= inOperand.mS64) != (r >= 0) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@sint64 -= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mS64 = r ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_s_36__34_::mulAssignOperation (const GGS_s_36__34_ inOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const int64_t r = mS64 * inOperand.mS64 ;
    bool ovf = false ;
    if (inOperand.mS64 == -1) {
      ovf = mS64 == INT64_MIN ;
    }else if (inOperand.mS64 != 0) {
      ovf = (r / inOperand.mS64) != mS64 ;
    }
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@sint64 *= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mS64 = r ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_s_36__34_::divAssignOperation (const GGS_s_36__34_ inOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mS64 == 0) {
      inCompiler->onTheFlyRunTimeError ("@sint64 /= divide by zero" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mS64 /= inOperand.mS64 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::wrapping_add_operation (const GGS_s_36__34_ & inOperand) const {
  GGS_s_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_s_36__34_ (mS64 + inOperand.mS64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::add_operation (const GGS_s_36__34_ & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    const int64_t r = mS64 + inOperand.mS64 ;
    const bool signA = mS64 >= 0 ;
    const bool signB = inOperand.mS64 >= 0 ;
    const bool signR = r >= 0 ;
    const bool ovf = (signA == signB) && (signA != signR) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@sint64 + operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_s_36__34_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_s_36__34_::getter_canAdd (const GGS_s_36__34_ & inOperand
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const int64_t r = mS64 + inOperand.mS64 ;
    const bool signA = mS64 >= 0 ;
    const bool signB = inOperand.mS64 >= 0 ;
    const bool signR = r >= 0 ;
    const bool ovf = (signA == signB) && (signA != signR) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// http://stackoverflow.com/questions/199333/how-to-detect-integer-overflow-in-c-c
// For signed integers you can check the signs of the arguments and of the result. integers of different signs
// can't overflow, and integers of same sign overflow only is the result is of different sign

GGS_s_36__34_ GGS_s_36__34_::subtract_operation (const GGS_s_36__34_ & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    const int64_t r = mS64 - inOperand.mS64 ;
    const bool ovf = (mS64 >= inOperand.mS64) != (r >= 0) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@sint64 - operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_s_36__34_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_s_36__34_::getter_canSubstract (const GGS_s_36__34_ & inOperand
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const int64_t r = mS64 - inOperand.mS64 ;
    const bool ovf = (mS64 >= inOperand.mS64) != (r >= 0) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::wrapping_subtract_operation (const GGS_s_36__34_ & inOperand2) const {
  GGS_s_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    const int64_t r = mS64 - inOperand2.mS64 ;
    result = GGS_s_36__34_ (r) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::wrapping_multiply_operation (const GGS_s_36__34_ & inOperand2) const {
  GGS_s_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_s_36__34_ (mS64 * inOperand2.mS64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::multiply_operation (const GGS_s_36__34_ & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    const int64_t r = mS64 * inOperand.mS64 ;
    bool ovf = false ;
    if (inOperand.mS64 == -1) {
      ovf = mS64 == INT64_MIN ;
    }else if (inOperand.mS64 != 0) {
      ovf = (r / inOperand.mS64) != mS64 ;
    }
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@sint64 * operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_s_36__34_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_s_36__34_::getter_canMultiply (const GGS_s_36__34_ & inOperand
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const int64_t r = mS64 * inOperand.mS64 ;
    bool ovf = false ;
    if (inOperand.mS64 == -1) {
      ovf = mS64 == INT64_MIN ;
    }else if (inOperand.mS64 != 0) {
      ovf = (r / inOperand.mS64) != mS64 ;
    }
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::divide_operation (const GGS_s_36__34_ & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    if (inOperand2.mS64 == 0) {
      inCompiler->onTheFlyRunTimeError ("@sint64 divide by zero" COMMA_THERE) ;
    }else if ((mS64 == INT32_MIN) && (inOperand2.mS64 == -1)) {
      inCompiler->onTheFlyRunTimeError ("@sint64 / operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_s_36__34_ (mS64 / inOperand2.mS64) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_s_36__34_::getter_canDivide (const GGS_s_36__34_ & inOperand
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const bool ok = (mS64 != 0) && !((mS64 == INT64_MIN) && (inOperand.mS64 == -1)) ;
    result = GGS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::wrapping_divide_operation (const GGS_s_36__34_ & inOperand) const {
  GGS_s_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_s_36__34_ ((inOperand.mS64 == 0) ? 0 : (mS64 / inOperand.mS64)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::modulo_operation (const GGS_s_36__34_ & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    if (inOperand2.mS64 == 0) {
      inCompiler->onTheFlyRunTimeError ("@sint64 divide by zero in modulo operation" COMMA_THERE) ;
    }else{
      result = GGS_s_36__34_ (mS64 % inOperand2.mS64) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::operator_unary_minus (Compiler * inCompiler 
                                                         COMMA_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid ()) {
    if (mS64 == INT64_MIN) {
      inCompiler->onTheFlyRunTimeError ("@sint64 unary '-' operation underflow" COMMA_THERE) ;
    }else{
      result = GGS_s_36__34_ (- mS64) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::operator_unary_minus_no_ovf (void) const {
  GGS_s_36__34_ result ;
  if (isValid ()) {
    result = GGS_s_36__34_ (- mS64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::left_shift_operation (const GGS_uint inShiftOperand,
                                                         Compiler * /* inCompiler*/
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    result = GGS_s_36__34_ (mS64 << (inShiftOperand.uintValue () & 63)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::left_shift_operation (const GGS_bigint inShiftOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@sint64 left shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_s_36__34_ (mS64 << (inShiftOperand.bigintValue().uint32() & 63)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::right_shift_operation (const GGS_uint inShiftOperand,
                                                          Compiler * /* inCompiler*/
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    result = GGS_s_36__34_ (mS64 >> (inShiftOperand.uintValue () & 63)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::right_shift_operation (const GGS_bigint inShiftOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@sint64 right shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_s_36__34_ (mS64 >> (inShiftOperand.bigintValue().uint32() & 63)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::operator_and (const GGS_s_36__34_ & inOperand2
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_s_36__34_ (mS64 & inOperand2.mS64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::operator_or (const GGS_s_36__34_ & inOperand2
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_s_36__34_ (mS64 | inOperand2.mS64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::operator_xor (const GGS_s_36__34_ & inOperand2
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_s_36__34_ (mS64 ^ inOperand2.mS64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_36__34_::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid ()) {
    result = GGS_s_36__34_ (~ mS64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
