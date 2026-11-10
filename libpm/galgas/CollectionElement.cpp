//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2010, ..., 2026 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "CollectionElement.h"
#include "CollectionElementPtr.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------

CollectionElement::CollectionElement (void) :
mPtr (nullptr) {
}

//--------------------------------------------------------------------------------------------------

void CollectionElement::setPointer (CollectionElementPtr * inObjectPointer) {
  macroAssignSharedObject (mPtr, inObjectPointer) ;
}

//--------------------------------------------------------------------------------------------------

CollectionElement:: ~CollectionElement (void) {
  macroDetachSharedObject (mPtr) ;
}

//--------------------------------------------------------------------------------------------------

CollectionElement::CollectionElement (const CollectionElement & inSource) :
mPtr (nullptr) {
  macroAssignSharedObject (mPtr, inSource.mPtr) ;
}

//--------------------------------------------------------------------------------------------------

CollectionElement & CollectionElement::operator = (const CollectionElement & inSource) {
  macroAssignSharedObject (mPtr, inSource.mPtr) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

bool CollectionElement::isValid (void) const {
  bool result = nullptr != mPtr ;
  if (result) {
    result = mPtr->isValid () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

CollectionElement CollectionElement::copy (void) {
  CollectionElement result ;
  CollectionElementPtr * p = mPtr->copy () ;
  result.setPointer (p) ;
  macroDetachSharedObject (p) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void CollectionElement::drop (void) {
  macroDetachSharedObject (mPtr) ;
}

//--------------------------------------------------------------------------------------------------

void CollectionElement::insulate (void) {
  if ((nullptr != mPtr) && !mPtr->isUniquelyReferenced ()) {
    CollectionElementPtr * p = mPtr->copy () ;
    macroAssignSharedObject (mPtr, p) ;
    macroDetachSharedObject (p) ;
  }
}

//--------------------------------------------------------------------------------------------------
