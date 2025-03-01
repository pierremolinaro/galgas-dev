//--------------------------------------------------------------------------------------------------
//
//  GGS_stringset
//
//  This file is part of libpm library
//
//  Copyright (C) 2005, ..., 2024 Pierre Molinaro.
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
//   cCollectionElement_stringset
//--------------------------------------------------------------------------------------------------

class cCollectionElement_stringset : public cCollectionElement {
//--- Private member
  protected: GGS_string mProperty_key ;
  public: inline GGS_string attribute_key (void) const { return mProperty_key ; }

//--- Default constructor
  public: cCollectionElement_stringset (const GGS_string & inString
                                         COMMA_LOCATION_ARGS) ;

//--- No copy
  private: cCollectionElement_stringset (const cCollectionElement_stringset &) ;
  private: cCollectionElement_stringset & operator = (const cCollectionElement_stringset &) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_stringset::cCollectionElement_stringset (const GGS_string & inKey
                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mProperty_key (inKey) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_stringset::isValid (void) const {
  return mProperty_key.isValid () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_stringset::compare (const cCollectionElement * inOperand) const {
  const cCollectionElement_stringset * operand = (const cCollectionElement_stringset *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_stringset) ;
  return mProperty_key.objectCompare (operand->mProperty_key) ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_stringset::copy (void) {
  cCollectionElement_stringset * p = nullptr ;
  macroMyNew (p, cCollectionElement_stringset (mProperty_key COMMA_HERE)) ;
  return p ;
}


//--------------------------------------------------------------------------------------------------

void cCollectionElement_stringset::description (String & ioString, const int32_t inIndentation) const {
  mProperty_key.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------
//  GGS_stringset
//--------------------------------------------------------------------------------------------------

GGS_stringset::GGS_stringset (void) :
AC_GALGAS_root (),
mStringSet (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_stringset::~GGS_stringset (void) {
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
    mStringSet.erase (inKey.stringValue()) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark stringset operations
#endif

//--------------------------------------------------------------------------------------------------
//
//    I N T E R S E C T I O N
//
//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_stringset::operator_and (const GGS_stringset & inOperand
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid () && inOperand.isValid ()) {
    for (auto s : mStringSet) {
      auto iterator = inOperand.mStringSet.find (s) ;
      if (iterator != inOperand.mStringSet.end ()) { // C++20
      // if (inOperand.mStringSet.contains (s)) {
        result.mStringSet.insert (s) ;
      }
    }
//    std::set_intersection (
//      mStringSet.begin (), mStringSet.end (),
//      inOperand.mStringSet.begin (), inOperand.mStringSet.end (),
//      std::back_inserter (result.mStringSet)
//    ) ;
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
    for (auto s : inOperand.mStringSet) {
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
  if (isValid () && inOperand.isValid ()) {
    for (auto s : inOperand.mStringSet) {
      mStringSet.insert (s) ;
    }
  }else{
    drop () ;
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

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Getters
#endif

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
  #pragma mark stringset cEnumerator
#endif

//--------------------------------------------------------------------------------------------------

void GGS_stringset::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {
  if (isValid ()) {
    for (String s : mStringSet) {
      GGS_string str (s) ;
      cCollectionElement_stringset * p = nullptr ;
      macroMyNew (p, cCollectionElement_stringset (str COMMA_HERE)) ;
      capCollectionElement object ;
      object.setPointer (p) ;
      macroDetachSharedObject (p) ;
      ioEnumerationArray.appendObject (object) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

cEnumerator_stringset::cEnumerator_stringset (const GGS_stringset & inEnumeratedObject,
                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_stringset::current_key (LOCATION_ARGS) const {
  const cCollectionElement_stringset * p = (const cCollectionElement_stringset *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_stringset) ;
  return p->attribute_key () ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_stringset::current (LOCATION_ARGS) const {
  const cCollectionElement_stringset * p = (const cCollectionElement_stringset *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_stringset) ;
  return p->attribute_key () ;
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
        const String s1 = *iterator1 ;
        const String s2 = *iterator2 ;
        if (s1 < s2) {
          result = ComparisonResult::firstOperandLowerThanSecond ;
        }else if (s1 > s2) {
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
    cEnumerator_stringlist enumerator (inStringList, EnumerationOrder::up) ;
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
    cEnumerator_lstringlist enumerator (inStringList, EnumerationOrder::up) ;
    while (enumerator.hasCurrentObject ()) {
      result.addAssign_operation (enumerator.current_mValue (THERE).mProperty_string COMMA_THERE) ;
      enumerator.gotoNextObject () ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

