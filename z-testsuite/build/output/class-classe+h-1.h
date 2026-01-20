#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-classe+a.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @classeH reference class
//--------------------------------------------------------------------------------------------------

class GGS_classeH : public GGS_classeA {
//--------------------------------- Default constructor
  public: GGS_classeH (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classeH (const class cPtr_classeH * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_y (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classeH init_21__21_ (const class GGS_uint & inOperand0,
                                           const class GGS_uint & inOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classeH extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classeH class_func_new (const class GGS_uint & inOperand0,
                                                   const class GGS_uint & inOperand1,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classeH & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeH ;


//----------------------------------------------------------------------------------------------------------------------

