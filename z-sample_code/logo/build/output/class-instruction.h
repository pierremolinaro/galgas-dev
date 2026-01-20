#ifndef class_2D_instruction_DEFINED
#define class_2D_instruction_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-instruction-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @instruction class
//--------------------------------------------------------------------------------------------------

class cPtr_instruction : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void instruction_init (Compiler * inCompiler) ;


//--- Extension method codeDisplay
  public: virtual void method_codeDisplay (class GGS_bool & arg_ioPenDown,
           class GGS_double & arg_ioX,
           class GGS_double & arg_ioY,
           class GGS_double & arg_ioAngle,
           class GGS_string & arg_SVG,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_instruction (Compiler * inCompiler
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

