#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseClassForTypeCastInSetterCall reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseClassForTypeCastInSetterCall : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_baseClassForTypeCastInSetterCall (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseClassForTypeCastInSetterCall (const class cPtr_baseClassForTypeCastInSetterCall * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseClassForTypeCastInSetterCall init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseClassForTypeCastInSetterCall extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseClassForTypeCastInSetterCall class_func_new (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseClassForTypeCastInSetterCall & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseClassForTypeCastInSetterCall ;


//----------------------------------------------------------------------------------------------------------------------

