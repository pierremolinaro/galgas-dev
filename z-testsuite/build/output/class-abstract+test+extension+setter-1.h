#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractTestExtensionSetter reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractTestExtensionSetter : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractTestExtensionSetter (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractTestExtensionSetter (const class cPtr_abstractTestExtensionSetter * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mInteger (void) const ;
  public: void setProperty_mInteger (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractTestExtensionSetter init_21_ (const class GGS_uint & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractTestExtensionSetter extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractTestExtensionSetter & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractTestExtensionSetter ;


//----------------------------------------------------------------------------------------------------------------------

