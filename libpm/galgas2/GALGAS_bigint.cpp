//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  GALGAS_bigint                                                                                                      *
//                                                                                                                     *
//  This file is part of libpm library                                                                                 *
//                                                                                                                     *
//  Copyright (C) 2015, ..., 2015 Pierre Molinaro.                                                                     *
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

#include "galgas2/predefined-types.h"
#include "galgas2/C_Compiler.h"

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint::GALGAS_bigint (void) :
AC_GALGAS_root (),
mIsValid (false),
mValue (0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint::~GALGAS_bigint (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigint::drop (void) {
  mIsValid = false ;
  mValue.setToZero () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bigint::description (C_String & ioString,
                                 const int32_t /* inIndentation */) const {
  ioString << "<@bigint: " ;
  if (!mIsValid) {
    ioString << "not built" ;
  }else{
    ioString << mValue.hexString () ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_bigint::constructor_zero (UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result ;
  result.mIsValid = true ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
