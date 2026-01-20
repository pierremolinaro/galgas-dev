#ifndef class_2D__2B_b_2D__35_F_2B_b_DEFINED
#define class_2D__2B_b_2D__35_F_2B_b_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-+b-5F+b-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @B_B class
//--------------------------------------------------------------------------------------------------

class cPtr_B_5F_B : public cPtr_A_5F_A {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void B_5F_B_init (Compiler * inCompiler) ;


//--- Extension getter aReader
  public: virtual class GGS_string getter_aReader (const class GGS_uint inA,
           const class GGS_string inB,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter location
  public: virtual class GGS_location getter_location (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter otherReader
  public: virtual class GGS_string getter_otherReader (const class GGS_uint inA,
           const class GGS_string inB,
           Compiler * COMMA_LOCATION_ARGS) const ;

//--- Properties



//--- Constructor
  public: cPtr_B_5F_B (Compiler * inCompiler
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

