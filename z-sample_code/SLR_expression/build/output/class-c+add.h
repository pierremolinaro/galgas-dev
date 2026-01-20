#ifndef class_2D_c_2B_add_DEFINED
#define class_2D_c_2B_add_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-c+add-1.h"

//----------------------------------------------------------------------------------------------------------------------

#include "class-c+expression.h"
//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @cAdd class
//--------------------------------------------------------------------------------------------------

class cPtr_cAdd : public cPtr_cExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void cAdd_init_21__21_ (const class GGS_cExpression & inOperand0,
                                  const class GGS_cExpression & inOperand1,
                                  Compiler * inCompiler) ;


//--- Properties
  public: GGS_cExpression mProperty_mLeftExpression ;
  public: GGS_cExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_cAdd (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_cAdd (const GGS_cExpression & in_mLeftExpression,
                     const GGS_cExpression & in_mRightExpression,
                     Compiler * inCompiler
                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;


//----------------------------------------------------------------------------------------------------------------------

#endif

