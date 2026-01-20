#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-classe+c.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @classeF reference class
//--------------------------------------------------------------------------------------------------

class GGS_classeF : public GGS_classeC {
//--------------------------------- Default constructor
  public: GGS_classeF (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classeF (const class cPtr_classeF * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_y (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classeF init_21_ (const class GGS_uint & inOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classeF extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classeF class_func_new (const class GGS_uint & inOperand0,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classeF & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeF ;


//----------------------------------------------------------------------------------------------------------------------

