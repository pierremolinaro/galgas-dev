//--------------------------------------------------------------------------------------------------
//
//  PtrWeakReferenceProxy : Base class for reference class class
//
//  This file is part of libpm library
//
//  Copyright (C) 2021, ..., 2026 Pierre Molinaro.
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

#include "AbstractPtrClass.h"

//--------------------------------------------------------------------------------------------------

class AbstractStrongPtrClass ;

//--------------------------------------------------------------------------------------------------

class PtrWeakReferenceProxy final : public AbstractPtrClass {
//--- Public default constructor
  public: PtrWeakReferenceProxy (LOCATION_ARGS) ;

//--- Destructor
  public: virtual ~ PtrWeakReferenceProxy (void) ;

//--- Private property
  private: AbstractStrongPtrClass * mStrongObjectPtr ;
  public: AbstractStrongPtrClass * strongObject (void) const { return mStrongObjectPtr ; }

//--- Virtual methods from AbstractPtrClass
  public: virtual void description (String &, const int32_t) const {} // Never invoked

  public: virtual ComparisonResult dynamicObjectCompare (const AbstractPtrClass *) const { // Never invoked
    return ComparisonResult::invalid ;
  }

  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const ;

  public: AbstractPtrClass * duplicate (LOCATION_ARGS) const ;
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--- No Copy
  private: PtrWeakReferenceProxy (const PtrWeakReferenceProxy &) = delete ;
  private: PtrWeakReferenceProxy & operator = (const PtrWeakReferenceProxy &) = delete ;

//--- Friend
  friend class AbstractStrongPtrClass ;
} ;

//--------------------------------------------------------------------------------------------------
