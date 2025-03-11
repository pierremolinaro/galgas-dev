//--------------------------------------------------------------------------------------------------
//
//  SharedStringMap.cpp
//  galgas-ide
//
//  Created by Pierre Molinaro on 08/03/2025.
//
//--------------------------------------------------------------------------------------------------

#include "SharedStringMap.h"

//--------------------------------------------------------------------------------------------------
//MARK:  SharedStringMapNode
//--------------------------------------------------------------------------------------------------

SharedStringMapNode::SharedStringMapNode (const String & inKey COMMA_LOCATION_ARGS) :
SharedObject (THERE),
mInfPtr (),
mSupPtr (),
mBalance (0),
mKey (inKey) {
}

//--------------------------------------------------------------------------------------------------

SharedStringMapNode::SharedStringMapNode (const OptionalSharedRef <SharedStringMapNode> & inNodePtr
                                          COMMA_LOCATION_ARGS) :
SharedObject (THERE),
mInfPtr (),
mSupPtr (),
mBalance (inNodePtr->mBalance),
mKey (inNodePtr->mKey) {
  if (inNodePtr->mInfPtr.isNotNil ()) {
    mInfPtr = OptionalSharedRef <SharedStringMapNode>::make (inNodePtr->mInfPtr COMMA_THERE) ;
  }
  if (inNodePtr->mSupPtr.isNotNil ()) {
    mSupPtr = OptionalSharedRef <SharedStringMapNode>::make (inNodePtr->mSupPtr COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

//void SharedStringMapNode::populateCacheArray (SharedStringMapNode * inNode,
//                                              TC_Array <SharedStringMapNode *> & ioCacheArray) {
//  if (inNode != nullptr) {
//    populateCacheArray (inNode->mInfPtr, ioCacheArray) ;
//    ioCacheArray.appendObject (inNode) ;
//    populateCacheArray (inNode->mSupPtr, ioCacheArray) ;
//  }
//}

//--------------------------------------------------------------------------------------------------

void SharedStringMapNode::populateStringArray (const OptionalSharedRef <SharedStringMapNode> & inNode,
                                               TC_Array <String> & ioStringArray) {
  if (inNode.isNotNil ()) {
    populateStringArray (inNode->mInfPtr, ioStringArray) ;
    ioStringArray.appendObject (inNode->mKey) ;
    populateStringArray (inNode->mSupPtr, ioStringArray) ;
  }
}

//--------------------------------------------------------------------------------------------------
//MARK:  SharedStringMapRoot
//--------------------------------------------------------------------------------------------------

class SharedStringMapRoot final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Private members
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  private: TC_Array <SharedStringMapNode *> mCacheArray ;
//  private: bool mCacheArrayIsBuilt ;
  private: OptionalSharedRef <SharedStringMapNode> mRootNode ;
  private: int32_t mCount ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedStringMapRoot (LOCATION_ARGS) :
  SharedObject (THERE),
//  mCacheArray (),
//  mCacheArrayIsBuilt (false),
  mRootNode (),
  mCount (0) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ SharedStringMapRoot (void) {
//    macroMyDelete (mRootNode) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: SharedStringMapRoot (const SharedStringMapRoot &) = delete ;
  private: SharedStringMapRoot & operator = (const SharedStringMapRoot &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void duplicateTo (OptionalSharedRef <SharedStringMapRoot> & inNewRoot
                            COMMA_UNUSED_LOCATION_ARGS) {
    if (mRootNode.isNotNil ()) {
      inNewRoot->mRootNode = OptionalSharedRef <SharedStringMapNode>::make (mRootNode COMMA_HERE) ;
      inNewRoot->mCount = mCount ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline int32_t count (void) const { return mCount ; }
  public: inline String rootNodeKey (void) const { return mRootNode->mKey ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Get cache array
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public: TC_Array <SharedStringMapNode *> unsecureOrderedPointerArray (void) {
//    if (mCacheArrayIsBuilt) {
//      return mCacheArray ;
//    }else{
//      mCacheArrayIsBuilt = true ;
//      SharedStringMapNode::populateCacheArray (mRootNode, mCacheArray) ;
//      return mCacheArray ;
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Get sorted key array
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: TC_Array <String> sortedKeyArray (void) const {
    TC_Array <String> array ;
    SharedStringMapNode::populateStringArray (mRootNode, array) ;
    return array ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Insertion
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void insertObject (const String & inKey,
                             OptionalSharedRef <SharedStringMapNode> & ioObject
                             COMMA_LOCATION_ARGS) {
    macroUniqueSharedObjectThere (this) ;
//    if (mCacheArrayIsBuilt) {
//      mCacheArrayIsBuilt = false ;
//      mCacheArray.removeAllKeepingCapacity () ;
//    }
    internalRecursiveInsert (mRootNode, inKey, ioObject) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateLeft (OptionalSharedRef <SharedStringMapNode> & ioRootPtr) {
    OptionalSharedRef <SharedStringMapNode> b = ioRootPtr->mSupPtr ;
    ioRootPtr->mSupPtr = b->mInfPtr ;
    b->mInfPtr = ioRootPtr;

    if (b->mBalance >= 0) {
      ioRootPtr->mBalance++ ;
    }else{
      ioRootPtr->mBalance += 1 - b->mBalance ;
    }

    if (ioRootPtr->mBalance > 0) {
      b->mBalance += ioRootPtr->mBalance + 1 ;
    }else{
      b->mBalance++ ;
    }
    ioRootPtr = b ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateRight (OptionalSharedRef <SharedStringMapNode> & ioRootPtr) {
    OptionalSharedRef <SharedStringMapNode> b = ioRootPtr->mInfPtr ;
    ioRootPtr->mInfPtr = b->mSupPtr ;
    b->mSupPtr = ioRootPtr ;

    if (b->mBalance > 0) {
      ioRootPtr->mBalance -= b->mBalance + 1 ;
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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: bool internalRecursiveInsert (OptionalSharedRef <SharedStringMapNode> & ioRootPtr,
                                         const String & inKey,
                                         OptionalSharedRef <SharedStringMapNode> & ioObjectToInsert) {
    bool extension = false ;
    if (ioRootPtr.isNil ()) {
      ioRootPtr = ioObjectToInsert ;
      ioObjectToInsert.setToNil () ;
      mCount += 1 ;
      extension = true ;
    }else{
      const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
      if (comparaison > 0) {
        extension = internalRecursiveInsert (ioRootPtr->mInfPtr, inKey, ioObjectToInsert) ;
        if (extension) {
          ioRootPtr->mBalance += 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance == 2) {
            if (ioRootPtr->mInfPtr->mBalance == -1) {
              rotateLeft (ioRootPtr->mInfPtr) ;
            }
            rotateRight (ioRootPtr) ;
            extension = false ;
          }
        }
      }else if (comparaison < 0) {
        extension = internalRecursiveInsert (ioRootPtr->mSupPtr, inKey, ioObjectToInsert) ;
        if (extension) {
          ioRootPtr->mBalance -= 1 ;
          if (ioRootPtr->mBalance == 0) {
            extension = false ;
          }else if (ioRootPtr->mBalance == -2) {
            if (ioRootPtr->mSupPtr->mBalance == 1) {
              rotateRight (ioRootPtr->mSupPtr) ;
            }
            rotateLeft (ioRootPtr) ;
            extension = false ;
          }
        }
      }else{
        extension = false ; // Found : perform replacement
      }
    }
    return extension ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Removing: return removed object, or nullptr
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <SharedStringMapNode> removeObject (const String & inKey) {
    macroUniqueSharedObject (this) ;
//    if (mCacheArrayIsBuilt) {
//      mCacheArrayIsBuilt = false ;
//      mCacheArray.removeAllKeepingCapacity () ;
//    }
    bool ioBranchHasBeenRemoved ;
    OptionalSharedRef <SharedStringMapNode> removedNode = internalRemoveEntry (inKey, mRootNode, ioBranchHasBeenRemoved) ;
    return removedNode ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void supBranchDecreased (OptionalSharedRef <SharedStringMapNode> & ioRoot,
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

  private: static void infBranchDecreased (OptionalSharedRef <SharedStringMapNode> & ioRoot,
                                           bool & ioBranchHasBeenRemoved) {
    ioRoot->mBalance -- ;
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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void getPreviousElement (OptionalSharedRef <SharedStringMapNode> & ioRoot,
                                           OptionalSharedRef <SharedStringMapNode> & ioElement,
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

  private: OptionalSharedRef <SharedStringMapNode> internalRemoveEntry (const String & inKeyToRemove,
                                              OptionalSharedRef <SharedStringMapNode> & ioRoot,
                                              bool & ioBranchHasBeenRemoved) {
    OptionalSharedRef <SharedStringMapNode> removedNode ;
    if (ioRoot.isNotNil ()) {
      const int32_t comparaison = ioRoot->mKey.compare (inKeyToRemove) ;
      if (comparaison > 0) {
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mInfPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison < 0) {
        removedNode = internalRemoveEntry (inKeyToRemove, ioRoot->mSupPtr, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{ // Found
        removedNode = ioRoot ;
        mCount -= 1 ;
        OptionalSharedRef <SharedStringMapNode> p = ioRoot ;
        if (p->mInfPtr.isNil ()) {
          ioRoot = p->mSupPtr;
          p->mSupPtr.setToNil () ;
          ioBranchHasBeenRemoved = true;
        }else if (p->mSupPtr.isNil ()) {
          ioRoot = p->mInfPtr;
          p->mInfPtr.setToNil () ;
          ioBranchHasBeenRemoved = true;
        }else{
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr.setToNil () ;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr.setToNil () ;
          ioRoot->mBalance = p->mBalance;
          p->mBalance = 0;
          if (ioBranchHasBeenRemoved) {
            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
          }
        }
      }
    }
    return removedNode ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <SharedStringMapNode> nodeForKey (const String & inKey) const {
    OptionalSharedRef <SharedStringMapNode> nodePtr = mRootNode ;
    while (nodePtr.isNotNil ()) {
      const int32_t comparaison = nodePtr->mKey.compare (inKey) ;
      if (comparaison > 0) {
        nodePtr = nodePtr->mInfPtr ;
      }else if (comparaison < 0) {
        nodePtr = nodePtr->mSupPtr ;
      }else{ // Found
        return nodePtr ;
      }
    }
    return OptionalSharedRef <SharedStringMapNode> () ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//MARK:  SharedStringMap
//--------------------------------------------------------------------------------------------------

SharedStringMap::SharedStringMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

void SharedStringMap::drop (void) {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

SharedStringMap::~SharedStringMap (void) {
}

//--------------------------------------------------------------------------------------------------

SharedStringMap::SharedStringMap (const SharedStringMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

SharedStringMap & SharedStringMap::operator = (const SharedStringMap & inSource) {
  mSharedRoot =  inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

SharedStringMap SharedStringMap::build (LOCATION_ARGS) {
  SharedStringMap result ;
  result.mSharedRoot = OptionalSharedRef <SharedStringMapRoot>::make (THERE) ;
//  SharedStringMapRoot * p = nullptr ;
//  macroMyNew (p, SharedStringMapRoot (THERE)) ;
//  macroAssignSharedObject (result.mSharedRoot, p) ;
//  macroDetachSharedObject (p) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Insulate
//--------------------------------------------------------------------------------------------------

void SharedStringMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && !mSharedRoot->isUniquelyReferenced ()) {
    auto p = OptionalSharedRef <SharedStringMapRoot>::make (THERE) ;
    mSharedRoot->duplicateTo (p COMMA_THERE) ;
    mSharedRoot = p ;
//    SharedStringMapRoot * p = nullptr ;
//    macroMyNew (p, SharedStringMapRoot (THERE)) ;
//    mSharedRoot->duplicateTo (p COMMA_THERE) ;
//    macroAssignSharedObject (mSharedRoot, p) ;
//    macroDetachSharedObject (p) ;
  }
}

//--------------------------------------------------------------------------------------------------

//TC_Array <SharedStringMapNode *> SharedStringMap::unsecureOrderedPointerArray (void) const {
//  if (mSharedRoot != nullptr) {
//    return mSharedRoot->unsecureOrderedPointerArray () ;
//  }else{
//    return TC_Array <SharedStringMapNode *> () ;
//  }
//}

//--------------------------------------------------------------------------------------------------

TC_Array <String> SharedStringMap::sortedKeyArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedKeyArray () ;
  }else{
    return TC_Array <String> () ;
  }
}

//--------------------------------------------------------------------------------------------------

void SharedStringMap::insert (OptionalSharedRef <SharedStringMapNode> & ioObject
                              COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil () && ioObject.isNotNil ()) {
    insulate (THERE) ;
    const String key = ioObject->mKey ;
    mSharedRoot->insertObject (key, ioObject COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <SharedStringMapNode> SharedStringMap::removeAndReturnRemovedNode (const String & inKey
                                                                   COMMA_LOCATION_ARGS) {
  OptionalSharedRef <SharedStringMapNode> removedNode ;
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    removedNode = mSharedRoot->removeObject (inKey) ;
  }
  return removedNode ;
}

//--------------------------------------------------------------------------------------------------

String SharedStringMap::rootNodeKey (void) const {
  return mSharedRoot->rootNodeKey () ;
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <SharedStringMapNode> SharedStringMap::nodeForKey (const String & inKey) const {
  OptionalSharedRef <SharedStringMapNode> result ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->nodeForKey (inKey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

int32_t SharedStringMap::count (void) const {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------
//    C O M P A R I S O N
//--------------------------------------------------------------------------------------------------

//ComparisonResult SharedStringMap::objectCompare (const SharedStringMap & inOperand) const {
//  ComparisonResult result = ComparisonResult::invalid ;
//  if (isValid () && inOperand.isValid ()) {
//    const TC_Array <String> array1 = mSharedRoot->cacheArray () ;
//    const TC_Array <String> array2 = inOperand.mSharedRoot->cacheArray () ;
//    if (array1.count () < array2.count ()) {
//      result = ComparisonResult::firstOperandLowerThanSecond ;
//    }else if (array1.count () > array2.count ()) {
//      result = ComparisonResult::firstOperandGreaterThanSecond ;
//    }else{
//      result = ComparisonResult::operandEqual ;
//      int32_t idx = 0 ;
//      while ((idx < array1.count ()) && (result == ComparisonResult::operandEqual)) {
//        const int32_t comp = array1 (idx COMMA_HERE).compare (array2 (idx COMMA_HERE)) ;
//        if (comp < 0) {
//          result = ComparisonResult::firstOperandLowerThanSecond ;
//        }else if (comp > 0) {
//          result = ComparisonResult::firstOperandGreaterThanSecond ;
//        }
//        idx += 1 ;
//      }
//    }
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

