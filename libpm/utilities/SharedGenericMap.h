//--------------------------------------------------------------------------------------------------
//
//  SharedGenericMap.h
//  galgas-ide
//
//  Created by Pierre Molinaro on 26/06/2025.
//  Copyright (C) 2025, ..., 2025 Pierre Molinaro.
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

#include "SharedObjectWithValueSemantics.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------
//  SharedGenericMapRoot
//--------------------------------------------------------------------------------------------------

template <typename KEY, typename NODE> class SharedGenericMapRoot ;

//--------------------------------------------------------------------------------------------------
//  SharedGenericMapNode
//--------------------------------------------------------------------------------------------------

template <typename KEY, typename NODE> class SharedGenericMapNode final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> mInfPtr ;
  private: OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> mSupPtr ;
  private: int32_t mBalance ;
  public:  NODE mNode ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedGenericMapNode (const NODE & inNode
                                COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mBalance (0),
  mNode (inNode) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: ~SharedGenericMapNode <KEY, NODE> (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedGenericMapNode (const OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & inNodePtr
                                COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mBalance (inNodePtr->mBalance),
  mNode (inNodePtr->mNode) {
    if (inNodePtr->mInfPtr.isNotNil ()) {
      mInfPtr = OptionalSharedRef <SharedGenericMapNode <KEY, NODE>>::make (inNodePtr->mInfPtr COMMA_THERE) ;
    }
    if (inNodePtr->mSupPtr.isNotNil ()) {
      mSupPtr = OptionalSharedRef <SharedGenericMapNode <KEY, NODE>>::make (inNodePtr->mSupPtr COMMA_THERE) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: SharedGenericMapNode (const SharedGenericMapNode &) = delete ;
  private: SharedGenericMapNode & operator = (const SharedGenericMapNode &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateNodeArray (const OptionalSharedRef <SharedGenericMapNode> & inNode,
                                          TC_Array <NODE> & ioNodeArray) {
    if (inNode.isNotNil ()) {
      populateNodeArray (inNode->mInfPtr, ioNodeArray) ;
      ioNodeArray.appendObject (inNode->mNode) ;
      populateNodeArray (inNode->mSupPtr, ioNodeArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class SharedGenericMapRoot <KEY, NODE> ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//MARK:  SharedGenericMapRoot
//--------------------------------------------------------------------------------------------------

template <typename KEY, typename NODE> class SharedGenericMapRoot final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Private members
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> mRootNode ;
  private: int32_t mCount ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedGenericMapRoot (LOCATION_ARGS) :
  SharedObject (THERE),
  mRootNode (),
  mCount (0) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ SharedGenericMapRoot (void) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: SharedGenericMapRoot (const SharedGenericMapRoot &) = delete ;
  private: SharedGenericMapRoot & operator = (const SharedGenericMapRoot &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void duplicateTo (OptionalSharedRef <SharedGenericMapRoot <KEY, NODE>> & outNewRoot
                            COMMA_UNUSED_LOCATION_ARGS) {
    if (mRootNode.isNotNil ()) {
      outNewRoot->mRootNode = OptionalSharedRef <SharedGenericMapNode <KEY, NODE>>::make (mRootNode COMMA_HERE) ;
      outNewRoot->mCount = mCount ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline int32_t count (void) const { return mCount ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Get sorted key array
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: TC_Array <NODE> sortedNodeArray (void) const {
    TC_Array <NODE> array ;
    SharedGenericMapNode <KEY, NODE>::populateNodeArray (mRootNode, array) ;
    return array ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Search
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> search (const KEY & inKey) const {
    OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> result ;
    recursiveSearch (inKey, mRootNode, result) ;
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void insertObject (const KEY & inKey,
                             const NODE & inObject
                             COMMA_LOCATION_ARGS) {
    macroUniqueSharedObjectThere (this) ;
    internalRecursiveInsert (mRootNode, inKey, inObject) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateLeft (OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & ioRootPtr) {
    if (ioRootPtr->mSupPtr->mBalance >= 0) {
      ioRootPtr->mBalance += 1 ;
    }else{
      ioRootPtr->mBalance += 1 - ioRootPtr->mSupPtr->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      ioRootPtr->mSupPtr->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mSupPtr->mBalance += 1 ;
    }

    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mSupPtr, ioRootPtr->mSupPtr->mInfPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateRight (OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & ioRootPtr) {
    if (ioRootPtr->mInfPtr->mBalance > 0) {
      ioRootPtr->mBalance -= ioRootPtr->mInfPtr->mBalance + 1 ;
    }else{
      ioRootPtr->mBalance -= 1 ;
    }
    if (ioRootPtr->mBalance >= 0) {
      ioRootPtr->mInfPtr->mBalance -= 1 ;
    }else{
      ioRootPtr->mInfPtr->mBalance += ioRootPtr->mBalance - 1 ;
    }
    ioRootPtr.rotateOwnershipLeft (ioRootPtr->mInfPtr, ioRootPtr->mInfPtr->mSupPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: bool internalRecursiveInsert (OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & ioRootPtr,
                                         const KEY & inKey,
                                         const NODE & inNodeToInsert) {
    bool extension = false ;
    if (ioRootPtr.isNil ()) {
      ioRootPtr = OptionalSharedRef <SharedGenericMapNode <KEY, NODE>>::make (inNodeToInsert COMMA_HERE) ;
//      ioRootPtr.swap (ioObjectToInsert) ;
//      ioRootPtr->mInfPtr.setToNil () ;
//      ioRootPtr->mSupPtr.setToNil () ;
//      ioRootPtr->mBalance = 0 ;
      mCount += 1 ;
      extension = true ;
    }else{
//      const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
      const ComparisonResult comparaison = ioRootPtr->mNode.mProperty_key.objectCompare (inKey) ;
      switch (comparaison) {
      case ComparisonResult::firstOperandGreaterThanSecond : // >
        extension = internalRecursiveInsert (ioRootPtr->mInfPtr, inKey, inNodeToInsert) ;
        if (extension) {
          ioRootPtr->mBalance += 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance > 1) {
            if (ioRootPtr->mInfPtr->mBalance < 0) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            extension = false ;
          }
        }
        break ;
      case ComparisonResult::firstOperandLowerThanSecond: // <
        extension = internalRecursiveInsert (ioRootPtr->mSupPtr, inKey, inNodeToInsert) ;
        if (extension) {
          ioRootPtr->mBalance -= 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance < -1) {
            if (ioRootPtr->mSupPtr->mBalance > 0) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            extension = false ;
          }
        }
        break ;
      case ComparisonResult::operandEqual :
        extension = false ;
        ioRootPtr->mNode = inNodeToInsert ;
        break ;
      case ComparisonResult::invalid :
        extension = false ;
        break ;
      }
    }
    return extension ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Removing: return removed object, or nullptr
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void removeAndReturnRemovedNode (const KEY & inKey,
                             OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & outRemovedNode) {
    macroUniqueSharedObject (this) ;
    bool ioBranchHasBeenRemoved ;
    internalRemoveEntry (inKey, mRootNode, outRemovedNode, ioBranchHasBeenRemoved) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static inline void supBranchDecreased (OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & ioRoot,
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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static inline void infBranchDecreased (OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -= 1 ;
    switch (ioRoot->mBalance) {
    case 0:
      break;
    case -1:
      ioBranchHasBeenRemoved = false ;
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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void getPreviousElement (OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & ioRoot,
                                           OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & ioElement,
                                           bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr.isNil ()) {
      ioElement = ioRoot ;
      ioRoot = ioRoot->mInfPtr ;
      ioBranchHasBeenRemoved = true ;
    }else{
      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: void internalRemoveEntry (const KEY & inKeyToRemove,
                                     OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & ioRoot,
                                     OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & outRemovedNode,
                                     bool & ioBranchHasBeenRemoved) {
    if (ioRoot.isNotNil ()) {
//      const int32_t comparaison = ioRoot->mKey.compare (inKeyToRemove) ;
      const ComparisonResult comparaison = ioRoot->mNode.mProperty_key.objectCompare (inKeyToRemove) ;
      switch (comparaison) {
      case ComparisonResult::firstOperandGreaterThanSecond : // >
        internalRemoveEntry (inKeyToRemove, ioRoot->mInfPtr, outRemovedNode, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
        break ;
      case ComparisonResult::firstOperandLowerThanSecond : // <
        internalRemoveEntry (inKeyToRemove, ioRoot->mSupPtr, outRemovedNode, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
        break ;
      case ComparisonResult::operandEqual :
        mCount -= 1 ;
        outRemovedNode.setToNil () ;
        if (ioRoot->mInfPtr.isNil ()) {
          outRemovedNode.rotateOwnershipLeft (ioRoot, ioRoot->mSupPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else if (ioRoot->mSupPtr.isNil ()) {
          outRemovedNode.rotateOwnershipLeft (ioRoot, ioRoot->mInfPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else{
          outRemovedNode = ioRoot ;
          OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> p = ioRoot ;
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr.setToNil () ;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr.setToNil () ;
          ioRoot->mBalance = p->mBalance;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
        break ;
      case ComparisonResult::invalid :
        break ;
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool hasKey (const KEY & inKey) const {
    OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> result ;
    recursiveSearch (inKey, mRootNode, result) ;
    return result.isNotNil () ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: static void recursiveSearch (const KEY & inKey,
                            const OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & inNodePtr,
                            OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & outNodePtr) {
    if (inNodePtr.isNotNil ()) {
      // const int32_t comparaison = inNodePtr->mKey.compare (inKey) ;
      const ComparisonResult comparaison = inNodePtr->mNode.mProperty_key.objectCompare (inKey) ;
      switch (comparaison) {
      case ComparisonResult::firstOperandGreaterThanSecond : // >
        recursiveSearch (inKey, inNodePtr->mInfPtr, outNodePtr) ;
        break ;
      case ComparisonResult::firstOperandLowerThanSecond : // <
        recursiveSearch (inKey, inNodePtr->mSupPtr, outNodePtr) ;
        break ;
      case ComparisonResult::operandEqual : // Found
        outNodePtr = inNodePtr ;
        break ;
      case ComparisonResult::invalid : // Found
        outNodePtr.setToNil () ;
        break ;
      }
    }else{
      outNodePtr.setToNil () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//  SharedGenericMap
//--------------------------------------------------------------------------------------------------

template <typename KEY, typename NODE> class SharedGenericMap final {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <SharedGenericMapRoot <KEY, NODE> > mSharedRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedGenericMap () :
  mSharedRoot () {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: ~ SharedGenericMap (void) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Build
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void build (LOCATION_ARGS) {
    mSharedRoot = OptionalSharedRef <SharedGenericMapRoot <KEY, NODE>>::make (THERE) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline bool isValid (void) const {
    return mSharedRoot.isNotNil () ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void drop (void)  {
    mSharedRoot.setToNil () ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: void insulate (LOCATION_ARGS) {
    if (mSharedRoot.isNotNil () && !mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <SharedGenericMapRoot <KEY, NODE>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Handle copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedGenericMap (const SharedGenericMap & inSource) :
  mSharedRoot (inSource.mSharedRoot) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedGenericMap & operator = (const SharedGenericMap & inSource) {
    mSharedRoot = inSource.mSharedRoot ;
    return * this ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insert or replace
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void insertOrReplace (const KEY & inKey,
                                const NODE & inNode
                                COMMA_LOCATION_ARGS) {
    if (mSharedRoot.isNotNil () && inKey.isValid () && inNode.isValid ()) {
      insulate (THERE) ;
      mSharedRoot->insertObject (inKey, inNode COMMA_THERE) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Remove
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void removeAndReturnRemovedNode (const KEY & inKey,
                           OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & outRemovedNode
                           COMMA_LOCATION_ARGS) {
    if (mSharedRoot.isNotNil ()) {
      insulate (THERE) ;
      mSharedRoot->removeAndReturnRemovedNode (inKey, outRemovedNode) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   hasKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool hasKey (const KEY & inKey) const  {
    bool result = false ;
    if (mSharedRoot.isNotNil ()) {
      result = mSharedRoot->hasKey (inKey) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   nodeForKey
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void nodeForKey (const KEY & inKey,
                           OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> & outNodePtr) const {
    if (mSharedRoot.isNotNil ()) {
      outNodePtr = mSharedRoot->search (inKey) ;
    }else{
      outNodePtr = OptionalSharedRef <SharedGenericMapNode <KEY, NODE>> () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: int32_t count (void) const  {
    if (mSharedRoot.isNil ()) {
      return 0 ;
    }else{
      return mSharedRoot->count () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public: String rootNodeKey (void) const  {
//    return mSharedRoot->rootNodeKey () ;
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: TC_Array <NODE> sortedNodeArray (void) const {
    if (mSharedRoot.isNotNil ()) {
      return mSharedRoot->sortedNodeArray () ;
    }else{
      return TC_Array <NODE> () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
