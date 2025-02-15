//--------------------------------------------------------------------------------------------------
//
//   GGS_double                                                                               
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2002, ..., 2016 Pierre Molinaro.
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

#include <math.h>

//--------------------------------------------------------------------------------------------------

static const double PI_CONSTANT = 3.14159265358979323846264338327950288 ;

//--------------------------------------------------------------------------------------------------

GGS_double::GGS_double (void) :
AC_GALGAS_root (),
mIsValid (false),
mDoubleValue (0.0) {
}

//--------------------------------------------------------------------------------------------------

GGS_double::GGS_double (const double inValue) :
AC_GALGAS_root (),
mIsValid (true),
mDoubleValue (inValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::class_func_pi (UNUSED_LOCATION_ARGS) {
  return GGS_double (PI_CONSTANT) ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::class_func_doubleWithBinaryImage (const GGS_uint_36__34_ & inImage
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_double result ;
  if (inImage.isValid ()) {
    union {
      uint64_t unsignedIntegerValue ;
      double   doubleValue ;
    } ;
    unsignedIntegerValue = inImage.uint64Value () ;
    result = GGS_double (doubleValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_double::getter_binaryImage (UNUSED_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid ()) {
    union {
      uint64_t unsignedIntegerValue ;
      double theDoubleValue ;
    } ;
    theDoubleValue = mDoubleValue ;
    result = GGS_uint_36__34_ (unsignedIntegerValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::getter_cos (UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    result = GGS_double (cos (mDoubleValue)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::getter_sqrt (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    if (mDoubleValue < 0.0) {
      String s = "Cannot compute square root of a negative @double" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      result = GGS_double (sqrt (mDoubleValue)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::getter_log_32_ (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    if (mDoubleValue <= 0.0) {
      String s ;
      s.appendCString ("Cannot compute log2 of a null or negative @double") ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      result = GGS_double (log2 (mDoubleValue)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::getter_log_31__30_ (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    if (mDoubleValue <= 0.0) {
      String s = "Cannot compute log10 of a null or negative @double" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      result = GGS_double (log10 (mDoubleValue)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::getter_logn (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    if (mDoubleValue <= 0.0) {
      String s = "Cannot compute logn of a null or negative @double" ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      result = GGS_double (::log (mDoubleValue)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::getter_exp (UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    result = GGS_double (::exp (mDoubleValue)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::getter_cosDegree (UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    result = GGS_double (cos (mDoubleValue * PI_CONSTANT / 180.0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::getter_sin (UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    result = GGS_double (sin (mDoubleValue)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::getter_sinDegree (UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    result = GGS_double (sin (mDoubleValue * PI_CONSTANT / 180.0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::getter_tan (UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    result = GGS_double (tan (mDoubleValue)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::getter_tanDegree (UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    result = GGS_double (tan (mDoubleValue * PI_CONSTANT / 180.0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::getter_power (const GGS_double & inExponant,
                                     Compiler * /* inCompiler */
                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid () && inExponant.isValid ()) {
    result = GGS_double (pow (mDoubleValue, inExponant.mDoubleValue)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_double::getter_uint (Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if ((mDoubleValue > double (UINT32_MAX)) || (mDoubleValue < 0.0)) {
    String s = "Cannot convert @double (" ;
    s.appendDouble (mDoubleValue) ;
    s.appendCString (") to @uint") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    result = GGS_uint ((uint32_t) (lround (mDoubleValue) & INT32_MAX)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_double::getter_uint_36__34_ (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if ((mDoubleValue > double (UINT64_MAX)) || (mDoubleValue < 0.0)) {
    String s = "Cannot convert @double (" ;
    s.appendDouble (mDoubleValue) ;
    s.appendCString (") to @uint64") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    result = GGS_uint_36__34_ ((uint64_t) lround (mDoubleValue)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_double::getter_sint (Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  GGS_sint result ;
  if ((mDoubleValue > double (INT32_MAX)) || (mDoubleValue < double (INT32_MIN))) {
    String s = "Cannot convert @double (" ;
    s.appendDouble (mDoubleValue) ;
    s.appendCString (") to @sint") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    result = GGS_sint (int32_t (lround (mDoubleValue) & INT32_MAX)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ GGS_double::getter_sint_36__34_ (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_sint_36__34_ result ;
  if ((mDoubleValue > double (INT64_MAX)) || (mDoubleValue < double (INT64_MIN))) {
    String s = "Cannot convert @double (" ;
    s.appendDouble (mDoubleValue) ;
    s.appendCString (") to @sint64") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    result = GGS_sint_36__34_ (lround (mDoubleValue)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_double::objectCompare (const GGS_double & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mDoubleValue < inOperand.mDoubleValue) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mDoubleValue > inOperand.mDoubleValue) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_double::description (String & ioString,
                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@double:") ;
  if (isValid ()) {
    ioString.appendDouble (mDoubleValue) ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_double::getter_string (UNUSED_LOCATION_ARGS) const {
  String s ;
  s.appendDouble (mDoubleValue) ;
  return GGS_string (s) ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::add_operation (const GGS_double & inOperand2,
                                      Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_double (mDoubleValue + inOperand2.mDoubleValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::substract_operation (const GGS_double & inOperand2,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_double (mDoubleValue - inOperand2.mDoubleValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_double::plusAssign_operation (const GGS_double inOperand,
                                       Compiler *
                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mDoubleValue += inOperand.mDoubleValue ;
  }else{
    mIsValid = false ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_double::minusAssign_operation (const GGS_double inOperand,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mDoubleValue -= inOperand.mDoubleValue ;
  }else{
    mIsValid = false ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_double::mulAssign_operation (const GGS_double inOperand,
                                      Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mDoubleValue *= inOperand.mDoubleValue ;
  }else{
    mIsValid = false ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_double::divAssign_operation (const GGS_double inOperand,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    if (inOperand.mDoubleValue == 0) {
      inCompiler->onTheFlyRunTimeError ("@double /= divide by zero" COMMA_THERE) ;
      mIsValid = false ;
    }else{
      mDoubleValue /= inOperand.mDoubleValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::multiply_operation (const GGS_double & inOperand2,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_double (mDoubleValue * inOperand2.mDoubleValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::divide_operation (const GGS_double & inOperand2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid () && inOperand2.isValid ()) {
    if (inOperand2.mDoubleValue == 0.0) {
      inCompiler->onTheFlyRunTimeError ("divide by zero" COMMA_THERE) ;
    }else{
      result = GGS_double (mDoubleValue / inOperand2.mDoubleValue) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::divide_operation_no_ovf (const GGS_double & inOperand) const {
  GGS_double result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_double ((inOperand.mDoubleValue == 0.0) ? 0.0 : (mDoubleValue / inOperand.mDoubleValue)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::operator_unary_minus (Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid ()) {
    result = GGS_double (- mDoubleValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_double GGS_double::modulo_operation (const GGS_double & inOperand,
                                         Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_double result ;
  if (isValid () && inOperand.isValid ()) {
    const uint64_t times = uint64_t (mDoubleValue / inOperand.mDoubleValue) ;
    result = GGS_double (mDoubleValue - double (times) * inOperand.mDoubleValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
