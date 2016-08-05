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

//---------------------------------------------------------------------------------------------------------------------*

C_IssueWithFixIt::C_IssueWithFixIt (void) :
mStartLocation (),
mEndLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

C_IssueWithFixIt::C_IssueWithFixIt (const C_LocationInSource & inStartLocation,
                                    const C_LocationInSource & inEndLocation) :
mStartLocation (inStartLocation),
mEndLocation (inEndLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*
