//--------------------------------------------------------------------------------------------------
//
//   GGS_bool : this class implements the GALGAS 'bool' native type                           
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2009, ..., 2024 Pierre Molinaro.
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

static bool boolValueFromComparisonKindAndComparisonResult (const ComparisonKind inComparisonKind,
                                                            const ComparisonResult inComparisonResult) {
  bool result = false ;
  if (ComparisonResult::invalid != inComparisonResult) {
    switch (inComparisonKind) {
    case ComparisonKind::equal          : result = inComparisonResult == ComparisonResult::operandEqual ; break ;
    case ComparisonKind::notEqual       : result = inComparisonResult != ComparisonResult::operandEqual ; break ;
    case ComparisonKind::greaterOrEqual : result = inComparisonResult >= ComparisonResult::operandEqual ; break ;
    case ComparisonKind::lowerOrEqual   : result = inComparisonResult <= ComparisonResult::operandEqual ; break ;
    case ComparisonKind::greaterThan    : result = inComparisonResult >  ComparisonResult::operandEqual ; break ;
    case ComparisonKind::lowerThan      : result = inComparisonResult <  ComparisonResult::operandEqual ; break ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'GGS_bool' class                                                       
//
//--------------------------------------------------------------------------------------------------

GGS_bool::GGS_bool (void) :
AC_GALGAS_root (),
mIsValid (false),
mBoolValue (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_bool::GGS_bool (const bool inValue) :
AC_GALGAS_root (),
mIsValid (true),
mBoolValue (inValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_bool::GGS_bool (const bool inIsBuilt,
                          const bool inValue) :
AC_GALGAS_root (),
mIsValid (inIsBuilt),
mBoolValue (inValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_bool::GGS_bool (const ComparisonKind inComparisonKind,
                          const ComparisonResult inComparisonResult) :
mIsValid (ComparisonResult::invalid != inComparisonResult),
mBoolValue (boolValueFromComparisonKindAndComparisonResult (inComparisonKind, inComparisonResult)) {
}

//--------------------------------------------------------------------------------------------------

GalgasBool GGS_bool::boolEnum (void) const {
  GalgasBool result = GalgasBool::boolNotValid ;
  if (isValid ()) {
    result = mBoolValue ? GalgasBool::boolTrue : GalgasBool::boolFalse ;
  }
  return result ;  
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bool::objectCompare (const GGS_bool & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mBoolValue < inOperand.mBoolValue) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mBoolValue > inOperand.mBoolValue) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bool::operator_and (const GGS_bool & inOperand2
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_bool (mBoolValue && inOperand2.mBoolValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bool::operator_or (const GGS_bool & inOperand2
                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && (inOperand2.isValid ())) {
    result = GGS_bool (mBoolValue || inOperand2.mBoolValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bool::operator_xor (const GGS_bool & inOperand2
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand2.isValid ()) {
    result = GGS_bool (mBoolValue != inOperand2.mBoolValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bool::operator_not (UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid ()) {
    result = GGS_bool (! mBoolValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_bool::getter_cString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mBoolValue ? "true" : "false") ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_bool::getter_ocString (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mBoolValue ? "YES" : "NO") ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bool::getter_uint (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint ((uint32_t) (mBoolValue ? 1 : 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_bool::getter_bigint (UNUSED_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid ()) {
    result = GGS_bigint (BigSigned (true, uint64_t (mBoolValue ? 1 : 0))) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint GGS_bool::getter_sint (UNUSED_LOCATION_ARGS) const {
  GGS_sint result ;
  if (isValid ()) {
    result = GGS_sint (mBoolValue ? 1 : 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_bool::getter_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_uint_36__34_ result ;
  if (isValid ()) {
    result = GGS_uint_36__34_ (mBoolValue ? 1 : 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ GGS_bool::getter_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  GGS_sint_36__34_ result ;
  if (isValid ()) {
    result = GGS_sint_36__34_ (mBoolValue ? 1 : 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bool::description (String & ioString,
                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@bool:") ;
  if (isValid ()) {
    ioString.appendString (mBoolValue ? "true" : "false") ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
