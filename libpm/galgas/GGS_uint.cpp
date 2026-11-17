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

GGS_uint::GGS_uint (void) :
AC_GALGAS_root (),
mIsValid (false),
mUIntValue (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_uint::GGS_uint (const uint32_t inValue) :
AC_GALGAS_root (),
mIsValid (true),
mUIntValue (inValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_uint::GGS_uint (const bool inValid, const uint32_t inValue) :
AC_GALGAS_root (),
mIsValid (inValid),
mUIntValue (inValue) {
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

void GGS_uint::class_method_setRandomSeed (GGS_uint inSeed
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

GGS_uint GGS_uint::class_func_random (UNUSED_LOCATION_ARGS) {
  return GGS_uint (uint32_t (galgas_random ())) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::class_func_max (UNUSED_LOCATION_ARGS) {
  return GGS_uint (UINT32_MAX) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::class_func_valueWithMask (const GGS_uint & inLowerIndex,
                                             const GGS_uint & inUpperIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GGS_uint result ;
  if (inLowerIndex.isValid () && inUpperIndex.isValid ()) {
    const uint32_t lowerIndex = inLowerIndex.mUIntValue ;
    const uint32_t upperIndex = inUpperIndex.mUIntValue ;
    if (lowerIndex > upperIndex) {
      inCompiler->onTheFlyRunTimeError ("lower index greater than upper index" COMMA_THERE) ;
    }else if (upperIndex > 31) {
      inCompiler->onTheFlyRunTimeError ("upper index greater than 31" COMMA_THERE) ;
    }else{
      const uint32_t value = uint32_t (((1 << (upperIndex + 1)) - 1) & ~ ((1 << lowerIndex) - 1)) ;
      result = GGS_uint (value) ;
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

GGS_uint GGS_uint::operator_and (const GGS_uint & inOperand
                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_uint (mUIntValue & inOperand.mUIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::operator_or (const GGS_uint & inOperand
                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_uint (mUIntValue | inOperand.mUIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::operator_xor (const GGS_uint & inOperand
                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_uint (mUIntValue ^ inOperand.mUIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (~ mUIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_uint::objectCompare (const GGS_uint & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mUIntValue < inOperand.mUIntValue) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mUIntValue > inOperand.mUIntValue) {
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

GGS_sint GGS_uint::getter_sint (Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (mUIntValue > (uint32_t (INT32_MAX))) {
    inCompiler->onTheFlyRunTimeError ("@uint to signed value conversion overflow" COMMA_THERE) ;
  }else{
    result = GGS_sint ((int32_t) mUIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_s_36__34_ GGS_uint::getter_s_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_s_36__34_ result ;
  if (isValid ()) {
    result = GGS_s_36__34_ (int64_t (mUIntValue)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_36__34_ GGS_uint::getter_u_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_u_36__34_ result ;
  if (isValid ()) {
    result = GGS_u_36__34_ (mUIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_uint::getter_double (UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    result = GGS_double (double (mUIntValue)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_uint::getter_bigint (UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid ()) {
    result = GGS_bigint (BigSigned (true, mUIntValue)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_uint::getter_string (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendUnsigned (mUIntValue) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_uint::getter_hexString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendCString ("0x") ;
    s.appendUnsignedHex (mUIntValue) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_uint::getter_hexStringSeparatedBy (const GGS_char & inSeparator,
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
      s.appendUnsignedHex (mUIntValue) ;
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

GGS_string GGS_uint::getter_xString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    String s ;
    s.appendUnsignedHex (mUIntValue) ;
    result = GGS_string (s) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uint::description (String & ioString,
                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@uint:") ;
  if (isValid ()) {
    ioString.appendUnsigned (mUIntValue) ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::getter_significantBitCount (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    uint32_t v = mUIntValue ;
    uint32_t idx = 0 ;
    while (v != 0) {
      idx += 1 ;
      v >>= 1 ;
    }
    result = GGS_uint (idx) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::getter_oneBitCount (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    uint32_t v = mUIntValue ;
    uint32_t idx = 0 ;
    while (v != 0) {
      idx += v & 1 ;
      v >>= 1 ;
    }
    result = GGS_uint (idx) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::getter_lsbIndex (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  uint32_t v = mUIntValue ;
  if (v == 0) {
    inCompiler->onTheFlyRunTimeError ("null receiver for lsbIndex reader" COMMA_THERE) ;
  }else{
    uint32_t idx = 0 ;
    while ((v != 0) && ((v & 1) == 0)) {
      idx += 1 ;
      v >>= 1 ;
    }
    result = GGS_uint (idx) ;
  }
  return result ;  
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_uint::getter_isUnicodeValueAssigned (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (utf32 (mUIntValue).isAssigned ()) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Operations
#endif

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::add_operation (const GGS_uint & inOperand,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inOperand.isValid ()) {
    uint32_t r ;
    const bool ovf = __builtin_add_overflow (mUIntValue, inOperand.mUIntValue, &r) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@uint + operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_uint (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_uint::getter_canAdd (const GGS_uint & inOperand
                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    uint32_t r ;
    const bool ovf = __builtin_add_overflow (mUIntValue, inOperand.mUIntValue, &r) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uint::plusAssignOperation (const GGS_uint inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const bool ovf = __builtin_add_overflow (mUIntValue, inOperand.mUIntValue, &mUIntValue) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@uint += operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uint::minusAssignOperation (const GGS_uint inOperand,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const bool ovf = __builtin_sub_overflow (mUIntValue, inOperand.mUIntValue, &mUIntValue) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@uint -= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

void GGS_uint::mulAssignOperation (const GGS_uint inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const bool ovf = __builtin_mul_overflow (mUIntValue, inOperand.mUIntValue, &mUIntValue) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@uint *= operation overflow" COMMA_THERE) ;
      mIsValid = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_uint::divAssignOperation (const GGS_uint inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mUIntValue == 0) {
      inCompiler->onTheFlyRunTimeError ("@uint /= divide by zero" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mUIntValue /= inOperand.mUIntValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::wrapping_add_operation (const GGS_uint & inOperand) const {
  GGS_uint result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_uint (mUIntValue + inOperand.mUIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::subtract_operation (const GGS_uint & inOperand,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inOperand.isValid ()) {
    const uint32_t r = mUIntValue - inOperand.mUIntValue ;
    const bool ovf = mUIntValue < inOperand.mUIntValue ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@uint - operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_uint (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_uint::getter_canSubstract (const GGS_uint & inOperand
                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool (mUIntValue >= inOperand.mUIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::wrapping_subtract_operation (const GGS_uint & inOperand2) const {
  GGS_uint result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_uint (mUIntValue - inOperand2.mUIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::wrapping_multiply_operation (const GGS_uint & inOperand2) const {
  GGS_uint result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_uint (mUIntValue * inOperand2.mUIntValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::multiply_operation (const GGS_uint & inOperand,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inOperand.isValid ()) {
    uint32_t r ;
    const bool ovf = __builtin_mul_overflow (mUIntValue, inOperand.mUIntValue, &r) ;
    if (ovf) {
      inCompiler->onTheFlyRunTimeError ("@uint * operation overflow" COMMA_THERE) ;
    }else{
      result = GGS_uint (r) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_uint::getter_canMultiply (const GGS_uint & inOperand
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    uint32_t r ;
    const bool ovf = __builtin_mul_overflow (mUIntValue, inOperand.mUIntValue, &r) ;
    result = GGS_bool (!ovf) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::divide_operation (const GGS_uint & inOperand,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mUIntValue == 0) {
      inCompiler->onTheFlyRunTimeError ("@uint divide by zero" COMMA_THERE) ;
    }else{
      result = GGS_uint (mUIntValue / inOperand.mUIntValue) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_uint::getter_canDivide (const GGS_uint & inOperand
                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool (inOperand.mUIntValue != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::wrapping_divide_operation (const GGS_uint & inOperand) const {
  GGS_uint result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_uint ((inOperand.mUIntValue == 0) ? 0 : (mUIntValue / inOperand.mUIntValue)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::modulo_operation (const GGS_uint & inOperand,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mUIntValue == 0) {
      inCompiler->onTheFlyRunTimeError ("@uint divide by zero in modulo operation" COMMA_THERE) ;
    }else{
      result = GGS_uint (mUIntValue % inOperand.mUIntValue) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::left_shift_operation (const GGS_uint inOperand,
                                         class Compiler * /* inCompiler*/
                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_uint (mUIntValue << (inOperand.mUIntValue & 31)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::left_shift_operation (const GGS_bigint inShiftOperand,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@uint left shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_uint (mUIntValue << (inShiftOperand.bigintValue().uint32 () & 31)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::right_shift_operation (const GGS_uint inOperand,
                                          Compiler * /* inCompiler*/
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_uint (mUIntValue >> (inOperand.mUIntValue & 31)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_uint::right_shift_operation (const GGS_bigint inShiftOperand,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.bigintValue().isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@uint right shift by a negative amount" COMMA_THERE) ;
    }else{
      result = GGS_uint (mUIntValue >> (inShiftOperand.bigintValue().uint32 () & 31)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
