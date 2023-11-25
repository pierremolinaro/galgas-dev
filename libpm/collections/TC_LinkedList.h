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
  public: void appendObject (const TYPE & inInfo) ;
  public: void prependObject (const TYPE & inInfo) ;

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
  private: cElement * mTopItem ;
  private: cElement * mBottomItem ;
  private: int32_t mCount ;

//--- Copy into an array
  public: void copyTo (TC_UniqueArray <TYPE> & outArray) ;
} ;

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE>  TC_LinkedList <TYPE>::TC_LinkedList (void) :
mTopItem ((cElement *) nullptr),
mBottomItem ((cElement *) nullptr),
mCount (0) {
}

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> TC_LinkedList <TYPE>::~TC_LinkedList (void) {
  removeAllKeepingCapacity () ;
}

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> void TC_LinkedList <TYPE>::removeAllKeepingCapacity (void) {
  while (mTopItem != nullptr) {
    mBottomItem = mTopItem->mNextItem ;
    macroMyDelete (mTopItem) ;
    mTopItem = mBottomItem ;
  }
  mCount = 0 ;
}

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> void TC_LinkedList <TYPE>::prependObject (const TYPE & inInfo) {
  cElement * p = (cElement *) nullptr ;
  macroMyNew (p, cElement) ;
  p->mNextItem = (cElement *) nullptr ;
  p->mInfo = inInfo ; // Copy
  if (mTopItem == nullptr) {
    mTopItem = p ;
  }else{
    mBottomItem->mNextItem = p ;
  }
  mBottomItem = p ;
  mCount ++ ;
}

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> void TC_LinkedList<TYPE> ::appendObject (const TYPE & inInfo) {
  cElement * p = (cElement *) nullptr ;
  macroMyNew (p, cElement) ;
  p->mNextItem = mTopItem ;
  p->mInfo = inInfo ; // Copy
  mTopItem = p ;
  if (mBottomItem == nullptr) {
    mBottomItem = p ;
  }
  mCount ++ ;
}

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> void TC_LinkedList <TYPE>::mergeListAtBottom (TC_LinkedList <TYPE> & ioList) {
  MF_Assert (this != & ioList, "this == & ioList", 0, 0) ;
  if (ioList.mTopItem != nullptr) {
    if (mBottomItem == nullptr) {
      mTopItem = ioList.mTopItem ;
    }else{
      mBottomItem->mNextItem = ioList.mTopItem ;
    }
    mBottomItem = ioList.mBottomItem ;
    ioList.mTopItem = (cElement *) nullptr ;
    ioList.mBottomItem = (cElement *) nullptr ;
    mCount += ioList.mCount ;
    ioList.mCount = 0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> void TC_LinkedList <TYPE>::copyTo (TC_UniqueArray <TYPE> & outArray) {
  outArray.setCapacity (mCount) ;
  cElement * p = mTopItem ;
  while (p != nullptr) {
    outArray.appendObject (p->mInfo) ;
    p = p->mNextItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

template <typename TYPE> void swap (TC_LinkedList <TYPE> & ioList1,
                                    TC_LinkedList <TYPE> & ioList2) {
  swap (ioList1.mTopItem, ioList2.mTopItem) ;
  swap (ioList1.mBottomItem, ioList2.mBottomItem) ;
  swap (ioList1.mCount, ioList2.mCount) ;
}

//----------------------------------------------------------------------------------------------------------------------
