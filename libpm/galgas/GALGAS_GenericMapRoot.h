//--------------------------------------------------------------------------------------------------
//
//  GenericMapRoot.h
//  galgas-ide
//
//  Created by Pierre Molinaro on 1/07/2025, ..., 2025 Pierre Molinaro.
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

#include "String-class.h"
#include "SharedGenericPtrWithValueSemantics.h"

//--------------------------------------------------------------------------------------------------
//  Predeclarations
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------
//  GenericMapNode
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapNode final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <GenericMapNode <INFO>> mInfPtr ;
  private: OptionalSharedRef <GenericMapNode <INFO>> mSupPtr ;
  public:  SharedGenericPtrWithValueSemantics <INFO> mSharedInfo ;
  private: String mKey ;
  private: int32_t mBalance ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GenericMapNode (const String & inKey,
                          const INFO & inInfo
                          COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (),
  mKey (inKey),
  mBalance (0) {
    mSharedInfo = SharedGenericPtrWithValueSemantics <INFO>::make (inInfo COMMA_THERE) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: ~GenericMapNode (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GenericMapNode (const OptionalSharedRef <GenericMapNode <INFO>> & inNodePtr
                          COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mInfPtr (),
  mSupPtr (),
  mSharedInfo (inNodePtr->mSharedInfo),
  mKey (inNodePtr->mKey),
  mBalance (inNodePtr->mBalance) {
    if (inNodePtr->mInfPtr.isNotNil ()) {
      mInfPtr = OptionalSharedRef <GenericMapNode <INFO>>::make (inNodePtr->mInfPtr COMMA_THERE) ;
    }
    if (inNodePtr->mSupPtr.isNotNil ()) {
      mSupPtr = OptionalSharedRef <GenericMapNode <INFO>>::make (inNodePtr->mSupPtr COMMA_THERE) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: GenericMapNode (const GenericMapNode &) = delete ;
  private: GenericMapNode & operator = (const GenericMapNode &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateInfoArray (const OptionalSharedRef <GenericMapNode> & inNode,
                                          GenericArray <SharedGenericPtrWithValueSemantics <INFO>> & ioNodeArray) {
    if (inNode.isNotNil ()) {
      populateInfoArray (inNode->mInfPtr, ioNodeArray) ;
      ioNodeArray.appendObject (inNode->mSharedInfo) ;
      populateInfoArray (inNode->mSupPtr, ioNodeArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeyList (const OptionalSharedRef <GenericMapNode> & inNode,
                                        GGS_lstringlist & ioList) {
    if (inNode.isNotNil ()) {
      populateKeyList (inNode->mInfPtr, ioList) ;
      ioList.addAssignOperation (inNode->mSharedInfo->mProperty_lkey COMMA_HERE) ;
      populateKeyList (inNode->mSupPtr, ioList) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateKeySetFromNode (const OptionalSharedRef <GenericMapNode <INFO>> & inNode,
                                               Compiler * inCompiler,
                                               GGS_stringset & ioSet) {
    if (inNode.isNotNil ()) {
      populateKeySetFromNode (inNode->mInfPtr, inCompiler, ioSet) ;
      ioSet.setter_insert (inNode->mSharedInfo->mProperty_lkey.mProperty_string, inCompiler COMMA_HERE) ;
      populateKeySetFromNode (inNode->mSupPtr, inCompiler, ioSet) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class GenericMapRoot <INFO> ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//MARK:  GenericMapRoot
//--------------------------------------------------------------------------------------------------

template <typename INFO> class GenericMapRoot final : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Private members
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <GenericMapRoot <INFO>> mOverriddenRoot ;
  private: OptionalSharedRef <GenericMapNode <INFO>> mRootNode ;
  private: GenericArray <SharedGenericPtrWithValueSemantics <INFO>> mCacheSortedArray ;
  private: int32_t mCount ;
  private: bool mCacheSortedArrayIsValid ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GenericMapRoot (LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GenericMapRoot (const OptionalSharedRef <GenericMapRoot <INFO>> & inOverridenMapRoot
                          COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (inOverridenMapRoot),
  mRootNode (),
  mCacheSortedArray (),
  mCount (0),
  mCacheSortedArrayIsValid (false) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Constructor for duplication
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GenericMapRoot (const GenericMapRoot <INFO> * inSourcePtr
                          COMMA_LOCATION_ARGS) :
  SharedObject (THERE),
  mOverriddenRoot (inSourcePtr->mOverriddenRoot),
  mRootNode (),
  mCacheSortedArray (), // Do not copy cache array
  mCount (inSourcePtr->mCount),
  mCacheSortedArrayIsValid (false) {
    if (inSourcePtr->mRootNode.isNotNil ()) {
      mRootNode = OptionalSharedRef <GenericMapNode <INFO>>::make (inSourcePtr->mRootNode COMMA_THERE) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ GenericMapRoot (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: GenericMapRoot (const GenericMapRoot &) = delete ;
  private: GenericMapRoot & operator = (const GenericMapRoot &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline int32_t count (void) const { return mCount ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline OptionalSharedRef <GenericMapRoot <INFO>> overriddenRoot (void) const {
    return mOverriddenRoot ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  protected: void invalidateCacheSortedArray (void) {
    if (mCacheSortedArrayIsValid) {
      mCacheSortedArrayIsValid = false ;
      mCacheSortedArray.removeAllKeepingCapacity () ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Get sorted key array
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GenericArray <SharedGenericPtrWithValueSemantics <INFO>> sortedInfoArray (void) {
    if (mCacheSortedArrayIsValid) {
      return mCacheSortedArray ;
    }else{
      GenericArray <SharedGenericPtrWithValueSemantics <INFO>> array (mCount COMMA_HERE) ;
      GenericMapNode <INFO>::populateInfoArray (mRootNode, array) ;
      mCacheSortedArray = array ;
      mCacheSortedArrayIsValid = true ;
      return array ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void populateKeyList (GGS_lstringlist & ioList) const {
    GenericMapNode <INFO>::populateKeyList (mRootNode, ioList) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void populateKeySet (GGS_stringset & ioSet,
                                  Compiler * inCompiler) const {
    GenericMapNode <INFO>::populateKeySetFromNode (mRootNode, inCompiler, ioSet) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Search
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <GenericMapNode <INFO>> searchNode (const String & inKey) {
    macroUniqueSharedObject (this) ;
    invalidateCacheSortedArray () ;
    OptionalSharedRef <GenericMapNode <INFO>> result = internalSearchNode (inKey, mRootNode) ;
    if (result.isNil () && mOverriddenRoot.isNotNil ()) {
      mOverriddenRoot.insulate (HERE) ;
      result = mOverriddenRoot->searchNode (inKey) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedGenericPtrWithValueSemantics <INFO> infoForKey (const String & inKey) const {
    SharedGenericPtrWithValueSemantics <INFO> result ;
    OptionalSharedRef <GenericMapNode <INFO>> node = internalSearchNode (inKey, mRootNode) ;
    if (node.isNotNil ()) {
      result = node->mSharedInfo ;
    }else if (mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->infoForKey (inKey) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   levels
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: uint32_t levels (void) const {
    uint32_t result = 1 ;
    if (mOverriddenRoot.isNotNil ()) {
      result += mOverriddenRoot->levels () ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Insert
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void insertOrReplaceInfo (const INFO & inInfo,
                                    const bool inAllowReplacing,
                                    OptionalSharedRef <GenericMapNode <INFO>> & outExistingNode
                                    COMMA_LOCATION_ARGS) {
    macroUniqueSharedObjectThere (this) ;
    invalidateCacheSortedArray () ;
    const String key = inInfo.mProperty_lkey.mProperty_string.stringValue () ;
    internalRecursiveInsert (mRootNode, key, inInfo, inAllowReplacing, outExistingNode) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateLeft (OptionalSharedRef <GenericMapNode <INFO>> & ioRootPtr) {
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

  private: static void rotateRight (OptionalSharedRef <GenericMapNode <INFO>> & ioRootPtr) {
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

  private: bool internalRecursiveInsert (OptionalSharedRef <GenericMapNode <INFO>> & ioRootPtr,
                                         const String & inKey,
                                         const INFO & inInfo,
                                         const bool inAllowReplacing,
                                         OptionalSharedRef <GenericMapNode <INFO>> & outExistingNode) {
    bool extension = false ;
    if (ioRootPtr.isNil ()) {
      ioRootPtr = OptionalSharedRef <GenericMapNode <INFO>>::make (inKey, inInfo COMMA_HERE) ;
      mCount += 1 ;
      extension = true ;
    }else{
      const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
      if (comparaison > 0) {
        extension = internalRecursiveInsert (ioRootPtr->mInfPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
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
      }else if (comparaison < 0) {
        extension = internalRecursiveInsert (ioRootPtr->mSupPtr, inKey, inInfo, inAllowReplacing, outExistingNode) ;
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
      }else{
        extension = false ;
        outExistingNode = ioRootPtr ;
        if (inAllowReplacing) {
          ioRootPtr->mSharedInfo = SharedGenericPtrWithValueSemantics <INFO>::make (inInfo COMMA_HERE) ;
        }
      }
    }
    return extension ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Removing: return removed object, or nil
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedGenericPtrWithValueSemantics <INFO> removeAndReturnRemovedInfo (const String & inKey) {
    macroUniqueSharedObject (this) ;
    invalidateCacheSortedArray () ;
    bool ioBranchHasBeenRemoved ;
    const auto removedEntry = internalRemoveEntry (inKey, mRootNode, ioBranchHasBeenRemoved) ;
    SharedGenericPtrWithValueSemantics <INFO> result ;
    if (removedEntry.isNotNil ()) {
      result = removedEntry->mSharedInfo ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void supBranchDecreased (OptionalSharedRef <GenericMapNode <INFO>> & ioRoot,
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

  private: static void infBranchDecreased (OptionalSharedRef <GenericMapNode <INFO>> & ioRoot,
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

  private: static void getPreviousElement (OptionalSharedRef <GenericMapNode <INFO>> & ioRoot,
                                           OptionalSharedRef <GenericMapNode <INFO>> & ioElement,
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

  private: OptionalSharedRef <GenericMapNode <INFO>> internalRemoveEntry (const String & inKeyToRemove,
                                     OptionalSharedRef <GenericMapNode <INFO>> & ioRoot,
                                     bool & ioBranchHasBeenRemoved) {
    OptionalSharedRef <GenericMapNode <INFO>> removedNode ;
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
      }else{
        mCount -= 1 ;
        removedNode.setToNil () ;
        if (ioRoot->mInfPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mSupPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else if (ioRoot->mSupPtr.isNil ()) {
          removedNode.rotateOwnershipLeft (ioRoot, ioRoot->mInfPtr) ;
          ioBranchHasBeenRemoved = true ;
        }else{
          removedNode = ioRoot ;
          OptionalSharedRef <GenericMapNode <INFO>> p = ioRoot ;
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
      }
    }
    return removedNode ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool hasKey (const String & inKey, const uint32_t inLevel) const {
    bool result = false ;
    if (inLevel == 0) {
     const OptionalSharedRef <GenericMapNode <INFO>> node = internalSearchNode (inKey, mRootNode) ;
     result = node.isNotNil () ;
    }else if (mOverriddenRoot.isNotNil ()) {
      result = mOverriddenRoot->hasKey (inKey, inLevel - 1) ;
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static OptionalSharedRef <GenericMapNode <INFO>>
  internalSearchNode (const String & inKey,
                      const OptionalSharedRef <GenericMapNode <INFO>> & inNodePtr) {
    OptionalSharedRef <GenericMapNode <INFO>> result ;
    OptionalSharedRef <GenericMapNode <INFO>> currentNode = inNodePtr ;
    while (result.isNil () && currentNode.isNotNil ()) {
      const int32_t comparaison = currentNode->mKey.compare (inKey) ;
      if (comparaison > 0) {
        currentNode = currentNode->mInfPtr ;
      }else if (comparaison < 0) {
        currentNode = currentNode->mSupPtr ;
      }else{ // Found
        result = currentNode ;
      }
    }
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void findNearestKey (const String & inKey,
                               GenericUniqueArray <String> & outNearestKeyArray) const {
    uint32_t bestDistance = UINT32_MAX ;
    recursiveFindNearestKey (inKey, mRootNode, bestDistance, outNearestKeyArray) ;
    if (mOverriddenRoot.isNotNil ()) {
      recursiveFindNearestKey (inKey, mOverriddenRoot->mRootNode, bestDistance, outNearestKeyArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void recursiveFindNearestKey (const String & inKey,
                                                const OptionalSharedRef <GenericMapNode <INFO>> & inCurrentNode,
                                                uint32_t & ioBestDistance,
                                                GenericUniqueArray <String> & ioNearestKeyArray) {
    if (inCurrentNode.isNotNil ()) {
      const uint32_t distance = inCurrentNode->mKey.LevenshteinDistanceFromString (inKey) ;
      if (distance < ioBestDistance) {
        ioBestDistance = distance ;
        ioNearestKeyArray.removeAllKeepingCapacity () ;
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }else if (ioBestDistance == distance) {
        ioNearestKeyArray.appendObject (inCurrentNode->mKey) ;
      }
      recursiveFindNearestKey (inKey, inCurrentNode->mInfPtr, ioBestDistance, ioNearestKeyArray) ;
      recursiveFindNearestKey (inKey, inCurrentNode->mSupPtr, ioBestDistance, ioNearestKeyArray) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
