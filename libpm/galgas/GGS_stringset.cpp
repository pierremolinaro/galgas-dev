//--------------------------------------------------------------------------------------------------
//
//  GGS_stringset
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

#include "all-predefined-types.h"
#include "MF_MemoryControl.h"
#include "cCollectionElement.h"
#include "Compiler.h"

//--------------------------------------------------------------------------------------------------
//  GGS_stringset
//--------------------------------------------------------------------------------------------------

GGS_stringset::GGS_stringset (void) :
AC_GALGAS_root (),
mSharedMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_stringset::GGS_stringset (const GGS_stringset & inSource) :
AC_GALGAS_root (),
mSharedMap (inSource.mSharedMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_stringset & GGS_stringset::operator = (const GGS_stringset & inSource) {
  mSharedMap = inSource.mSharedMap ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringset::description (String & ioString,
                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@stringset: ") ;
  if (!mSharedMap.isValid ()) {
    ioString.appendCString ("not built") ;
  }else{
    const int32_t n = mSharedMap.count () ;
    ioString.appendSigned (n) ;
    ioString.appendCString ((n > 1) ? " values" : " value") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringset::setter_insert (const GGS_string inKey,
                                   Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && (inKey.isValid ())) {
    auto newNode = OptionalSharedRef <SharedStringMapNode>::make (inKey.stringValue () COMMA_HERE) ;
    mSharedMap.insert (newNode COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_stringset::addAssignOperation (const GGS_stringset & inOperand
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && (inOperand.isValid ())) {
    const GenericArray <String> array2 = inOperand.mSharedMap.sortedKeyArray () ;
    int32_t idx2 = 0 ;
    while (idx2 < array2.count ()) {
      plusPlusAssignOperation (GGS_string (array2 (idx2 COMMA_THERE)) COMMA_THERE) ;
      idx2 += 1 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_stringset::setter_removeKey (GGS_string inKey
                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    OptionalSharedRef <SharedStringMapNode> removedNode ;
    mSharedMap.removeAndReturnRemovedNode (inKey.stringValue (), removedNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//    I N T E R S E C T I O N
//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::operator_and (const GGS_stringset & inOperand
                                           COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_stringset::class_func_emptySet (THERE) ;
    const GenericArray <String> array1 = mSharedMap.sortedKeyArray () ;
    const GenericArray <String> array2 = inOperand.mSharedMap.sortedKeyArray () ;
    int32_t idx1 = 0 ;
    int32_t idx2 = 0 ;
    while ((idx1 < array1.count ()) && (idx2 < array2.count ())) {
      const int32_t comparaison = array1 (idx1 COMMA_HERE).compare (array2 (idx2 COMMA_HERE)) ;
      if (comparaison < 0) {
        idx1 += 1 ;
      }else if (comparaison > 0) {
        idx2 += 1 ;
      }else{
        result.plusPlusAssignOperation (GGS_string (array1 (idx1 COMMA_HERE)) COMMA_HERE) ;
        idx1 += 1 ;
        idx2 += 1 ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//    U N I O N
//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::operator_or (const GGS_stringset & inOperand
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    const GenericArray <String> array2 = inOperand.mSharedMap.sortedKeyArray () ;
    int32_t idx2 = 0 ;
    while (idx2 < array2.count ()) {
      result.plusPlusAssignOperation (GGS_string (array2 (idx2 COMMA_HERE)) COMMA_HERE) ;
      idx2 += 1 ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringset::plusAssignOperation (const GGS_stringset inOperand,
                                         Compiler *
                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const GenericArray <String> array2 = inOperand.mSharedMap.sortedKeyArray () ;
    int32_t idx2 = 0 ;
    while (idx2 < array2.count ()) {
      plusPlusAssignOperation (GGS_string (array2 (idx2 COMMA_HERE)) COMMA_HERE) ;
      idx2 += 1 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//    D I F F E R E N C E
//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::substract_operation (const GGS_stringset & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    const GenericArray <String> array2 = inOperand.mSharedMap.sortedKeyArray () ;
    for (int32_t i=0 ; i<array2.count () ; i++) {
      OptionalSharedRef <SharedStringMapNode> removedNode ;
      result.mSharedMap.removeAndReturnRemovedNode (array2 (i COMMA_HERE), removedNode COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_stringset::getter_stringList (LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid ()) {
    result = GGS_stringlist::init (nullptr COMMA_THERE) ;
    const GenericArray <String> array = mSharedMap.sortedKeyArray () ;
    for (int32_t i=0 ; i<array.count () ; i++) {
      result.plusPlusAssignOperation (GGS_string (array (i COMMA_HERE)) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_stringset::getter_hasKey (const GGS_string & inKey
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedMap.hasKey (inKey.stringValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_stringset::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedMap.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_stringset::getter_anyString (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    if (mSharedMap.count () == 0) {
      String message = "@stringset anyString: receiver is empty" ;
      inCompiler->onTheFlySemanticError(message COMMA_THERE) ;
    }else{
      result = GGS_string (mSharedMap.rootNodeKey ()) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//    C O M P A R I S O N
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_stringset::objectCompare (const GGS_stringset & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const GenericArray <String> array1 = mSharedMap.sortedKeyArray () ;
    const GenericArray <String> array2 = inOperand.mSharedMap.sortedKeyArray () ;
    if (array1.count () < array2.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (array1.count () > array2.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      int32_t idx = 0 ;
      while ((idx < array1.count ()) && (result == ComparisonResult::operandEqual)) {
        const int32_t comp = array1 (idx COMMA_HERE).compare (array2 (idx COMMA_HERE)) ;
        if (comp < 0) {
          result = ComparisonResult::firstOperandLowerThanSecond ;
        }else if (comp > 0) {
          result = ComparisonResult::firstOperandGreaterThanSecond ;
        }
        idx += 1 ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//MARK: Constructors
//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::class_func_emptySet (LOCATION_ARGS) {
  GGS_stringset result ;
  result.mSharedMap = SharedStringMap::build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_stringset result ;
  result.mSharedMap = SharedStringMap::build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringset::plusPlusAssignOperation (const GGS_string & inValue
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && (inValue.isValid ())) {
    auto newNode = OptionalSharedRef <SharedStringMapNode>::make (inValue.stringValue () COMMA_HERE) ;
    mSharedMap.insert (newNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::class_func_setWithString (const GGS_string & inString
                                                       COMMA_LOCATION_ARGS) {
  GGS_stringset result ;
  if (inString.isValid ()) {
    result = class_func_emptySet (THERE) ;
    result.plusPlusAssignOperation (inString COMMA_HERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::class_func_setWithStringList (const GGS_stringlist & inStringList
                                                           COMMA_LOCATION_ARGS) {
  GGS_stringset result ;
  if (inStringList.isValid ()) {
    result = class_func_emptySet (THERE) ;
    UpEnumerator_stringlist enumerator (inStringList) ;
    while (enumerator.hasCurrentObject ()) {
      result.plusPlusAssignOperation (enumerator.current_mValue (THERE) COMMA_THERE) ;
      enumerator.gotoNextObject () ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::class_func_setWithLStringList (const GGS_lstringlist & inStringList
                                                            COMMA_LOCATION_ARGS) {
  GGS_stringset result ;
  if (inStringList.isValid ()) {
    result = class_func_emptySet (THERE) ;
    UpEnumerator_lstringlist enumerator (inStringList) ;
    while (enumerator.hasCurrentObject ()) {
      result.plusPlusAssignOperation (enumerator.current_mValue (THERE).mProperty_string COMMA_THERE) ;
      enumerator.gotoNextObject () ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

UpEnumerator_stringset::UpEnumerator_stringset (const GGS_stringset & inOperand) :
mStringArray (inOperand.mSharedMap.sortedKeyArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_stringset::current_key (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mStringArray (mIndex COMMA_HERE)) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_stringset::current (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mStringArray (mIndex COMMA_HERE)) ;
}

//--------------------------------------------------------------------------------------------------

DownEnumerator_stringset::DownEnumerator_stringset (const GGS_stringset & inOperand) :
mStringArray (inOperand.mSharedMap.sortedKeyArray ()),
mIndex (0) {
  mIndex = mStringArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_stringset::current_key (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mStringArray (mIndex COMMA_HERE)) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_stringset::current (UNUSED_LOCATION_ARGS) const {
  return GGS_string (mStringArray (mIndex COMMA_HERE)) ;
}

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

void SharedStringMapNode::populateStringArray (const OptionalSharedRef <SharedStringMapNode> & inNode,
                                               GenericArray <String> & ioStringArray) {
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

  private: OptionalSharedRef <SharedStringMapNode> mRootNode ;
  private: int32_t mCount ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedStringMapRoot (LOCATION_ARGS) :
  SharedObject (THERE),
  mRootNode (),
  mCount (0) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ SharedStringMapRoot (void) {
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
  // Get sorted key array
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: GenericArray <String> sortedKeyArray (void) const {
    GenericArray <String> array ;
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
    internalRecursiveInsert (mRootNode, inKey, ioObject) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void rotateLeft (OptionalSharedRef <SharedStringMapNode> & ioRootPtr) {
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

  private: static void rotateRight (OptionalSharedRef <SharedStringMapNode> & ioRootPtr) {
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

  private: bool internalRecursiveInsert (OptionalSharedRef <SharedStringMapNode> & ioRootPtr,
                                         const String & inKey,
                                         OptionalSharedRef <SharedStringMapNode> & ioObjectToInsert) {
    bool extension = false ;
    if (ioRootPtr.isNil ()) {
      ioRootPtr.swap (ioObjectToInsert) ;
      ioRootPtr->mInfPtr.setToNil () ;
      ioRootPtr->mSupPtr.setToNil () ;
      ioRootPtr->mBalance = 0 ;
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
          }else if (ioRootPtr->mBalance > 1) {
            if (ioRootPtr->mInfPtr->mBalance < 0) {
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
          }else if (ioRootPtr->mBalance < -1) {
            if (ioRootPtr->mSupPtr->mBalance > 0) {
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

  public: void removeObject (const String & inKey,
                             OptionalSharedRef <SharedStringMapNode> & outRemovedNode) {
    macroUniqueSharedObject (this) ;
    bool ioBranchHasBeenRemoved ;
    internalRemoveEntry (inKey, mRootNode, outRemovedNode, ioBranchHasBeenRemoved) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static inline void supBranchDecreased (OptionalSharedRef <SharedStringMapNode> & ioRoot,
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

  private: static inline void infBranchDecreased (OptionalSharedRef <SharedStringMapNode> & ioRoot,
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

  private: void internalRemoveEntry (const String & inKeyToRemove,
                                     OptionalSharedRef <SharedStringMapNode> & ioRoot,
                                     OptionalSharedRef <SharedStringMapNode> & outRemovedNode,
                                     bool & ioBranchHasBeenRemoved) {
    if (ioRoot.isNotNil ()) {
      const int32_t comparaison = ioRoot->mKey.compare (inKeyToRemove) ;
      if (comparaison > 0) {
        internalRemoveEntry (inKeyToRemove, ioRoot->mInfPtr, outRemovedNode, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }else if (comparaison < 0) {
        internalRemoveEntry (inKeyToRemove, ioRoot->mSupPtr, outRemovedNode, ioBranchHasBeenRemoved);
        if (ioBranchHasBeenRemoved) {
          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
        }
      }else{ // Found
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
          OptionalSharedRef <SharedStringMapNode> p = ioRoot ;
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
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool hasKey (const String & inKey) const {
    return recursiveSearch (mRootNode, inKey) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: bool recursiveSearch (const OptionalSharedRef <SharedStringMapNode> & inNodePtr,
                                const String & inKey) const {
    bool result = false ;
    if (inNodePtr.isNotNil ()) {
      const int32_t comparaison = inNodePtr->mKey.compare (inKey) ;
      if (comparaison > 0) {
        result = recursiveSearch (inNodePtr->mInfPtr, inKey) ;
      }else if (comparaison < 0) {
        result = recursiveSearch (inNodePtr->mSupPtr, inKey) ;
      }else{ // Found
        result = true ;
      }
    }
    return result ;
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
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <String> SharedStringMap::sortedKeyArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedKeyArray () ;
  }else{
    return GenericArray <String> () ;
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

void SharedStringMap::removeAndReturnRemovedNode (const String & inKey,
                                         OptionalSharedRef <SharedStringMapNode> & outRemovedNode
                                         COMMA_LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    insulate (THERE) ;
    mSharedRoot->removeObject (inKey, outRemovedNode) ;
  }
}

//--------------------------------------------------------------------------------------------------

String SharedStringMap::rootNodeKey (void) const {
  return mSharedRoot->rootNodeKey () ;
}

//--------------------------------------------------------------------------------------------------

bool SharedStringMap::hasKey (const String & inKey) const {
  bool result = false ;
  if (mSharedRoot.isNotNil ()) {
    result = mSharedRoot->hasKey (inKey) ;
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
//--------------------------------------------------------------------------------------------------
