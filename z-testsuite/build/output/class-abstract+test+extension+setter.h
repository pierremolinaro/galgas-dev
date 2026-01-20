#ifndef class_2D_abstract_2B_test_2B_extension_2B_setter_DEFINED
#define class_2D_abstract_2B_test_2B_extension_2B_setter_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-abstract+test+extension+setter-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractTestExtensionSetter class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractTestExtensionSetter : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractTestExtensionSetter_init_21_ (const class GGS_uint & inOperand0,
                                                     Compiler * inCompiler) ;


//--- Extension method m
  public: virtual void method_m (Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GGS_uint mProperty_mInteger ;


//--- Default constructor
  public: cPtr_abstractTestExtensionSetter (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractTestExtensionSetter (const GGS_uint & in_mInteger,
                                            Compiler * inCompiler
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

