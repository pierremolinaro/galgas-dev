#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-declaration+a+s+t.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @classWithSuperClassAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_classWithSuperClassAST : public GGS_declarationAST {
//--------------------------------- Default constructor
  public: GGS_classWithSuperClassAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classWithSuperClassAST (const class cPtr_classWithSuperClassAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mClassName (void) const ;

  public: class GGS_lstring readProperty_mSuperClassName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classWithSuperClassAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_lstring & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classWithSuperClassAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classWithSuperClassAST class_func_new (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classWithSuperClassAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classWithSuperClassAST ;


//----------------------------------------------------------------------------------------------------------------------

