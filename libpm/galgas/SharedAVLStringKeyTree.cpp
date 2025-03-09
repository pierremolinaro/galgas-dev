//--------------------------------------------------------------------------------------------------
//
//  SharedAVLStringKeyTree.cpp
//  galgas-ide
//
//  Created by Pierre Molinaro on 08/03/2025.
//
//--------------------------------------------------------------------------------------------------

#include "SharedAVLStringKeyTree.h"

//--------------------------------------------------------------------------------------------------
//MARK:  AVLTreeStringKeyNode
//--------------------------------------------------------------------------------------------------

AVLTreeStringKeyNode::AVLTreeStringKeyNode (const String & inKey) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (0),
mKey (inKey) {
}

//--------------------------------------------------------------------------------------------------

AVLTreeStringKeyNode::~AVLTreeStringKeyNode (void) {
  macroMyDelete (mInfPtr) ;
  macroMyDelete (mSupPtr) ;
}

//--------------------------------------------------------------------------------------------------

AVLTreeStringKeyNode::AVLTreeStringKeyNode (const AVLTreeStringKeyNode * inNodePtr) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (inNodePtr->mBalance),
mKey (inNodePtr->mKey) {
  if (inNodePtr->mInfPtr != nullptr) {
    macroMyNew (mInfPtr, AVLTreeStringKeyNode (inNodePtr->mInfPtr))
  }
  if (inNodePtr->mSupPtr != nullptr) {
    macroMyNew (mSupPtr, AVLTreeStringKeyNode (inNodePtr->mSupPtr))
  }
}

//--------------------------------------------------------------------------------------------------

void AVLTreeStringKeyNode::populateCacheArray (const AVLTreeStringKeyNode * inNode,
                                               TC_Array <String> & ioCacheArray) {
  if (inNode != nullptr) {
    populateCacheArray (inNode->mInfPtr, ioCacheArray) ;
    ioCacheArray.appendObject (inNode->mKey) ;
    populateCacheArray (inNode->mSupPtr, ioCacheArray) ;
  }
}

//--------------------------------------------------------------------------------------------------
//MARK:  SharedAVLTreeRoot
//--------------------------------------------------------------------------------------------------

class SharedAVLTreeRoot final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Private members
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: TC_Array <String> mCacheArray ;
  private: AVLTreeStringKeyNode * mRootNode ;
  private: int32_t mCount ;
  private: bool mCacheArrayIsBuilt ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedAVLTreeRoot (LOCATION_ARGS) :
  SharedObject (THERE),
  mCacheArray (),
  mRootNode (nullptr),
  mCount (0),
  mCacheArrayIsBuilt (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: ~ SharedAVLTreeRoot (void) {
    macroMyDelete (mRootNode) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: SharedAVLTreeRoot (const SharedAVLTreeRoot &) = delete ;
  private: SharedAVLTreeRoot & operator = (const SharedAVLTreeRoot &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void duplicateTo (SharedAVLTreeRoot * inNewRoot
                            COMMA_UNUSED_LOCATION_ARGS) {
    if (mRootNode != nullptr) {
      macroMyNew (inNewRoot->mRootNode, AVLTreeStringKeyNode (mRootNode)) ;
      inNewRoot->mCount = mCount ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline int32_t count (void) const { return mCount ; }
  public: inline String rootNodeKey (void) const { return mRootNode->mKey ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Get chache array
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: TC_Array <String> cacheArray (void) {
    if (mCacheArrayIsBuilt) {
      return mCacheArray ;
    }else{
      mCacheArrayIsBuilt = true ;
      AVLTreeStringKeyNode::populateCacheArray (mRootNode, mCacheArray) ;
      return mCacheArray ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Insertion
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void insertObject (const String & inKey,
                             AVLTreeStringKeyNode * & ioObject
                             COMMA_LOCATION_ARGS) {
    macroUniqueSharedObjectThere (this) ;
    if (mCacheArrayIsBuilt) {
      mCacheArrayIsBuilt = false ;
      mCacheArray.removeAllKeepingCapacity () ;
    }
    internalRecursiveInsert (mRootNode, inKey, ioObject) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateLeft (AVLTreeStringKeyNode * & ioRootPtr) {
    AVLTreeStringKeyNode * b = ioRootPtr->mSupPtr ;
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

  private: static void rotateRight (AVLTreeStringKeyNode * & ioRootPtr) {
    AVLTreeStringKeyNode * b = ioRootPtr->mInfPtr ;
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

  private: bool internalRecursiveInsert (AVLTreeStringKeyNode * & ioRootPtr,
                                         const String & inKey,
                                         AVLTreeStringKeyNode * & ioObjectToInsert) {
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

  public: AVLTreeStringKeyNode * removeObject (const String & inKey) {
    macroUniqueSharedObject (this) ;
    if (mCacheArrayIsBuilt) {
      mCacheArrayIsBuilt = false ;
      mCacheArray.removeAllKeepingCapacity () ;
    }
    bool ioBranchHasBeenRemoved ;
    AVLTreeStringKeyNode * removedNode = internalRemoveEntry (inKey, mRootNode, ioBranchHasBeenRemoved) ;
    return removedNode ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void supBranchDecreased (AVLTreeStringKeyNode * & ioRoot,
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

  private: static void infBranchDecreased (AVLTreeStringKeyNode * & ioRoot,
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

  private: static void getPreviousElement (AVLTreeStringKeyNode * & ioRoot,
                                           AVLTreeStringKeyNode * & ioElement,
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

  private: AVLTreeStringKeyNode * internalRemoveEntry (const String & inKeyToRemove,
                                              AVLTreeStringKeyNode * & ioRoot,
                                              bool & ioBranchHasBeenRemoved) {
    AVLTreeStringKeyNode * removedNode = nullptr ;
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
        AVLTreeStringKeyNode * p = ioRoot ;
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

  public: AVLTreeStringKeyNode * nodeForKey (const String & inKey) const {
    AVLTreeStringKeyNode * nodePtr = mRootNode ;
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
//  SharedAVLStringKeyTree
//--------------------------------------------------------------------------------------------------

SharedAVLStringKeyTree::SharedAVLStringKeyTree (void) :
mSharedRoot (nullptr) {
}

//--------------------------------------------------------------------------------------------------

void SharedAVLStringKeyTree::drop (void) {
  macroDetachSharedObject (mSharedRoot) ;
}

//--------------------------------------------------------------------------------------------------

SharedAVLStringKeyTree::~ SharedAVLStringKeyTree (void) {
  macroDetachSharedObject (mSharedRoot) ;
}

//--------------------------------------------------------------------------------------------------

SharedAVLStringKeyTree::SharedAVLStringKeyTree (const SharedAVLStringKeyTree & inSource) :
mSharedRoot (nullptr) {
  macroAssignSharedObject (mSharedRoot, inSource.mSharedRoot) ;
}

//--------------------------------------------------------------------------------------------------

SharedAVLStringKeyTree & SharedAVLStringKeyTree::operator = (const SharedAVLStringKeyTree & inSource) {
  macroAssignSharedObject (mSharedRoot, inSource.mSharedRoot) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------
//MARK: Build
//--------------------------------------------------------------------------------------------------

SharedAVLStringKeyTree SharedAVLStringKeyTree::build (LOCATION_ARGS) {
  SharedAVLStringKeyTree result ;
  macroMyNew (result.mSharedRoot, SharedAVLTreeRoot (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Insulate
//--------------------------------------------------------------------------------------------------

void SharedAVLStringKeyTree::insulate (LOCATION_ARGS) {
  if ((nullptr != mSharedRoot) && !mSharedRoot->isUniquelyReferenced ()) {
    SharedAVLTreeRoot * p = nullptr ;
    macroMyNew (p, SharedAVLTreeRoot (THERE)) ;
    mSharedRoot->duplicateTo (p COMMA_THERE) ;
    macroAssignSharedObject (mSharedRoot, p) ;
    macroDetachSharedObject (p) ;
  }
}

//--------------------------------------------------------------------------------------------------

void SharedAVLStringKeyTree::insert (const String & inKey,
                            AVLTreeStringKeyNode * & ioObject
                            COMMA_LOCATION_ARGS) {
  if (mSharedRoot != nullptr) {
    insulate (THERE) ;
    mSharedRoot->insertObject (inKey, ioObject COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

AVLTreeStringKeyNode * SharedAVLStringKeyTree::remove (const String & inKey
                                     COMMA_LOCATION_ARGS) {
  AVLTreeStringKeyNode * removedNode = nullptr ;
  if (mSharedRoot != nullptr) {
    insulate (THERE) ;
    removedNode = mSharedRoot->removeObject (inKey) ;
  }
  return removedNode ;
}

//--------------------------------------------------------------------------------------------------

//GGS_stringlist SharedAVLStringKeyTree::getter_stringList (LOCATION_ARGS) const {
//  GGS_stringlist result ;
//  if (isValid ()) {
//    result = GGS_stringlist::class_func_emptyList (THERE) ;
//    const TC_Array <String> array = mSharedRoot->cacheArray () ;
//    for (int32_t i=0 ; i<array.count () ; i++) {
//      result.addAssign_operation (GGS_string (array (i COMMA_HERE)) COMMA_HERE) ;
//    }
//  }
//  return result ;
//}

//--------------------------------------------------------------------------------------------------

AVLTreeStringKeyNode * SharedAVLStringKeyTree::nodeForKey (const String & inKey) const {
  AVLTreeStringKeyNode * result = nullptr ;
  if (mSharedRoot != nullptr) {
    result = mSharedRoot->nodeForKey (inKey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

int32_t SharedAVLStringKeyTree::count (void) const {
  if (mSharedRoot == nullptr) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------
//    C O M P A R I S O N
//--------------------------------------------------------------------------------------------------

//ComparisonResult SharedAVLStringKeyTree::objectCompare (const SharedAVLStringKeyTree & inOperand) const {
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

