//--------------------------------------------------------------------------------------------------
//
//  'Enumerator_range' : galgas range enumerator
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2012, ..., 2025 Pierre Molinaro.
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

class GGS_range ;
class GGS_uint ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_range final {
//--- Constructor
  public: UpEnumerator_range (const GGS_range & inEnumeratedRange) ;

//--- No copy
  private: UpEnumerator_range (const UpEnumerator_range &) = delete ;
  private: UpEnumerator_range & operator = (const UpEnumerator_range &) = delete ;

//--- 
  public: bool hasCurrentObject (void) const ;
  public: void gotoNextObject (void) ;

//--- Current element access
  public: GGS_uint current (LOCATION_ARGS) const ;

//---- Properties
  private: const bool mIsValid ;
  private: const int64_t mStart ;
  private: const int64_t mLength ;
  private: int64_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_range final {
//--- Constructor
  public: DownEnumerator_range (const GGS_range & inEnumeratedRange) ;

//--- No copy
  private: DownEnumerator_range (const DownEnumerator_range &) = delete ;
  private: DownEnumerator_range & operator = (const DownEnumerator_range &) = delete ;

//--- 
  public: bool hasCurrentObject (void) const ;
  public: void gotoNextObject (void) ;

//--- Current element access
  public: GGS_uint current (LOCATION_ARGS) const ;

//---- Properties
  private: const bool mIsValid ;
  private: const int64_t mStart ;
  private: const int64_t mLength ;
  private: int64_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------
