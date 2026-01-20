#ifndef class_2D_classe_2B_g_DEFINED
#define class_2D_classe_2B_g_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-classe+g-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classeG class
//--------------------------------------------------------------------------------------------------

class cPtr_classeG : public cPtr_classeC {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classeG_init (Compiler * inCompiler) ;


//--- Properties
  public: GGS_uint mProperty_y ;



//--- Constructor
  public: cPtr_classeG (Compiler * inCompiler
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

