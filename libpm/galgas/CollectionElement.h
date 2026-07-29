//--------------------------------------------------------------------------------------------------
//
//  GALGAS_enumerable : Base class for GALGAS enumerable object                                  
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

#include "SharedObject.h"
#include "ComparisonResult.h"

//--------------------------------------------------------------------------------------------------

class String ;
class CollectionElementPtr ;

//--------------------------------------------------------------------------------------------------

class CollectionElement final {
//--- Private pointer
  private: CollectionElementPtr * mPtr ;

//--- Default constructor
  public: CollectionElement (void) ;

//--- Destructor
  public: ~ CollectionElement (void) ;

//--- Handle copy
  public: CollectionElement (const CollectionElement & inSource) ;
  public: CollectionElement & operator = (const CollectionElement & inSource) ;

//--- set pointer
  public: void setPointer (CollectionElementPtr * inObjectPointer) ;

//--- Method that checks that all attributes are valid
  public: bool isValid (void) const ;

//--- Method that ensures that pointer object is unique
  public: void insulate (void) ;

//--- Method that release object
  public: void drop (void) ;

//--- Get pointer (for temporary use)
  public: inline CollectionElementPtr * ptr (void) { return mPtr ; }
  public: inline const CollectionElementPtr * ptr (void) const { return mPtr ; }

//--- Method that returns a copy of current object
  public: CollectionElement copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------
