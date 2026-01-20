#ifndef class_2D_c_2B_const_DEFINED
#define class_2D_c_2B_const_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-c+const-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @cConst class
//--------------------------------------------------------------------------------------------------

class cPtr_cConst : public cPtr_cExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void cConst_init_21_ (const class GGS_luint & inOperand0,
                                Compiler * inCompiler) ;


//--- Properties
  public: GGS_luint mProperty_mValue ;


//--- Default constructor
  public: cPtr_cConst (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_cConst (const GGS_luint & in_mValue,
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

