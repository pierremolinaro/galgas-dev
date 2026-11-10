//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2021, ..., 2023 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "AC_GALGAS_root.h"

//--------------------------------------------------------------------------------------------------

class String ;
class GALGAS_TypeDescriptor ;
class AbstractStrongPtrClass ;

//--------------------------------------------------------------------------------------------------

class AC_GALGAS_reference_class : public AC_GALGAS_root { // AC_GALGAS_reference_class est une classe abstraite
//--- Properties
  protected: AbstractStrongPtrClass * mObjectPtr ;
  public: inline const AbstractStrongPtrClass * ptr (void) const { return mObjectPtr ; }

//--- Default constructor
  protected: AC_GALGAS_reference_class (void) ;

//--- Constructor from pointer
  protected: AC_GALGAS_reference_class (const AbstractStrongPtrClass * inPointer) ;

//--- Destructor
  protected: virtual ~ AC_GALGAS_reference_class (void) ;

//--- Is valid
  public: virtual bool isValid (void) const { return nullptr != mObjectPtr ; }

//--- Drop
  public: virtual void drop (void) ;

//--- Handle copy
  protected: AC_GALGAS_reference_class (const AC_GALGAS_reference_class & inSource) ;
  protected: AC_GALGAS_reference_class & operator = (const AC_GALGAS_reference_class & inSource) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (const char * inPropertyName) const ;
  #endif
} ;

//--------------------------------------------------------------------------------------------------
