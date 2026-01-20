#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-declaration+a+s+t.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @classWithoutSuperClassAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_classWithoutSuperClassAST : public GGS_declarationAST {
//--------------------------------- Default constructor
  public: GGS_classWithoutSuperClassAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classWithoutSuperClassAST (const class cPtr_classWithoutSuperClassAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mClassName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classWithoutSuperClassAST init_21_ (const class GGS_lstring & inOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classWithoutSuperClassAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classWithoutSuperClassAST class_func_new (const class GGS_lstring & inOperand0,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classWithoutSuperClassAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classWithoutSuperClassAST ;


//----------------------------------------------------------------------------------------------------------------------

