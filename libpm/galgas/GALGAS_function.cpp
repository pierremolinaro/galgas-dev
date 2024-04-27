//--------------------------------------------------------------------------------------------------
//
//  GGS_function : this class implements introspection for GALGAS functions
//
//  This file is part of libpm library
//
//  Copyright (C) 2002, ..., 2011 Pierre Molinaro.
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
#include "C_galgas_function_descriptor.h"
#include "C_galgas_type_descriptor.h"
#include "Compiler.h"
#include "cObjectArray.h"

//--------------------------------------------------------------------------------------------------
//
//                     'GGS_function' class
//
//--------------------------------------------------------------------------------------------------

GGS_function::GGS_function (void) :
AC_GALGAS_root (),
mFunctionDescriptor (nullptr) {
}

//--------------------------------------------------------------------------------------------------

GGS_function::GGS_function (const C_galgas_function_descriptor * inFunctionDescriptor) :
AC_GALGAS_root (),
mFunctionDescriptor (inFunctionDescriptor) {
}

//--------------------------------------------------------------------------------------------------

GGS_function::GGS_function (const GGS_function & inSource) :
AC_GALGAS_root (),
mFunctionDescriptor (inSource.mFunctionDescriptor) {
}

//--------------------------------------------------------------------------------------------------

GGS_function & GGS_function::operator = (const GGS_function & inSource) {
  mFunctionDescriptor = inSource.mFunctionDescriptor ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_function::~ GGS_function (void) {
}

//--------------------------------------------------------------------------------------------------

void GGS_function::description (String & ioString,
                                   const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@function:") ;
  if (nullptr == mFunctionDescriptor) {
    ioString.appendCString ("not built") ;
  }else{
    ioString.appendString (mFunctionDescriptor->mFunctionName) ;
    ioString.appendCString (" [") ;
    for (uint32_t i=0 ; i<mFunctionDescriptor->mParameterCount ; i++) {
      if (i > 0) {
        ioString.appendCString (" ") ;
      }
      ioString.appendCString ("?@") ;
      ioString.appendString (mFunctionDescriptor->mFormalParameterTypeList [i]->mGalgasTypeName) ;
    }
    ioString.appendCString ("] -> @") ;
    ioString.appendString (mFunctionDescriptor->mResultType->mGalgasTypeName) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionlist GGS_function::class_func_functionList (LOCATION_ARGS) {
  GGS_functionlist result = GGS_functionlist::class_func_emptyList (THERE) ;
  const C_galgas_function_descriptor * p = C_galgas_function_descriptor::functionListRoot () ;
  while (nullptr != p) {
    result.addAssign_operation (GGS_function (p) COMMA_HERE) ;
    p = p->mNextFunction ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_function::class_func_isFunctionDefined (const GGS_string & inFunctionName
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result ;
  if (inFunctionName.isValid ()) {
    bool resultValue = false ;
    const String functionName = inFunctionName.stringValue () ;
    const C_galgas_function_descriptor * p = C_galgas_function_descriptor::functionListRoot () ;
    while ((nullptr != p) && ! resultValue) {
      resultValue = functionName == p->mFunctionName ;
      p = p->mNextFunction ;
    }
    result = GGS_bool (resultValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_function GGS_function::class_func_functionWithName (const GGS_string & inFunctionName
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_function result ;
  if (inFunctionName.isValid ()) {
    const String functionName = inFunctionName.stringValue () ;
    const C_galgas_function_descriptor * p = C_galgas_function_descriptor::functionListRoot () ;
    while ((nullptr != p) && ! result.isValid ()) {
      if (functionName == p->mFunctionName) {
        result = GGS_function (p) ;
      }
      p = p->mNextFunction ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typelist GGS_function::getter_formalParameterTypeList (LOCATION_ARGS) const {
  GGS_typelist result = GGS_typelist::class_func_emptyList (THERE) ;
  for (uint32_t i=0 ; i<mFunctionDescriptor->mParameterCount ; i++) {
    result.addAssign_operation (GGS_type (mFunctionDescriptor->mFormalParameterTypeList [i]) COMMA_HERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_function::getter_name (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mFunctionDescriptor->mFunctionName) ;
}

//--------------------------------------------------------------------------------------------------

GGS_type GGS_function::getter_resultType (UNUSED_LOCATION_ARGS) const {
  return GGS_type (mFunctionDescriptor->mResultType) ;
}

//--------------------------------------------------------------------------------------------------

GGS_object GGS_function::getter_invoke (const GGS_objectlist & inObjectList,
                                              const GGS_location & inErrorLocation,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cObjectArray argumentsArray (inObjectList, inCompiler COMMA_THERE) ;
//--- Check parameter count
  bool ok = mFunctionDescriptor->mParameterCount == argumentsArray.count () ;
  if (! ok) {
    String errorMessage ;
    errorMessage.appendCString ("the '") ;
    errorMessage.appendString (mFunctionDescriptor->mFunctionName) ;
    errorMessage.appendCString ("' function is called with ") ;
    errorMessage.appendUnsigned (argumentsArray.count ()) ;
    errorMessage.appendCString (" actual parameter") ;
    errorMessage.appendString ((argumentsArray.count () > 1) ? "s" : "") ;
    errorMessage.appendCString (", but its header requires ") ;
    errorMessage.appendUnsigned (mFunctionDescriptor->mParameterCount) ;
    inCompiler->semanticErrorAtLocation (inErrorLocation, errorMessage, TC_Array <FixItDescription> () COMMA_THERE) ;
  }
//--- Check parameters
  for (uint32_t i=0 ; (i<mFunctionDescriptor->mParameterCount) && ok ; i++) {
    const GGS_object parameter = argumentsArray.objectAtIndex (i COMMA_HERE) ;
    ok = parameter.isValid () ;
    if (ok) {
      const C_galgas_type_descriptor * t = parameter.getter_objectStaticType (HERE).typeValue () ;
      ok = t == mFunctionDescriptor->mFormalParameterTypeList [i] ;
      while ((! ok) && (nullptr != t->mSuperclassDescriptor)) {
        t = t->mSuperclassDescriptor ;
        ok = t == mFunctionDescriptor->mFormalParameterTypeList [i] ;
      }
      if (! ok) {
        String errorMessage ;
        errorMessage.appendCString ("the actual parameter #") ;
        errorMessage.appendUnsigned (i) ;
        errorMessage.appendCString (" of the '") ;
        errorMessage.appendString (mFunctionDescriptor->mFunctionName) ;
        errorMessage.appendCString ("' function call has the '@") ;
        errorMessage.appendString (parameter.staticTypeDescriptor ()->mGalgasTypeName) ;
        errorMessage.appendCString ("', but the function header requires an instance of '@") ;
        errorMessage.appendString (mFunctionDescriptor->mFormalParameterTypeList [i]->mGalgasTypeName) ;
        errorMessage.appendCString ("'") ;
        inCompiler->semanticErrorAtLocation (inErrorLocation, errorMessage, TC_Array <FixItDescription> () COMMA_THERE) ;
      }
    }
  }
//--- Invoke function
  GGS_object result ;
  if (ok) {
    result = mFunctionDescriptor->mFunctionPointer (inCompiler, argumentsArray, inErrorLocation COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_function::objectCompare (const GGS_function & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const ptrdiff_t diff = mFunctionDescriptor - inOperand.mFunctionDescriptor ;
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
