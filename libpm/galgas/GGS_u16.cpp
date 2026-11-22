//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2026, ..., 2026 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark C++ constructors
#endif

//--------------------------------------------------------------------------------------------------
//
//       C++ Constructors                                                                        
//
//--------------------------------------------------------------------------------------------------

GGS_u_31__36_::GGS_u_31__36_ (void) :
AC_GALGAS_root (),
mIsValid (false),
mU16 (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_::GGS_u_31__36_ (const uint16_t inValue) :
AC_GALGAS_root (),
mIsValid (true),
mU16 (inValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_::GGS_u_31__36_ (const bool inValid, const uint16_t inValue) :
AC_GALGAS_root (),
mIsValid (inValid),
mU16 (inValue) {
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS Class methods
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS constructors
#endif

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::class_func_max (UNUSED_LOCATION_ARGS) {
  return GGS_u_31__36_ (UINT16_MAX) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Operators
#endif

//--------------------------------------------------------------------------------------------------
//
//       Operators                                                                               
//
//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::operator_and (const GGS_u_31__36_ & inOperand
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_31__36_ (mU16 & inOperand.mU16) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::operator_or (const GGS_u_31__36_ & inOperand
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_31__36_ (mU16 | inOperand.mU16) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::operator_xor (const GGS_u_31__36_ & inOperand
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_31__36_ (mU16 ^ inOperand.mU16) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid ()) {
    result = GGS_u_31__36_ (uint16_t (~ mU16)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_u_31__36_::objectCompare (const GGS_u_31__36_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mU16 < inOperand.mU16) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mU16 > inOperand.mU16) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Getters
#endif

//--------------------------------------------------------------------------------------------------

GGS_s_33__32_ GGS_u_31__36_::getter_s_33__32_ (Compiler *
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (isValid ()) {
    result = GGS_s_33__32_ (int32_t (mU16)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_u_31__36_::getter_s_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid ()) {
    result = GGS_s_36__34_ (int64_t (mU16)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_31__36_::getter_u_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid ()) {
    result = GGS_u_36__34_ (mU16) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_u_31__36_::getter_f_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ (double (mU16)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_u_31__36_::getter_bigint (UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid ()) {
    result = GGS_bigint (BigSigned (true, mU16)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_u_31__36_::getter_string (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendUnsigned (mU16) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_u_31__36_::getter_hexString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendCString ("0x") ;
    s.appendUnsignedHex (mU16) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_u_31__36_::getter_xString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendUnsignedHex (mU16) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_u_31__36_::description (String & ioString,
                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@u16:") ;
  if (isValid ()) {
    ioString.appendUnsigned (mU16) ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::getter_significantBitCount (UNUSED_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid ()) {
    uint16_t v = mU16 ;
    uint16_t idx = 0 ;
    while (v != 0) {
      idx += 1 ;
      v >>= 1 ;
    }
    result = GGS_u_31__36_ (idx) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::getter_oneBitCount (UNUSED_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid ()) {
    uint16_t v = mU16 ;
    uint16_t idx = 0 ;
    while (v != 0) {
      idx += v & 1 ;
      v >>= 1 ;
    }
    result = GGS_u_31__36_ (idx) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::getter_lsbIndex (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid ()) {
    uint16_t v = mU16 ;
    if (v == 0) {
      inCompiler->onTheFlyRunTimeError ("null receiver for lsbIndex reader" COMMA_THERE) ;
    }else{
      uint16_t idx = 0 ;
      while ((v != 0) && ((v & 1) == 0)) {
        idx += 1 ;
        v >>= 1 ;
      }
      result = GGS_u_31__36_ (idx) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Operations
#endif

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::add_operation (const GGS_u_31__36_ & inOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid () && inOperand.isValid ()) {
    uint16_t r ;
    const bool ovf = __builtin_add_overflow (mU16, inOperand.mU16, &r) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u16 + operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_u_31__36_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_31__36_::getter_canAdd (const GGS_u_31__36_ & inOperand
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    uint32_t r ;
    const bool ovf = __builtin_add_overflow (mU16, inOperand.mU16, &r) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_u_31__36_::plusAssignOperation (const GGS_u_31__36_ inOperand,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const bool ovf = __builtin_add_overflow (mU16, inOperand.mU16, &mU16) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u16 += operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_u_31__36_::minusAssignOperation (const GGS_u_31__36_ inOperand,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const bool ovf = __builtin_sub_overflow (mU16, inOperand.mU16, &mU16) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u16 -= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

void GGS_u_31__36_::mulAssignOperation (const GGS_u_31__36_ inOperand,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const bool ovf = __builtin_mul_overflow (mU16, inOperand.mU16, &mU16) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u16 *= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_u_31__36_::divAssignOperation (const GGS_u_31__36_ inOperand,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mU16 == 0) {
      inCompiler->onTheFlyRunTimeError ("@u16 /= divide by zero" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mU16 /= inOperand.mU16 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::wrapping_add_operation (const GGS_u_31__36_ & inOperand) const {
  GGS_u_31__36_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_31__36_ (mU16 + inOperand.mU16) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::subtract_operation (const GGS_u_31__36_ & inOperand,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid () && inOperand.isValid ()) {
    const uint16_t r = mU16 - inOperand.mU16 ;
    const bool ovf = mU16 < inOperand.mU16 ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u16 - operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_u_31__36_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_31__36_::getter_canSubstract (const GGS_u_31__36_ & inOperand
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool (mU16 >= inOperand.mU16) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::wrapping_subtract_operation (const GGS_u_31__36_ & inOperand2) const {
  GGS_u_31__36_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_u_31__36_ (mU16 - inOperand2.mU16) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::wrapping_multiply_operation (const GGS_u_31__36_ & inOperand2) const {
  GGS_u_31__36_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_u_31__36_ (mU16 * inOperand2.mU16) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::multiply_operation (const GGS_u_31__36_ & inOperand,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid () && inOperand.isValid ()) {
    uint16_t r ;
    const bool ovf = __builtin_mul_overflow (mU16, inOperand.mU16, &r) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u16 * operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_u_31__36_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_31__36_::getter_canMultiply (const GGS_u_31__36_ & inOperand
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    uint32_t r ;
    const bool ovf = __builtin_mul_overflow (mU16, inOperand.mU16, &r) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::divide_operation (const GGS_u_31__36_ & inOperand,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mU16 == 0) {
      inCompiler->onTheFlyRunTimeError ("@u16 divide by zero" COMMA_THERE) ;
    }else{
      result = GGS_u_31__36_ (mU16 / inOperand.mU16) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_31__36_::getter_canDivide (const GGS_u_31__36_ & inOperand
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool (inOperand.mU16 != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::wrapping_divide_operation (const GGS_u_31__36_ & inOperand) const {
  GGS_u_31__36_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_31__36_ ((inOperand.mU16 == 0) ? 0 : (mU16 / inOperand.mU16)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::modulo_operation (const GGS_u_31__36_ & inOperand,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mU16 == 0) {
      inCompiler->onTheFlyRunTimeError ("@u16 divide by zero in modulo operation" COMMA_THERE) ;
    }else{
      result = GGS_u_31__36_ (mU16 % inOperand.mU16) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::left_shift_operation (const GGS_u_33__32_ inOperand,
                                                   class Compiler * /* inCompiler*/
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_31__36_ (uint16_t (mU16 << (inOperand.uintValue () & 15))) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::left_shift_operation (const GGS_bigint inShiftOperand,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@u16 left shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_u_31__36_ (uint16_t (mU16 << (inShiftOperand.bigintValue().uint32 () & 15))) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::right_shift_operation (const GGS_u_33__32_ inOperand,
                                                    Compiler * /* inCompiler*/
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_31__36_ (uint16_t (mU16 >> (inOperand.uintValue () & 15))) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_31__36_ GGS_u_31__36_::right_shift_operation (const GGS_bigint inShiftOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_u_31__36_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@u16 right shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_u_31__36_ (mU16 >> (inShiftOperand.bigintValue().uint32 () & 15)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
