//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2009, ..., 2024 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"
#include "galgas-input-output.h"
#include "utf32.h"
#include "galgas-random.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark C++ constructors
#endif

//--------------------------------------------------------------------------------------------------
//
//       C++ Constructors                                                                        
//
//--------------------------------------------------------------------------------------------------

GGS_u_33__32_::GGS_u_33__32_ (void) :
AC_GALGAS_root (),
mIsValid (false),
mU32 (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_::GGS_u_33__32_ (const uint32_t inValue) :
AC_GALGAS_root (),
mIsValid (true),
mU32 (inValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_::GGS_u_33__32_ (const bool inValid, const uint32_t inValue) :
AC_GALGAS_root (),
mIsValid (inValid),
mU32 (inValue) {
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS Class methods
#endif

//--------------------------------------------------------------------------------------------------
//
//       Class methods                                                                           
//
//--------------------------------------------------------------------------------------------------

void GGS_u_33__32_::class_method_setRandomSeed (GGS_u_33__32_ inSeed
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (inSeed.isValid  ()) {
    #if (COMPILE_FOR_WINDOWS == 1) || defined(__CYGWIN__)
      srand (inSeed.uintValue ()) ;
    #else
      srandom (inSeed.uintValue ()) ;
    #endif
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS constructors
#endif

//--------------------------------------------------------------------------------------------------
//
//       GALGAS Constructors                                                                     
//
//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::class_func_random (UNUSED_LOCATION_ARGS) {
  return GGS_u_33__32_ (uint32_t (galgas_random ())) ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::class_func_max (UNUSED_LOCATION_ARGS) {
  return GGS_u_33__32_ (UINT32_MAX) ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::class_func_valueWithMask (const GGS_u_33__32_ & inLowerIndex,
                                             const GGS_u_33__32_ & inUpperIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GGS_u_33__32_ result ;
  if (inLowerIndex.isValid () && inUpperIndex.isValid ()) {
    const uint32_t lowerIndex = inLowerIndex.mU32 ;
    const uint32_t upperIndex = inUpperIndex.mU32 ;
    if (lowerIndex > upperIndex) {
      inCompiler->onTheFlyRunTimeError ("lower index greater than upper index" COMMA_THERE) ;
    }else if (upperIndex > 31) {
      inCompiler->onTheFlyRunTimeError ("upper index greater than 31" COMMA_THERE) ;
    }else{
      const uint32_t value = uint32_t (((1 << (upperIndex + 1)) - 1) & ~ ((1 << lowerIndex) - 1)) ;
      result = GGS_u_33__32_ (value) ;
    }
  }
  return result ;
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

GGS_u_33__32_ GGS_u_33__32_::operator_and (const GGS_u_33__32_ & inOperand
                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_33__32_ (mU32 & inOperand.mU32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::operator_or (const GGS_u_33__32_ & inOperand
                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_33__32_ (mU32 | inOperand.mU32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::operator_xor (const GGS_u_33__32_ & inOperand
                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_33__32_ (mU32 ^ inOperand.mU32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    result = GGS_u_33__32_ (~ mU32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_u_33__32_::objectCompare (const GGS_u_33__32_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mU32 < inOperand.mU32) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mU32 > inOperand.mU32) {
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

GGS_s_33__32_ GGS_u_33__32_::getter_s_33__32_ (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GGS_s_33__32_ result ;
  if (mU32 > (uint32_t (INT32_MAX))) {
    inCompiler->onTheFlyRunTimeError ("@u32 to signed value conversion overflow" COMMA_THERE) ;
  }else{
    result = GGS_s_33__32_ ((int32_t) mU32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_u_33__32_::getter_s_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid ()) {
    result = GGS_s_36__34_ (int64_t (mU32)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_u_33__32_::getter_u_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid ()) {
    result = GGS_u_36__34_ (mU32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_f_36__34_ GGS_u_33__32_::getter_f_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_f_36__34_ result ;
  if (isValid ()) {
    result = GGS_f_36__34_ (double (mU32)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_u_33__32_::getter_bigint (UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid ()) {
    result = GGS_bigint (BigSigned (true, mU32)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_u_33__32_::getter_string (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendUnsigned (mU32) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_u_33__32_::getter_hexString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendCString ("0x") ;
    s.appendUnsignedHex (mU32) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_u_33__32_::getter_hexStringSeparatedBy (const GGS_char & inSeparator,
                                                  const GGS_u_33__32_ & inGroup,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inSeparator.isValid () && inGroup.isValid ()) {
    const int group = (int) inGroup.uintValue () ;
    if (group <= 0) {
      inCompiler->onTheFlyRunTimeError ("last argument should be > 0" COMMA_THERE) ;
    }else{
      String s ;
      s.appendUnsignedHex (mU32) ;
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

GGS_string GGS_u_33__32_::getter_xString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendUnsignedHex (mU32) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_u_33__32_::description (String & ioString,
                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@u32:") ;
  if (isValid ()) {
    ioString.appendUnsigned (mU32) ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::getter_significantBitCount (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    uint32_t v = mU32 ;
    uint32_t idx = 0 ;
    while (v != 0) {
      idx += 1 ;
      v >>= 1 ;
    }
    result = GGS_u_33__32_ (idx) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::getter_oneBitCount (UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid ()) {
    uint32_t v = mU32 ;
    uint32_t idx = 0 ;
    while (v != 0) {
      idx += v & 1 ;
      v >>= 1 ;
    }
    result = GGS_u_33__32_ (idx) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::getter_lsbIndex (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  uint32_t v = mU32 ;
  if (v == 0) {
    inCompiler->onTheFlyRunTimeError ("null receiver for lsbIndex reader" COMMA_THERE) ;
  }else{
    uint32_t idx = 0 ;
    while ((v != 0) && ((v & 1) == 0)) {
      idx += 1 ;
      v >>= 1 ;
    }
    result = GGS_u_33__32_ (idx) ;
  }
  return result ;  
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_33__32_::getter_isUnicodeValueAssigned (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (utf32 (mU32).isAssigned ()) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Operations
#endif

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::add_operation (const GGS_u_33__32_ & inOperand,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    uint32_t r ;
    const bool ovf = __builtin_add_overflow (mU32, inOperand.mU32, &r) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u32 + operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_u_33__32_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_33__32_::getter_canAdd (const GGS_u_33__32_ & inOperand
                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    uint32_t r ;
    const bool ovf = __builtin_add_overflow (mU32, inOperand.mU32, &r) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_u_33__32_::plusAssignOperation (const GGS_u_33__32_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const bool ovf = __builtin_add_overflow (mU32, inOperand.mU32, &mU32) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u32 += operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_u_33__32_::minusAssignOperation (const GGS_u_33__32_ inOperand,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const bool ovf = __builtin_sub_overflow (mU32, inOperand.mU32, &mU32) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u32 -= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

void GGS_u_33__32_::mulAssignOperation (const GGS_u_33__32_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const bool ovf = __builtin_mul_overflow (mU32, inOperand.mU32, &mU32) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u32 *= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_u_33__32_::divAssignOperation (const GGS_u_33__32_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mU32 == 0) {
      inCompiler->onTheFlyRunTimeError ("@u32 /= divide by zero" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mU32 /= inOperand.mU32 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::wrapping_add_operation (const GGS_u_33__32_ & inOperand) const {
  GGS_u_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_33__32_ (mU32 + inOperand.mU32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::subtract_operation (const GGS_u_33__32_ & inOperand,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    const uint32_t r = mU32 - inOperand.mU32 ;
    const bool ovf = mU32 < inOperand.mU32 ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u32 - operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_u_33__32_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_33__32_::getter_canSubstract (const GGS_u_33__32_ & inOperand
                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool (mU32 >= inOperand.mU32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::wrapping_subtract_operation (const GGS_u_33__32_ & inOperand2) const {
  GGS_u_33__32_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_u_33__32_ (mU32 - inOperand2.mU32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::wrapping_multiply_operation (const GGS_u_33__32_ & inOperand2) const {
  GGS_u_33__32_ result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_u_33__32_ (mU32 * inOperand2.mU32) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::multiply_operation (const GGS_u_33__32_ & inOperand,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    uint32_t r ;
    const bool ovf = __builtin_mul_overflow (mU32, inOperand.mU32, &r) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@u32 * operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_u_33__32_ (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_33__32_::getter_canMultiply (const GGS_u_33__32_ & inOperand
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    uint32_t r ;
    const bool ovf = __builtin_mul_overflow (mU32, inOperand.mU32, &r) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::divide_operation (const GGS_u_33__32_ & inOperand,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mU32 == 0) {
      inCompiler->onTheFlyRunTimeError ("@u32 divide by zero" COMMA_THERE) ;
    }else{
      result = GGS_u_33__32_ (mU32 / inOperand.mU32) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_u_33__32_::getter_canDivide (const GGS_u_33__32_ & inOperand
                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool (inOperand.mU32 != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::wrapping_divide_operation (const GGS_u_33__32_ & inOperand) const {
  GGS_u_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_33__32_ ((inOperand.mU32 == 0) ? 0 : (mU32 / inOperand.mU32)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::modulo_operation (const GGS_u_33__32_ & inOperand,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mU32 == 0) {
      inCompiler->onTheFlyRunTimeError ("@u32 divide by zero in modulo operation" COMMA_THERE) ;
    }else{
      result = GGS_u_33__32_ (mU32 % inOperand.mU32) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::left_shift_operation (const GGS_u_33__32_ inOperand,
                                         class Compiler * /* inCompiler*/
                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_33__32_ (mU32 << (inOperand.mU32 & 31)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::left_shift_operation (const GGS_bigint inShiftOperand,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@u32 left shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_u_33__32_ (mU32 << (inShiftOperand.bigintValue().uint32 () & 31)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::right_shift_operation (const GGS_u_33__32_ inOperand,
                                          Compiler * /* inCompiler*/
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_u_33__32_ (mU32 >> (inOperand.mU32 & 31)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_33__32_ GGS_u_33__32_::right_shift_operation (const GGS_bigint inShiftOperand,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GGS_u_33__32_ result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@u32 right shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_u_33__32_ (mU32 >> (inShiftOperand.bigintValue().uint32 () & 31)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
