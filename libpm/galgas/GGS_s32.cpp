//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2004, ..., 2019 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_::GGS_s_33__32_ (void) :
AC_GALGAS_root (),
mIsValid (false),
mS32 (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_::GGS_s_33__32_ (const int32_t inValue) :
AC_GALGAS_root (),
mIsValid (true),
mS32 (inValue) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_s_33__32_::objectCompare (const GGS_s_33__32_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mS32 < inOperand.mS32) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mS32 > inOperand.mS32) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::class_func_max (UNUSED_LOCATION_ARGS) {
  return GGS_s_33__32_ (INT32_MAX) ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::class_func_min (UNUSED_LOCATION_ARGS) {
  return GGS_s_33__32_ (INT32_MIN) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_s_33__32_::getter_uint (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    if (mS32 < 0) {
      inCompiler->onTheFlyRunTimeError ("cannot convert a negative @s32 into unsigned value" COMMA_THERE) ;
    }else{
      result = GGS_uint (uint32_t (mS32)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_s_33__32_::getter_u_36__34_ (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid ()) {
    if (mS32 < 0) {
      inCompiler->onTheFlyRunTimeError ("cannot convert a negative @s32 into unsigned value" COMMA_THERE) ;
    }else{
      result = GGS_u_36__34_ ((uint64_t) mS32) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_s_33__32_::getter_s_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid ()) {
    result = GGS_s_36__34_ (mS32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_s_33__32_::getter_f_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ (double (mS32)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_s_33__32_::getter_bigint (UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid ()) {
    result = GGS_bigint (BigSigned (mS32)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_s_33__32_::getter_string (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ; s.appendSigned (mS32) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_s_33__32_::getter_hexString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    const uint32_t v = (uint32_t) mS32 ;
    String s = "0x" ;
    s.appendUnsignedHex8 (v) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_s_33__32_::getter_hexStringSeparatedBy (const GGS_char & inSeparator,
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
      s.appendUnsignedHex ((uint32_t) mS32) ;
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

GGS_string GGS_s_33__32_::getter_xString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    const uint32_t v = (uint32_t) mS32 ;
    String s ; s.appendUnsignedHex8 (v) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_s_33__32_::description (String & ioString,
                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@s32:") ;
  if (isValid ()) {
    ioString.appendSigned (mS32) ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS_s_33__32_::plusAssignOperation (const GGS_s_33__32_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mS32 + inOperand.mS32 ;
    const bool signA = mS32 >= 0 ;
    const bool signB = inOperand.mS32 >= 0 ;
    const bool signR = r >= 0 ;
    const bool ovf = (signA == signB) && (signA != signR) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@s32 += operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mS32 = r ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_s_33__32_::minusAssignOperation (const GGS_s_33__32_ inOperand,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mS32 - inOperand.mS32 ;
    const bool ovf = (mS32 >= inOperand.mS32) != (r >= 0) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@s32 -= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mS32 = r ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_s_33__32_::mulAssignOperation (const GGS_s_33__32_ inOperand,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mS32 * inOperand.mS32 ;
    bool ovf = false ;
    if (inOperand.mS32 == -1) {
      ovf = mS32 == INT32_MIN ;
    }else if (inOperand.mS32 != 0) {
      ovf = (r / inOperand.mS32) != mS32 ;
    }
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@s32 *= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mS32 = r ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_s_33__32_::divAssignOperation (const GGS_s_33__32_ inOperand,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mS32 == 0) {
      inCompiler->onTheFlyRunTimeError ("@s32 /= divide by zero" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mS32 /= inOperand.mS32 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::wrapping_add_operation (const GGS_s_33__32_ & inOperand) const {
  GGS_s_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_s_33__32_ (mS32 + inOperand.mS32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::add_operation (const GGS_s_33__32_ & inOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mS32 + inOperand.mS32 ;
    const bool signA = mS32 >= 0 ;
    const bool signB = inOperand.mS32 >= 0 ;
    const bool signR = r >= 0 ;
    const bool ovf = (signA == signB) && (signA != signR) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@s32 + operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_s_33__32_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_s_33__32_::getter_canAdd (const GGS_s_33__32_ & inOperand
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mS32 + inOperand.mS32 ;
    const bool signA = mS32 >= 0 ;
    const bool signB = inOperand.mS32 >= 0 ;
    const bool signR = r >= 0 ;
    const bool ovf = (signA == signB) && (signA != signR) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::subtract_operation (const GGS_s_33__32_ & inOperand,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mS32 - inOperand.mS32 ;
    const bool ovf = (mS32 >= inOperand.mS32) != (r >= 0) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@s32 - operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_s_33__32_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_s_33__32_::getter_canSubstract (const GGS_s_33__32_ & inOperand
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mS32 - inOperand.mS32 ;
    const bool ovf = (mS32 >= inOperand.mS32) != (r >= 0) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::wrapping_subtract_operation (const GGS_s_33__32_ & inOperand2) const {
  GGS_s_33__32_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_s_33__32_ (mS32 - inOperand2.mS32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::wrapping_multiply_operation (const GGS_s_33__32_ & inOperand2) const {
  GGS_s_33__32_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_s_33__32_ (mS32 * inOperand2.mS32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::multiply_operation (const GGS_s_33__32_ & inOperand,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mS32 * inOperand.mS32 ;
    bool ovf = false ;
    if (inOperand.mS32 == -1) {
      ovf = mS32 == INT32_MIN ;
    }else if (inOperand.mS32 != 0) {
      ovf = (r / inOperand.mS32) != mS32 ;
    }
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@s32 * operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_s_33__32_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_s_33__32_::getter_canMultiply (const GGS_s_33__32_ & inOperand
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mS32 * inOperand.mS32 ;
    bool ovf = false ;
    if (inOperand.mS32 == -1) {
      ovf = mS32 == INT32_MIN ;
    }else if (inOperand.mS32 != 0) {
      ovf = (r / inOperand.mS32) != mS32 ;
    }
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::divide_operation (const GGS_s_33__32_ & inOperand,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    if (mS32 == 0) {
      inCompiler->onTheFlyRunTimeError ("@s32 divide by zero" COMMA_THERE) ;
    }else if ((mS32 == INT32_MIN) && (inOperand.mS32 == -1)) {
      inCompiler->onTheFlyRunTimeError ("@s32 / operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_s_33__32_ (mS32 / inOperand.mS32) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_s_33__32_::getter_canDivide (const GGS_s_33__32_ & inOperand
                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const bool ok = (mS32 != 0) && !((mS32 == INT32_MIN) && (inOperand.mS32 == -1)) ;
    result = GGS_bool (ok) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::wrapping_divide_operation (const GGS_s_33__32_ & inOperand) const {
  GGS_s_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_s_33__32_ ((inOperand.mS32 == 0) ? 0 : (mS32 / inOperand.mS32)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::modulo_operation (const GGS_s_33__32_ & inOperand2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid () && inOperand2.isValid ()) {
    if (mS32 == 0) {
      inCompiler->onTheFlyRunTimeError ("@s32 divide by zero in modulo operation" COMMA_THERE) ;
    }else{
      result = GGS_s_33__32_ (mS32 % inOperand2.mS32) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::operator_unary_minus (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid ()) {
    if (mS32 == INT32_MIN) {
      inCompiler->onTheFlyRunTimeError ("@s32 unary '-' operation underflow" COMMA_THERE) ;
    }else{
      result = GGS_s_33__32_ (- mS32) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::operator_unary_minus_no_ovf (void) const {
  GGS_s_33__32_ result ;
  if (isValid ()) {
    result = GGS_s_33__32_ (- mS32) ;
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::left_shift_operation (const GGS_uint inShiftOperand,
                                         Compiler * /* inCompiler*/
                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    result = GGS_s_33__32_ (mS32 << (inShiftOperand.uintValue () & 31)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::left_shift_operation (const GGS_bigint inShiftOperand,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@s32 left shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_s_33__32_ (mS32 << (inShiftOperand.bigintValue ().uint32 () & 31)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::right_shift_operation (const GGS_uint inShiftOperand,
                                          Compiler * /* inCompiler*/
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    result = GGS_s_33__32_ (mS32 >> (inShiftOperand.uintValue () & 31)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::right_shift_operation (const GGS_bigint inShiftOperand,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@s32 right shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_s_33__32_ (mS32 >> (inShiftOperand.bigintValue ().uint32 () & 31)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::operator_and (const GGS_s_33__32_ & inOperand2
                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_s_33__32_ (mS32 & inOperand2.mS32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::operator_or (const GGS_s_33__32_ & inOperand2
                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_s_33__32_ (mS32 | inOperand2.mS32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::operator_xor (const GGS_s_33__32_ & inOperand2
                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_s_33__32_ (mS32 ^ inOperand2.mS32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_s_33__32_::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid ()) {
    result = GGS_s_33__32_ (~ mS32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
