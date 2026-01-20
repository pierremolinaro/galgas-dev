#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-+test+extension+setter.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractOverridingTestExtensionSetter reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractOverridingTestExtensionSetter : public GGS_TestExtensionSetter {
//--------------------------------- Default constructor
  public: GGS_abstractOverridingTestExtensionSetter (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractOverridingTestExtensionSetter (const class cPtr_abstractOverridingTestExtensionSetter * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mOtherString (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractOverridingTestExtensionSetter init_21__21__21_ (const class GGS_uint & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_string & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractOverridingTestExtensionSetter extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractOverridingTestExtensionSetter & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractOverridingTestExtensionSetter ;


//----------------------------------------------------------------------------------------------------------------------

