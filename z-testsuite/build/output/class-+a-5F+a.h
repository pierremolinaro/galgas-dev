#ifndef class_2D__2B_a_2D__35_F_2B_a_DEFINED
#define class_2D__2B_a_2D__35_F_2B_a_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-+a-5F+a-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @A_A class
//--------------------------------------------------------------------------------------------------

class cPtr_A_5F_A : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void A_5F_A_init (Compiler * inCompiler) ;


//--- Extension getter aReader
  public: virtual class GGS_string getter_aReader (const class GGS_uint inA,
           const class GGS_string inB,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter location
  public: virtual class GGS_location getter_location (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_A_5F_A (Compiler * inCompiler
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

