#ifndef class_2D_c_2B_expression_DEFINED
#define class_2D_c_2B_expression_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-c+expression-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @cExpression class
//--------------------------------------------------------------------------------------------------

class cPtr_cExpression : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void cExpression_init (Compiler * inCompiler) ;


//--- Properties



//--- Constructor
  public: cPtr_cExpression (Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;


//----------------------------------------------------------------------------------------------------------------------

#endif

