#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "func-function+test.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'functionTest'
//
//--------------------------------------------------------------------------------------------------

GGS_uint function_functionTest (const GGS_uint & constinArgument_inArg_31_,
                                const GGS_uint & constinArgument_inArg_32_,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result_result ; // Returned variable
  result_result = constinArgument_inArg_31_.add_operation (constinArgument_inArg_32_, inCompiler COMMA_SOURCE_FILE ("testsuite_functions.ggs", 7)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_functionTest [3] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_functionTest (Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GGS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_functionTest (operand0,
                                operand1,
                                inCompiler
                                COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_functionTest ("functionTest",
                                                              functionWithGenericHeader_functionTest,
                                                              & kTypeDescriptor_GALGAS_uint,
                                                              2,
                                                              functionArgs_functionTest) ;

