//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2021, ..., 2026 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "AbstractPtrClass.h"

//--------------------------------------------------------------------------------------------------

class AbstractStrongPtrClass ;

//--------------------------------------------------------------------------------------------------

class PtrWeakReferenceProxy final : public AbstractPtrClass {
//--- Public default constructor
  public: PtrWeakReferenceProxy (LOCATION_ARGS) ;

//--- Destructor
  public: virtual ~ PtrWeakReferenceProxy (void) ;

//--- Private property
  private: AbstractStrongPtrClass * mStrongObjectPtr ;
  public: AbstractStrongPtrClass * strongObject (void) const { return mStrongObjectPtr ; }

//--- Virtual methods from AbstractPtrClass
  public: virtual void description (String &, const int32_t) const {} // Never invoked

  public: virtual ComparisonResult dynamicObjectCompare (const AbstractPtrClass *) const { // Never invoked
    return ComparisonResult::invalid ;
  }

  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const ;

  public: AbstractPtrClass * duplicate (LOCATION_ARGS) const ;
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--- No Copy
  private: PtrWeakReferenceProxy (const PtrWeakReferenceProxy &) = delete ;
  private: PtrWeakReferenceProxy & operator = (const PtrWeakReferenceProxy &) = delete ;

//--- Friend
  friend class AbstractStrongPtrClass ;
} ;

//--------------------------------------------------------------------------------------------------
