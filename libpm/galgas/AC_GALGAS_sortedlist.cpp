//--------------------------------------------------------------------------------------------------
//
//  AC_GALGAS_sortedlist
//
//  This file is part of libpm library
//
//  Copyright (C) 2005, ..., 2025 Pierre Molinaro.
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

#include "AC_GALGAS_sortedlist.h"
#include "capSortedListElement.h"
#include "cSortedListElement.h"
#include "all-predefined-types.h"
#include "MF_MemoryControl.h"
#include "Compiler.h"

//--------------------------------------------------------------------------------------------------
//  SortedListNode
//--------------------------------------------------------------------------------------------------

class SortedListNode final {
  public: SortedListNode * mInfPtr ;
  public: SortedListNode * mSupPtr ;
  public: int32_t mBalance ;
  public: SortedListNode * mNextPtr ;
  public: SortedListNode * mPreviousPtr ;
  public: capSortedListElement mProperties ;

//---
  public: SortedListNode (const capSortedListElement & inAttributes) ;

  public: SortedListNode (SortedListNode * inNode) ;

//--- No copy
  private: SortedListNode (const SortedListNode &) = delete ;
  private: SortedListNode & operator = (const SortedListNode &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

SortedListNode::SortedListNode (const capSortedListElement & inAttributes) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (0),
mNextPtr (nullptr),
mPreviousPtr (nullptr),
mProperties (inAttributes) {
}

//--------------------------------------------------------------------------------------------------

SortedListNode::SortedListNode (SortedListNode * inNode) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (0),
mNextPtr (nullptr),
mPreviousPtr (nullptr),
mProperties () {
  macroValidPointer (inNode) ;
  mProperties = inNode->mProperties ;
  mBalance = inNode->mBalance ;
  if (inNode->mInfPtr != nullptr) {
    macroMyNew (mInfPtr, SortedListNode (inNode->mInfPtr)) ;
  }
  if (inNode->mSupPtr != nullptr) {
    macroMyNew (mSupPtr, SortedListNode (inNode->mSupPtr)) ;
  }
}

//--------------------------------------------------------------------------------------------------

static void disposeNodes (SortedListNode * inNode) {
  if (nullptr != inNode) {
    disposeNodes (inNode->mInfPtr) ;
    disposeNodes (inNode->mSupPtr) ;
    macroMyDelete (inNode) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark SharedSortedListRoot
#endif

//--------------------------------------------------------------------------------------------------
//    SharedSortedListRoot
//--------------------------------------------------------------------------------------------------

class SharedSortedListRoot final : public SharedObject {
//--------------------------------- Private data members
  private: SortedListNode * mRoot ; // For AVL tree
  private: SortedListNode * mFirst ;
  private: SortedListNode * mLast ;
  private: uint32_t mCount ;

//--------------------------------- Native constructor
  protected: SharedSortedListRoot (LOCATION_ARGS) ;

//--------------------------------- Virtual destructor
  protected: virtual ~ SharedSortedListRoot (void) ;

//--------------------------------- No copy
  private: SharedSortedListRoot (const SharedSortedListRoot &) = delete ;
  private: SharedSortedListRoot & operator = (const SharedSortedListRoot &) = delete ;

//--------------------------------- Accessor
  protected: inline uint32_t count (void) const { return mCount ; }

//--------------------------------- Implementation of reader 'description'
  protected: virtual void description (String & ioString,
                                     const int32_t inIndentation) const ;

//--- Enumeration handling
  protected: virtual void populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const ;

//--- Object Compare
  protected: ComparisonResult objectCompare (const SharedSortedListRoot * inOperand) const ;

//--- Adding an object
  protected: void appendObject (capSortedListElement & inAttributes) ;

  private: void addEntry (SortedListNode * & ioRootPtr,
                          SortedListNode * inCurrentNode,
                          const capSortedListElement & inAttributes,
                          bool & ioExtension) ;

//--------------------------------- Append a list
  protected: void appendSortedList (const SharedSortedListRoot * inList) ;

//--------------------------------- Method Implementation
  protected: void smallestObjectAttributeList (capSortedListElement & outAttributes,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  protected: void greatestObjectAttributeList (capSortedListElement & outAttributes,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Modifier Implementation
  protected: void removeSmallestObject (capSortedListElement & outAttributes,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

  protected: void removeGreatestObject (capSortedListElement & outAttributes,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Copy from a other list
  protected: void copyFrom (const SharedSortedListRoot * inList) ;

//--------------------------------- Friend
  friend class AC_GALGAS_sortedlist ;
} ;

//--------------------------------------------------------------------------------------------------

SharedSortedListRoot::SharedSortedListRoot (LOCATION_ARGS) :
SharedObject (THERE),
mRoot (nullptr),
mFirst (nullptr),
mLast (nullptr),
mCount (0) {
}

//--------------------------------------------------------------------------------------------------

SharedSortedListRoot::~ SharedSortedListRoot (void) {
  disposeNodes (mRoot) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Checking sorted lists
#endif

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  static void populateCheckArray (const SortedListNode * inNode,
                                  uint32_t & ioIndex,
                                  const SortedListNode * * ioArray) {
    if (nullptr != inNode) {
      macroValidSharedObject (inNode, SortedListNode) ;
      populateCheckArray (inNode->mInfPtr, ioIndex, ioArray) ;
      ioArray [ioIndex] = inNode ;
      ioIndex ++ ;
      populateCheckArray (inNode->mSupPtr, ioIndex, ioArray) ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  static void checkSortedList (const SortedListNode * inRoot,
                               const uint32_t inCount,
                               const SortedListNode * inFirst,
                               const SortedListNode * inLast
                               COMMA_LOCATION_ARGS) {
    const SortedListNode * * array = nullptr ;
    macroMyNewPODArray (array, const SortedListNode *, inCount) ;
    uint32_t idx = 0 ;
    populateCheckArray (inRoot, idx, array) ;
    macroAssertThere (idx == inCount, "a: idx (%lld) != inCount (%lld)", idx, inCount) ;

    const SortedListNode * p = inFirst ;
    idx = 0 ;
    while (p != nullptr) {
      macroAssertThere (p == array [idx], "b: p (%p) != array [idx] (%p)", (int64_t) p, (int64_t) array [idx]) ;
      idx ++ ;
      p = p->mNextPtr ;
    }
    macroAssertThere (idx == inCount, "c: idx (%lld) != inCount (%lld)", idx, inCount) ;

    p = inLast ;
    idx = inCount ;
    while (p != nullptr) {
      idx -- ;
      macroAssertThere (p == array [idx], "d: p (%p) != array [idx] (%p)", (int64_t) p, (int64_t) array [idx]) ;
      p = p->mPreviousPtr ;
    }
    macroAssertThere (idx == 0, "idx (%lld) != 0", idx, 0) ;
    macroMyDeletePODArray (array) ;
  }
#endif

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insulate
#endif

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_sortedlist::insulate (LOCATION_ARGS) {
  if ((mSharedRoot != nullptr) && !mSharedRoot->isUniquelyReferenced ()) {
    SharedSortedListRoot * p = nullptr ;
    macroMyNew (p, SharedSortedListRoot (THERE)) ;
    p->copyFrom (mSharedRoot) ;
    macroAssignSharedObject (mSharedRoot, p) ;
    macroDetachSharedObject (p) ;
  }
}

//--------------------------------------------------------------------------------------------------

static void buildDirectLinksOnCopy (SortedListNode * inNode,
                                    SortedListNode * & ioFirst) {
  if (nullptr != inNode) {
    buildDirectLinksOnCopy (inNode->mSupPtr, ioFirst) ;
    inNode->mNextPtr = ioFirst ;
    ioFirst = inNode ;
    buildDirectLinksOnCopy (inNode->mInfPtr, ioFirst) ;
  }
}

//--------------------------------------------------------------------------------------------------

static void buildReverseLinksOnCopy (SortedListNode * inNode,
                                     SortedListNode * & ioLast) {
  if (nullptr != inNode) {
    buildReverseLinksOnCopy (inNode->mInfPtr, ioLast) ;
    inNode->mPreviousPtr = ioLast ;
    ioLast = inNode ;
    buildReverseLinksOnCopy (inNode->mSupPtr, ioLast) ;
  }
}

//--------------------------------------------------------------------------------------------------

void SharedSortedListRoot::copyFrom (const SharedSortedListRoot * inList) {
  if ((inList != nullptr) && (inList->mRoot != nullptr)) {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkSortedList (inList->mRoot, inList->mCount, inList->mFirst, inList->mLast COMMA_HERE) ;
    #endif
    macroAssert (mCount == 0, "mCount (%lld) != 0", mCount, 0) ;
    macroValidSharedObject (inList, SharedSortedListRoot) ;
    mCount = inList->mCount ;
    macroMyNew (mRoot, SortedListNode (inList->mRoot)) ;
    macroAssert (mFirst == nullptr, "mFirst (%p) != nullptr", (int64_t) mFirst, 0) ;
    buildDirectLinksOnCopy (mRoot, mFirst) ;
    macroAssert (mLast == nullptr, "mLast (%p) != nullptr", (int64_t) mLast, 0) ;
    buildReverseLinksOnCopy (mRoot, mLast) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkSortedList (mRoot, mCount, mFirst, mLast COMMA_HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Comparison
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult SharedSortedListRoot::objectCompare (const SharedSortedListRoot * inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (nullptr != inOperand) {
    result = ComparisonResult::operandEqual ;
    if (mCount < inOperand->mCount) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mCount > inOperand->mCount) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      SortedListNode * p1 = mFirst ;
      SortedListNode * p2 = inOperand->mFirst ;
      while ((nullptr != p1) && (nullptr != p2) && (result == ComparisonResult::operandEqual)) {
        result = p1->mProperties.compare (p2->mProperties) ;
        p1 = p1->mNextPtr ;
        p2 = p1->mNextPtr ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult AC_GALGAS_sortedlist::objectCompare (const AC_GALGAS_sortedlist & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid ()) {
    result = mSharedRoot->objectCompare (inOperand.mSharedRoot) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insertion Implementation
#endif

//--------------------------------------------------------------------------------------------------

static void rotateLeft (SortedListNode * & ioRootPtr) {
  SortedListNode * b = ioRootPtr->mSupPtr ;
  ioRootPtr->mSupPtr = b->mInfPtr ;
  b->mInfPtr = ioRootPtr;

  if (b->mBalance >= 0) {
    ioRootPtr->mBalance += 1 ;
  }else{
    ioRootPtr->mBalance += 1 - b->mBalance ;
  }

  if (ioRootPtr->mBalance > 0) {
    b->mBalance += ioRootPtr->mBalance + 1 ;
  }else{
    b->mBalance += 1 ;
  }
  ioRootPtr = b ;
}

//---------------------------------------------------------------------

static void rotateRight (SortedListNode * & ioRootPtr) {
  SortedListNode * b = ioRootPtr->mInfPtr ;
  ioRootPtr->mInfPtr = b->mSupPtr ;
  b->mSupPtr = ioRootPtr ;

  if (b->mBalance > 0) {
    ioRootPtr->mBalance += -b->mBalance - 1 ;
  }else{
    ioRootPtr->mBalance -= 1 ;
  }
  if (ioRootPtr->mBalance >= 0) {
    b->mBalance -= 1 ;
  }else{
    b->mBalance += ioRootPtr->mBalance - 1 ;
  }
  ioRootPtr = b ;
}

//--------------------------------------------------------------------------------------------------

void SharedSortedListRoot::addEntry (SortedListNode * & ioRootPtr,
                                      SortedListNode * inBeforeNode,
                                      const capSortedListElement & inAttributes,
                                      bool & ioExtension) {
  if (ioRootPtr == nullptr) {
    macroMyNew (ioRootPtr, SortedListNode (inAttributes)) ;
    if (inBeforeNode == nullptr) { // New node is the first one
      ioRootPtr->mNextPtr = mFirst ;
      if (mFirst == nullptr) {
        mLast = ioRootPtr ;
      }else{
        mFirst->mPreviousPtr = ioRootPtr ;
      }
      mFirst = ioRootPtr ;
    }else{ // Insert new node just after 'inBeforeNode'
      SortedListNode * next = inBeforeNode->mNextPtr ;
      if (next == nullptr) {  // new node becomes the last one
        mLast = ioRootPtr ;
      }else{
        next->mPreviousPtr = ioRootPtr ;
      }
      ioRootPtr->mNextPtr = next ;
      ioRootPtr->mPreviousPtr = inBeforeNode ;
      inBeforeNode->mNextPtr = ioRootPtr ;
    }
    ioExtension = true ;
    mCount ++ ;
  }else{
    macroValidPointer (ioRootPtr) ;
    const ComparisonResult comparaison = ioRootPtr->mProperties.compareForSorting (inAttributes) ;
    if (comparaison > ComparisonResult::operandEqual) {
      addEntry (ioRootPtr->mInfPtr, inBeforeNode, inAttributes, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance += 1 ;
        if (ioRootPtr->mBalance == 0) {
          ioExtension = false;
        }else if (ioRootPtr->mBalance == 2) {
          if (ioRootPtr->mInfPtr->mBalance == -1) {
            rotateLeft (ioRootPtr->mInfPtr) ;
          }
          rotateRight (ioRootPtr) ;
          ioExtension = false;
        }
      }
    }else{
      addEntry (ioRootPtr->mSupPtr, ioRootPtr, inAttributes, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance -= 1 ;
        if (ioRootPtr->mBalance == 0) {
          ioExtension = false ;
        }else if (ioRootPtr->mBalance == -2) {
          if (ioRootPtr->mSupPtr->mBalance == 1) {
            rotateRight (ioRootPtr->mSupPtr) ;
          }
          rotateLeft (ioRootPtr) ;
          ioExtension = false;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void SharedSortedListRoot::appendObject (capSortedListElement & inAttributes) {
  if (inAttributes.isValid ()) {
    bool extension = false ; // Unused here
    addEntry (mRoot, nullptr, inAttributes, extension) ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkSortedList (mRoot, mCount, mFirst, mLast COMMA_HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_sortedlist::appendObject (capSortedListElement & inAttributes) {
  if (isValid ()) {
    insulate (HERE) ;
    if (nullptr != mSharedRoot) {
      mSharedRoot->appendObject (inAttributes) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insertion Implementation
#endif

//--------------------------------------------------------------------------------------------------

void SharedSortedListRoot::appendSortedList (const SharedSortedListRoot * inList) {
  macroValidPointer (inList) ;
  const SortedListNode * p = inList->mFirst ;
  while (p != nullptr) {
    bool extension = false ; // Unused here
    addEntry (mRoot, nullptr, p->mProperties, extension) ;
    p = p->mNextPtr ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkSortedList (mRoot, mCount, mFirst, mLast COMMA_HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_sortedlist::appendSortedList (const AC_GALGAS_sortedlist & inList) {
  if ((nullptr != mSharedRoot) && (nullptr != inList.mSharedRoot)) {
    mSharedRoot->appendSortedList (inList.mSharedRoot) ;
  }else{
    drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Remove Smallest
#endif

//--------------------------------------------------------------------------------------------------

static void supBranchDecreased (SortedListNode * & ioRoot,
                                bool & ioBranchHasBeenRemoved) {
  ioRoot->mBalance += 1 ;
  switch (ioRoot->mBalance) {
  case 0:
    break;
  case 1:
    ioBranchHasBeenRemoved = false;
    break;
  case 2:
    switch (ioRoot->mInfPtr->mBalance) {
    case -1:
      rotateLeft (ioRoot->mInfPtr) ;
      rotateRight (ioRoot) ;
      break;
    case 0:
      rotateRight (ioRoot) ;
      ioBranchHasBeenRemoved = false;
      break;
    case 1:
      rotateRight (ioRoot) ;
      break;
    }
    break;
  }
}

//--------------------------------------------------------------------------------------------------

static void infBranchDecreased (SortedListNode * & ioRoot,
                                bool & ioBranchHasBeenRemoved) {
  ioRoot->mBalance -= 1 ;
  switch (ioRoot->mBalance) {
  case 0:
    break;
  case -1:
    ioBranchHasBeenRemoved = false;
    break;
  case -2:
    switch (ioRoot->mSupPtr->mBalance) {
    case 1:
      rotateRight (ioRoot->mSupPtr) ;
      rotateLeft (ioRoot) ;
      break;
    case 0:
      rotateLeft (ioRoot) ;
      ioBranchHasBeenRemoved = false;
      break;
    case -1:
      rotateLeft (ioRoot) ;
      break;
    }
    break;
  }
}

//--------------------------------------------------------------------------------------------------

static void internalRemoveLowestElement (SortedListNode * & ioRoot,
                                         bool & ioBranchHasBeenRemoved) {
  if (ioRoot->mInfPtr != nullptr) {
    internalRemoveLowestElement (ioRoot->mInfPtr, ioBranchHasBeenRemoved) ;
    if (ioBranchHasBeenRemoved) {
      infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
    }
  }else{
    SortedListNode * p = ioRoot->mSupPtr ;
    ioRoot->mSupPtr = nullptr ;
    macroMyDelete (ioRoot) ;
    ioRoot = p ;
    ioBranchHasBeenRemoved = true ;
  }
}

//--------------------------------------------------------------------------------------------------

void SharedSortedListRoot::removeSmallestObject (capSortedListElement & outAttributes,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkSortedList (mRoot, mCount, mFirst, mLast COMMA_HERE) ;
  #endif
  if (mFirst == nullptr) {
    inCompiler->onTheFlyRunTimeError ("'popSmallest' method invoked on an empty list" COMMA_THERE) ;
  }else{
    outAttributes = mFirst->mProperties ;
    mFirst->mProperties.drop () ;
  //--- Remove from sequential List
    mFirst = mFirst->mNextPtr ;
    if (mFirst == nullptr) {
      mLast = nullptr ;
    }else{
      mFirst->mPreviousPtr = nullptr ;
    }
  //--- Remove from AVL tree
   bool branchHasBeenRemoved = false ; // Unused here
   internalRemoveLowestElement (mRoot, branchHasBeenRemoved) ;
  //---
    mCount -- ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkSortedList (mRoot, mCount, mFirst, mLast COMMA_HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_sortedlist::removeSmallestObject (capSortedListElement & outAttributes,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mSharedRoot) {
    mSharedRoot->removeSmallestObject (outAttributes, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Remove Greatest
#endif

//--------------------------------------------------------------------------------------------------

static void internalRemoveGreatestElement (SortedListNode * & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
  if (ioRoot->mSupPtr != nullptr) {
    internalRemoveGreatestElement (ioRoot->mSupPtr, ioBranchHasBeenRemoved) ;
    if (ioBranchHasBeenRemoved) {
      supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
    }
  }else{
    SortedListNode * p = ioRoot->mInfPtr ;
    ioRoot->mInfPtr = nullptr ;
    macroMyDelete (ioRoot) ;
    ioRoot = p ;
    ioBranchHasBeenRemoved = true ;
  }
}

//--------------------------------------------------------------------------------------------------

void SharedSortedListRoot::removeGreatestObject (capSortedListElement & outAttributes,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkSortedList (mRoot, mCount, mFirst, mLast COMMA_HERE) ;
  #endif
  if (mLast == nullptr) {
    inCompiler->onTheFlyRunTimeError ("'popGreatest' method invoked on an empty list" COMMA_THERE) ;
  }else{
    outAttributes = mLast->mProperties ;
    mLast->mProperties.drop () ;
  //--- Remove from sequential List
    mLast = mLast->mPreviousPtr ;
    if (mLast == nullptr) {
      mFirst = nullptr ;
    }else{
      mLast->mNextPtr = nullptr ;
    }
  //--- Remove from AVL tree
   bool branchHasBeenRemoved = false ; // Unused here
   internalRemoveGreatestElement (mRoot, branchHasBeenRemoved) ;
  //---
    mCount -- ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkSortedList (mRoot, mCount, mFirst, mLast COMMA_HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_sortedlist::removeGreatestObject (capSortedListElement & outAttributes,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mSharedRoot) {
    mSharedRoot->removeGreatestObject (outAttributes, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark AC_GALGAS_sortedlist
#endif

//--------------------------------------------------------------------------------------------------

AC_GALGAS_sortedlist::AC_GALGAS_sortedlist (void) :
mSharedRoot (nullptr) {
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_sortedlist::AC_GALGAS_sortedlist (const AC_GALGAS_sortedlist & inSource) :
AC_GALGAS_root (),
mSharedRoot (nullptr) {
  macroAssignSharedObject (mSharedRoot, inSource.mSharedRoot) ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_sortedlist & AC_GALGAS_sortedlist::operator = (const AC_GALGAS_sortedlist & inSource) {
  macroAssignSharedObject (mSharedRoot, inSource.mSharedRoot) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_sortedlist::~ AC_GALGAS_sortedlist (void) {
  macroDetachSharedObject (mSharedRoot) ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_sortedlist::drop (void) {
  macroDetachSharedObject (mSharedRoot) ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_sortedlist::createNewEmptySortedList (LOCATION_ARGS) {
  macroMyNew (mSharedRoot, SharedSortedListRoot (THERE)) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark description
#endif

//--------------------------------------------------------------------------------------------------

void SharedSortedListRoot::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (mCount) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mCount > 1) ? "s" : "") ;
  ioString.appendCString ("): ") ;
  const SortedListNode * p = mFirst ;
  uint32_t idx = 0 ;
  while (p != nullptr) {
    ioString.appendCString ("\n") ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendCString ("|-at ") ;
    ioString.appendUnsigned (idx) ;
    p->mProperties.description (ioString, inIndentation + 1) ;
    p = p->mNextPtr ;
    idx ++ ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_sortedlist::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<@") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (nullptr == mSharedRoot) {
    ioString.appendCString (" not built") ;
  }else{
    mSharedRoot->description (ioString, inIndentation) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Readers
#endif

//--------------------------------------------------------------------------------------------------

GGS_uint AC_GALGAS_sortedlist::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

uint32_t AC_GALGAS_sortedlist::count () const {
  uint32_t result = 0 ;
  if (isValid ()) {
    result = mSharedRoot->count () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Methods
#endif

//--------------------------------------------------------------------------------------------------

void SharedSortedListRoot::smallestObjectAttributeList (capSortedListElement & outAttributes,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mFirst == nullptr) {
    inCompiler->onTheFlyRunTimeError ("'smallest' method invoked on an empty list" COMMA_THERE) ;
  }else{
    outAttributes = mFirst->mProperties ;
  }
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_sortedlist::smallestObjectAttributeList (capSortedListElement & outAttributes,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mSharedRoot != nullptr) {
    mSharedRoot->smallestObjectAttributeList (outAttributes, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void SharedSortedListRoot::greatestObjectAttributeList (capSortedListElement & outAttributes,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mLast == nullptr) {
    inCompiler->onTheFlyRunTimeError ("'greatest' method invoked on an empty list" COMMA_THERE) ;
  }else{
    outAttributes = mLast->mProperties ;
  }
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_sortedlist::greatestObjectAttributeList (capSortedListElement & outAttributes,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mSharedRoot != nullptr) {
    mSharedRoot->greatestObjectAttributeList (outAttributes, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Enumerator
#endif

//--------------------------------------------------------------------------------------------------
//
//                 'AC_GALGAS_sortedlist::cEnumerator' class
//
//--------------------------------------------------------------------------------------------------

void SharedSortedListRoot::populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const {
  inEnumerationArray.setCapacity (mCount) ;
  SortedListNode * p = mFirst ;
  while (p != nullptr) {
    capCollectionElement object ;
    object.setPointer (p->mProperties.ptr ()) ;
    inEnumerationArray.appendObject (object) ;
    p = p->mNextPtr ;
  }
  macroAssert (mCount == inEnumerationArray.count (), "mCount %lld != inEnumerationArray.count () %lld", mCount, inEnumerationArray.count ()) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkSortedList (mRoot, mCount, mFirst, mLast COMMA_HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_sortedlist::populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const {
  if (mSharedRoot != nullptr) {
    mSharedRoot->populateEnumerationArray (inEnumerationArray) ;
  }
}

//--------------------------------------------------------------------------------------------------
