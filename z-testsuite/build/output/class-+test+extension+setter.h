#ifndef class_2D__2B_test_2B_extension_2B_setter_DEFINED
#define class_2D__2B_test_2B_extension_2B_setter_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-+test+extension+setter-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @TestExtensionSetter class
//--------------------------------------------------------------------------------------------------

class cPtr_TestExtensionSetter : public cPtr_abstractTestExtensionSetter {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void TestExtensionSetter_init_21__21_ (const class GGS_uint & inOperand0,
                                                 const class GGS_string & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method m
  public: virtual void method_m (Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method setter1
  public: virtual void method_setter_31_ (class GGS_uint & arg_ioArg,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method setter2
  public: virtual void method_setter_32_ (class GGS_uint & arg_ioArg,
           const class GGS_string arg_inS,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method setter3
  public: virtual void method_setter_33_ (const class GGS_uint arg_inArg,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_string mProperty_mString ;


//--- Default constructor
  public: cPtr_TestExtensionSetter (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_TestExtensionSetter (const GGS_uint & in_mInteger,
                                    const GGS_string & in_mString,
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

