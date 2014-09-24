//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  AC_GALGAS_enumAssociatedValues : class for enum associated values                                                  *
//                                                                                                                     *
//  This file is part of libpm library                                                                                 *
//                                                                                                                     *
//  Copyright (C) 2014, ..., 2014 Pierre Molinaro.                                                                     *
//                                                                                                                     *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                                                                       *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes                                          *
//  ECN, École Centrale de Nantes (France)                                                                             *
//                                                                                                                     *
//  This library is free software; you can redistribute it and/or modify it                                            *
//  under the terms of the GNU Lesser General Public License as published                                              *
//  by the Free Software Foundation; either version 2 of the License, or                                               *
//  (at your option) any later version.                                                                                *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT                                             *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or                                              *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for                                           *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/AC_GALGAS_enumAssociatedValues.h"

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues::cEnumAssociatedValues (LOCATION_ARGS) :
C_SharedObject (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_enumAssociatedValues::AC_GALGAS_enumAssociatedValues (void) :
mSharedPtr (NULL) {
}

//---------------------------------------------------------------------------------------------------------------------*

void AC_GALGAS_enumAssociatedValues::setPointer (const cEnumAssociatedValues * inUniquePtr)  {
  macroAssignSharedObject (mSharedPtr, inUniquePtr) ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_enumAssociatedValues::AC_GALGAS_enumAssociatedValues (const AC_GALGAS_enumAssociatedValues & inSource) :
mSharedPtr (NULL) {
  macroAssignSharedObject (mSharedPtr, inSource.mSharedPtr) ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_enumAssociatedValues & AC_GALGAS_enumAssociatedValues::operator = (const AC_GALGAS_enumAssociatedValues & inSource) {
  if (mSharedPtr != inSource.mSharedPtr) {
    macroAssignSharedObject (mSharedPtr, inSource.mSharedPtr) ;
  }
  return *this ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_enumAssociatedValues::~ AC_GALGAS_enumAssociatedValues (void) {
  macroDetachSharedObject (mSharedPtr) ;
}

//---------------------------------------------------------------------------------------------------------------------*

/*AC_GALGAS_root * AC_GALGAS_enumAssociatedValues::clonedObject (void) const {
  return NULL ;
}*/

//---------------------------------------------------------------------------------------------------------------------*

/*const C_galgas_type_descriptor * AC_GALGAS_enumAssociatedValues::staticTypeDescriptor (void) const {
  return NULL ;
}*/

//---------------------------------------------------------------------------------------------------------------------*
