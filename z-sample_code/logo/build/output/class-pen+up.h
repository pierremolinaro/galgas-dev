#ifndef class_2D_pen_2B_up_DEFINED
#define class_2D_pen_2B_up_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-pen+up-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @penUp class
//--------------------------------------------------------------------------------------------------

class cPtr_penUp : public cPtr_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void penUp_init (Compiler * inCompiler) ;


//--- Extension method codeDisplay
  public: virtual void method_codeDisplay (class GGS_bool & arg_ioPenDown,
           class GGS_double & arg_ioX,
           class GGS_double & arg_ioY,
           class GGS_double & arg_ioAngle,
           class GGS_string & arg_SVG,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_penUp (Compiler * inCompiler
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

