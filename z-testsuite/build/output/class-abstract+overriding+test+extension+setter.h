#ifndef class_2D_abstract_2B_overriding_2B_test_2B_extension_2B_setter_DEFINED
#define class_2D_abstract_2B_overriding_2B_test_2B_extension_2B_setter_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-abstract+overriding+test+extension+setter-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractOverridingTestExtensionSetter class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractOverridingTestExtensionSetter : public cPtr_TestExtensionSetter {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractOverridingTestExtensionSetter_init_21__21__21_ (const class GGS_uint & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       const class GGS_string & inOperand2,
                                                                       Compiler * inCompiler) ;


//--- Extension method m
  public: virtual void method_m (Compiler * COMMA_LOCATION_ARGS) override = 0 ;

//--- Properties
  public: GGS_string mProperty_mOtherString ;


//--- Default constructor
  public: cPtr_abstractOverridingTestExtensionSetter (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractOverridingTestExtensionSetter (const GGS_uint & in_mInteger,
                                                      const GGS_string & in_mString,
                                                      const GGS_string & in_mOtherString,
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

