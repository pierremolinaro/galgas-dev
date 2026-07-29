//--------------------------------------------------------------------------------------------------
//
//  CollectionElementArray                                                                    
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2010, ..., 2026 Pierre Molinaro.
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

#include "CollectionElement.h"

//--------------------------------------------------------------------------------------------------

class Compiler ;

//--------------------------------------------------------------------------------------------------

class CollectionElementArray final {
//--- Default constructor
  public: CollectionElementArray (void) ;

//--- Default constructor
  public: CollectionElementArray (const uint32_t inCapacity) ;

//--- Virtual destructor
  public: ~ CollectionElementArray (void) ;

//--- Handle copy
  public: CollectionElementArray (const CollectionElementArray & inSource) ;
  public: CollectionElementArray & operator = (const CollectionElementArray & inSource) ;

//--- Set capacity
  public: void setCapacity (const uint32_t inNewCapacity) ;

//--- Append Object
  public: void appendObject (const CollectionElement & inObject) ;

  public: void insertObjectAtIndex (const CollectionElement & inObject,
                                     const uint32_t inInsertionIndex,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void removeObjectAtIndex (CollectionElement & outObject,
                                     const uint32_t inInsertionIndex,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void removeFirstObject (CollectionElement & outObject,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void readFirstObject (CollectionElement & outObject,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

  public: void removeLastObject (CollectionElement & outObject,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void readLastObject (CollectionElement & outObject,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

  public: void replaceObjectAtIndex (const CollectionElement & inObject,
                                      const uint32_t inIndex
                                      COMMA_LOCATION_ARGS) ;

  public: void appendObjects (const CollectionElementArray inObjects) ; // Passing using copy constructor

//--- Get object
  public: CollectionElement objectAtIndex (const uint32_t inIndex COMMA_LOCATION_ARGS) const ;

//--- Get object pointer for writing (perform implicitly an "insulate" action)
  public: CollectionElementPtr * uniquelyReferencedPointerAtIndex (const uint32_t inIndex
                                                                  COMMA_LOCATION_ARGS) ;

//--- Get object pointer for reading
  public: const CollectionElementPtr * pointerAtIndexForReadAccess (const uint32_t inIndex
                                                                   COMMA_LOCATION_ARGS) const ;

//--- Get count
  public: uint32_t count (void) const ;

//--- Get count
  public: uint32_t capacity (void) const ;

//--- Remove an object
  public: void removeObjectAtIndex (const uint32_t inIndex) ;

//--- Prepend object (insert them from index 0)
  public: void predendObject (const CollectionElement & inObject) ;

//--- Remove all objects (without changing capacity)
  public: void removeAllObjects (void) ;

//--- Sublists
  public: void subListToIndex (CollectionElementArray & outSubList,
                                const uint32_t inIndex,
                                bool & outOk,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const ;

  public: void subListWithRange (CollectionElementArray & ioSubList,
                                  const uint32_t inStartIndex,
                                  const uint32_t inLength,
                                  bool & outOk,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const ;

  public: void subListFromIndex (CollectionElementArray & ioSubList,
                                  const uint32_t inIndex,
                                  bool & outOk,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const ;

//--- Internal
  private: void insulateOrCreate (void) ;

//--- Property
  private: class capCollectionRoot * mSharedRoot ;
} ;

//--------------------------------------------------------------------------------------------------
