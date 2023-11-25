//----------------------------------------------------------------------------------------------------------------------
//
//  Linked list template class.
//
//  COPY OF ITS INSTANCES IS FORBIDDEN BY REDEFINITION OF COPY CONSTRUCTOR
//  AND ASSIGNMENT OPERATOR.
//
//  This file is part of libpm library
//
//  Copyright (C) 2001 Pierre Molinaro.
//  e-mail : pierre@pcmolinaro.name
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//----------------------------------------------------------------------------------------------------------------------

#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "utilities/M_machine.h"
#include "utilities/MF_MemoryControl.h"

//----------------------------------------------------------------------------------------------------------------------
//
//   Predeclarations
//
//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> class TC_LinkedList ;

template <typename TYPE> void swap (TC_LinkedList <TYPE> & ioOperand1,
                                    TC_LinkedList <TYPE> & ioOperand2) ;

//----------------------------------------------------------------------------------------------------------------------
//
//   Class template declaration
//
//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> class TC_LinkedList final {
//--- Constructor and destructor
  public: TC_LinkedList (void) ;
  public: virtual ~TC_LinkedList (void) ;

//--- No copy
  private: TC_LinkedList (TC_LinkedList <TYPE> &) = delete ;
  private: void operator = (TC_LinkedList <TYPE> &) = delete ;

//--- Suppress all elements
  public: void removeAllKeepingCapacity (void) ;

//--- Insert a new element
  public: void prependObject (const TYPE & inInfo) ;
  public: void appendObject (const TYPE & inInfo) ;

//--- Merge two lists
  public: void mergeListAtBottom (TC_LinkedList <TYPE> & ioList) ;

//--- Exchange
  friend void swap <TYPE> (TC_LinkedList <TYPE> & ioOperand1,
                           TC_LinkedList <TYPE> & ioOperand2) ;

//------- Element class ---------------------
  private: class cElement {
    public: TYPE mInfo ;
    public: cElement * mNextItem ;
  } ;

//--- Data members
  private: cElement * mFirstItem ;
  private: cElement * mLastItem ;
  private: int32_t mCount ;

//--- Copy into an array
  public: void copyTo (TC_UniqueArray <TYPE> & outArray) ;
} ;

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE>  TC_LinkedList <TYPE>::TC_LinkedList (void) :
mFirstItem (nullptr),
mLastItem (nullptr),
mCount (0) {
}

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> TC_LinkedList <TYPE>::~TC_LinkedList (void) {
  removeAllKeepingCapacity () ;
}

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> void TC_LinkedList <TYPE>::removeAllKeepingCapacity (void) {
  while (mFirstItem != nullptr) {
    mLastItem = mFirstItem->mNextItem ;
    macroMyDelete (mFirstItem) ;
    mFirstItem = mLastItem ;
  }
  mCount = 0 ;
}

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> void TC_LinkedList <TYPE>::appendObject (const TYPE & inInfo) {
  cElement * p = (cElement *) nullptr ;
  macroMyNew (p, cElement) ;
  p->mNextItem = (cElement *) nullptr ;
  p->mInfo = inInfo ; // Copy
  if (mFirstItem == nullptr) {
    mFirstItem = p ;
  }else{
    mLastItem->mNextItem = p ;
  }
  mLastItem = p ;
  mCount ++ ;
}

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> void TC_LinkedList<TYPE>::prependObject (const TYPE & inInfo) {
  cElement * p = nullptr ;
  macroMyNew (p, cElement) ;
  p->mNextItem = mFirstItem ;
  p->mInfo = inInfo ; // Copy
  mFirstItem = p ;
  if (mLastItem == nullptr) {
    mLastItem = p ;
  }
  mCount ++ ;
}

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> void TC_LinkedList <TYPE>::mergeListAtBottom (TC_LinkedList <TYPE> & ioList) {
  MF_Assert (this != & ioList, "this == & ioList", 0, 0) ;
  if (ioList.mFirstItem != nullptr) {
    if (mLastItem == nullptr) {
      mFirstItem = ioList.mFirstItem ;
    }else{
      mLastItem->mNextItem = ioList.mFirstItem ;
    }
    mLastItem = ioList.mLastItem ;
    mCount += ioList.mCount ;
    ioList.mFirstItem = nullptr ;
    ioList.mLastItem = nullptr ;
    ioList.mCount = 0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> void TC_LinkedList <TYPE>::copyTo (TC_UniqueArray <TYPE> & outArray) {
  outArray.setCapacity (mCount) ;
  cElement * p = mFirstItem ;
  while (p != nullptr) {
    outArray.appendObject (p->mInfo) ;
    p = p->mNextItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> void swap (TC_LinkedList <TYPE> & ioList1,
                                    TC_LinkedList <TYPE> & ioList2) {
  swap (ioList1.mFirstItem, ioList2.mFirstItem) ;
  swap (ioList1.mLastItem, ioList2.mLastItem) ;
  swap (ioList1.mCount, ioList2.mCount) ;
}

//----------------------------------------------------------------------------------------------------------------------
