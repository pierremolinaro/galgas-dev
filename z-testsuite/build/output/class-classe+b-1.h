#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 1: @classeB reference class
//--------------------------------------------------------------------------------------------------

class GGS_classeB : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_classeB (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classeB (const class cPtr_classeB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_x (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classeB init_21_ (const class GGS_uint & inOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;
  public: static GGS_classeB init_21_x (const class GGS_uint & inOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classeB extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classeB class_func_new (const class GGS_uint & inOperand0,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classeB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeB ;


//----------------------------------------------------------------------------------------------------------------------

