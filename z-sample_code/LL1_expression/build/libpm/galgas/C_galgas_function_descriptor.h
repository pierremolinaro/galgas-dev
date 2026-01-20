//--------------------------------------------------------------------------------------------------
//
//  GALGAS introspection classes                                                                 
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2009, ..., 2010 Pierre Molinaro.
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

#pragma once

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"

//--------------------------------------------------------------------------------------------------

class Compiler ;
class GGS_location ;
class GGS_object ;
class GALGAS_TypeDescriptor ;
class GGS_objectlist ;
class cObjectArray ;

//--------------------------------------------------------------------------------------------------
//
//  GALGAS function prototype (for function introspection)                                       
//
//--------------------------------------------------------------------------------------------------

typedef GGS_object (*functionPrototypeForIntrospection) (Compiler * inCompiler,
                                                            const cObjectArray & inEffectiveParameterArray,
                                                            const GGS_location & inErrorLocation
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//  GALGAS function descriptor (for function introspection)                                      
//
//--------------------------------------------------------------------------------------------------

class C_galgas_function_descriptor {
//--- Attributes
  public: const C_galgas_function_descriptor * mNextFunction ;
  public: const char * mFunctionName ;
  public: const functionPrototypeForIntrospection mFunctionPointer ;
  public: const GALGAS_TypeDescriptor * mResultType ;
  public: const uint32_t mParameterCount ;
  public: const GALGAS_TypeDescriptor * * mFormalParameterTypeList ;

//--- Constructor
  public: C_galgas_function_descriptor (const char * inFunctionName,
                                        const functionPrototypeForIntrospection inFunctionPointer,
                                        const GALGAS_TypeDescriptor * inResultType,
                                        const uint32_t inParameterCount,
                                        const GALGAS_TypeDescriptor * * inParameterTypeList) ;

//--- 
  public: static C_galgas_function_descriptor * functionListRoot (void) ;
  
//--- No copy
  private: C_galgas_function_descriptor (const C_galgas_function_descriptor &) ;
  private: C_galgas_function_descriptor & operator = (const C_galgas_function_descriptor &) ;
} ;

//--------------------------------------------------------------------------------------------------
