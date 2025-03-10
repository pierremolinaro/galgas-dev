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

GGS_stringset::~GGS_stringset (void) {
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

void GGS_stringset::addAssign_operation (const GGS_string & inKey
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && (inKey.isValid ())) {
    auto newNode = OptionalSharedRef <SharedStringMapNode>::make (inKey.stringValue () COMMA_HERE) ;
    mSharedMap.insert (newNode COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_stringset::setter_removeKey (GGS_string inKey
                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    OptionalSharedRef <SharedStringMapNode> removedNode = mSharedMap.removeAndReturnRemovedNode (inKey.stringValue () COMMA_THERE) ;
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
    const TC_Array <String> array1 = mSharedMap.sortedKeyArray () ;
    const TC_Array <String> array2 = inOperand.mSharedMap.sortedKeyArray () ;
    int32_t idx1 = 0 ;
    int32_t idx2 = 0 ;
    while ((idx1 < array1.count ()) && (idx2 < array2.count ())) {
      const int32_t comparaison = array1 (idx1 COMMA_HERE).compare (array2 (idx2 COMMA_HERE)) ;
      if (comparaison < 0) {
        idx1 += 1 ;
      }else if (comparaison > 0) {
        idx2 += 1 ;
      }else{
        result.addAssign_operation (GGS_string (array1 (idx1 COMMA_HERE)) COMMA_HERE) ;
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
    const TC_Array <String> array2 = inOperand.mSharedMap.sortedKeyArray () ;
    int32_t idx2 = 0 ;
    while (idx2 < array2.count ()) {
      result.addAssign_operation (GGS_string (array2 (idx2 COMMA_HERE)) COMMA_HERE) ;
      idx2 += 1 ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringset::plusAssign_operation (const GGS_stringset inOperand,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    const TC_Array <String> array2 = inOperand.mSharedMap.sortedKeyArray () ;
    int32_t idx2 = 0 ;
    while (idx2 < array2.count ()) {
      addAssign_operation (GGS_string (array2 (idx2 COMMA_HERE)) COMMA_HERE) ;
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
    const TC_Array <String> array2 = inOperand.mSharedMap.sortedKeyArray () ;
    for (int32_t i=0 ; i<array2.count () ; i++) {
      OptionalSharedRef <SharedStringMapNode> removedNode = result.mSharedMap.removeAndReturnRemovedNode (array2 (i COMMA_HERE) COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_stringset::getter_stringList (LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid ()) {
    result = GGS_stringlist::class_func_emptyList (THERE) ;
    const TC_Array <String> array = mSharedMap.sortedKeyArray () ;
    for (int32_t i=0 ; i<array.count () ; i++) {
      result.addAssign_operation (GGS_string (array (i COMMA_HERE)) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_stringset::getter_hasKey (const GGS_string & inKey
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const auto node = mSharedMap.nodeForKey (inKey.stringValue ()) ;
    result = GGS_bool (node.isNotNil ()) ;
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
    const TC_Array <String> array1 = mSharedMap.sortedKeyArray () ;
    const TC_Array <String> array2 = inOperand.mSharedMap.sortedKeyArray () ;
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

void GGS_stringset::enterElement (const GGS_string & inValue,
                                  Compiler *
                                  COMMA_LOCATION_ARGS) {
  addAssign_operation (inValue COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::class_func_setWithString (const GGS_string & inString
                                                       COMMA_LOCATION_ARGS) {
  GGS_stringset result ;
  if (inString.isValid ()) {
    result = class_func_emptySet (THERE) ;
    result.addAssign_operation (inString COMMA_HERE) ;
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
      result.addAssign_operation (enumerator.current_mValue (THERE) COMMA_THERE) ;
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
      result.addAssign_operation (enumerator.current_mValue (THERE).mProperty_string COMMA_THERE) ;
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
