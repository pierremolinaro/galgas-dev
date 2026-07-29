//--------------------------------------------------------------------------------------------------
//
//  AbstractStrongPtrClass : Base class for reference class class
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

class PtrWeakReferenceProxy ;

//--------------------------------------------------------------------------------------------------

class AbstractStrongPtrClass : public AbstractPtrClass {
//--- Properties
  #ifndef DO_NOT_GENERATE_CHECKINGS
    private: AbstractStrongPtrClass * mPreviousPtr ;
    private: AbstractStrongPtrClass * mNextPtr ;
  #endif

//--- Default constructor
  public: AbstractStrongPtrClass (class Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Destructor
  public: virtual ~ AbstractStrongPtrClass (void) ;

//--- Private property
  private: PtrWeakReferenceProxy * mProxyPtr ;

//--- Get proxy
  public: PtrWeakReferenceProxy * getProxy (void) ;

//--- No Copy
  private: AbstractStrongPtrClass (const AbstractStrongPtrClass &) = delete ;
  private: AbstractStrongPtrClass & operator = (const AbstractStrongPtrClass &) = delete ;

//--- Friend
  friend class PtrWeakReferenceProxy ;

//--- Print all existing objects
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: static void printExistingClassInstances (void) ;
    public: virtual void printNonNullClassInstanceProperties (void) const ;
  #endif
} ;

//--------------------------------------------------------------------------------------------------
