//--------------------------------------------------------------------------------------------------
//
//  'cEnumerator_range' : galgas range enumerator                                                
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2012, ..., 2023 Pierre Molinaro.
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

#include "cGenericAbstractEnumerator.h"

//--------------------------------------------------------------------------------------------------

class GGS_range ;
class GGS_uint ;

//--------------------------------------------------------------------------------------------------

class cEnumerator_range final {
//--- Constructor
  public: cEnumerator_range (const GGS_range & inEnumeratedRange,
                             const EnumerationOrder inOrder) ;

//--- Destructor
  public: ~ cEnumerator_range (void) ;

//--- No copy
  private: cEnumerator_range (const cEnumerator_range &) = delete ;
  private: cEnumerator_range & operator = (const cEnumerator_range &) = delete ;

//--- 
  public: bool hasCurrentObject (void) const ;
  public: bool hasNextObject (void) const ;
  public: void gotoNextObject (void) ;

//--- Current element access
  public: GGS_uint current (LOCATION_ARGS) const ;

//---- Properties
  private: const bool mIsValid ;
  private: const bool mAscending ;
  private: const int64_t mStart ;
  private: const int64_t mLength ;
  private: int64_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------
