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

#ifndef AC_GALGAS_ENUM_ASSOCIATED_VALUES_CLASS_DEFINED
#define AC_GALGAS_ENUM_ASSOCIATED_VALUES_CLASS_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/C_SharedObject.h"

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues : public C_SharedObject {
  public : cEnumAssociatedValues (LOCATION_ARGS) ;

  public : virtual void description (class C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

class AC_GALGAS_enumAssociatedValues {
  private : const cEnumAssociatedValues * mSharedPtr ;

//--- Default constructor
  public : AC_GALGAS_enumAssociatedValues (void) ;

//---
  public : void setPointer (const cEnumAssociatedValues * inUniquePtr) ;

//--- Handle copy
  public : AC_GALGAS_enumAssociatedValues (const AC_GALGAS_enumAssociatedValues & inSource) ;
  public : AC_GALGAS_enumAssociatedValues & operator = (const AC_GALGAS_enumAssociatedValues & inSource) ;

//--- Destructor
  public : virtual ~ AC_GALGAS_enumAssociatedValues (void) ;

//---
  public : void description (C_String & ioString,
                             const int32_t inIndentation) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
