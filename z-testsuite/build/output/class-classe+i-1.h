#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-classe+c.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @classeI reference class
//--------------------------------------------------------------------------------------------------

class GGS_classeI : public GGS_classeC {
//--------------------------------- Default constructor
  public: GGS_classeI (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classeI (const class cPtr_classeI * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_y (void) const ;

  public: class GGS_classeH_2E_weak readProperty_z (void) const ;
  public: void setProperty_z (const GGS_classeH_2E_weak & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classeI init_21_ (const class GGS_uint & inOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classeI extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classeI class_func_new (const class GGS_uint & inOperand0,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classeI & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeI ;


//----------------------------------------------------------------------------------------------------------------------

