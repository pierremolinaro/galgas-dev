//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  C_IssueWithFixIt                                                                                                   *
//                                                                                                                     *
//  This file is part of libpm library                                                                                 *
//                                                                                                                     *
//  Copyright (C) 2016, ..., 2016 Pierre Molinaro.                                                                     *
//                                                                                                                     *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                                                                       *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes, ECN, École Centrale de Nantes (France)  *
//                                                                                                                     *
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General  *
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)  *
//  any later version.                                                                                                 *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied      *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/C_IssueWithFixIt.h"
#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

C_FixItDescription::C_FixItDescription (void) :
mKind (kFixItRemove),
mActionString (""),
mCommentString ("") {
}

//---------------------------------------------------------------------------------------------------------------------*

C_FixItDescription::C_FixItDescription (const EnumFixItKind inKind,
                                        const C_String & inActionString,
                                        const C_String & inCommentString) :
mKind (inKind),
mActionString (inActionString),
mCommentString (inCommentString) {
}

//---------------------------------------------------------------------------------------------------------------------*

C_IssueWithFixIt::C_IssueWithFixIt (void) :
mStartLocation (),
mEndLocation (),
mFixItArray () {
}

//---------------------------------------------------------------------------------------------------------------------*

C_IssueWithFixIt::C_IssueWithFixIt (const C_LocationInSource & inStartLocation,
                                    const C_LocationInSource & inEndLocation,
                                    const TC_Array <C_FixItDescription> & inFixItArray) :
mStartLocation (inStartLocation),
mEndLocation (inEndLocation),
mFixItArray (inFixItArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

void appendFixItActions (TC_Array <C_FixItDescription> & ioArray,
                         const EnumFixItKind inKind,
                         const GALGAS__32_stringlist & inList) {
  cEnumerator__32_stringlist enumerator (inList, kEnumeration_up) ;
  while (enumerator.hasCurrentObject ()) {
    const C_String s0 = enumerator.current_mValue_30_ (HERE).stringValue () ;
    const C_String s1 = enumerator.current_mValue_31_ (HERE).stringValue () ;
    ioArray.addObject (C_FixItDescription (inKind, s0, s1)) ;
    enumerator.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
