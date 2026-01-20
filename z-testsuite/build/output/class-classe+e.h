#ifndef class_2D_classe_2B_e_DEFINED
#define class_2D_classe_2B_e_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-classe+e-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classeE class
//--------------------------------------------------------------------------------------------------

class cPtr_classeE : public cPtr_classeA {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classeE_init_21__21_ (const class GGS_uint & inOperand0,
                                     const class GGS_uint & inOperand1,
                                     Compiler * inCompiler) ;


//--- Properties
  public: GGS_uint mProperty_y ;


//--- Default constructor
  public: cPtr_classeE (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classeE (const GGS_uint & in_x,
                        const GGS_uint & in_y,
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

