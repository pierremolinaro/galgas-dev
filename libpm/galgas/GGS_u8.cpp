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

GGS_u_38_::GGS_u_38_ (void) :
AC_GALGAS_root (),
mIsValid (false),
mU8Value (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_::GGS_u_38_ (const uint8_t inValue) :
AC_GALGAS_root (),
mIsValid (true),
mU8Value (inValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_::GGS_u_38_ (const bool inValid, const uint8_t inValue) :
AC_GALGAS_root (),
mIsValid (inValid),
mU8Value (inValue) {
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

GGS_u_38_ GGS_u_38_::class_func_max (UNUSED_LOCATION_ARGS) {
  return GGS_u_38_ (UINT8_MAX) ;
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

GGS_u_38_ GGS_u_38_::operator_and (const GGS_u_38_ & inOperand
                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_38_ (mU8Value & inOperand.mU8Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::operator_or (const GGS_u_38_ & inOperand
                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_38_ (mU8Value | inOperand.mU8Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::operator_xor (const GGS_u_38_ & inOperand
                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_38_ (mU8Value ^ inOperand.mU8Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid ()) {
    result = GGS_u_38_ (uint8_t (~ mU8Value)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_u_38_::objectCompare (const GGS_u_38_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mU8Value < inOperand.mU8Value) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mU8Value > inOperand.mU8Value) {
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

GGS_sint GGS_u_38_::getter_sint (Compiler *
                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid ()) {
    result = GGS_sint (int32_t (mU8Value)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ GGS_u_38_::getter_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_sint_36__34_ result ;
  if (isValid ()) {
    result = GGS_sint_36__34_ (int64_t (mU8Value)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_u_38_::getter_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid ()) {
    result = GGS_uint_36__34_ (mU8Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_u_38_::getter_double (UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    result = GGS_double (double (mU8Value)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_u_38_::getter_bigint (UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid ()) {
    result = GGS_bigint (BigSigned (true, mU8Value)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_u_38_::getter_string (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendUnsigned (mU8Value) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_u_38_::getter_hexString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendCString ("0x") ;
    s.appendUnsignedHex (mU8Value) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_u_38_::getter_xString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendUnsignedHex (mU8Value) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_u_38_::description (String & ioString,
                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@u8:") ;
  if (isValid ()) {
    ioString.appendUnsigned (mU8Value) ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::getter_significantBitCount (UNUSED_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid ()) {
    uint8_t v = mU8Value ;
    uint8_t idx = 0 ;
    while (v != 0) {
      idx += 1 ;
      v >>= 1 ;
    }
    result = GGS_u_38_ (idx) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::getter_oneBitCount (UNUSED_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid ()) {
    uint8_t v = mU8Value ;
    uint8_t idx = 0 ;
    while (v != 0) {
      idx += v & 1 ;
      v >>= 1 ;
    }
    result = GGS_u_38_ (idx) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::getter_lsbIndex (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid ()) {
    uint8_t v = mU8Value ;
    if (v == 0) {
      inCompiler->onTheFlyRunTimeError ("null receiver for lsbIndex reader" COMMA_THERE) ;
    }else{
      uint8_t idx = 0 ;
      while ((v != 0) && ((v & 1) == 0)) {
        idx += 1 ;
        v >>= 1 ;
      }
      result = GGS_u_38_ (idx) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Operations
#endif

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::add_operation (const GGS_u_38_ & inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid () && inOperand.isValid ()) {
    uint8_t r ;
    const bool ovf = __builtin_add_overflow (mU8Value, inOperand.mU8Value, &r) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u8 + operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_u_38_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_38_::getter_canAdd (const GGS_u_38_ & inOperand
                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    uint32_t r ;
    const bool ovf = __builtin_add_overflow (mU8Value, inOperand.mU8Value, &r) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_u_38_::plusAssignOperation (const GGS_u_38_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const bool ovf = __builtin_add_overflow (mU8Value, inOperand.mU8Value, &mU8Value) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u8 += operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_u_38_::minusAssignOperation (const GGS_u_38_ inOperand,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const bool ovf = __builtin_sub_overflow (mU8Value, inOperand.mU8Value, &mU8Value) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u8 -= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

void GGS_u_38_::mulAssignOperation (const GGS_u_38_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const bool ovf = __builtin_mul_overflow (mU8Value, inOperand.mU8Value, &mU8Value) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u8 *= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_u_38_::divAssignOperation (const GGS_u_38_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mU8Value == 0) {
      inCompiler->onTheFlyRunTimeError ("@u8 /= divide by zero" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mU8Value /= inOperand.mU8Value ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::add_operation_no_ovf (const GGS_u_38_ & inOperand) const {
  GGS_u_38_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_38_ (mU8Value + inOperand.mU8Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::subtract_operation (const GGS_u_38_ & inOperand,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid () && inOperand.isValid ()) {
    const uint8_t r = mU8Value - inOperand.mU8Value ;
    const bool ovf = mU8Value < inOperand.mU8Value ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u8 - operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_u_38_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_38_::getter_canSubstract (const GGS_u_38_ & inOperand
                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool (mU8Value >= inOperand.mU8Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::subtract_operation_no_ovf (const GGS_u_38_ & inOperand2) const {
  GGS_u_38_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_u_38_ (mU8Value - inOperand2.mU8Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::multiply_operation_no_ovf (const GGS_u_38_ & inOperand2) const {
  GGS_u_38_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_u_38_ (mU8Value * inOperand2.mU8Value) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::multiply_operation (const GGS_u_38_ & inOperand,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid () && inOperand.isValid ()) {
    uint8_t r ;
    const bool ovf = __builtin_mul_overflow (mU8Value, inOperand.mU8Value, &r) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u8 * operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_u_38_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_38_::getter_canMultiply (const GGS_u_38_ & inOperand
                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    uint32_t r ;
    const bool ovf = __builtin_mul_overflow (mU8Value, inOperand.mU8Value, &r) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::divide_operation (const GGS_u_38_ & inOperand,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mU8Value == 0) {
      inCompiler->onTheFlyRunTimeError ("@u8 divide by zero" COMMA_THERE) ;
    }else{
      result = GGS_u_38_ (mU8Value / inOperand.mU8Value) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_38_::getter_canDivide (const GGS_u_38_ & inOperand
                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool (inOperand.mU8Value != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::divide_operation_no_ovf (const GGS_u_38_ & inOperand) const {
  GGS_u_38_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_38_ ((inOperand.mU8Value == 0) ? 0 : (mU8Value / inOperand.mU8Value)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::modulo_operation (const GGS_u_38_ & inOperand,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mU8Value == 0) {
      inCompiler->onTheFlyRunTimeError ("@u8 divide by zero in modulo operation" COMMA_THERE) ;
    }else{
      result = GGS_u_38_ (mU8Value % inOperand.mU8Value) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::left_shift_operation (const GGS_uint inOperand,
                                           class Compiler * /* inCompiler*/
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_38_ (uint8_t (mU8Value << (inOperand.uintValue () & 7))) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::left_shift_operation (const GGS_bigint inShiftOperand,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@u8 left shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_u_38_ (uint8_t (mU8Value << (inShiftOperand.bigintValue().uint32 () & 7))) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::right_shift_operation (const GGS_uint inOperand,
                                            Compiler * /* inCompiler*/
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_38_ (uint8_t (mU8Value >> (inOperand.uintValue () & 7))) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_ GGS_u_38_::right_shift_operation (const GGS_bigint inShiftOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_u_38_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@u8 right shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_u_38_ (mU8Value >> (inShiftOperand.bigintValue().uint32 () & 31)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
