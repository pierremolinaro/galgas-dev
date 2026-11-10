//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2021, ..., 2026 Pierre Molinaro.
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
