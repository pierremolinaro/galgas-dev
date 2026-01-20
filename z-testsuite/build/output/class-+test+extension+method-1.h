#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 1: @TestExtensionMethod reference class
//--------------------------------------------------------------------------------------------------

class GGS_TestExtensionMethod : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_TestExtensionMethod (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_TestExtensionMethod (const class cPtr_TestExtensionMethod * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_TestExtensionMethod init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_TestExtensionMethod extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_TestExtensionMethod class_func_new (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_TestExtensionMethod & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_TestExtensionMethod ;


//----------------------------------------------------------------------------------------------------------------------

