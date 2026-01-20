#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-classe+c.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @classeG reference class
//--------------------------------------------------------------------------------------------------

class GGS_classeG : public GGS_classeC {
//--------------------------------- Default constructor
  public: GGS_classeG (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classeG (const class cPtr_classeG * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_y (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classeG init (Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classeG extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classeG class_func_new (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classeG & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeG ;


//----------------------------------------------------------------------------------------------------------------------

