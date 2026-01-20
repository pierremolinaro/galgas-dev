#ifndef class_2D_classe_2B_a_DEFINED
#define class_2D_classe_2B_a_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-classe+a-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classeA class
//--------------------------------------------------------------------------------------------------

class cPtr_classeA : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classeA_init_21_ (const class GGS_uint & inOperand0,
                                 Compiler * inCompiler) ;


//--- Properties
  public: GGS_uint mProperty_x ;


//--- Default constructor
  public: cPtr_classeA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classeA (const GGS_uint & in_x,
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

