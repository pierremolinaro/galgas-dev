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

#include "IssueWithFixIt.h"
#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

FixItDescription::FixItDescription (void) :
mKind (kFixItRemove),
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
                                    const TC_Array <FixItDescription> & inFixItArray) :
mStartLocation (inStartLocation),
mEndLocation (inEndLocation),
mFixItArray (inFixItArray) {
}

//--------------------------------------------------------------------------------------------------

void appendFixItActions (TC_Array <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS_stringlist & inList) {
  cEnumerator_stringlist enumerator (inList, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    const String s = enumerator.current_mValue (HERE).stringValue () ;
    ioArray.appendObject (FixItDescription (inKind, s)) ;
    enumerator.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void appendFixItActions (TC_Array <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS_lstringlist & inList) {
  cEnumerator_lstringlist enumerator (inList, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    const String s = enumerator.current_mValue (HERE).mProperty_string.stringValue () ;
    ioArray.appendObject (FixItDescription (inKind, s)) ;
    enumerator.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void appendFixItActions (TC_Array <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS_stringset & inStringSet) {
  cEnumerator_stringset enumerator (inStringSet, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    const String s = enumerator.current_key (HERE).stringValue () ;
    ioArray.appendObject (FixItDescription (inKind, s)) ;
    enumerator.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void appendFixItActions (TC_Array <FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GGS_string & inString) {
  const String s = inString.stringValue () ;
  ioArray.appendObject (FixItDescription (inKind, s)) ;
}

//--------------------------------------------------------------------------------------------------
