//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2016, ..., 2026 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "IssueWithFixIt.h"
#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

FixItDescription::FixItDescription (void) :
mKind (EnumFixItKind::fixItRemove),
mActionString ("") {
}

//--------------------------------------------------------------------------------------------------

FixItDescription::FixItDescription (const EnumFixItKind inKind,
                                    const String & inActionString) :
mKind (inKind),
mActionString (inActionString) {
}

//--------------------------------------------------------------------------------------------------

IssueWithFixIt::IssueWithFixIt (void) :
mStartLocation (),
mEndLocation (),
mFixItArray () {
}

//--------------------------------------------------------------------------------------------------

IssueWithFixIt::IssueWithFixIt (const LocationInSource & inStartLocation,
                                const LocationInSource & inEndLocation,
                                const GenericArray <FixItDescription> & inFixItArray) :
mStartLocation (inStartLocation),
mEndLocation (inEndLocation),
mFixItArray (inFixItArray) {
}

//--------------------------------------------------------------------------------------------------

void appendFixItActions (GenericArray <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS__5B_string_5D_ & inList) {
  UpEnumerator__5B_string_5D_ enumerator (inList) ;
  while (enumerator.hasCurrentObject ()) {
    const String s = enumerator.current (HERE).stringValue () ;
    ioArray.appendObject (FixItDescription (inKind, s)) ;
    enumerator.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void appendFixItActions (GenericArray <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS__5B_lstring_5D_ & inList) {
  UpEnumerator__5B_lstring_5D_ enumerator (inList) ;
  while (enumerator.hasCurrentObject ()) {
    const String s = enumerator.current (HERE).mProperty_string.stringValue () ;
    ioArray.appendObject (FixItDescription (inKind, s)) ;
    enumerator.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void appendFixItActions (GenericArray <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS_stringset & inStringSet) {
  UpEnumerator_stringset enumerator (inStringSet) ;
  while (enumerator.hasCurrentObject ()) {
    const String s = enumerator.current_key (HERE).stringValue () ;
    ioArray.appendObject (FixItDescription (inKind, s)) ;
    enumerator.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void appendFixItActions (GenericArray <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS_string & inString) {
  const String s = inString.stringValue () ;
  ioArray.appendObject (FixItDescription (inKind, s)) ;
}

//--------------------------------------------------------------------------------------------------
