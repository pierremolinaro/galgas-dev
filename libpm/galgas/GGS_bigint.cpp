//--------------------------------------------------------------------------------------------------
//
//  GGS_bigint                                                                                
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2015, ..., 2023 Pierre Molinaro.
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
  #pragma mark Native constructors
#endif

//--------------------------------------------------------------------------------------------------

GGS_bigint::GGS_bigint (void) :
AC_GALGAS_root (),
mIsValid (false),
mValue (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_bigint::GGS_bigint (const BigSigned & inValue) :
AC_GALGAS_root (),
mIsValid (true),
mValue (inValue) {
}

//--------------------------------------------------------------------------------------------------

static bool gOk ;

GGS_bigint::GGS_bigint (const char * inDecimalString, Compiler * inCompiler COMMA_LOCATION_ARGS) :
AC_GALGAS_root (),
mIsValid (true),
mValue (inDecimalString, BigUnsignedBase::ten, gOk) {
  if (! gOk) {
    inCompiler->onTheFlyRunTimeError ("@bigint internal construction error" COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint::~GGS_bigint (void) {
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS internals
#endif

//--------------------------------------------------------------------------------------------------

void GGS_bigint::drop (void) {
  mIsValid = false ;
  mValue = BigSigned () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bigint::description (String & ioString,
                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@bigint: ") ;
  if (!mIsValid) {
    ioString.appendCString ("not built") ;
  }else{
    ioString.appendString (mValue.decimalString ()) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bigint::objectCompare (const GGS_bigint & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t cmp = mValue.compare (inOperand.mValue) ;
    if (cmp < 0) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (cmp > 0) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS constructors
#endif

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::class_func_zero (UNUSED_LOCATION_ARGS) {
  GGS_bigint result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Testing value representation
#endif

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bigint::getter_bitCountForSignedRepresentation (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mValue.requiredBitCountForSignedRepresentation ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bigint::getter_bitCountForUnsignedRepresentation (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mValue.requiredBitCountForUnsignedRepresentation ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bigint::getter_fitsInUInt (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mValue.fitsInUInt32 ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bigint::getter_fitsInSInt (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mValue.fitsInSInt32 ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bigint::getter_fitsInUInt_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mValue.fitsInUInt64 ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bigint::getter_fitsInSInt_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mValue.fitsInSInt64 ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bigint::getter_isZero (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (mValue.isZero ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_bigint::getter_sign (UNUSED_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid ()) {
    result = GGS_sint (mValue.sign ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_bigint::getter_extract_38_ForUnsignedRepresentation (LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid ()) {
    GenericUniqueArray <uint8_t> valueArray ;
    mValue.extractBytesForUnsignedRepresentation (valueArray) ;
    result = GGS_uintlist::class_func_emptyList (THERE) ;
    for (int32_t i=0 ; i<valueArray.count () ; i++) {
      result.addAssignOperation (GGS_uint (valueArray (i COMMA_HERE)) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_bigint::getter_extract_38_ForSignedRepresentation (LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid ()) {
    GenericUniqueArray <uint8_t> valueArray ;
    mValue.extractBytesForSignedRepresentation (valueArray) ;
    result = GGS_uintlist::class_func_emptyList (THERE) ;
    for (int32_t i=0 ; i<valueArray.count () ; i++) {
      result.addAssignOperation (GGS_uint (valueArray (i COMMA_HERE)) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_bigint::getter_extract_33__32_ForUnsignedRepresentation (LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid ()) {
    GenericUniqueArray <uint8_t> valueArray ;
    mValue.extractBytesForUnsignedRepresentation (valueArray) ;
    const int32_t paddingCount = (4 - (valueArray.count () % 4)) % 4 ;
    valueArray.appendObjects (paddingCount, 0) ;
    result = GGS_uintlist::class_func_emptyList (THERE) ;
    for (int32_t i=0 ; i<valueArray.count () ; i+=4) {
      uint32_t v = valueArray (i+3 COMMA_HERE) ;
      v <<= 8 ;
      v |= valueArray (i+2 COMMA_HERE) ;
      v <<= 8 ;
      v |= valueArray (i+1 COMMA_HERE) ;
      v <<= 8 ;
      v |= valueArray (i COMMA_HERE) ;
      result.addAssignOperation (GGS_uint (v) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_bigint::getter_extract_33__32_ForSignedRepresentation (LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid ()) {
    GenericUniqueArray <uint8_t> valueArray ;
    mValue.extractBytesForSignedRepresentation (valueArray) ;
    const int32_t paddingCount = (4 - (valueArray.count () % 4)) % 4 ;
    valueArray.appendObjects (paddingCount, ((valueArray.lastObject (HERE) & 0x80) != 0) ? 0xFF : 0) ;
    result = GGS_uintlist::class_func_emptyList (THERE) ;
    for (int32_t i=0 ; i<valueArray.count () ; i+=4) {
      uint32_t v = valueArray (i+3 COMMA_HERE) ;
      v <<= 8 ;
      v |= valueArray (i+2 COMMA_HERE) ;
      v <<= 8 ;
      v |= valueArray (i+1 COMMA_HERE) ;
      v <<= 8 ;
      v |= valueArray (i COMMA_HERE) ;
      result.addAssignOperation (GGS_uint (v) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list GGS_bigint::getter_extract_36__34_ForUnsignedRepresentation (LOCATION_ARGS) const {
  GGS_uint_36__34_list result ;
  if (isValid ()) {
    GenericUniqueArray <uint8_t> valueArray ;
    mValue.extractBytesForUnsignedRepresentation (valueArray) ;
    const int32_t paddingCount = (8 - (valueArray.count () % 8)) % 8 ;
    valueArray.appendObjects (paddingCount, 0) ;
    result = GGS_uint_36__34_list::class_func_emptyList (THERE) ;
    for (int32_t i=0 ; i<valueArray.count () ; i+=8) {
      uint64_t v = 0 ;
      for (int32_t j=7 ; j>=0 ; j--) {
        v <<= 8 ;
        v |= valueArray (i+j COMMA_HERE) ;
      }
      result.addAssignOperation (GGS_uint_36__34_ (v) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_list GGS_bigint::getter_extract_36__34_ForSignedRepresentation (LOCATION_ARGS) const {
  GGS_uint_36__34_list result ;
  if (isValid ()) {
    GenericUniqueArray <uint8_t> valueArray ;
    mValue.extractBytesForSignedRepresentation (valueArray) ;
    const int32_t paddingCount = (8 - (valueArray.count () % 8)) % 8 ;
    valueArray.appendObjects (paddingCount, ((valueArray.lastObject (HERE) & 0x80) != 0) ? 0xFF : 0) ;
    result = GGS_uint_36__34_list::class_func_emptyList (THERE) ;
    for (int32_t i=0 ; i<valueArray.count () ; i+=8) {
      uint64_t v = 0 ;
      for (int32_t j=7 ; j>=0 ; j--) {
        v <<= 8 ;
        v |= valueArray (i+j COMMA_HERE) ;
      }
      result.addAssignOperation (GGS_uint_36__34_ (v) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Convert to string
#endif

//--------------------------------------------------------------------------------------------------

GGS_string GGS_bigint::getter_string (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mValue.decimalString ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_bigint::getter_spacedString (const GGS_uint & inSeparation COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inSeparation.isValid ()) {
    result = GGS_string (mValue.spacedDecimalString (inSeparation.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_bigint::getter_hexString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mValue.hexString ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_bigint::getter_hexStringSeparatedBy (const GGS_char & inSeparator,
                                                          const GGS_uint & inGroup,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inSeparator.isValid () && inGroup.isValid ()) {
    const int group = (int) inGroup.uintValue () ;
    if (group <= 0) {
      inCompiler->onTheFlyRunTimeError ("last argument should be > 0" COMMA_THERE) ;
    }else{
      String s = mValue.xString () ;
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

GGS_string GGS_bigint::getter_xString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mValue.xString ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Incrementation, decrementation
#endif

//--------------------------------------------------------------------------------------------------

void GGS_bigint::increment_operation (Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mValue += 1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bigint::decrement_operation (Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mValue -= 1 ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Bit manipulation
#endif

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bigint::getter_bitAtIndex (const GGS_uint & inBitIndex
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inBitIndex.isValid ()) {
    result = GGS_bool (mValue.bitAtIndex (inBitIndex.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bigint::setter_complementBitAtIndex (const GGS_uint inBitIndex
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inBitIndex.isValid ()) {
    mValue.complementBitAtIndex (inBitIndex.uintValue ()) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bigint::setter_setBitAtIndex (const GGS_bool inBitValue,
                                            const GGS_uint inBitIndex
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inBitValue.isValid () && inBitIndex.isValid ()) {
    mValue.setBitAtIndex (inBitValue.boolValue(), inBitIndex.uintValue ()) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Value access
#endif

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::getter_abs (UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid ()) {
    result = GGS_bigint (mValue.abs ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bigint::getter_uint (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    if (mValue.fitsInUInt32 ()) {
      result = GGS_uint (mValue.uint32 ()) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("@bigint to @uint conversion overflow" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_bigint::getter_sint (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid ()) {
    if (mValue.fitsInSInt32 ()) {
      result = GGS_sint (mValue.int32 ()) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("@bigint to @sint conversion overflow" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_bigint::getter_uint_36__34_ (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid ()) {
    if (mValue.fitsInUInt64 ()) {
      result = GGS_uint_36__34_ (mValue.uint64 ()) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("@bigint to @uint64 conversion overflow" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ GGS_bigint::getter_sint_36__34_ (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_sint_36__34_ result ;
  if (isValid ()) {
    if (mValue.fitsInSInt64 ()) {
      result = GGS_sint_36__34_ (mValue.int64 ()) ;
    }else{
      inCompiler->onTheFlyRunTimeError ("@bigint to @sint64 conversion overflow" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Arithmetics
#endif

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::operator_unary_minus (Compiler * /* inCompiler */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid ()) {
    result = GGS_bigint (- mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::add_operation (const GGS_bigint & inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid() && inOperand.isValid ()) {
    result = GGS_bigint (mValue + inOperand.mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::substract_operation (const GGS_bigint & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid() && inOperand.isValid ()) {
    result = GGS_bigint (mValue - inOperand.mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::multiply_operation (const GGS_bigint & inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid() && inOperand.isValid ()) {
    result = GGS_bigint (mValue * inOperand.mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::divide_operation (const GGS_bigint & inOperand,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid() && inOperand.isValid ()) {
    if (inOperand.mValue.isZero ()) {
      inCompiler->onTheFlyRunTimeError ("@bigint divide by zero" COMMA_THERE) ;
    }else{
      result = GGS_bigint (mValue / inOperand.mValue) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::modulo_operation (const GGS_bigint & inOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inOperand2.isValid ()) {
    if (inOperand2.mValue.isZero ()) {
      inCompiler->onTheFlyRunTimeError ("@sint64 divide by zero in modulo operation" COMMA_THERE) ;
    }else{
      result = GGS_bigint (mValue % inOperand2.mValue) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bigint::method_divideBy (GGS_bigint inDivisor,
                                     GGS_bigint & outQuotient,
                                     GGS_bigint & outRemainder,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  outQuotient.drop () ;
  outRemainder.drop () ;
  if (isValid () && inDivisor.isValid ()) {
    if (inDivisor.mValue.isZero ()) {
      inCompiler->onTheFlyRunTimeError ("@sint64 divide by zero in modulo operation" COMMA_THERE) ;
    }else{
      const BigSignedQuotientRemainder r = mValue.divideByBigSigned (inDivisor.mValue) ;
      outQuotient = GGS_bigint (r.quotient ()) ;
      outRemainder = GGS_bigint (r.remainder ()) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Logical
#endif

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::operator_and (const GGS_bigint & inOperand
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bigint (mValue & inOperand.mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::operator_or (const GGS_bigint & inOperand
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bigint (mValue | inOperand.mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::operator_xor (const GGS_bigint & inOperand
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bigint (mValue ^ inOperand.mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid ()) {
    result = GGS_bigint (~ mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Shift
#endif

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::left_shift_operation (const GGS_uint inShiftOperand,
                                                   class Compiler * /* inCompiler*/
                                                   COMMA_UNUSED_LOCATION_ARGS) const {

  GGS_bigint result ;
  if (isValid () && inShiftOperand.isValid ()) {
    result = GGS_bigint (mValue << inShiftOperand.uintValue ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::left_shift_operation (const GGS_bigint inShiftOperand,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {

  GGS_bigint result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.mValue.isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@bigint left shift by a negative amount" COMMA_THERE) ;
    }else if (!inShiftOperand.mValue.fitsInUInt32 ()) {
      inCompiler->onTheFlyRunTimeError ("@bigint left shift too large amount" COMMA_THERE) ;
    }else{
      result = GGS_bigint (mValue << inShiftOperand.mValue.uint32 ()) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::right_shift_operation (const GGS_uint inShiftOperand,
                                                    class Compiler * /* inCompiler*/
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inShiftOperand.isValid ()) {
    result = GGS_bigint (mValue >> inShiftOperand.uintValue ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bigint::right_shift_operation (const GGS_bigint inShiftOperand,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {

  GGS_bigint result ;
  if (isValid () && inShiftOperand.isValid ()) {
    if (inShiftOperand.mValue.isStrictlyNegative ()) {
      inCompiler->onTheFlyRunTimeError ("@bigint right shift by a negative amount" COMMA_THERE) ;
    }else if (!inShiftOperand.mValue.fitsInUInt32 ()) {
      inCompiler->onTheFlyRunTimeError ("@bigint right shift too large amount" COMMA_THERE) ;
    }else{
      result = GGS_bigint (mValue >> inShiftOperand.mValue.uint32 ()) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bigint::plusAssignOperation (const GGS_bigint inOperand,
                                      Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mValue += inOperand.mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bigint::minusAssignOperation (const GGS_bigint inOperand,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mValue -= inOperand.mValue ;
  }
}


//--------------------------------------------------------------------------------------------------

void GGS_bigint::mulAssignOperation (const GGS_bigint inOperand,
                                         Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mValue *= inOperand.mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bigint::divAssignOperation (const GGS_bigint inOperand,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mValue.isZero ()) {
      inCompiler->onTheFlyRunTimeError ("@bigint /= divide by zero" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mValue /= inOperand.mValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
