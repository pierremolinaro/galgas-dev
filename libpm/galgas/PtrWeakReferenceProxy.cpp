//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2021, ..., 2026 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "PtrWeakReferenceProxy.h"
#include "AbstractStrongPtrClass.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------

PtrWeakReferenceProxy::PtrWeakReferenceProxy (LOCATION_ARGS) :
AbstractPtrClass (THERE),
mStrongObjectPtr (nullptr) {
}

//--------------------------------------------------------------------------------------------------

PtrWeakReferenceProxy::~ PtrWeakReferenceProxy (void) {
  if (mStrongObjectPtr != nullptr) {
    mStrongObjectPtr->mProxyPtr = nullptr ;
  }
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * PtrWeakReferenceProxy::classDescriptor (void) const {
  const GALGAS_TypeDescriptor * result = nullptr ;
  if (mStrongObjectPtr != nullptr) {
    result = mStrongObjectPtr->classDescriptor () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * PtrWeakReferenceProxy::duplicate (UNUSED_LOCATION_ARGS) const {
  return nullptr ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * PtrWeakReferenceProxy::duplicate (Compiler * COMMA_UNUSED_LOCATION_ARGS) const {
  return nullptr ;
}

//--------------------------------------------------------------------------------------------------
