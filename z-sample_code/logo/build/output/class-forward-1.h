#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-instruction.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @forward reference class
//--------------------------------------------------------------------------------------------------

class GGS_forward : public GGS_instruction {
//--------------------------------- Default constructor
  public: GGS_forward (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forward (const class cPtr_forward * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mLength (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forward init_21_ (const class GGS_luint & inOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forward extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forward class_func_new (const class GGS_luint & inOperand0,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forward & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forward ;


//----------------------------------------------------------------------------------------------------------------------

