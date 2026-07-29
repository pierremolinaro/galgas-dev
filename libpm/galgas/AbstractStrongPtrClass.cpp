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

#include "AbstractStrongPtrClass.h"
#include "PtrWeakReferenceProxy.h"
#include "cpp-allocation.h"

//--------------------------------------------------------------------------------------------------

#include <iostream>

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  static AbstractStrongPtrClass * gFirstPtr = nullptr ;
  static AbstractStrongPtrClass * gLastPtr = nullptr ;
#endif

//--------------------------------------------------------------------------------------------------

AbstractStrongPtrClass::AbstractStrongPtrClass (Compiler * COMMA_LOCATION_ARGS) :
AbstractPtrClass (THERE),
#ifndef DO_NOT_GENERATE_CHECKINGS
  mPreviousPtr (nullptr),
  mNextPtr (nullptr),
#endif
mProxyPtr (nullptr) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    mPreviousPtr = gLastPtr ;
    if (nullptr == gLastPtr) {
      gFirstPtr = this ;
    }else{
      gLastPtr->mNextPtr = this ;
    }
    gLastPtr = this ;
  #endif
}

//--------------------------------------------------------------------------------------------------

AbstractStrongPtrClass::~ AbstractStrongPtrClass (void) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    if (nullptr == mNextPtr) { // Last descriptor ?
      gLastPtr = mPreviousPtr ;
    }else{
      mNextPtr->mPreviousPtr = mPreviousPtr ;
    }
    if (nullptr == mPreviousPtr) { // First descriptor ?
      gFirstPtr = mNextPtr ;
    }else{
      mPreviousPtr->mNextPtr = mNextPtr ;
    }
  #endif
  if (mProxyPtr != nullptr) {
    mProxyPtr->mStrongObjectPtr = nullptr ;
    macroDetachSharedObject (mProxyPtr) ;
  }
}

//--------------------------------------------------------------------------------------------------

PtrWeakReferenceProxy * AbstractStrongPtrClass::getProxy (void) {
  if (mProxyPtr == nullptr) {
    macroMyNew (mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    mProxyPtr->mStrongObjectPtr = this ;
  }
  return mProxyPtr ;
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void AbstractStrongPtrClass::printNonNullClassInstanceProperties (void) const {
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void AbstractStrongPtrClass::printExistingClassInstances (void) {
    if (gFirstPtr != nullptr) {
      std::cout << "*** Unreleased class instances" << std::endl ;
    }
    AbstractStrongPtrClass * ptr = gFirstPtr ;
    while (ptr != nullptr) {
      std::cout << "  Instance 0x" << std::hex << size_t (ptr) << std::dec << std::endl ;
      ptr->printNonNullClassInstanceProperties () ;
      ptr = ptr->mNextPtr ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------
