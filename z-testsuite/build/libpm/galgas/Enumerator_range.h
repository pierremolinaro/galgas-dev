//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2012, ..., 2025 Pierre Molinaro.
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
