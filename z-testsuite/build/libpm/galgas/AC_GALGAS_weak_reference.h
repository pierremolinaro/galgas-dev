//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2021, ..., 2024 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "AC_GALGAS_root.h"

//--------------------------------------------------------------------------------------------------

class String ;
class GALGAS_TypeDescriptor ;
class AC_GALGAS_reference_class ;
class PtrWeakReferenceProxy ;
class AbstractStrongPtrClass ;

//--------------------------------------------------------------------------------------------------

class AC_GALGAS_weak_reference : public AC_GALGAS_root { // AC_GALGAS_weak_reference est une classe abstraite
//--- Properties
  protected: PtrWeakReferenceProxy * mProxyPtr ;
  public: AbstractStrongPtrClass * ptr (void) const ;

//--- Default constructor
  protected: AC_GALGAS_weak_reference (void) ;

//--- Handle copy
  protected: AC_GALGAS_weak_reference (const AC_GALGAS_weak_reference & inSource) ;
  protected: AC_GALGAS_weak_reference & operator = (const AC_GALGAS_weak_reference & inSource) ;

//--- Constructor from strong reference
  protected: AC_GALGAS_weak_reference (const AC_GALGAS_reference_class & inSource) ;
  private: AC_GALGAS_weak_reference & operator = (const AC_GALGAS_reference_class &) = delete ;

//--- Destructor
  protected: virtual ~ AC_GALGAS_weak_reference (void) ;

//--- Is valid
  public: virtual bool isValid (void) const { return nullptr != mProxyPtr ; }

//--- Drop
  public: virtual void drop (void) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
