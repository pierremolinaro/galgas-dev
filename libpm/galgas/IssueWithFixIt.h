//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2016, ..., 2024 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "LocationInSource.h"
#include "String-class.h"
#include "GenericArray.h"

//--------------------------------------------------------------------------------------------------

class GGS__5B_lstring_5D_ ;
class GGS__5B_string_5D_ ;
class GGS_string ;
class GGS_stringset ;

//--------------------------------------------------------------------------------------------------

enum class EnumFixItKind {
  fixItRemove,
  fixItReplace,
  fixItInsertBefore,
  fixItInsertAfter
} ;

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
                          const GenericArray <FixItDescription> & inFixItArray) ;

//--- Properties
  public: const LocationInSource mStartLocation ;
  public: const LocationInSource mEndLocation ;
  public: const GenericArray <FixItDescription> mFixItArray ;
} ;

//--------------------------------------------------------------------------------------------------

void appendFixItActions (GenericArray <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS__5B_lstring_5D_ & inList) ;

//--------------------------------------------------------------------------------------------------

void appendFixItActions (GenericArray <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS__5B_string_5D_ & inList) ;

//--------------------------------------------------------------------------------------------------

void appendFixItActions (GenericArray <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS_string & inString) ;

//--------------------------------------------------------------------------------------------------

void appendFixItActions (GenericArray <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS_stringset & inStringSet) ;

//--------------------------------------------------------------------------------------------------
