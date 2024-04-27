//--------------------------------------------------------------------------------------------------
//
//  IssueWithFixIt                                                                             
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2016, ..., 2024 Pierre Molinaro.
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

#include "LocationInSource.h"
#include "String-class.h"
#include "TC_Array.h"

//--------------------------------------------------------------------------------------------------

class GGS_stringlist ;
class GGS_lstringlist ;
class GGS_string ;
class GGS_stringset ;

//--------------------------------------------------------------------------------------------------

typedef enum {
  kFixItRemove,
  kFixItReplace,
  kFixItInsertBefore,
  kFixItInsertAfter
} EnumFixItKind ;

//--------------------------------------------------------------------------------------------------

class FixItDescription final {
//--- Default constructor
  public: FixItDescription (void) ;

//--- Constructor
  public: FixItDescription (const EnumFixItKind inKind,
                            const String & inActionString) ;

//--- Accessors
  public: EnumFixItKind kind (void) const { return mKind ; }
  public: String actionString (void) const { return mActionString ; }
  
//--- Private properties
  private: EnumFixItKind mKind ;
  private: String mActionString ;
} ;

//--------------------------------------------------------------------------------------------------

class IssueWithFixIt final {
//--- Default constructor
  public: IssueWithFixIt (void) ;

//--- Constructor
  public: IssueWithFixIt (const LocationInSource & inStartLocation,
                          const LocationInSource & inEndLocation,
                          const TC_Array <FixItDescription> & inFixItArray) ;

//--- Properties
  public: const LocationInSource mStartLocation ;
  public: const LocationInSource mEndLocation ;
  public: const TC_Array <FixItDescription> mFixItArray ;
} ;

//--------------------------------------------------------------------------------------------------

void appendFixItActions (TC_Array <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS_stringlist & inList) ;

//--------------------------------------------------------------------------------------------------

void appendFixItActions (TC_Array <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS_lstringlist & inList) ;

//--------------------------------------------------------------------------------------------------

void appendFixItActions (TC_Array <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS_string & inString) ;

//--------------------------------------------------------------------------------------------------

void appendFixItActions (TC_Array <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS_stringset & inStringSet) ;

//--------------------------------------------------------------------------------------------------
