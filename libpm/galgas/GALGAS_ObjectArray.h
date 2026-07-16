//--------------------------------------------------------------------------------------------------
//
//  capCollectionElementArray                                                                    
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

//--------------------------------------------------------------------------------------------------

class GGS_object ;
class GGS_objectlist ;
class Compiler ;

//--------------------------------------------------------------------------------------------------

class GALGAS_ObjectArray final {
//--- Default constructor
  public: GALGAS_ObjectArray (const GGS_objectlist & inObjectList,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--- Virtual destructor
  public: ~ GALGAS_ObjectArray (void) ;

//--- No copy
  private: GALGAS_ObjectArray (const GALGAS_ObjectArray & inSource) ;
  private: GALGAS_ObjectArray & operator = (const GALGAS_ObjectArray & inSource) ;

//--- Object count
  public: inline uint32_t count (void) const { return mCount ; }

//--- Object at index
  public: GGS_object objectAtIndex (const uint32_t inIndex COMMA_LOCATION_ARGS) const ;

//--- Attributes
  private: GGS_object * mArray ;
  private: uint32_t mCount ;
} ;

//--------------------------------------------------------------------------------------------------
