#ifndef class_2D_classe_2B_f_DEFINED
#define class_2D_classe_2B_f_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-classe+f-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classeF class
//--------------------------------------------------------------------------------------------------

class cPtr_classeF : public cPtr_classeC {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classeF_init_21_ (const class GGS_uint & inOperand0,
                                 Compiler * inCompiler) ;


//--- Properties
  public: GGS_uint mProperty_y ;


//--- Default constructor
  public: cPtr_classeF (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classeF (const GGS_uint & in_y,
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

