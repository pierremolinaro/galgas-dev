#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-abstract+test+extension+setter.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @TestExtensionSetter reference class
//--------------------------------------------------------------------------------------------------

class GGS_TestExtensionSetter : public GGS_abstractTestExtensionSetter {
//--------------------------------- Default constructor
  public: GGS_TestExtensionSetter (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_TestExtensionSetter (const class cPtr_TestExtensionSetter * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mString (void) const ;
  public: void setProperty_mString (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_TestExtensionSetter init_21__21_ (const class GGS_uint & inOperand0,
                                                       const class GGS_string & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_TestExtensionSetter extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_TestExtensionSetter class_func_new (const class GGS_uint & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_TestExtensionSetter & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_TestExtensionSetter ;


//----------------------------------------------------------------------------------------------------------------------

