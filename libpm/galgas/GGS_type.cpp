//--------------------------------------------------------------------------------------------------
//
//  GGS_type : this class implements introspection for GALGAS types
//
//  This file is part of libpm library
//
//  Copyright (C) 2009, ..., 2025 Pierre Molinaro.
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
//
//                     'GGS_type' class
//
//--------------------------------------------------------------------------------------------------

GGS_type::GGS_type (void) :
AC_GALGAS_root (),
mTypeDescriptor (nullptr) {
}

//--------------------------------------------------------------------------------------------------

GGS_type::GGS_type (const GALGAS_TypeDescriptor * inTypeReference) :
AC_GALGAS_root (),
mTypeDescriptor (inTypeReference) {
}

//--------------------------------------------------------------------------------------------------

GGS_type::GGS_type (const GGS_type & inSource) :
AC_GALGAS_root (),
mTypeDescriptor (inSource.mTypeDescriptor) {
}

//--------------------------------------------------------------------------------------------------

GGS_type & GGS_type::operator = (const GGS_type & inSource) {
  mTypeDescriptor = inSource.mTypeDescriptor ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_type::~ GGS_type (void) {
}

//--------------------------------------------------------------------------------------------------

void GGS_type::description (String & ioString,
                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@type: ") ;
  if (nullptr == mTypeDescriptor) {
    ioString.appendCString ("not built") ;
  }else{
    ioString.appendCString ("@") ;
    ioString.appendString (mTypeDescriptor->mGalgasTypeName) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_typelist GGS_type::class_func_typeList (LOCATION_ARGS) {
  GenericUniqueArray <GALGAS_TypeDescriptor *> typeList ;
  GALGAS_TypeDescriptor::typeListRoot (typeList) ;
  GGS_typelist result = GGS_typelist::init (nullptr COMMA_THERE) ;
  for (int32_t i=0 ; i<typeList.count () ; i++) {
    result.addAssignOperation (GGS_type (typeList (i COMMA_THERE)) COMMA_HERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_type::getter_name (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mTypeDescriptor->mGalgasTypeName) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_type::getter_hasSuperclass (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (nullptr != mTypeDescriptor->mSuperclassDescriptor) ;
}

//--------------------------------------------------------------------------------------------------

GGS_type GGS_type::getter_superclass (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_type result ;
  if (mTypeDescriptor != nullptr) {
    if (nullptr == mTypeDescriptor->mSuperclassDescriptor) {
      String s = "'superclass' reader invoked on class type value '@" ;
      s.appendString (mTypeDescriptor->mGalgasTypeName) ;
      s.appendCString ("', without super class") ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      result = GGS_type (mTypeDescriptor->mSuperclassDescriptor) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_type::objectCompare (const GGS_type & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const ptrdiff_t diff = mTypeDescriptor - inOperand.mTypeDescriptor ;
    if (diff < 0) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (diff > 0) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
