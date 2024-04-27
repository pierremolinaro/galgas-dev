//--------------------------------------------------------------------------------------------------
//
//  AC_GALGAS_list : Base class for GALGAS list
//
//  This file is part of libpm library
//
//  Copyright (C) 2008, ..., 2023 Pierre Molinaro.
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
#include "Compiler.h"

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark removeObjectAtIndex
#endif

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_list::removeObjectAtIndex (capCollectionElement & outAttributes,
                                          const uint32_t inRemoveIndex,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  mSharedArray.removeObjectAtIndex (outAttributes, inRemoveIndex, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark removeFirstObject
#endif

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_list::removeFirstObject (capCollectionElement & outAttributes,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  mSharedArray.removeFirstObject (outAttributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark removeLastObject
#endif

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_list::removeLastObject (capCollectionElement & outAttributes,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  mSharedArray.removeLastObject (outAttributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//    AC_GALGAS_list
//--------------------------------------------------------------------------------------------------

AC_GALGAS_list::AC_GALGAS_list (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_list::AC_GALGAS_list (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_root (),
mSharedArray (inSharedArray),
mIsValid (true) {
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_list::~ AC_GALGAS_list (void) {
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_list::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    mSharedArray.description (ioString, inIndentation) ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_list::populateEnumerationArray (capCollectionElementArray & outEnumerationArray) const {
  if (isValid ()) {
    outEnumerationArray = mSharedArray ;
  }
}

//--------------------------------------------------------------------------------------------------

uint32_t AC_GALGAS_list::count () const {
  uint32_t result = 0 ;
  if (isValid ()) {
    result = mSharedArray.count () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint AC_GALGAS_list::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedArray.count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range AC_GALGAS_list::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (GGS_uint (0), GGS_uint (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_list::drop (void) {
  mIsValid = false ;
  mSharedArray.removeAllObjects () ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_list::appendObject (const capCollectionElement & inElementToAdd) {
  mSharedArray.appendObject (inElementToAdd) ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_list::insertObjectAtIndex (const capCollectionElement & inElementToAdd,
                                          const uint32_t inInsertionIndex,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  mSharedArray.insertObjectAtIndex (inElementToAdd, inInsertionIndex, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_list::readFirst (capCollectionElement & outAttributes,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  mSharedArray.readFirstObject (outAttributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_list::readLast (capCollectionElement & outAttributes,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) const {
  mSharedArray.readLastObject (outAttributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_list::subListWithRange (AC_GALGAS_list & outList,
                                       const GGS_range & inRange,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (isValid () && inRange.isValid ()) {
    bool ok = false ;
    mSharedArray.subListWithRange (outList.mSharedArray,
                                   inRange.mProperty_start.uintValue (),
                                   inRange.mProperty_length.uintValue (),
                                   ok,
                                   inCompiler COMMA_THERE) ;
    outList.mIsValid = ok ;
  }else{
    outList.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_list::subListFromIndex (AC_GALGAS_list & outList,
                                       const GGS_uint & inIndex,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (isValid () && inIndex.isValid ()) {
    bool ok = false ;
    mSharedArray.subListFromIndex (outList.mSharedArray, inIndex.uintValue (), ok, inCompiler COMMA_THERE) ;
    outList.mIsValid = ok ;
  }else{
    outList.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_list::subListToIndex (AC_GALGAS_list & outList,
                                     const GGS_uint & inIndex,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  if (isValid () && inIndex.isValid ()) {
    bool ok = false ;
    mSharedArray.subListToIndex (outList.mSharedArray, inIndex.uintValue (), ok, inCompiler COMMA_THERE) ;
    outList.mIsValid = ok ;
  }else{
    outList.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void AC_GALGAS_list::appendList (const AC_GALGAS_list & inList) {
  if (isValid () && inList.isValid ()) {
    mSharedArray.appendObjects (inList.mSharedArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

capCollectionElement AC_GALGAS_list::readObjectAtIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t index = inIndex.uintValue () ;
    if (index < mSharedArray.count ()) {
      result = mSharedArray.objectAtIndex (index COMMA_THERE) ;
    }else{
      String s = "objectAtIndex: index (" ;
      s.appendUnsigned (index) ;
      s.appendCString (") >= length (") ;
      s.appendUnsigned (count ()) ;
      s.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * AC_GALGAS_list::uniquelyReferencedPointerAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * result = nullptr ;
  if (isValid ()) {
    if (inIndex.isValid ()) {
      const uint32_t index = inIndex.uintValue () ;
      if (index < mSharedArray.count ()) {
        result = mSharedArray.uniquelyReferencedPointerAtIndex (index COMMA_THERE) ;
        macroUniqueSharedObject (result) ;
      }else{
        String s = "objectAtIndex: index (" ;
        s.appendUnsigned (index) ;
        s.appendCString (") >= length (") ;
        s.appendUnsigned (count ()) ;
        s.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
      }
    }else{
      drop () ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Object Compare
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult AC_GALGAS_list::objectCompare (const AC_GALGAS_list & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    result = mSharedArray.compareCollectionElementArray (inOperand.mSharedArray) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
