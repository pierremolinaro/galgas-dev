#ifndef class_2D_classe_2B_b_DEFINED
#define class_2D_classe_2B_b_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-classe+b-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classeB class
//--------------------------------------------------------------------------------------------------

class cPtr_classeB : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classeB_init_21_ (const class GGS_uint & inOperand0,
                                 Compiler * inCompiler) ;
  public: void classeB_init_21_x (const class GGS_uint & inOperand0,
                                  Compiler * inCompiler) ;


//--- Properties
  public: GGS_uint mProperty_x ;


//--- Default constructor
  public: cPtr_classeB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classeB (const GGS_uint & in_x,
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

