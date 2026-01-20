#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "proc-println-3F.h"
#include "proc-testsuite-5Fintrospection.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_introspection'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_introspection (Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of introspection test"), inCompiler  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 6)) ;
  }
  GGS_typelist var_typeList_231 = GGS_type::class_func_typeList (SOURCE_FILE ("testsuite_introspection.ggs", 8)) ;
  {
  routine_println_3F_ (GGS_string ("--- Type list (").add_operation (var_typeList_231.getter_count (SOURCE_FILE ("testsuite_introspection.ggs", 9)).getter_string (SOURCE_FILE ("testsuite_introspection.ggs", 9)), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 9)).add_operation (GGS_string (" types)"), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 9)), inCompiler  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 9)) ;
  }
  UpEnumerator_typelist enumerator_331 (var_typeList_231) ;
  while (enumerator_331.hasCurrentObject ()) {
    {
    routine_println_3F_ (GGS_string ("  @").add_operation (enumerator_331.current_mValue (HERE).getter_name (SOURCE_FILE ("testsuite_introspection.ggs", 11)), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 11)).add_operation (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 11)), inCompiler  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 11)) ;
    }
    enumerator_331.gotoNextObject () ;
  }
  GGS_functionlist var_functionList_443 = GGS_function::class_func_functionList (SOURCE_FILE ("testsuite_introspection.ggs", 14)) ;
  {
  GGS_string temp_0 ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, var_functionList_443.getter_count (SOURCE_FILE ("testsuite_introspection.ggs", 16)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("s") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string::makeEmptyString () ;
  }
  routine_println_3F_ (GGS_string ("--- Function list (").add_operation (var_functionList_443.getter_count (SOURCE_FILE ("testsuite_introspection.ggs", 15)).getter_string (SOURCE_FILE ("testsuite_introspection.ggs", 15)), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 15)).add_operation (GGS_string (" function"), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 15)).add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 16)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 16)), inCompiler  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 15)) ;
  }
  UpEnumerator_functionlist enumerator_623 (var_functionList_443) ;
  while (enumerator_623.hasCurrentObject ()) {
    GGS_string var_s_666 = GGS_string::makeEmptyString () ;
    UpEnumerator_typelist enumerator_682 (enumerator_623.current_mValue (HERE).getter_formalParameterTypeList (SOURCE_FILE ("testsuite_introspection.ggs", 19))) ;
    while (enumerator_682.hasCurrentObject ()) {
      var_s_666.plusAssignOperation(GGS_string ("\?@").add_operation (enumerator_682.current_mValue (HERE).getter_name (SOURCE_FILE ("testsuite_introspection.ggs", 20)), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 20)), inCompiler  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 20)) ;
      enumerator_682.gotoNextObject () ;
      if (enumerator_682.hasCurrentObject ()) {
        var_s_666.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 21)) ;
      }
    }
    enumerator_623.current_mValue (HERE).log ("mValue"  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 23)) ;
    {
    routine_println_3F_ (enumerator_623.current_mValue (HERE).getter_description (SOURCE_FILE ("testsuite_introspection.ggs", 24)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 24)).add_operation (enumerator_623.current_mValue (HERE).getter_name (SOURCE_FILE ("testsuite_introspection.ggs", 24)), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 24)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 24)).add_operation (var_s_666, inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 24)).add_operation (GGS_string ("] -> @"), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 24)).add_operation (enumerator_623.current_mValue (HERE).getter_resultType (SOURCE_FILE ("testsuite_introspection.ggs", 24)).getter_name (SOURCE_FILE ("testsuite_introspection.ggs", 24)), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 24)), inCompiler  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 24)) ;
    }
    enumerator_623.gotoNextObject () ;
  }
  GGS_bool var_b_31__923 = GGS_function::class_func_isFunctionDefined (GGS_string ("foo")  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 26)) ;
  GGS_bool var_b_32__971 = GGS_function::class_func_isFunctionDefined (GGS_string ("functionTest")  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 27)) ;
  {
  routine_println_3F_ (GGS_string ("Function 'foo' exists:").add_operation (var_b_31__923.getter_cString (SOURCE_FILE ("testsuite_introspection.ggs", 28)), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 28)).add_operation (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 28)), inCompiler  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 28)) ;
  }
  {
  routine_println_3F_ (GGS_string ("Function 'functionTest' exists:").add_operation (var_b_32__971.getter_cString (SOURCE_FILE ("testsuite_introspection.ggs", 29)), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 29)).add_operation (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 29)), inCompiler  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 29)) ;
  }
  GGS_uint var_x_1185 = GGS_uint (uint32_t (2U)) ;
  GGS_object var_object_1205 = var_x_1185.getter_object (SOURCE_FILE ("testsuite_introspection.ggs", 32)) ;
  var_object_1205.log ("object"  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 33)) ;
  GGS_uint var_y_1248 = GGS_uint::extractObject (var_object_1205, inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 34)) ;
  var_y_1248.log ("y"  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 35)) ;
  GGS_function var_f_1321 = GGS_function::class_func_functionWithName (GGS_string ("functionTest")  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 37)) ;
  GGS_objectlist temp_3 = GGS_objectlist::init (inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 38)) ;
  GGS_objectlist var_arguments_1376 = temp_3 ;
  {
  var_arguments_1376.setter_append (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 39)).getter_uint (inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 39)).getter_object (SOURCE_FILE ("testsuite_introspection.ggs", 39)), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 39)) ;
  }
  {
  var_arguments_1376.setter_append (GGS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 40)).getter_uint (inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 40)).getter_object (SOURCE_FILE ("testsuite_introspection.ggs", 40)), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 40)) ;
  }
  GGS_object var_result_1493 = var_f_1321.getter_invoke (var_arguments_1376, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 41)), inCompiler COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 41)) ;
  var_result_1493.log ("result"  COMMA_SOURCE_FILE ("testsuite_introspection.ggs", 42)) ;
}


