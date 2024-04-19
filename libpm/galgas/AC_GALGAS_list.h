//--------------------------------------------------------------------------------------------------
//
//  AC_GALGAS_list : Base class for GALGAS list
//
//  This file is part of libpm library
//
//  Copyright (C) 2008, ..., 2013 Pierre Molinaro.
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

#include "AC_GALGAS_root.h"
#include "ComparisonResult.h"
#include "cCollectionElement.h"

//--------------------------------------------------------------------------------------------------

class AC_GALGAS_list : public AC_GALGAS_root {
//--- Private properties
  private: capCollectionElementArray mSharedArray ;
  private: bool mIsValid ;

//--- Default constructor
  protected: AC_GALGAS_list (void) ;

//--- Constructor used by list map
  protected: AC_GALGAS_list (const capCollectionElementArray & inSharedArray) ;

//--- Virtual destructor
  public: virtual ~ AC_GALGAS_list (void) ;

//--- count
  public: VIRTUAL_IN_DEBUG uint32_t count (void) const ;

//--- isValid
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }

//--- drop
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--- Enumeration
  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & outEnumerationArray) const ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const AC_GALGAS_list & inOperand) const ;

//--- Readers
  public: VIRTUAL_IN_DEBUG GALGAS_uint getter_count (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG GALGAS_range getter_range (LOCATION_ARGS) const ;

//--- Description
  public: VIRTUAL_IN_DEBUG void description (String & ioString, const int32_t inIndentation) const override ;

//--- introspection
  public: virtual const C_galgas_type_descriptor * staticTypeDescriptor (void) const override = 0 ;

//--- Internal methods for handling list
  protected: VIRTUAL_IN_DEBUG void appendObject (const capCollectionElement & inElementToAdd) ;

  protected: VIRTUAL_IN_DEBUG void insertObjectAtIndex (const capCollectionElement & inElementToAdd,
                                                      const uint32_t inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  protected: VIRTUAL_IN_DEBUG void removeObjectAtIndex (capCollectionElement & outAttributes,
                                                         const uint32_t inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  protected: VIRTUAL_IN_DEBUG void removeFirstObject (capCollectionElement & outAttributes,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  protected: VIRTUAL_IN_DEBUG void removeLastObject (capCollectionElement & outAttributes,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  protected: VIRTUAL_IN_DEBUG void readFirst (capCollectionElement & outAttributes,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  protected: VIRTUAL_IN_DEBUG void readLast (capCollectionElement & outAttributes,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  protected: VIRTUAL_IN_DEBUG void appendList (const AC_GALGAS_list & inList) ;

  protected: VIRTUAL_IN_DEBUG void subListWithRange (AC_GALGAS_list & outList,
                                                      const GALGAS_range & inRange,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  protected: VIRTUAL_IN_DEBUG void subListFromIndex (AC_GALGAS_list & outList,
                                                      const GALGAS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  protected: VIRTUAL_IN_DEBUG void subListToIndex (AC_GALGAS_list & outList,
                                                    const GALGAS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  protected: VIRTUAL_IN_DEBUG capCollectionElement readObjectAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


  protected: VIRTUAL_IN_DEBUG
  cCollectionElement * uniquelyReferencedPointerAtIndex (const GALGAS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
} ;

//--------------------------------------------------------------------------------------------------
