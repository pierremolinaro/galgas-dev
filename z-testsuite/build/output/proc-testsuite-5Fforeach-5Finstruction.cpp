#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "proc-println-3F.h"
#include "proc-testsuite-5Fforeach-5Finstruction.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_foreach_instruction'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_foreach_5F_instruction (Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 4)) ;
  GGS_stringlist var_strList_47 = temp_0 ;
  {
  var_strList_47.setter_append (GGS_string ("a"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 5)) ;
  }
  {
  var_strList_47.setter_append (GGS_string ("b"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 6)) ;
  }
  {
  var_strList_47.setter_append (GGS_string ("c"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 7)) ;
  }
  {
  var_strList_47.setter_append (GGS_string ("d"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 8)) ;
  }
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of foreach instruction test 1"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 9)) ;
  }
  UpEnumerator_stringlist enumerator_277 (var_strList_47) ;
  const bool bool_1 = true ;
  if (enumerator_277.hasCurrentObject () && bool_1) {
    {
    routine_println_3F_ (GGS_string ("  before"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 12)) ;
    }
    while (enumerator_277.hasCurrentObject () && bool_1) {
      {
      routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_277.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 14)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 14)), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 14)) ;
      }
      enumerator_277.gotoNextObject () ;
      if (enumerator_277.hasCurrentObject () && bool_1) {
        {
        routine_println_3F_ (GGS_string ("  between"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 16)) ;
        }
      }
    }
    {
    routine_println_3F_ (GGS_string ("  after"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 18)) ;
    }
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of foreach instruction test 2"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 20)) ;
  }
  UpEnumerator_stringlist enumerator_506 (var_strList_47) ;
  bool bool_2 = GGS_bool (false).isValidAndTrue () ;
  if (enumerator_506.hasCurrentObject () && bool_2) {
    {
    routine_println_3F_ (GGS_string ("  before"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 24)) ;
    }
    while (enumerator_506.hasCurrentObject () && bool_2) {
      {
      routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_506.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 26)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 26)), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 26)) ;
      }
      enumerator_506.gotoNextObject () ;
      if (enumerator_506.hasCurrentObject ()) {
        bool_2 = GGS_bool (false).isValidAndTrue () ;
      }
      if (enumerator_506.hasCurrentObject () && bool_2) {
        {
        routine_println_3F_ (GGS_string ("  between"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 28)) ;
        }
      }
    }
    {
    routine_println_3F_ (GGS_string ("  after"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 30)) ;
    }
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of foreach instruction test 3"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 32)) ;
  }
  GGS_uint var_n_746 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_stringlist enumerator_767 (var_strList_47) ;
  bool bool_3 = GGS_bool (ComparisonKind::lowerThan, var_n_746.objectCompare (GGS_uint (uint32_t (2U)))).isValidAndTrue () ;
  if (enumerator_767.hasCurrentObject () && bool_3) {
    {
    routine_println_3F_ (GGS_string ("  before"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 37)) ;
    }
    while (enumerator_767.hasCurrentObject () && bool_3) {
      {
      routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_767.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 39)).add_operation (GGS_string ("', n: "), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 39)).add_operation (var_n_746.getter_string (SOURCE_FILE ("testsuite_foreach_instruction.ggs", 39)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 39)), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 39)) ;
      }
      var_n_746.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 40)) ;
      enumerator_767.gotoNextObject () ;
      if (enumerator_767.hasCurrentObject ()) {
        bool_3 = GGS_bool (ComparisonKind::lowerThan, var_n_746.objectCompare (GGS_uint (uint32_t (2U)))).isValidAndTrue () ;
      }
      if (enumerator_767.hasCurrentObject () && bool_3) {
        {
        routine_println_3F_ (GGS_string ("  between"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 42)) ;
        }
      }
    }
    {
    routine_println_3F_ (GGS_string ("  after"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 44)) ;
    }
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of foreach instruction test 4"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 46)) ;
  }
  UpEnumerator_stringlist enumerator_1029 (var_strList_47) ;
  bool bool_4 = GGS_bool (ComparisonKind::notEqual, enumerator_1029.current_mValue (HERE).objectCompare (GGS_string ("c"))).isValidAndTrue () ;
  if (enumerator_1029.hasCurrentObject () && bool_4) {
    {
    routine_println_3F_ (GGS_string ("  before"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 49)) ;
    }
    while (enumerator_1029.hasCurrentObject () && bool_4) {
      {
      routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_1029.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 51)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 51)), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 51)) ;
      }
      enumerator_1029.gotoNextObject () ;
      if (enumerator_1029.hasCurrentObject ()) {
        bool_4 = GGS_bool (ComparisonKind::notEqual, enumerator_1029.current_mValue (HERE).objectCompare (GGS_string ("c"))).isValidAndTrue () ;
      }
      if (enumerator_1029.hasCurrentObject () && bool_4) {
        {
        routine_println_3F_ (GGS_string ("  between"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 53)) ;
        }
      }
    }
    {
    routine_println_3F_ (GGS_string ("  after"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 55)) ;
    }
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of foreach instruction test 5"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 57)) ;
  }
  UpEnumerator_stringlist enumerator_1288 (var_strList_47) ;
  GGS_uint index_1275 (uint32_t (0)) ;
  const bool bool_5 = true ;
  if (enumerator_1288.hasCurrentObject () && bool_5) {
    {
    routine_println_3F_ (GGS_string ("  before"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 60)) ;
    }
    while (enumerator_1288.hasCurrentObject () && bool_5) {
      {
      routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_1288.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 62)).add_operation (GGS_string ("' (idx: "), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 62)).add_operation (index_1275.getter_string (SOURCE_FILE ("testsuite_foreach_instruction.ggs", 62)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 62)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 62)), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 62)) ;
      }
      enumerator_1288.gotoNextObject () ;
      index_1275.increment () ;
      if (enumerator_1288.hasCurrentObject () && bool_5) {
        {
        routine_println_3F_ (GGS_string ("  between"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 64)) ;
        }
      }
    }
    {
    routine_println_3F_ (GGS_string ("  after"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 66)) ;
    }
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of foreach instruction test 6"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 68)) ;
  }
  UpEnumerator_stringlist enumerator_1549 (var_strList_47) ;
  GGS_uint index_1536 (uint32_t (0)) ;
  while (enumerator_1549.hasCurrentObject ()) {
    {
    routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_1549.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 71)).add_operation (GGS_string ("' (idx: "), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 71)).add_operation (index_1536.getter_string (SOURCE_FILE ("testsuite_foreach_instruction.ggs", 71)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 71)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 71)), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 71)) ;
    }
    enumerator_1549.gotoNextObject () ;
    index_1536.increment_operation (inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 69)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of foreach instruction test 7"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 73)) ;
  }
  GGS_stringset temp_6 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 74)) ;
  GGS_stringset var_set_1710 = temp_6 ;
  {
  var_set_1710.setter_insert (GGS_string ("A"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 75)) ;
  }
  {
  var_set_1710.setter_insert (GGS_string ("B"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 76)) ;
  }
  {
  var_set_1710.setter_insert (GGS_string ("C"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 77)) ;
  }
  {
  var_set_1710.setter_insert (GGS_string ("D"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 78)) ;
  }
  {
  var_set_1710.setter_insert (GGS_string ("E"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 79)) ;
  }
  {
  var_set_1710.setter_insert (GGS_string ("F"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 80)) ;
  }
  {
  var_set_1710.setter_insert (GGS_string ("G"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 81)) ;
  }
  {
  var_set_1710.setter_insert (GGS_string ("H"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 82)) ;
  }
  UpEnumerator_stringset enumerator_1894 (var_set_1710) ;
  GGS_uint index_1889 (uint32_t (0)) ;
  while (enumerator_1894.hasCurrentObject ()) {
    {
    routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_1894.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 85)).add_operation (GGS_string ("' (idx: "), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 85)).add_operation (index_1889.getter_string (SOURCE_FILE ("testsuite_foreach_instruction.ggs", 85)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 85)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 85)), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 85)) ;
    }
    enumerator_1894.gotoNextObject () ;
    index_1889.increment_operation (inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 83)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of foreach instruction test 8"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 87)) ;
  }
  DownEnumerator_stringset enumerator_2047 (var_set_1710) ;
  GGS_uint index_2040 (uint32_t (0)) ;
  while (enumerator_2047.hasCurrentObject ()) {
    {
    routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_2047.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 90)).add_operation (GGS_string ("' (idx: "), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 90)).add_operation (index_2040.getter_string (SOURCE_FILE ("testsuite_foreach_instruction.ggs", 90)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 90)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 90)), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 90)) ;
    }
    enumerator_2047.gotoNextObject () ;
    index_2040.increment_operation (inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 88)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of foreach instruction test 9"), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 92)) ;
  }
  GGS_data var_myData_2197 = GGS_data::class_func_emptyData (SOURCE_FILE ("testsuite_foreach_instruction.ggs", 93)) ;
  {
  var_myData_2197.setter_appendByte (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 94)) ;
  }
  {
  var_myData_2197.setter_appendByte (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 95)) ;
  }
  {
  var_myData_2197.setter_appendByte (GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 96)) ;
  }
  {
  var_myData_2197.setter_appendByte (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 97)) ;
  }
  {
  var_myData_2197.setter_appendByte (GGS_uint (uint32_t (5U)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 98)) ;
  }
  {
  var_myData_2197.setter_appendByte (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 99)) ;
  }
  {
  var_myData_2197.setter_appendByte (GGS_uint (uint32_t (7U)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 100)) ;
  }
  {
  var_myData_2197.setter_appendByte (GGS_uint (uint32_t (8U)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 101)) ;
  }
  UpEnumerator_data enumerator_2437 (var_myData_2197) ;
  GGS_uint index_2432 (uint32_t (0)) ;
  while (enumerator_2437.hasCurrentObject ()) {
    {
    routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_2437.current_data (HERE).getter_string (SOURCE_FILE ("testsuite_foreach_instruction.ggs", 104)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 104)).add_operation (GGS_string ("' (idx: "), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 104)).add_operation (index_2432.getter_string (SOURCE_FILE ("testsuite_foreach_instruction.ggs", 104)), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 104)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 104)), inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 104)) ;
    }
    enumerator_2437.gotoNextObject () ;
    index_2432.increment_operation (inCompiler  COMMA_SOURCE_FILE ("testsuite_foreach_instruction.ggs", 102)) ;
  }
}


