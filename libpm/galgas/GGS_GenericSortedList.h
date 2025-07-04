//--------------------------------------------------------------------------------------------------
//
//  GGS_GenericSortedList.h
//  galgas-ide
//
//  Created by Pierre Molinaro on 29/06/2025, ..., 2025 Pierre Molinaro.
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

//--------------------------------------------------------------------------------------------------
//  GGS_GenericSortedList
//--------------------------------------------------------------------------------------------------

template <typename ELEMENT> class GGS_GenericSortedList : public AC_GALGAS_root {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: TC_Array <ELEMENT> mSharedArray ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_GenericSortedList () :
  mSharedArray () {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ GGS_GenericSortedList (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_GenericSortedList (const GGS_GenericSortedList & inSource) :
  mSharedArray (inSource.mSharedArray) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GGS_GenericSortedList & operator = (const GGS_GenericSortedList & inSource) {
    mSharedArray = inSource.mSharedArray ;
    return *this ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline bool isValid (void) const override { return mSharedArray.isAllocated () ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline virtual void drop (void) override {
    mSharedArray.removeAll () ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: inline void build (void) {
    mSharedArray.setCapacity (16) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline int32_t count (void) const { return mSharedArray.count () ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void insertObject (const ELEMENT & inElement,
                                CompareFunction <ELEMENT> inSortFunction) {
    if (isValid () && inElement.isValid ()) {
      mSharedArray.appendObject (inElement) ;
      mSharedArray.quickSortUsingFunction (inSortFunction) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void appendSortedList (const GGS_GenericSortedList <ELEMENT> & inSortedList,
                                    CompareFunction <ELEMENT> inSortFunction) {
    if (isValid () && inSortedList.isValid ()) {
      for (int32_t i=0 ; i<inSortedList.count () ; i++) {
        mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;
      }
      mSharedArray.quickSortUsingFunction (inSortFunction) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getFirst (ELEMENT & outRemovedElement,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const {
    if (isValid ()) {
      if (count () == 0) {
        inCompiler->onTheFlyRunTimeError ("'smallest' method invoked on an empty list" COMMA_THERE) ;
        outRemovedElement.drop () ;
      }else{
        outRemovedElement = mSharedArray (0 COMMA_HERE) ;
      }
    }else{
      outRemovedElement.drop () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void getLast (ELEMENT & outRemovedElement,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) const {
    if (isValid ()) {
      if (count () == 0) {
        inCompiler->onTheFlyRunTimeError ("'greatest' method invoked on an empty list" COMMA_THERE) ;
        outRemovedElement.drop () ;
      }else{
        outRemovedElement = mSharedArray.lastObject (HERE) ;
      }
    }else{
      outRemovedElement.drop () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void removeFirst (ELEMENT & outRemovedElement,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
    if (isValid ()) {
      if (count () == 0) {
        inCompiler->onTheFlyRunTimeError ("'popSmallest' method invoked on an empty list" COMMA_THERE) ;
        outRemovedElement.drop () ;
      }else{
        outRemovedElement = mSharedArray (0 COMMA_HERE) ;
        mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;
      }
    }else{
      outRemovedElement.drop () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void removeLast (ELEMENT & outRemovedElement,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
    if (isValid ()) {
      if (count () == 0) {
        inCompiler->onTheFlyRunTimeError ("'popGreatest' method invoked on an empty list" COMMA_THERE) ;
        outRemovedElement.drop () ;
      }else{
        outRemovedElement = mSharedArray.lastObject (HERE) ;
        mSharedArray.removeLastObject (HERE) ;
      }
    }else{
      outRemovedElement.drop () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected : TC_Array <ELEMENT> sortedElementArray (void) const {
    if (isValid ()) {
      return mSharedArray ;
    }else{
      return TC_Array <ELEMENT> () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public : ComparisonResult objectCompare (const GGS_GenericSortedList & inOperand) const {
    ComparisonResult result = ComparisonResult::invalid ;
    if (isValid () && inOperand.isValid ()) {
      if (count () < inOperand.count ()) {
        result = ComparisonResult::firstOperandLowerThanSecond ;
      }else if (count () > inOperand.count ()) {
        result = ComparisonResult::firstOperandGreaterThanSecond ;
      }else{
        result = ComparisonResult::operandEqual ;
        for (int32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
          const ELEMENT left = mSharedArray (i COMMA_HERE) ;
          const ELEMENT right = inOperand.mSharedArray (i COMMA_HERE) ;
          result = left.objectCompare (right) ;
        }
      }
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
