//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2014, ..., 2026 Pierre Molinaro.
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
  public: ~ AC_GALGAS_enumerationAssociatedValues (void) ;

  public: void description (String & ioString, const int32_t inIndentation) const ;

  public: void drop (void) ;

  public: const AC_GALGAS_root * associatedValuesPointer (void) const {
    const AC_GALGAS_root * p = (mSharedPtr == nullptr) ? nullptr : mSharedPtr->mValuePtr ;
    macroValidPointer (p) ;
    return p ;
  }
} ;

//--------------------------------------------------------------------------------------------------
