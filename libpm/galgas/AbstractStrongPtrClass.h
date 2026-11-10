//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2021, ..., 2026 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "AbstractPtrClass.h"

//--------------------------------------------------------------------------------------------------

class PtrWeakReferenceProxy ;

//--------------------------------------------------------------------------------------------------

class AbstractStrongPtrClass : public AbstractPtrClass {
//--- Properties
  #ifndef DO_NOT_GENERATE_CHECKINGS
    private: AbstractStrongPtrClass * mPreviousPtr ;
    private: AbstractStrongPtrClass * mNextPtr ;
  #endif

//--- Default constructor
  public: AbstractStrongPtrClass (class Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Destructor
  public: virtual ~ AbstractStrongPtrClass (void) ;

//--- Private property
  private: PtrWeakReferenceProxy * mProxyPtr ;

//--- Get proxy
  public: PtrWeakReferenceProxy * getProxy (void) ;

//--- No Copy
  private: AbstractStrongPtrClass (const AbstractStrongPtrClass &) = delete ;
  private: AbstractStrongPtrClass & operator = (const AbstractStrongPtrClass &) = delete ;

//--- Friend
  friend class PtrWeakReferenceProxy ;

//--- Print all existing objects
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: static void printExistingClassInstances (void) ;
    public: virtual void printNonNullClassInstanceProperties (void) const ;
  #endif
} ;

//--------------------------------------------------------------------------------------------------
