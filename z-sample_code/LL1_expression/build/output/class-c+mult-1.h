#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-c+expression.h"
//--------------------------------------------------------------------------------------------------
// Phase 1: @cMult reference class
//--------------------------------------------------------------------------------------------------

class GGS_cMult : public GGS_cExpression {
//--------------------------------- Default constructor
  public: GGS_cMult (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_cMult (const class cPtr_cMult * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_cExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_cExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_cMult init_21__21_ (const class GGS_cExpression & inOperand0,
                                         const class GGS_cExpression & inOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_cMult extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_cMult class_func_new (const class GGS_cExpression & inOperand0,
                                                 const class GGS_cExpression & inOperand1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_cMult & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_cMult ;


//----------------------------------------------------------------------------------------------------------------------

