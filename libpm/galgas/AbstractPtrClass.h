//--------------------------------------------------------------------------------------------------
//
//  AbstractPtrClass : Base class for GALGAS class                                                    
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2008, ..., 2026 Pierre Molinaro.
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

#include "SharedObject.h"
#include "ComparisonResult.h"

//--------------------------------------------------------------------------------------------------

class String ;
class GALGAS_TypeDescriptor ;

//--------------------------------------------------------------------------------------------------

class AbstractPtrClass : public SharedObject {
  public: AbstractPtrClass (LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual ComparisonResult dynamicObjectCompare (const AbstractPtrClass * /* inOperandPtr */) const {
    return ComparisonResult::invalid ;
  }

  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const = 0 ;

  public: virtual AbstractPtrClass * duplicate (class Compiler * COMMA_UNUSED_LOCATION_ARGS) const = 0 ;
} ;

//--------------------------------------------------------------------------------------------------
