//--------------------------------------------------------------------------------------------------
//
//  AC_GALGAS_enumAssociatedValues : class for enum associated values                            
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2014, ..., 2014 Pierre Molinaro.
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

#include "SharedObject.h"
#include "AC_GALGAS_root.h"
#include "ComparisonResult.h"

//--------------------------------------------------------------------------------------------------

class EnumerationAssociatedValues : public SharedObject {
  public: const AC_GALGAS_root * mValuePtr ;

  public: EnumerationAssociatedValues (const AC_GALGAS_root * inValuePtr COMMA_LOCATION_ARGS) ;

  public: virtual void description (class String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual ~ EnumerationAssociatedValues (void) ;

//--- No copy
  private: EnumerationAssociatedValues (const EnumerationAssociatedValues &) = delete ;
  private: EnumerationAssociatedValues operator = (const EnumerationAssociatedValues &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class AC_GALGAS_enumerationAssociatedValues final {
  private: const EnumerationAssociatedValues * mSharedPtr ;

//--- Default constructor
  public: AC_GALGAS_enumerationAssociatedValues (void) ;

//---
  public: void assignPointer (const EnumerationAssociatedValues * inUniquePtr) ;

//--- Handle copy
  public: AC_GALGAS_enumerationAssociatedValues (const AC_GALGAS_enumerationAssociatedValues & inSource) ;
  public: AC_GALGAS_enumerationAssociatedValues & operator = (const AC_GALGAS_enumerationAssociatedValues & inSource) ;

//--- Destructor
  public: virtual ~ AC_GALGAS_enumerationAssociatedValues (void) ;

  public: VIRTUAL_IN_DEBUG void description (String & ioString, const int32_t inIndentation) const ;

  public: VIRTUAL_IN_DEBUG void drop (void) ;

  public: VIRTUAL_IN_DEBUG const AC_GALGAS_root * associatedValuesPointer (void) const {
    const AC_GALGAS_root * p = (mSharedPtr == nullptr) ? nullptr : mSharedPtr->mValuePtr ;
    macroValidPointer (p) ;
    return p ;
  }
} ;

//--------------------------------------------------------------------------------------------------
