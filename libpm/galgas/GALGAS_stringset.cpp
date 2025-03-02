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
mStringSet (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

void GGS_stringset::drop (void) {
  mStringSet.clear () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset::GGS_stringset (const GGS_stringset & inSource) :
AC_GALGAS_root (),
mStringSet (inSource.mStringSet),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS_stringset & GGS_stringset::operator = (const GGS_stringset & inSource) {
  mStringSet = inSource.mStringSet ;
  mIsValid = inSource.mIsValid ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringset::description (String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<@stringset: ") ;
  if (!mIsValid) {
    ioString.appendCString ("not built") ;
  }else{
    const size_t n = mStringSet.size () ;
    ioString.appendUnsigned (n) ;
    ioString.appendCString ((n > 1) ? " values" : " value") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringset::setter_insert (const GGS_string inKey,
                                   Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && (inKey.isValid ())) {
    mStringSet.insert (inKey.stringValue()) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_stringset::addAssign_operation (const GGS_string & inKey
                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && (inKey.isValid ())) {
    mStringSet.insert (inKey.stringValue()) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_stringset::setter_removeKey (GGS_string inKey
                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    mStringSet.erase (inKey.stringValue ()) ;
  }
}

//--------------------------------------------------------------------------------------------------
//    I N T E R S E C T I O N
//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::operator_and (const GGS_stringset & inOperand
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid () && inOperand.isValid ()) {
    auto iterator1 = mStringSet.begin () ;
    auto iterator2 = inOperand.mStringSet.begin () ;
    while ((iterator1 != mStringSet.end ()) && (iterator2 != inOperand.mStringSet.end ())) {
      if (*iterator1 < *iterator2) {
        iterator1 ++ ;
      }else if (*iterator1 > *iterator2) {
        iterator2 ++ ;
      }else{
        result.mStringSet.insert (*iterator1) ;
        iterator1 ++ ;
        iterator2 ++ ;
      }
    }
    result.mIsValid = true ;
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
    result.mStringSet = mStringSet ;
    for (String s : inOperand.mStringSet) {
      result.mStringSet.insert (s) ;
    }
    result.mIsValid = true ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_stringset::plusAssign_operation (const GGS_stringset inOperand,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (inOperand.isValid ()) {
    for (String s : inOperand.mStringSet) {
      mStringSet.insert (s) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//    D I F F E R E N C E
//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::substract_operation (const GGS_stringset & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid () && inOperand.isValid ()) {
    std::vector <String> r ;
    std::set_difference (
      mStringSet.begin (), mStringSet.end (),
      inOperand.mStringSet.begin (), inOperand.mStringSet.end (),
      std::back_inserter (r)
    ) ;
    for (String s : r) {
      result.mStringSet.insert (s) ;
    }
    result.mIsValid = true ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_stringset::getter_stringList (LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid ()) {
    result = GGS_stringlist::class_func_emptyList (THERE) ;
    for (String item : mStringSet) {
      result.addAssign_operation (GGS_string (item) COMMA_HERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_stringset::getter_hasKey (const GGS_string & inKey
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    auto iterator = mStringSet.find (key) ;
    result = GGS_bool (iterator != mStringSet.end ()) ;
//    result = GGS_bool (mStringSet.contains (key) ) ; // C++20
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_stringset::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mStringSet.size ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_stringset::getter_anyString (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    if (mStringSet.size () == 0) {
      String message = "@stringset anyString: receiver is empty" ;
      inCompiler->onTheFlySemanticError(message COMMA_THERE) ;
     }else{
      auto iterator = mStringSet.begin () ;
      result = GGS_string (*iterator) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark stringset Enumerator
#endif

//--------------------------------------------------------------------------------------------------

UpEnumerator_stringset::UpEnumerator_stringset (const GGS_stringset & inOperand) :
mSet (inOperand.isValid () ? inOperand.mStringSet : std::set <String> ()),
mIterator () {
  mIterator = mSet.begin () ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_stringset::current_key (UNUSED_LOCATION_ARGS) const {
  return GGS_string (*mIterator) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_stringset::current (UNUSED_LOCATION_ARGS) const {
  return GGS_string (*mIterator) ;
}

//--------------------------------------------------------------------------------------------------

DownEnumerator_stringset::DownEnumerator_stringset (const GGS_stringset & inOperand) :
mSet (inOperand.isValid () ? inOperand.mStringSet : std::set <String> ()),
mIterator () {
  mIterator = mSet.rbegin () ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_stringset::current_key (UNUSED_LOCATION_ARGS) const {
  return GGS_string (*mIterator) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_stringset::current (UNUSED_LOCATION_ARGS) const {
  return GGS_string (*mIterator) ;
}

//--------------------------------------------------------------------------------------------------
//    C O M P A R I S O N
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_stringset::objectCompare (const GGS_stringset & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t count1 = mStringSet.size () ;
    const size_t count2 = inOperand.mStringSet.size () ;
    if (count1 < count2) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count1 > count2) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      auto iterator1 = mStringSet.begin () ;
      auto iterator2 = inOperand.mStringSet.begin () ;
      while ((iterator1 != mStringSet.end())
          && (iterator2 != inOperand.mStringSet.end())
          && (result == ComparisonResult::operandEqual)) {
        if (*iterator1 < *iterator2) {
          result = ComparisonResult::firstOperandLowerThanSecond ;
        }else if (*iterator1 > *iterator2) {
          result = ComparisonResult::firstOperandGreaterThanSecond ;
        }
        iterator1 ++ ;
        iterator2 ++ ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Constructors
#endif

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::class_func_emptySet (UNUSED_LOCATION_ARGS) {
  GGS_stringset result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result ;
  result.mIsValid = true ;
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
