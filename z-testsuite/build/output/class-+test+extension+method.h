#ifndef class_2D__2B_test_2B_extension_2B_method_DEFINED
#define class_2D__2B_test_2B_extension_2B_method_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-+test+extension+method-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @TestExtensionMethod class
//--------------------------------------------------------------------------------------------------

class cPtr_TestExtensionMethod : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void TestExtensionMethod_init (Compiler * inCompiler) ;


//--- Extension getter reader1
  public: virtual class GGS_uint getter_reader_31_ (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method method1
  public: virtual void method_method_31_ (Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method method2
  public: virtual void method_method_32_ (class GGS_uint & arg_result,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties



//--- Constructor
  public: cPtr_TestExtensionMethod (Compiler * inCompiler
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

