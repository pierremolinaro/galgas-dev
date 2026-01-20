#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-abstract+overriding+test+extension+setter.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @overridingTestExtensionSetter reference class
//--------------------------------------------------------------------------------------------------

class GGS_overridingTestExtensionSetter : public GGS_abstractOverridingTestExtensionSetter {
//--------------------------------- Default constructor
  public: GGS_overridingTestExtensionSetter (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overridingTestExtensionSetter (const class cPtr_overridingTestExtensionSetter * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mOtherInteger (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overridingTestExtensionSetter init_21__21__21__21_ (const class GGS_uint & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_string & inOperand2,
                                                                         const class GGS_uint & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingTestExtensionSetter extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingTestExtensionSetter class_func_new (const class GGS_uint & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         const class GGS_string & inOperand2,
                                                                         const class GGS_uint & inOperand3,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingTestExtensionSetter & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingTestExtensionSetter ;


//----------------------------------------------------------------------------------------------------------------------

