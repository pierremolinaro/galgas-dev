#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-base+class+for+type+cast+in+setter+call.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @inheritedClassForTypeCastInSetterCall reference class
//--------------------------------------------------------------------------------------------------

class GGS_inheritedClassForTypeCastInSetterCall : public GGS_baseClassForTypeCastInSetterCall {
//--------------------------------- Default constructor
  public: GGS_inheritedClassForTypeCastInSetterCall (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inheritedClassForTypeCastInSetterCall (const class cPtr_inheritedClassForTypeCastInSetterCall * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inheritedClassForTypeCastInSetterCall init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inheritedClassForTypeCastInSetterCall extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inheritedClassForTypeCastInSetterCall class_func_new (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inheritedClassForTypeCastInSetterCall & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inheritedClassForTypeCastInSetterCall ;


//----------------------------------------------------------------------------------------------------------------------

