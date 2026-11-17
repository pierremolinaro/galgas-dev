//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2006, ..., 2026 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS Constructors
#endif

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_::GGS_u_36__34_ (const uint64_t inValue) :
AC_GALGAS_root (),
mIsValid (true),
mU64 (inValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_::GGS_u_36__34_ (void) :
AC_GALGAS_root (),
mIsValid (false),
mU64 (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::class_func_max (UNUSED_LOCATION_ARGS) {
  return GGS_u_36__34_ (UINT64_MAX) ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::class_func_uint_36__34_MaskWithCompressedBitString (const GGS_string & inBitString,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_u_36__34_ result ;
  if (inBitString.isValid ()) {
    const int32_t bitStringLength = inBitString.stringValue ().length () ;
    bool ok = true ;
    uint64_t v = 0 ;
    for (int32_t i=0 ; (i<bitStringLength) && ok ; i++) {
      v <<= 1 ;
      const utf32 c = inBitString.stringValue ().charAtIndex (i COMMA_HERE) ;
      if ((c.u32 () == '1') || (c.u32 () == '0')) {
        v += 1 ;
      }else if (c.u32 () != 'X') {
        ok = false ;
      }
    }
    if (ok) {
      result = GGS_u_36__34_ (v) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("incorrect bit string for 'uint64MaskWithCompressedBitString' @u64 constructor" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::class_func_uint_36__34_BaseValueWithCompressedBitString (const GGS_string & inBitString,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_u_36__34_ result ;
  if (inBitString.isValid ()) {
    bool ok = true ;
    uint64_t v = 0 ;
    const int32_t bitStringLength = inBitString.stringValue ().length () ;
    for (int32_t i=0 ; (i<bitStringLength) && ok ; i++) {
      v <<= 1 ;
      const utf32 c = inBitString.stringValue ().charAtIndex (i COMMA_HERE) ;
      if (c.u32 () == '1') {
        v += 1 ;
      }else if ((c.u32 () != '0') && (c.u32 () != 'X')) {
        ok = false ;
      }
    }
    if (ok) {
      result = GGS_u_36__34_ (v) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("incorrect bit string for 'uint64BaseValueWithCompressedBitString' @u64_t constructor" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::class_func_uint_36__34_WithBitString (const GGS_string & inBitString,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_u_36__34_ result ;
  if (inBitString.isValid ()) {
    bool ok = true ;
    uint64_t v = 0 ;
    const int32_t bitStringLength = inBitString.stringValue ().length () ;
    for (int32_t i=0 ; (i<bitStringLength) && ok ; i++) {
      v <<= 1 ;
      const utf32 c = inBitString.stringValue ().charAtIndex (i COMMA_HERE) ;
      if (c.u32 () == '1') {
        v += 1 ;
      }else if (c.u32 () != '0') {
        ok = false ;
      }
    }
    if (ok) {
      result = GGS_u_36__34_ (v) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("incorrect bit string for 'uint64WithBitString' @u64_t constructor" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS Operators
#endif

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::operator_and (const GGS_u_36__34_ & inOperand2
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_u_36__34_ (mU64 & inOperand2.mU64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::operator_or (const GGS_u_36__34_ & inOperand2
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_u_36__34_ (mU64 | inOperand2.mU64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::operator_xor (const GGS_u_36__34_ & inOperand2
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_u_36__34_ (mU64 ^ inOperand2.mU64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid ()) {
    result = GGS_u_36__34_ (~ mU64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::modulo_operation (const GGS_u_36__34_ & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    if (inOperand2.mU64 == 0) {
      inCompiler->onTheFlyRunTimeError ("divide by zero in @u64 modulo operation" COMMA_THERE) ;
    }else{
      result = GGS_u_36__34_ (mU64 % inOperand2.mU64) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::left_shift_operation (const GGS_uint inShiftOperand,
                                                         Compiler * /* inCompiler*/
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    result = GGS_u_36__34_ (mU64 << (inShiftOperand.uintValue () & 63)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::left_shift_operation (const GGS_bigint inShiftOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@u64 left shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_u_36__34_ (mU64 << (inShiftOperand.bigintValue ().uint32 () & 63)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::right_shift_operation (const GGS_uint inShiftOperand,
                                                          Compiler * /* inCompiler*/
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    result = GGS_u_36__34_ (mU64 >> (inShiftOperand.uintValue () & 63)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::right_shift_operation (const GGS_bigint inShiftOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@u64 right shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_u_36__34_ (mU64 >> (inShiftOperand.bigintValue ().uint32 () & 63)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::multiply_operation (const GGS_u_36__34_ & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    const uint64_t r = mU64 * inOperand.mU64 ;
    const bool ovf = (inOperand.mU64 != 0) && ((r / inOperand.mU64) != mU64) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u64 * operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_u_36__34_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_36__34_::getter_canMultiply (const GGS_u_36__34_ & inOperand
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const uint64_t r = mU64 * inOperand.mU64 ;
    const bool ovf = (inOperand.mU64 != 0) && ((r / inOperand.mU64) != mU64) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::divide_operation (const GGS_u_36__34_ & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mU64 == 0) {
      inCompiler->onTheFlyRunTimeError ("@u64 divide by zero" COMMA_THERE) ;
    }else{
      result = GGS_u_36__34_ (mU64 / inOperand.mU64) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_36__34_::getter_canDivide (const GGS_u_36__34_ & inOperand
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool (inOperand.mU64 != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::wrapping_divide_operation (const GGS_u_36__34_ & inOperand) const {
  GGS_u_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_36__34_ ((inOperand.mU64 == 0) ? 0 : (mU64 / inOperand.mU64)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::wrapping_add_operation (const GGS_u_36__34_ & inOperand) const {
  GGS_u_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_36__34_ (mU64 + inOperand.mU64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::add_operation (const GGS_u_36__34_ & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    const uint64_t r = mU64 + inOperand.mU64 ;
    const bool ovf = r < mU64 ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u64 + operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_u_36__34_ (r) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------

void GGS_u_36__34_::plusAssignOperation (const GGS_u_36__34_ inOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const uint64_t r = mU64 + inOperand.mU64 ;
    const bool ovf = r < mU64 ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u64 += operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mU64 = r ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_u_36__34_::minusAssignOperation (const GGS_u_36__34_ inOperand,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const bool ovf = mU64 < inOperand.mU64 ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u64 -= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mU64 -= inOperand.mU64 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_u_36__34_::mulAssignOperation (const GGS_u_36__34_ inOperand,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const uint64_t r = mU64 * inOperand.mU64 ;
    const bool ovf = (inOperand.mU64 != 0) && ((r / inOperand.mU64) != mU64) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u64 *= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mU64 = r ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_u_36__34_::divAssignOperation (const GGS_u_36__34_ inOperand,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mU64 == 0) {
      inCompiler->onTheFlyRunTimeError ("@u64 /= divide by zero" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mU64 /= inOperand.mU64 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_36__34_::getter_canAdd (const GGS_u_36__34_ & inOperand
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    const uint64_t r = mU64 + inOperand.mU64 ;
    const bool ovf = r < mU64 ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::wrapping_subtract_operation (const GGS_u_36__34_ & inOperand2) const {
  GGS_u_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_u_36__34_ (mU64 - inOperand2.mU64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::wrapping_multiply_operation (const GGS_u_36__34_ & inOperand2) const {
  GGS_u_36__34_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_u_36__34_ (mU64 * inOperand2.mU64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_36__34_::subtract_operation (const GGS_u_36__34_ & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid () && inOperand.isValid ()) {
    const uint64_t r = mU64 - inOperand.mU64 ;
    const bool ovf = mU64 < inOperand.mU64 ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u64 - operation underflow" COMMA_THERE) ;
    }else{
      result = GGS_u_36__34_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_36__34_::getter_canSubstract (const GGS_u_36__34_ & inOperand
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool (mU64 >= inOperand.mU64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_u_36__34_::objectCompare (const GGS_u_36__34_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mU64 < inOperand.mU64) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mU64 > inOperand.mU64) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS Getters
#endif

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_u_36__34_::getter_s_36__34_ (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (mU64 > ((uint64_t) INT64_MAX)) {
    inCompiler->onTheFlyRunTimeError ("@u64 to signed value conversion overflow" COMMA_THERE) ;
  }else{
    result = GGS_s_36__34_ ((int64_t) mU64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_u_36__34_::getter_sint (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (mU64 > ((uint64_t) INT32_MAX)) {
    inCompiler->onTheFlyRunTimeError ("@u64 to signed value conversion overflow" COMMA_THERE) ;
  }else{
    result = GGS_sint ((int32_t) (mU64 & UINT32_MAX)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_u_36__34_::getter_uint (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (mU64 > ((uint64_t) UINT32_MAX)) {
    inCompiler->onTheFlyRunTimeError ("64-bit unsigned value to 32-bit unsigned value conversion overflow" COMMA_THERE) ;
  }else{
    result = GGS_uint (uint32_t (mU64 & UINT32_MAX)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_u_36__34_::getter_bigint (UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid ()) {
    result = GGS_bigint (BigSigned (true, mU64)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_u_36__34_::getter_f_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ ((double) mU64) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_u_36__34_::getter_string (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendUnsigned (mU64) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_u_36__34_::getter_hexString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendCString ("0x") ;
    s.appendUnsignedHex16 (mU64) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_u_36__34_::getter_hexStringSeparatedBy (const GGS_char & inSeparator,
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
      s.appendUnsignedHex16 (mU64) ;
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

GGS_string GGS_u_36__34_::getter_xString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendUnsignedHex16 (mU64) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_u_36__34_::description (String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@u64:") ;
  if (isValid ()) {
    ioString.appendUnsigned (mU64) ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_u_36__34_::getter_uintSlice (const GGS_uint & inStartBit,
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
      uint64_t v = mU64 >> inStartBit.uintValue () ;
      v &= ((1ULL << inBitCount.uintValue ()) - 1ULL) ;
      result = GGS_uint (uint32_t (v & UINT32_MAX)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
