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

SharedStringMapNode::SharedStringMapNode (const String & inKey) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (0),
mKey (inKey) {
}

//--------------------------------------------------------------------------------------------------

SharedStringMapNode::~SharedStringMapNode (void) {
  macroMyDelete (mInfPtr) ;
  macroMyDelete (mSupPtr) ;
}

//--------------------------------------------------------------------------------------------------

SharedStringMapNode::SharedStringMapNode (const SharedStringMapNode * inNodePtr) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (inNodePtr->mBalance),
mKey (inNodePtr->mKey) {
  if (inNodePtr->mInfPtr != nullptr) {
    macroMyNew (mInfPtr, SharedStringMapNode (inNodePtr->mInfPtr))
  }
  if (inNodePtr->mSupPtr != nullptr) {
    macroMyNew (mSupPtr, SharedStringMapNode (inNodePtr->mSupPtr))
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

void SharedStringMapNode::populateStringArray (SharedStringMapNode * inNode,
                                               TC_Array <String> & ioStringArray) {
  if (inNode != nullptr) {
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

  private: TC_Array <SharedStringMapNode *> mCacheArray ;
  private: SharedStringMapNode * mRootNode ;
  private: int32_t mCount ;
  private: bool mCacheArrayIsBuilt ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedStringMapRoot (LOCATION_ARGS) :
  SharedObject (THERE),
  mCacheArray (),
  mRootNode (nullptr),
  mCount (0),
  mCacheArrayIsBuilt (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: ~ SharedStringMapRoot (void) {
    macroMyDelete (mRootNode) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: SharedStringMapRoot (const SharedStringMapRoot &) = delete ;
  private: SharedStringMapRoot & operator = (const SharedStringMapRoot &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void duplicateTo (SharedStringMapRoot * inNewRoot
                            COMMA_UNUSED_LOCATION_ARGS) {
    if (mRootNode != nullptr) {
      macroMyNew (inNewRoot->mRootNode, SharedStringMapNode (mRootNode)) ;
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
                             SharedStringMapNode * & ioObject
                             COMMA_LOCATION_ARGS) {
    macroUniqueSharedObjectThere (this) ;
    if (mCacheArrayIsBuilt) {
      mCacheArrayIsBuilt = false ;
      mCacheArray.removeAllKeepingCapacity () ;
    }
    internalRecursiveInsert (mRootNode, inKey, ioObject) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateLeft (SharedStringMapNode * & ioRootPtr) {
    SharedStringMapNode * b = ioRootPtr->mSupPtr ;
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

  private: static void rotateRight (SharedStringMapNode * & ioRootPtr) {
    SharedStringMapNode * b = ioRootPtr->mInfPtr ;
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

  private: bool internalRecursiveInsert (SharedStringMapNode * & ioRootPtr,
                                         const String & inKey,
                                         SharedStringMapNode * & ioObjectToInsert) {
    bool extension = false ;
    if (ioRootPtr == nullptr) {
      ioRootPtr = ioObjectToInsert ;
      ioObjectToInsert = nullptr ;
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

  public: SharedStringMapNode * removeObject (const String & inKey) {
    macroUniqueSharedObject (this) ;
    if (mCacheArrayIsBuilt) {
      mCacheArrayIsBuilt = false ;
      mCacheArray.removeAllKeepingCapacity () ;
    }
    bool ioBranchHasBeenRemoved ;
    SharedStringMapNode * removedNode = internalRemoveEntry (inKey, mRootNode, ioBranchHasBeenRemoved) ;
    return removedNode ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void supBranchDecreased (SharedStringMapNode * & ioRoot,
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

  private: static void infBranchDecreased (SharedStringMapNode * & ioRoot,
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

  private: static void getPreviousElement (SharedStringMapNode * & ioRoot,
                                           SharedStringMapNode * & ioElement,
                                           bool & ioBranchHasBeenRemoved) {
    if (ioRoot->mSupPtr == nullptr) {
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

  private: SharedStringMapNode * internalRemoveEntry (const String & inKeyToRemove,
                                              SharedStringMapNode * & ioRoot,
                                              bool & ioBranchHasBeenRemoved) {
    SharedStringMapNode * removedNode = nullptr ;
    if (ioRoot != nullptr) {
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
        SharedStringMapNode * p = ioRoot ;
        if (p->mInfPtr == nullptr) {
          ioRoot = p->mSupPtr;
          p->mSupPtr = nullptr;
          ioBranchHasBeenRemoved = true;
        }else if (p->mSupPtr == nullptr) {
          ioRoot = p->mInfPtr;
          p->mInfPtr = nullptr;
          ioBranchHasBeenRemoved = true;
        }else{
          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
          ioRoot->mSupPtr = p->mSupPtr;
          p->mSupPtr = nullptr;
          ioRoot->mInfPtr = p->mInfPtr;
          p->mInfPtr = nullptr;
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

  public: SharedStringMapNode * nodeForKey (const String & inKey) const {
    SharedStringMapNode * nodePtr = mRootNode ;
    while (nodePtr != nullptr) {
      const int32_t comparaison = nodePtr->mKey.compare (inKey) ;
      if (comparaison > 0) {
        nodePtr = nodePtr->mInfPtr ;
      }else if (comparaison < 0) {
        nodePtr = nodePtr->mSupPtr ;
      }else{ // Found
        return nodePtr ;
      }
    }
    return nullptr ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//MARK:  SharedStringMap
//--------------------------------------------------------------------------------------------------

SharedStringMap::SharedStringMap (void) :
mSharedRoot (nullptr) {
}

//--------------------------------------------------------------------------------------------------

void SharedStringMap::drop (void) {
  macroDetachSharedObject (mSharedRoot) ;
}

//--------------------------------------------------------------------------------------------------

SharedStringMap::~ SharedStringMap (void) {
  macroDetachSharedObject (mSharedRoot) ;
}

//--------------------------------------------------------------------------------------------------

SharedStringMap::SharedStringMap (const SharedStringMap & inSource) :
mSharedRoot (nullptr) {
  macroAssignSharedObject (mSharedRoot, inSource.mSharedRoot) ;
}

//--------------------------------------------------------------------------------------------------

SharedStringMap & SharedStringMap::operator = (const SharedStringMap & inSource) {
  macroAssignSharedObject (mSharedRoot, inSource.mSharedRoot) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

SharedStringMap SharedStringMap::build (LOCATION_ARGS) {
  SharedStringMap result ;
  SharedStringMapRoot * p = nullptr ;
  macroMyNew (p, SharedStringMapRoot (THERE)) ;
  macroAssignSharedObject (result.mSharedRoot, p) ;
  macroDetachSharedObject (p) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Insulate
//--------------------------------------------------------------------------------------------------

void SharedStringMap::insulate (LOCATION_ARGS) {
  if ((nullptr != mSharedRoot) && !mSharedRoot->isUniquelyReferenced ()) {
    SharedStringMapRoot * p = nullptr ;
    macroMyNew (p, SharedStringMapRoot (THERE)) ;
    mSharedRoot->duplicateTo (p COMMA_THERE) ;
    macroAssignSharedObject (mSharedRoot, p) ;
    macroDetachSharedObject (p) ;
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
  if (mSharedRoot != nullptr) {
    return mSharedRoot->sortedKeyArray () ;
  }else{
    return TC_Array <String> () ;
  }
}

//--------------------------------------------------------------------------------------------------

void SharedStringMap::insert (SharedStringMapNode * & ioObject
                                     COMMA_LOCATION_ARGS) {
  if ((mSharedRoot != nullptr) && (ioObject != nullptr)) {
    insulate (THERE) ;
    const String key = ioObject->mKey ;
    mSharedRoot->insertObject (key, ioObject COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

SharedStringMapNode * SharedStringMap::remove (const String & inKey
                                                COMMA_LOCATION_ARGS) {
  SharedStringMapNode * removedNode = nullptr ;
  if (mSharedRoot != nullptr) {
    insulate (THERE) ;
    removedNode = mSharedRoot->removeObject (inKey) ;
  }
  return removedNode ;
}

//--------------------------------------------------------------------------------------------------

String SharedStringMap::rootNodeKey (void) const {
  macroValidPointer (mSharedRoot) ;
  return mSharedRoot->rootNodeKey () ;
}

//--------------------------------------------------------------------------------------------------

SharedStringMapNode * SharedStringMap::nodeForKey (const String & inKey) const {
  SharedStringMapNode * result = nullptr ;
  if (mSharedRoot != nullptr) {
    result = mSharedRoot->nodeForKey (inKey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

int32_t SharedStringMap::count (void) const {
  if (mSharedRoot == nullptr) {
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

