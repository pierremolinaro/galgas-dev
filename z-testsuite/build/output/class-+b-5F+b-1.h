#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-+a-5F+a.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @B_5F_B reference class
//--------------------------------------------------------------------------------------------------

class GGS_B_5F_B : public GGS_A_5F_A {
//--------------------------------- Default constructor
  public: GGS_B_5F_B (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_B_5F_B (const class cPtr_B_5F_B * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_B_5F_B init (Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_B_5F_B extractObject (const GGS_object & inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_B_5F_B class_func_new (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_B_5F_B & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_B_5F_B ;


//----------------------------------------------------------------------------------------------------------------------

