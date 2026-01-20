#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-inherited+class+for+type+cast+in+setter+call.h"
#include "weak-reference-base+class+for+type+cast+in+setter+call-2Eweak.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @inheritedClassForTypeCastInSetterCall_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inheritedClassForTypeCastInSetterCall_2E_weak : public GGS_baseClassForTypeCastInSetterCall_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inheritedClassForTypeCastInSetterCall_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inheritedClassForTypeCastInSetterCall_2E_weak (const class GGS_inheritedClassForTypeCastInSetterCall & inSource) ;

  public: GGS_inheritedClassForTypeCastInSetterCall_2E_weak & operator = (const class GGS_inheritedClassForTypeCastInSetterCall & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inheritedClassForTypeCastInSetterCall_2E_weak init_nil (void) {
    GGS_inheritedClassForTypeCastInSetterCall_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inheritedClassForTypeCastInSetterCall bang_inheritedClassForTypeCastInSetterCall_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_inheritedClassForTypeCastInSetterCall unwrappedValue (void) const ;

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
  public: static GGS_inheritedClassForTypeCastInSetterCall_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inheritedClassForTypeCastInSetterCall_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inheritedClassForTypeCastInSetterCall_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inheritedClassForTypeCastInSetterCall_2E_weak ;


//----------------------------------------------------------------------------------------------------------------------

