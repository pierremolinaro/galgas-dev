//--------------------------------------------------------------------------------------------------
//
//            Declaration and implementation of the template class 'GenericUniqueArray'
//
//  COPY OF ITS INSTANCES IS FORBIDDEN BY REDEFINITION OF COPY CONSTRUCTOR AND ASSIGNMENT OPERATOR.
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
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "macroAssert.h"
#include "M_SourceLocation.h"
#include "TF_Swap.h"
#include "MF_MemoryControl.h"
#include "cpp-allocation.h"

//--------------------------------------------------------------------------------------------------
//   Template class predeclaration
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT> class GenericUniqueArray ;

//--------------------------------------------------------------------------------------------------
//   swap function for GenericUniqueArray <ELEMENT> classes
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT> void swap (GenericUniqueArray <ELEMENT> & ioOperand1,
                                       GenericUniqueArray <ELEMENT> & ioOperand2) ;

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT> using CompareFunction = int32_t (*) (const ELEMENT & inLeft,
                                                                 const ELEMENT & inRight) ;

//--------------------------------------------------------------------------------------------------
//   Template class declaration
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT> class GenericUniqueArray final {
//--- Default Constructor
  public: GenericUniqueArray (void) ;

//--- Allocation Constructor (empty array)
  public: GenericUniqueArray (const int32_t inCapacity
                          COMMA_LOCATION_ARGS) ;

//--- Allocation Constructor (array initialized with inValue)
  public: GenericUniqueArray (const int32_t inCapacity,
                          const ELEMENT & inRepeatedValue
                          COMMA_LOCATION_ARGS) ;

//--- Virtual Destructor
  public: ~GenericUniqueArray (void) ;

//--- No copy
  private: GenericUniqueArray (const GenericUniqueArray <ELEMENT> &) = delete ;
  private: GenericUniqueArray <ELEMENT> & operator = (const GenericUniqueArray <ELEMENT> &) = delete ;

//--- Copy
  public: void copyTo (GenericUniqueArray <ELEMENT> & outArray) const ;

//--- Get Count
  public: inline int32_t count (void) const { return mCount ; }

//--- Remove all, keeping capacity
  public: void removeAllKeepingCapacity (void) ;

//--- Remove all objects and deallocate
  public: void removeAll (void) ;

//--- Get allocated capacity
  public: inline int32_t capacity (void) const { return mCapacity ; }

//--- Methods for setting capacity
  public: void setCapacity (const int32_t inNewCapacity) ;
  public: void setCapacityUsingSwap (const int32_t inNewCapacity) ;

//--- Allocation with provided data (ioDataPtr is captured, and nullptr is returned)
  public: void setDataFromPointer (ELEMENT * & ioDataPtr,
                                   const int32_t inDataLength) ;

//--- Append data (inDataPtr is not released)
  public: void appendDataFromPointer (const ELEMENT * inDataPtr,
                                      const int32_t inDataLength) ;

//--- Get buffer pointer
  public: const ELEMENT * unsecureBufferPointer (void) const { return mArray ; }

//--- Comparisons (based on == operator on objects)
  public: bool operator == (const GenericUniqueArray <ELEMENT> & inOperand) const ;

  public: inline bool operator != (const GenericUniqueArray <ELEMENT> & inOperand) const {
    return ! ((*this) == inOperand) ;
  }

//--- Increment, decrement
  public: void incrementAtIndex (const int32_t inIndex
                                 COMMA_LOCATION_ARGS) ; // ++ on object

  public: void decrementAtIndex (const int32_t inIndex
                                 COMMA_LOCATION_ARGS) ; // -- on object

//--- Append objects at the end of the array
  public: void appendObject (const ELEMENT & inValue) ; // inValue is copied

  public: void appendObjectUsingSwap (ELEMENT & ioValue) ;
  public: void appendDefaultObjectUsingSwap (void) ;
  public: void appendObjects (const int32_t inCount, const ELEMENT & inValue) ; // inValue is copied
  public: void appendObjectsFromArray (const GenericUniqueArray <ELEMENT> & inObjectArray) ; // New objects are copied

//--- Force entry
  public: void forceObjectAtIndex (const int32_t inIndex,
                                   const ELEMENT & inValue,
                                   const ELEMENT & inDefaultValue) ;

//--- Prepend object
  public: void prependObject (const ELEMENT & inValue) ; // inValue is copied
  public: void prependObjects (const GenericUniqueArray <ELEMENT> & inObjectArray) ; // Values are copied

//--- Insert objects at index (0 <= index <= count)
  public: void insertObjectAtIndex (const ELEMENT & inValue,
                                    const int32_t inIndex
                                    COMMA_LOCATION_ARGS) ; // inValue is copied

  public: void insertObjectsAtIndex (const int32_t inCount,
                                     const ELEMENT & inValue,
                                     const int32_t inStartingIndex
                                     COMMA_LOCATION_ARGS) ; // inValue is copied

  public: void insertObjectUsingSwap (ELEMENT & ioValue,
                                      const int32_t inIndex
                                      COMMA_LOCATION_ARGS) ;

  public: void insertObjectsUsingExchangeAndClear (const int32_t inObjectCount,
                                                   const int32_t inIndex
                                                   COMMA_LOCATION_ARGS) ;

//--- Find Object (uses == operator for comparing objects)
//    Returns -1 if not found
  public: int32_t indexOfFirstObjectEqualTo (const ELEMENT & inValue) const ;

//--- Remove last object(s)
  public: void removeLastObject (LOCATION_ARGS) ;
  public: void removeLastObjects (const int32_t inCount COMMA_LOCATION_ARGS) ;

//--- Exchange objects at indexes (0 <= index < count, use swap)
  public: void exchangeObjectAtIndexes (const int32_t inIndex1,
                                        const int32_t inIndex2
                                        COMMA_LOCATION_ARGS) ;

//--- Remove objects at index (0 <= index < count)
  public: void removeObjectAtIndex (const int32_t inIndex
                                    COMMA_LOCATION_ARGS) ;
  public: void removeObjectsAtIndex (const int32_t inCount,
                                     const int32_t inStartingIndex
                                     COMMA_LOCATION_ARGS) ;

//--- Contains an objects equal to method actual argument value (based on == operator)
  public: bool containsObjectEqualTo (const ELEMENT & inObject) const ;

//--- Sort and reverse sort array with <= and >= operators
//    these operators must be defined for ELEMENT class
  public: void sortArrayUsingComparisonOperators (void) ;
  public: void reverseSortArrayUsingComparisonOperators (void) ;

//--- Sort and reverse sort array with compare method of ELEMENT class
//  inOperand1.compare (inOperand2) < 0 means inOperand1 < inOperand2
  public: void sortArrayUsingCompareMethod (void) ;
  public: void reverseSortArrayUsingCompareMethod (void) ;


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //--- Sort array with a sort function (does nothing if inCompareFunction == nullptr)
  //  inCompareFunction (inOperand1, inOperand2) < 0 means inOperand1 < inOperand2
  public: void quickSortUsingFunction (CompareFunction <ELEMENT> inCompareFunction) ;

//--- Sort array with a sort function (does nothing if inCompareFunction == nullptr)
//  inCompareFunction (inOperand1, inOperand2) < 0 means inOperand1 < inOperand2
  public: void reverseQuickSortUsingFunction (CompareFunction <ELEMENT> inCompareFunction) ;

//--- Element access (with index checking)
  public: ELEMENT lastObject (LOCATION_ARGS) const ;
  public: ELEMENT & lastObject (LOCATION_ARGS) ;

  public: void setObjectAtIndex (const ELEMENT & inObject,
                                 const int32_t inIndex
                                 COMMA_LOCATION_ARGS) ;

  public: ELEMENT & operator () (const int32_t inIndex COMMA_LOCATION_ARGS) ;

  public: ELEMENT & operator () (const int32_t inIndex COMMA_LOCATION_ARGS) const ;

//--- Private methods
  private: void internalSortArrayUsingOperators (const int32_t inFirst,
                                                 const int32_t inLast) ;

  private: void internalReverseSortArrayUsingOperators (const int32_t inFirst,
                                                        const int32_t inLast) ;

  private: void internalSortArrayUsingCompareMethod (const int32_t inFirst,
                                                     const int32_t inLast) ;

  private: void internalReverseSortArrayUsingCompareMethod (const int32_t inFirst,
                                                            const int32_t inLast) ;

  private: void internalSortArrayUsingFunction (const int32_t inFirst,
                                                const int32_t inLast,
                                                CompareFunction <ELEMENT> inCompareFunction) ;

  private: void internalReverseSortArrayUsingFunction (const int32_t inFirst,
                                                       const int32_t inLast,
                                                       CompareFunction <ELEMENT> inCompareFunction) ;
//--- Index checking
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: void checkIndex (const int32_t inIndex COMMA_LOCATION_ARGS) const ;
    protected: void checkIndexForInsertion (const int32_t inIndex COMMA_LOCATION_ARGS) const ;
  #endif

//--- Protected attributes
  protected: ELEMENT * mArray ;
  protected: int32_t mCount ;
  protected: int32_t mCapacity ;

//--- Array Pointer
  public: const ELEMENT * unsafeArrayPointer (void) const ;

//--- swap
  friend void swap <ELEMENT> (GenericUniqueArray <ELEMENT> & ioOperand1,
                           GenericUniqueArray <ELEMENT> & ioOperand2) ;

} ;

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
GenericUniqueArray <ELEMENT>::GenericUniqueArray (void) :
mArray ((ELEMENT *) nullptr),
mCount (0),
mCapacity (0) {
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
GenericUniqueArray <ELEMENT>::GenericUniqueArray (const int32_t inCapacity
                                          COMMA_LOCATION_ARGS) :
mArray (nullptr),
mCount (0),
mCapacity (0) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    macroAssertThere (inCapacity >= 0, "inCapacity (%ld) < 0", inCapacity, 0) ;
  #endif
  if (inCapacity > 0) {
    macroMyNewArray (mArray, ELEMENT, uint32_t (inCapacity)) ;
    mCapacity = inCapacity ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
GenericUniqueArray <ELEMENT>::GenericUniqueArray (const int32_t inCapacity,
                                          const ELEMENT & inRepeatedValue
                                          COMMA_LOCATION_ARGS) :
mArray (nullptr),
mCount (0),
mCapacity (0) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    macroAssertThere (inCapacity >= 0, "inCapacity (%ld) < 0", inCapacity, 0) ;
  #endif
  if (inCapacity > 0) {
    macroMyNewArray (mArray, ELEMENT, uint32_t (inCapacity)) ;
    mCapacity = inCapacity ;
    for (int32_t i=0 ; i<inCapacity ; i++) {
      mArray [i] = inRepeatedValue ;
    }
    mCount = inCapacity ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::setDataFromPointer (ELEMENT * & ioDataPtr,
                                                   const int32_t inDataLength) {
  macroMyDeleteArray (mArray) ;
  mArray = ioDataPtr ;
  mCount = inDataLength ;
  mCapacity = inDataLength ;
  ioDataPtr = nullptr ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::appendDataFromPointer (const ELEMENT * inDataPtr,
                                                      const int32_t inDataLength) {
  for (int32_t i=0 ; i<inDataLength ; i++) {
    appendObject (inDataPtr [i]) ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
GenericUniqueArray <ELEMENT>::~GenericUniqueArray (void) {
  macroMyDeleteArray (mArray) ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::removeAllKeepingCapacity (void) {
  mCount = 0 ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::copyTo (GenericUniqueArray <ELEMENT> & outArray) const {
  outArray.removeAllKeepingCapacity () ;
  for (int32_t i=0 ; i<mCount ; i++) {
    outArray.appendObject (mArray [i]) ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::setCapacity (const int32_t inNewCapacity) {
  if (mCapacity < inNewCapacity) {
    int32_t newCapacity = (mCapacity > 32) ? mCapacity : 32 ;
    while (newCapacity < inNewCapacity) {
      newCapacity <<= 1 ;
    }
    ELEMENT * newArray = nullptr ;
    macroMyNewArray (newArray, ELEMENT, uint32_t (newCapacity)) ;
    for (int32_t i=0 ; i<mCount ; i++) {
      newArray [i] = mArray [i] ;
    }
    macroMyDeleteArray (mArray) ; mArray = newArray ;
    mCapacity = newCapacity ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::forceObjectAtIndex (const int32_t inIndex,
                                                   const ELEMENT & inValue,
                                                   const ELEMENT & inDefaultValue) {
//--- Realloc if necessary
  if (mCapacity < (inIndex + 1)) {
    setCapacity (inIndex + 1) ;
  }
//--- Append default values if necessary
  if (mCount <= inIndex) {
    for (int32_t i=mCount ; i<inIndex ; i++) {
      mArray [i] = inDefaultValue ;
    }
    mCount = inIndex + 1 ;
  }
//--- Write value
  mArray [inIndex] = inValue ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::setCapacityUsingSwap (const int32_t inNewCapacity) {
  if (mCapacity < inNewCapacity) {
    int32_t newCapacity = (mCapacity > 32) ? mCapacity : 32 ;
    while (newCapacity < inNewCapacity) {
      newCapacity <<= 1 ;
    }
    ELEMENT * newArray = nullptr ;
    macroMyNewArray (newArray, ELEMENT, uint32_t (newCapacity)) ;
    for (int32_t i=0 ; i<mCount ; i++) {
      swap (newArray [i], mArray [i]) ;
    }
    macroMyDeleteArray (mArray) ; mArray = newArray ;
    mCapacity = newCapacity ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::removeAll (void) {
  mCount = 0 ;
  macroMyDeleteArray (mArray) ;
  mCapacity = 0 ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::appendObject (const ELEMENT & inValue) {
  if (mCount >= mCapacity) {
    setCapacity (mCount + 1 + mCount / 2) ;
  }
  mArray [mCount] = inValue ;
  mCount ++ ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::appendObjects (const int32_t inCount,
                                              const ELEMENT & inValue) {
  if (inCount > 0) {
    const int32_t newCount = mCount + inCount ;
    setCapacity (newCount) ;
    for (int32_t i=mCount ; i<newCount ; i++) {
      mArray [i] = inValue ;
    }
    mCount = newCount ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::appendObjectUsingSwap (ELEMENT & ioValue) {
  setCapacityUsingSwap (mCount + 1) ;
  swap (mArray [mCount], ioValue) ;
  mCount ++ ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::appendDefaultObjectUsingSwap (void) {
  setCapacityUsingSwap (mCount + 1) ;
  ELEMENT value ;
  swap (mArray [mCount], value) ;
  mCount += 1 ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::appendObjectsFromArray (const GenericUniqueArray <ELEMENT> & inObjectArray) {
  if (inObjectArray.mCount > 0) {
    setCapacity (mCount + inObjectArray.mCount) ;
    for (int32_t i=0 ; i<inObjectArray.mCount ; i++) {
      mArray [mCount + i] = inObjectArray.mArray [i] ;
    }
    mCount += inObjectArray.mCount ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  template <typename ELEMENT>
  void GenericUniqueArray <ELEMENT>::checkIndexForInsertion (const int32_t inIndex
                                                         COMMA_LOCATION_ARGS) const {
    macroAssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
    macroAssertThere (inIndex <= mCount, "inIndex (%d) > mCount (%ld)", inIndex, mCount) ;
  }
#endif

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::prependObjects (const GenericUniqueArray <ELEMENT> & inObjectArray) { // Values are copied
  const int32_t n = inObjectArray.mCount ;
  if (n > 0) {
    setCapacity (mCount + n) ;
    for (int32_t i = mCount - 1 ; i >= 0 ; i--) {
      mArray [i + n] = mArray [i] ;
    }
    for (int32_t i = 0 ; i < n ; i++) {
      mArray [i] = inObjectArray.mArray [i] ;
    }
    mCount += n ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::prependObject (const ELEMENT & inValue) { // inValue is copied
  setCapacity (mCount + 1) ;
  for (int32_t i = mCount ; i > 0 ; i--) {
    mArray [i] = mArray [i-1] ;
  }
  mArray [0] = inValue ;
  mCount += 1 ;
}
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::insertObjectAtIndex (const ELEMENT & inValue,
                                                    const int32_t inIndex
                                                    COMMA_LOCATION_ARGS) { // inValue is copied
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkIndexForInsertion (inIndex COMMA_THERE) ;
  #endif
  setCapacity (mCount + 1) ;
  for (int32_t i=mCount ; i>inIndex ; i--) {
    mArray [i] = mArray [i-1] ;
  }
  mArray [inIndex] = inValue ;
  mCount ++ ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::insertObjectsAtIndex (const int32_t inCount,
                                                     const ELEMENT & inValue,
                                                     const int32_t inStartingIndex
                                                     COMMA_LOCATION_ARGS) { // inValue is copied
  if (inCount > 0) {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkIndexForInsertion (inStartingIndex COMMA_THERE) ;
    #endif
    setCapacity (mCount + inCount) ;
    for (int32_t i=mCount+inCount-1 ; i>=(inStartingIndex + inCount) ; i--) {
      mArray [i] = mArray [i-inCount] ;
    }
    for (int32_t i=0 ; i<inCount ; i++) {
      mArray [inStartingIndex+i] = inValue ;
    }
    mCount += inCount ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::insertObjectUsingSwap (ELEMENT & ioValue,
                                                      const int32_t inIndex
                                                      COMMA_LOCATION_ARGS) { // inValue is copied
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkIndexForInsertion (inIndex COMMA_THERE) ;
  #endif
  setCapacity (mCount + 1) ;
  for (int32_t i=mCount ; i>inIndex ; i--) {
    swap (mArray [i], mArray [i-1]) ;
  }
  swap (mArray [inIndex], ioValue) ;
  mCount ++ ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::insertObjectsUsingExchangeAndClear (const int32_t inCount,
                                                                   const int32_t inStartingIndex
                                                                   COMMA_LOCATION_ARGS) {
  if (inCount > 0) {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkIndexForInsertion (inStartingIndex COMMA_THERE) ;
    #endif
    setCapacity (mCount + inCount) ;
    for (int32_t i=mCount+inCount-1 ; i>=(inStartingIndex + inCount) ; i--) {
      swap (mArray [i], mArray [i-inCount]) ;
    }
    for (int32_t i=0 ; i<inCount ; i++) {
      mArray [i+inStartingIndex].removeAllKeepingCapacity () ;
    }
    mCount += inCount ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::removeLastObject (LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkIndex (mCount-1 COMMA_THERE) ;
  #endif
  mCount -= 1 ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::removeLastObjects (const int32_t inCount
                                                  COMMA_LOCATION_ARGS) {
  if (inCount > 0) {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkIndex (mCount-inCount COMMA_THERE) ;
    #endif
    mCount -= inCount ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::exchangeObjectAtIndexes (const int32_t inIndex1,
                                                        const int32_t inIndex2
                                                        COMMA_LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkIndex (inIndex1 COMMA_THERE) ;
    checkIndex (inIndex2 COMMA_THERE) ;
  #endif
  if (inIndex1 != inIndex2) {
    swap (mArray [inIndex1],  mArray [inIndex2]) ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::removeObjectAtIndex (const int32_t inIndex
                                                    COMMA_LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkIndex (inIndex COMMA_THERE) ;
  #endif
  for (int32_t i=inIndex+1 ; i< mCount ; i++) {
    mArray [i-1] = mArray [i] ;
  }
  mCount -= 1 ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::removeObjectsAtIndex (const int32_t inCount,
                                                     const int32_t inStartingIndex
                                                     COMMA_LOCATION_ARGS) {
  if (inCount > 0) {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkIndex (inStartingIndex COMMA_THERE) ;
      checkIndexForInsertion (inStartingIndex+inCount COMMA_THERE) ;
    #endif
    for (int32_t i=inStartingIndex+inCount ; i<mCount ; i++) {
      mArray [i-inCount] = mArray [i] ;
    }
    mCount -= inCount ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
int32_t GenericUniqueArray <ELEMENT>::indexOfFirstObjectEqualTo (const ELEMENT & inValue) const {
  int32_t result = -1 ;
  for (int32_t i=0 ; (i<mCount) && (result < 0) ; i++) {
    if (mArray [i] == inValue) {
      result = i ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  template <typename ELEMENT>
  void GenericUniqueArray <ELEMENT>::checkIndex (const int32_t inIndex
                                             COMMA_LOCATION_ARGS) const {
    macroAssertThere (inIndex >= 0, "inIndex (%lld) < 0", inIndex, 0) ;
    macroAssertThere (inIndex < mCount, "inIndex (%lld) >= mCount (%lld)", inIndex, mCount) ;
  }
#endif

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::setObjectAtIndex (const ELEMENT & inObject,
                                                 const int32_t inIndex
                                                 COMMA_LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkIndex (inIndex COMMA_THERE) ;
  #endif
  if (nullptr != mArray) {
    mArray [inIndex] = inObject ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::incrementAtIndex (const int32_t inIndex
                                                 COMMA_LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkIndex (inIndex COMMA_THERE) ;
  #endif
  mArray [inIndex] ++ ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::decrementAtIndex (const int32_t inIndex
                                                 COMMA_LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkIndex (inIndex COMMA_THERE) ;
  #endif
  mArray [inIndex] -- ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
ELEMENT & GenericUniqueArray <ELEMENT>::operator () (const int32_t inIndex
                                                 COMMA_LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkIndex (inIndex COMMA_THERE) ;
  #endif
  return mArray [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
ELEMENT & GenericUniqueArray <ELEMENT>::operator () (const int32_t inIndex
                                                 COMMA_LOCATION_ARGS) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkIndex (inIndex COMMA_THERE) ;
  #endif
  return mArray [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
ELEMENT GenericUniqueArray <ELEMENT>::lastObject (LOCATION_ARGS) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkIndex (mCount-1 COMMA_THERE) ;
  #endif
  return mArray [mCount-1] ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
ELEMENT & GenericUniqueArray <ELEMENT>::lastObject (LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkIndex (mCount-1 COMMA_THERE) ;
  #endif
  return mArray [mCount-1] ;
}

//--------------------------------------------------------------------------------------------------
//   Sort array using >= and <= operators
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray<ELEMENT>::internalSortArrayUsingOperators (const int32_t inFirst,
                                                               const int32_t inLast) {
//--- Sort using 'quick sort' algorithm
  if (inFirst < inLast) {
    int32_t i = inFirst ;
    int32_t j = inLast ;
    while (i < j) {
      while ((i < inLast) && (mArray [i] <= mArray [inFirst])) {
        i ++ ;
      }
      while ((j > inFirst) && (mArray [j] >= mArray [inFirst])) {
        j -- ;
      }
      if (i < j) {
        swap (mArray [i], mArray [j]) ;
      }
    }
    swap (mArray [j], mArray [inFirst]) ;
    internalSortArrayUsingOperators (inFirst, j-1) ;
    internalSortArrayUsingOperators (j+1, inLast) ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray<ELEMENT>::sortArrayUsingComparisonOperators (void) {
  internalSortArrayUsingOperators (0, mCount - 1) ;
}

//--------------------------------------------------------------------------------------------------
//   Reverse sort array using >= and <= operators
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray<ELEMENT>::internalReverseSortArrayUsingOperators (const int32_t inFirst,
                                                                      const int32_t inLast) {
//--- Reverse sort using 'quick sort' algorithm
  if (inFirst < inLast) {
    int32_t i = inFirst ;
    int32_t j = inLast ;
    while (i < j) {
      while ((i < inLast) && (mArray [i] >= mArray [inFirst])) {
        i += 1 ;
      }
      while ((j > inFirst) && (mArray [j] <= mArray [inFirst])) {
        j -= 1 ;
      }
      if (i < j) {
        swap (mArray [i], mArray [j]) ;
      }
    }
    swap (mArray [j], mArray [inFirst]) ;
    internalReverseSortArrayUsingOperators (inFirst, j-1) ;
    internalReverseSortArrayUsingOperators (j+1, inLast) ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray<ELEMENT>::reverseSortArrayUsingComparisonOperators (void) {
  internalReverseSortArrayUsingOperators (0, mCount - 1) ;
}

//--------------------------------------------------------------------------------------------------
//   Sort array using compare method
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray<ELEMENT>::internalSortArrayUsingCompareMethod (const int32_t inFirst,
                                                                   const int32_t inLast) {
//--- Sort using 'quick sort' algorithm
  if (inFirst < inLast) {
    int32_t i = inFirst ;
    int32_t j = inLast ;
    while (i < j) {
      while ((i < inLast) && (mArray [i].compare (mArray [inFirst]) <= 0)) {
        i += 1 ;
      }
      while ((j > inFirst) && (mArray [j].compare (mArray [inFirst]) >= 0)) {
        j -= 1 ;
      }
      if (i < j) {
        swap (mArray [i], mArray [j]) ;
      }
    }
    swap (mArray [j], mArray [inFirst]) ;
    internalSortArrayUsingCompareMethod (inFirst, j-1) ;
    internalSortArrayUsingCompareMethod (j+1, inLast) ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray<ELEMENT>::sortArrayUsingCompareMethod (void) {
  internalSortArrayUsingCompareMethod (0, mCount - 1) ;
}

//--------------------------------------------------------------------------------------------------
//   Reverse sort array using compare method
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray<ELEMENT>::internalReverseSortArrayUsingCompareMethod (const int32_t inFirst,
                                                                          const int32_t inLast) {
//--- Reverse sort using 'quick sort' algorithm
  if (inFirst < inLast) {
    int32_t i = inFirst ;
    int32_t j = inLast ;
    while (i < j) {
      while ((i < inLast) && (mArray [i].compare (mArray [inFirst]) >= 0)) {
        i += 1 ;
      }
      while ((j > inFirst) && (mArray [j].compare (mArray [inFirst]) <= 0)) {
        j -= 1 ;
      }
      if (i < j) {
        swap (mArray [i], mArray [j]) ;
      }
    }
    swap (mArray [j], mArray [inFirst]) ;
    internalReverseSortArrayUsingCompareMethod (inFirst, j-1) ;
    internalReverseSortArrayUsingCompareMethod (j+1, inLast) ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray<ELEMENT>::reverseSortArrayUsingCompareMethod (void) {
  internalReverseSortArrayUsingCompareMethod (0, mCount - 1) ;
}

//--------------------------------------------------------------------------------------------------
//   Sort array using comparison function
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray<ELEMENT>::internalSortArrayUsingFunction (const int32_t inFirst,
                                                              const int32_t inLast,
                                                              CompareFunction <ELEMENT> inCompareFunction) {
//--- Sort using 'quick sort' algorithm
  if (inFirst < inLast) {
    int32_t i = inFirst ;
    int32_t j = inLast ;
    while (i < j) {
      while ((i < inLast) && (inCompareFunction (mArray [i], mArray [inFirst]) <= 0)) {
        i += 1 ;
      }
      while ((j > inFirst) && (inCompareFunction (mArray [j], mArray [inFirst]) >= 0)) {
        j -= 1 ;
      }
      if (i < j) {
        swap (mArray [i], mArray [j]) ;
      }
    }
    swap (mArray [j], mArray [inFirst]) ;
    internalSortArrayUsingFunction (inFirst, j-1, inCompareFunction) ;
    internalSortArrayUsingFunction (j+1, inLast, inCompareFunction) ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray<ELEMENT>::quickSortUsingFunction (CompareFunction <ELEMENT> inCompareFunction) {
  if (inCompareFunction != nullptr) {
    internalSortArrayUsingFunction (0, mCount - 1, inCompareFunction) ;
  }
}

//--------------------------------------------------------------------------------------------------
//   Reverse sort array using comparison function
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::internalReverseSortArrayUsingFunction (const int32_t inFirst,
                                                                      const int32_t inLast,
                                                                      CompareFunction <ELEMENT> inCompareFunction) {
//--- Reverse sort using 'quick sort' algorithm
  if (inFirst < inLast) {
    int32_t i = inFirst ;
    int32_t j = inLast ;
    while (i < j) {
      while ((i < inLast) && (inCompareFunction (mArray [i], mArray [inFirst]) >= 0)) {
        i += 1 ;
      }
      while ((j > inFirst) && (inCompareFunction (mArray [j], mArray [inFirst]) <= 0)) {
        j -= 1 ;
      }
      if (i < j) {
        swap (mArray [i], mArray [j]) ;
      }
    }
    swap (mArray [j], mArray [inFirst]) ;
    internalReverseSortArrayUsingFunction (inFirst, j-1, inCompareFunction) ;
    internalReverseSortArrayUsingFunction (j+1, inLast, inCompareFunction) ;
  }
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
void GenericUniqueArray <ELEMENT>::reverseQuickSortUsingFunction (CompareFunction <ELEMENT> inCompareFunction) {
  if (inCompareFunction != nullptr) {
    internalReverseSortArrayUsingFunction (0, mCount - 1, inCompareFunction) ;
  }
}

//--------------------------------------------------------------------------------------------------
//   Comparisons (based on == operator on objects)
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
bool GenericUniqueArray<ELEMENT>::operator == (const GenericUniqueArray <ELEMENT> & inOperand) const {
  bool areEqual = mCount == inOperand.mCount ;
  for (int32_t i=0 ; (i<mCount) && areEqual ; i++) {
    areEqual = mArray [i] == inOperand.mArray [i] ;
  }
  return areEqual ;
}

//--------------------------------------------------------------------------------------------------
// Has objects equal to method actual argument value (based on == operator)
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
bool GenericUniqueArray <ELEMENT>::containsObjectEqualTo (const ELEMENT & inObject) const {
  bool hasObject = false ;
  for (int32_t i=0 ; (i<mCount) && ! hasObject ; i++) {
    hasObject += mArray [i] == inObject ;
  }
  return hasObject ;
}

//--------------------------------------------------------------------------------------------------

template <typename ELEMENT>
const ELEMENT * GenericUniqueArray <ELEMENT>::unsafeArrayPointer (void) const {
  return mArray ;
}

//--------------------------------------------------------------------------------------------------
//   swap function for GenericUniqueArray <ELEMENT> classes
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT> void swap (GenericUniqueArray <ELEMENT> & ioOperand1,
                                       GenericUniqueArray <ELEMENT> & ioOperand2) {
  swap (ioOperand1.mCount, ioOperand2.mCount) ;
  swap (ioOperand1.mCapacity, ioOperand2.mCapacity) ;
  swap (ioOperand1.mArray, ioOperand2.mArray) ;
}

//--------------------------------------------------------------------------------------------------
