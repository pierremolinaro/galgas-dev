#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-classe+h.h"
#include "weak-reference-classe+a-2Eweak.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @classeH_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_classeH_2E_weak : public GGS_classeA_2E_weak {
//--------------------------------- Default constructor
  public: GGS_classeH_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_classeH_2E_weak (const class GGS_classeH & inSource) ;

  public: GGS_classeH_2E_weak & operator = (const class GGS_classeH & inSource) ;

//--------------------------------- Constructor and assignment from optional reference
  public: GGS_classeH_2E_weak (const class GGS_classeH_3F_ & inSource) ;

//--------------------------------- nil initializer
  public: inline static GGS_classeH_2E_weak init_nil (void) {
    GGS_classeH_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_classeH bang_classeH_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_classeH unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classeH_2E_weak extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classeH_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classeH_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeH_2E_weak ;


//----------------------------------------------------------------------------------------------------------------------

