#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-instruction.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @rotate reference class
//--------------------------------------------------------------------------------------------------

class GGS_rotate : public GGS_instruction {
//--------------------------------- Default constructor
  public: GGS_rotate (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_rotate (const class cPtr_rotate * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mAngle (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_rotate init_21_ (const class GGS_luint & inOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_rotate extractObject (const GGS_object & inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_rotate class_func_new (const class GGS_luint & inOperand0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_rotate & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_rotate ;


//----------------------------------------------------------------------------------------------------------------------

