//--------------------------------------------------------------------------------------------------
//
//   G E N E R I C     A R R A Y
//
//  This file is part of libpm library
//
//  Copyright (C) 1997, ..., 2025 Pierre Molinaro.
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
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "SharedObject.h"
#include "GenericUniqueArray.h"

//--------------------------------------------------------------------------------------------------
//   Template class predeclaration
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT> class GenericArray ;

//--------------------------------------------------------------------------------------------------
//   swap function for GenericArray <ELEMENT> classes
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT> void swap (GenericArray <ELEMENT> & ioOperand1,
                                       GenericArray <ELEMENT> & ioOperand2) ;

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT> class InternalSharedArray final : public SharedObject {
//--- Default Constructor
  public: InternalSharedArray (void) :
  SharedObject (HERE),
  mUniqueArray () {
  }

//--- Destructor
  public: ~ InternalSharedArray (void) = default ;

//--- Allocation Constructor (empty array)
  public: InternalSharedArray (const int32_t inCapacity COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mUniqueArray (inCapacity COMMA_THERE) {
  }

//--- Allocation Constructor (array initialized with inValue)
  public: InternalSharedArray (const int32_t inCount,
                               const ELEMENT & inValue COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mUniqueArray (inCount, inValue COMMA_THERE) {
  }

//--- Property
  public: GenericUniqueArray <ELEMENT> mUniqueArray ;
} ;

//--------------------------------------------------------------------------------------------------
//   Template class declaration
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT> class GenericArray final {
//--- Default Constructor
  public: GenericArray (void) ;

//--- Destructor
  public: ~ GenericArray (void) ;

//--- Allocation Constructor (empty array)
  public: GenericArray (const int32_t inCapacity COMMA_LOCATION_ARGS) ;

//--- Allocation Constructor (array initialized with inValue)
  public: GenericArray (const int32_t inCount,
                    const ELEMENT & inValue COMMA_LOCATION_ARGS) ;

//--- Handle Copy
  public: GenericArray (const GenericArray <ELEMENT> &) ;
  public: GenericArray <ELEMENT> & operator = (const GenericArray <ELEMENT> &) ;
  private: void insulate (void) ;

//--- swap
  friend void swap <ELEMENT> (GenericArray <ELEMENT> & ioOperand1,
                              GenericArray <ELEMENT> & ioOperand2) ;

//--- Method for setting capacity
  public: void setCapacity (const int32_t inNewCapacity) ;

//--- Get allocated capacity
  public: int32_t capacity (void) const {
    int32_t result = 0 ;
    if (nullptr != mSharedArray) {
      result = mSharedArray->mUniqueArray.capacity () ;
    }
    return result ;
  }

//--- Get Count
  public: inline int32_t count (void) const ;

//--- Is allocated
  public: inline bool isAllocated (void) const { return mSharedArray != nullptr ; }

//--- Array Pointer
  public: const ELEMENT * unsafeArrayPointer (void) const ;

//--- Add objects at the end of the array
  public: void appendObject (const ELEMENT & inValue) ; // inValue is copied
  public: void appendObjects (const int32_t inCount, const ELEMENT & inValue) ; // inValue is copied

//--- Insert
  public: void insertObjectsAtIndex (const int32_t inCount,
                                     const ELEMENT & inValue,
                                     const int32_t inStartingIndex
                                     COMMA_LOCATION_ARGS) ; // inValue is copied

//--- Remove all, keeping capacity
  public: void removeAllKeepingCapacity (void) ;

//--- Remove all objects and deallocate
  public: void removeAll (void) ;

//--- Call operators
  public: ELEMENT & operator () (const int32_t inIndex COMMA_LOCATION_ARGS) ;
  public: ELEMENT operator () (const int32_t inIndex COMMA_LOCATION_ARGS) const ;

//--- Element access (with index checking)
  public: ELEMENT lastObject (LOCATION_ARGS) const ;
  public: ELEMENT & lastObject (LOCATION_ARGS) ;

  public: void setObjectAtIndex (const ELEMENT & inObject,
                                 const int32_t inIndex
                                 COMMA_LOCATION_ARGS) ;

//--- Insert object at index (0 <= index <= count)
  public: void insertObjectAtIndex (const ELEMENT & inValue,
                                    const int32_t inIndex
                                    COMMA_LOCATION_ARGS) ; // inValue is copied

//--- Remove last object(s)
  public: void removeLastObject (LOCATION_ARGS) ;
  public: void removeLastObjects (const int32_t inCount COMMA_LOCATION_ARGS) ;

//--- Comparisons (based on == operator on objects)
  public: bool operator == (const GenericArray <ELEMENT> & inOperand) const ;

  public: inline bool operator != (const GenericArray <ELEMENT> & inOperand) const {
    return ! ((*this) == inOperand) ;
  }

//--- Allocation with provided data
  public: void setDataFromPointer (ELEMENT * & ioDataPtr,
                                   const int32_t inDataLength) ;

//--- Append data
  public: void appendDataFromPointer (const ELEMENT * inDataPtr,
                                      const int32_t inDataLength) ;

//--- Remove objects at index (0 <= index < count)
  public: void removeObjectAtIndex (const int32_t inIndex
                                    COMMA_LOCATION_ARGS) ;

  public: void removeObjectsAtIndex (const int32_t inCount,
                                     const int32_t inStartingIndex
                                     COMMA_LOCATION_ARGS) ;

//--- Sort array with a sort function (does nothing if inCompareFunction == nullptr)
//  inCompareFunction (inOperand1, inOperand2) < 0 means inOperand1 < inOperand2
  public: void quickSortUsingFunction (CompareFunction <ELEMENT> inCompareFunction) ;

//--- Sort array with a sort function (does nothing if inCompareFunction == nullptr)
//  inCompareFunction (inOperand1, inOperand2) < 0 means inOperand1 < inOperand2
  public: void reverseQuickSortUsingFunction (CompareFunction <ELEMENT> inCompareFunction) ;

//--- Shared Array
  private: InternalSharedArray <ELEMENT> * mSharedArray ;
} ;

//--------------------------------------------------------------------------------------------------
//   Default Constructor
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
GenericArray <ELEMENT>::GenericArray (void) :
mSharedArray (nullptr) {
}

//--------------------------------------------------------------------------------------------------
//   Destructor
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
GenericArray <ELEMENT>::~ GenericArray (void) {
  macroDetachSharedObject (mSharedArray) ;
}

//--------------------------------------------------------------------------------------------------
//   Allocation Constructor
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
GenericArray <ELEMENT>::GenericArray (const int32_t inCapacity COMMA_LOCATION_ARGS) :
mSharedArray (nullptr) {
  macroMyNew (mSharedArray, InternalSharedArray <ELEMENT> (inCapacity COMMA_THERE)) ;
}

//--------------------------------------------------------------------------------------------------
//   Allocation Constructor
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
GenericArray <ELEMENT>::GenericArray (const int32_t inCount,
                                      const ELEMENT & inValue
                                      COMMA_LOCATION_ARGS) :
mSharedArray (nullptr) {
  macroMyNew (mSharedArray, InternalSharedArray <ELEMENT> (inCount, inValue COMMA_THERE)) ;
}

//--------------------------------------------------------------------------------------------------
//   Copy Constructor
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
GenericArray <ELEMENT>::GenericArray (const GenericArray <ELEMENT> & inOperand) :
mSharedArray (nullptr) {
  macroAssignSharedObject (mSharedArray, inOperand.mSharedArray) ;
}

//--------------------------------------------------------------------------------------------------
//   Assignment Operator
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
GenericArray <ELEMENT> & GenericArray <ELEMENT>::operator = (const GenericArray <ELEMENT> & inOperand) {
  if (mSharedArray != inOperand.mSharedArray) {
    macroAssignSharedObject (mSharedArray, inOperand.mSharedArray) ;
  }
  return *this ;
}

//--------------------------------------------------------------------------------------------------
//   swap function for GenericArray <ELEMENT> classes
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT> void swap (GenericArray <ELEMENT> & ioOperand1,
                                       GenericArray <ELEMENT> & ioOperand2) {
  swap (ioOperand1.mSharedArray, ioOperand2.mSharedArray) ;
}

//--------------------------------------------------------------------------------------------------
//   Count
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
int32_t GenericArray <ELEMENT>::count (void) const {
  int32_t result = 0 ;
  if (nullptr != mSharedArray) {
    result = mSharedArray->mUniqueArray.count () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//   unsafeArrayPointer
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
const ELEMENT * GenericArray <ELEMENT>::unsafeArrayPointer (void) const {
  const ELEMENT * result = 0 ;
  if (nullptr != mSharedArray) {
    result = mSharedArray->mUniqueArray.unsafeArrayPointer () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//   insulate
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::insulate (void) {
  if ((nullptr != mSharedArray) && !mSharedArray->isUniquelyReferenced ()) {
    InternalSharedArray <ELEMENT> * p = nullptr ;
    macroMyNew (p, InternalSharedArray <ELEMENT> ()) ;
    mSharedArray->mUniqueArray.copyTo (p->mUniqueArray) ;
    macroAssignSharedObject (mSharedArray, p) ;
    macroDetachSharedObject (p) ;
  }
}

//--------------------------------------------------------------------------------------------------
//   appendObject (inValue is copied)
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::appendObject (const ELEMENT & inValue) {
  if (nullptr == mSharedArray) {
    macroMyNew (mSharedArray, InternalSharedArray <ELEMENT> ()) ;
  }else{
    insulate () ;
  }
  mSharedArray->mUniqueArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::appendObjects (const int32_t inCount,
                                            const ELEMENT & inValue) { // inValue is copied
  if (inCount > 0) {
    if (nullptr == mSharedArray) {
      macroMyNew (mSharedArray, InternalSharedArray <ELEMENT> ()) ;
    }else{
      insulate () ;
    }
    mSharedArray->mUniqueArray.appendObjects (inCount, inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::insertObjectsAtIndex (const int32_t inCount,
                                                   const ELEMENT & inValue, // inValue is copied
                                                   const int32_t inStartingIndex
                                                   COMMA_LOCATION_ARGS) {
  if (inCount > 0) {
    if (nullptr == mSharedArray) {
      macroMyNew (mSharedArray, InternalSharedArray <ELEMENT> ()) ;
    }else{
      insulate () ;
    }
    mSharedArray->mUniqueArray.insertObjectsAtIndex (inCount, inValue, inStartingIndex COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//   removeAll (remove all objects and deallocate)
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::removeAll (void) {
  macroDetachSharedObject (mSharedArray) ;
}

//--------------------------------------------------------------------------------------------------
//   CALL operators
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
ELEMENT & GenericArray <ELEMENT>::operator () (const int32_t inIndex
                                               COMMA_LOCATION_ARGS) {
  if (nullptr == mSharedArray) {
    macroMyNew (mSharedArray, InternalSharedArray <ELEMENT> ()) ;
  }else{
    insulate () ;
  }
  macroValidPointer (mSharedArray) ;
  return mSharedArray->mUniqueArray (inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
ELEMENT GenericArray <ELEMENT>::operator () (const int32_t inIndex
                                             COMMA_LOCATION_ARGS) const {
  macroValidPointer (mSharedArray) ;
  return mSharedArray->mUniqueArray (inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//   Last object access (with index checking)
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
ELEMENT GenericArray <ELEMENT>::lastObject (LOCATION_ARGS) const {
  macroValidPointer (mSharedArray) ;
  return mSharedArray->mUniqueArray.lastObject (THERE) ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
ELEMENT & GenericArray <ELEMENT>::lastObject (LOCATION_ARGS) {
  if (nullptr == mSharedArray) {
    macroMyNew (mSharedArray, InternalSharedArray <ELEMENT> ()) ;
  }else{
    insulate () ;
  }
  macroValidPointer (mSharedArray) ;
  return mSharedArray->mUniqueArray.lastObject (THERE) ;
}

//--------------------------------------------------------------------------------------------------
//   Remove last object
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::removeLastObject (LOCATION_ARGS) {
  insulate () ;
  macroValidPointer (mSharedArray) ;
  mSharedArray->mUniqueArray.removeLastObject (THERE) ;
}

//--------------------------------------------------------------------------------------------------
//   Remove last objects
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::removeLastObjects (const int32_t inCount
                                                COMMA_LOCATION_ARGS) {
  insulate () ;
  macroValidPointer (mSharedArray) ;
  mSharedArray->mUniqueArray.removeLastObjects (inCount COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//   Set Count To zero
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::removeAllKeepingCapacity (void) {
  if (nullptr != mSharedArray) {
    insulate () ;
    mSharedArray->mUniqueArray.removeAllKeepingCapacity () ;
  }
}

//--------------------------------------------------------------------------------------------------
//   ==
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
bool GenericArray <ELEMENT>::operator == (const GenericArray <ELEMENT> & inOperand) const {
  bool result = mSharedArray == inOperand.mSharedArray ;
  if (!result && (mSharedArray != nullptr) && (inOperand.mSharedArray != nullptr)) {
    result = mSharedArray->mUniqueArray == inOperand.mSharedArray->mUniqueArray ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//   setDataFromPointer
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::setDataFromPointer (ELEMENT * & ioDataPtr,
                                                 const int32_t inDataLength) {
  if (nullptr != mSharedArray) {
    macroDetachSharedObject (mSharedArray) ;
  }
  macroMyNew (mSharedArray, InternalSharedArray <ELEMENT> ()) ;
  mSharedArray->mUniqueArray.setDataFromPointer (ioDataPtr, inDataLength) ;
}

//--------------------------------------------------------------------------------------------------
//   appendDataFromPointer
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::appendDataFromPointer (const ELEMENT * inDataPtr,
                                                    const int32_t inDataLength) {
  if (nullptr == mSharedArray) {
    macroMyNew (mSharedArray, InternalSharedArray <ELEMENT> ()) ;
  }else{
    insulate () ;
  }
  mSharedArray->mUniqueArray.appendDataFromPointer (inDataPtr, inDataLength) ;
}

//--------------------------------------------------------------------------------------------------
//   setCapacity
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::setCapacity (const int32_t inNewCapacity) {
  if (nullptr == mSharedArray) {
    macroMyNew (mSharedArray, InternalSharedArray <ELEMENT> (inNewCapacity COMMA_HERE)) ;
  }else{
    insulate () ;
    mSharedArray->mUniqueArray.setCapacity (inNewCapacity) ;
  }
}

//--------------------------------------------------------------------------------------------------
//   Remove objects at index (0 <= index < count)
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::removeObjectAtIndex (const int32_t inIndex
                                                  COMMA_LOCATION_ARGS) {
  insulate () ;
  macroUniqueSharedObject (mSharedArray) ;
  mSharedArray->mUniqueArray.removeObjectAtIndex (inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::removeObjectsAtIndex (const int32_t inCount,
                                                   const int32_t inStartingIndex
                                                   COMMA_LOCATION_ARGS) {
  insulate () ;
  macroUniqueSharedObject (mSharedArray) ;
  mSharedArray->mUniqueArray.removeObjectsAtIndex (inCount, inStartingIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//   setObjectAtIndex
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::setObjectAtIndex (const ELEMENT & inObject,
                                               const int32_t inIndex
                                               COMMA_LOCATION_ARGS) {
  insulate () ;
  macroUniqueSharedObject (mSharedArray) ;
  mSharedArray->mUniqueArray.setObjectAtIndex (inObject, inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//   insertObjectAtIndex
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericArray <ELEMENT>::insertObjectAtIndex (const ELEMENT & inObject,
                                                  const int32_t inIndex  // inValue is copied
                                                  COMMA_LOCATION_ARGS) {
  if (nullptr == mSharedArray) {
    macroMyNew (mSharedArray, InternalSharedArray <ELEMENT>) ;
  }else{
    insulate () ;
  }
  macroUniqueSharedObject (mSharedArray) ;
  mSharedArray->mUniqueArray.insertObjectAtIndex (inObject, inIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//--- Sort array with a sort function (does nothing if inCompareFunction == nullptr)
//  inCompareFunction (inOperand1, inOperand2) < 0 means inOperand1 < inOperand2
template <typename ELEMENT>
void GenericArray <ELEMENT>::quickSortUsingFunction (CompareFunction <ELEMENT> inCompareFunction) {
  insulate () ;
  if (mSharedArray != nullptr) {
    mSharedArray->mUniqueArray.quickSortUsingFunction (inCompareFunction) ;
  }
}

//--------------------------------------------------------------------------------------------------
//--- Sort array with a sort function (does nothing if inCompareFunction == nullptr)
//  inCompareFunction (inOperand1, inOperand2) < 0 means inOperand1 < inOperand2

template <typename ELEMENT>
void GenericArray <ELEMENT>::reverseQuickSortUsingFunction (CompareFunction <ELEMENT> inCompareFunction) {
  insulate () ;
  if (mSharedArray != nullptr) {
    mSharedArray->mUniqueArray.reverseQuickSortUsingFunction (inCompareFunction) ;
  }
}

//--------------------------------------------------------------------------------------------------
