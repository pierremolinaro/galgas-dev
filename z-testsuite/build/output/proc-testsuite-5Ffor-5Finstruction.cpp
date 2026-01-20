#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "proc-println-3F.h"
#include "proc-testsuite-5Ffor-5Finstruction.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_for_instruction'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_for_5F_instruction (Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of for instruction test 1"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 4)) ;
  }
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 5)) ;
  GGS_stringlist var_strList_129 = temp_0 ;
  {
  var_strList_129.setter_append (GGS_string ("a"), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 6)) ;
  }
  {
  var_strList_129.setter_append (GGS_string ("b"), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 7)) ;
  }
  {
  var_strList_129.setter_append (GGS_string ("c"), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 8)) ;
  }
  {
  var_strList_129.setter_append (GGS_string ("d"), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 9)) ;
  }
  UpEnumerator_stringlist enumerator_261 (var_strList_129) ;
  const bool bool_1 = true ;
  if (enumerator_261.hasCurrentObject () && bool_1) {
    {
    routine_println_3F_ (GGS_string ("  before"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 12)) ;
    }
    while (enumerator_261.hasCurrentObject () && bool_1) {
      {
      routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_261.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 14)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 14)), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 14)) ;
      }
      enumerator_261.gotoNextObject () ;
      if (enumerator_261.hasCurrentObject () && bool_1) {
        {
        routine_println_3F_ (GGS_string ("  between"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 16)) ;
        }
      }
    }
    {
    routine_println_3F_ (GGS_string ("  after"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 18)) ;
    }
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of for instruction test 2"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 21)) ;
  }
  UpEnumerator_stringlist enumerator_480 (var_strList_129) ;
  bool bool_2 = GGS_bool (false).isValidAndTrue () ;
  if (enumerator_480.hasCurrentObject () && bool_2) {
    {
    routine_println_3F_ (GGS_string ("  before"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 25)) ;
    }
    while (enumerator_480.hasCurrentObject () && bool_2) {
      {
      routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_480.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 27)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 27)), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 27)) ;
      }
      enumerator_480.gotoNextObject () ;
      if (enumerator_480.hasCurrentObject ()) {
        bool_2 = GGS_bool (false).isValidAndTrue () ;
      }
      if (enumerator_480.hasCurrentObject () && bool_2) {
        {
        routine_println_3F_ (GGS_string ("  between"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 29)) ;
        }
      }
    }
    {
    routine_println_3F_ (GGS_string ("  after"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 31)) ;
    }
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of for instruction test 3"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 34)) ;
  }
  GGS_uint var_n_727 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_stringlist enumerator_740 (var_strList_129) ;
  bool bool_3 = GGS_bool (ComparisonKind::lowerThan, var_n_727.objectCompare (GGS_uint (uint32_t (2U)))).isValidAndTrue () ;
  if (enumerator_740.hasCurrentObject () && bool_3) {
    {
    routine_println_3F_ (GGS_string ("  before"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 39)) ;
    }
    while (enumerator_740.hasCurrentObject () && bool_3) {
      {
      routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_740.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 41)).add_operation (GGS_string ("', n: "), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 41)).add_operation (var_n_727.getter_string (SOURCE_FILE ("testsuite_for_instruction.ggs", 41)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 41)).add_operation (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 41)), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 41)) ;
      }
      var_n_727.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 42)) ;
      enumerator_740.gotoNextObject () ;
      if (enumerator_740.hasCurrentObject ()) {
        bool_3 = GGS_bool (ComparisonKind::lowerThan, var_n_727.objectCompare (GGS_uint (uint32_t (2U)))).isValidAndTrue () ;
      }
      if (enumerator_740.hasCurrentObject () && bool_3) {
        {
        routine_println_3F_ (GGS_string ("  between"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 44)) ;
        }
      }
    }
    {
    routine_println_3F_ (GGS_string ("  after"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 46)) ;
    }
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of for instruction test 4"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 49)) ;
  }
  UpEnumerator_stringlist enumerator_1047 (var_strList_129) ;
  bool bool_4 = GGS_bool (ComparisonKind::notEqual, enumerator_1047.current (HERE).readProperty_mValue ().objectCompare (GGS_string ("c"))).isValidAndTrue () ;
  if (enumerator_1047.hasCurrentObject () && bool_4) {
    {
    routine_println_3F_ (GGS_string ("  before"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 52)) ;
    }
    while (enumerator_1047.hasCurrentObject () && bool_4) {
      {
      routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_1047.current (HERE).readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 54)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 54)), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 54)) ;
      }
      enumerator_1047.gotoNextObject () ;
      if (enumerator_1047.hasCurrentObject ()) {
        bool_4 = GGS_bool (ComparisonKind::notEqual, enumerator_1047.current (HERE).readProperty_mValue ().objectCompare (GGS_string ("c"))).isValidAndTrue () ;
      }
      if (enumerator_1047.hasCurrentObject () && bool_4) {
        {
        routine_println_3F_ (GGS_string ("  between"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 56)) ;
        }
      }
    }
    {
    routine_println_3F_ (GGS_string ("  after"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 58)) ;
    }
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of for instruction test 5"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 61)) ;
  }
  UpEnumerator_stringlist enumerator_1292 (var_strList_129) ;
  GGS_uint index_1283 (uint32_t (0)) ;
  const bool bool_5 = true ;
  if (enumerator_1292.hasCurrentObject () && bool_5) {
    {
    routine_println_3F_ (GGS_string ("  before"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 64)) ;
    }
    while (enumerator_1292.hasCurrentObject () && bool_5) {
      {
      routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_1292.current (HERE).readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 66)).add_operation (GGS_string ("' (idx: "), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 66)).add_operation (index_1283.getter_string (SOURCE_FILE ("testsuite_for_instruction.ggs", 66)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 66)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 66)), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 66)) ;
      }
      enumerator_1292.gotoNextObject () ;
      index_1283.increment () ;
      if (enumerator_1292.hasCurrentObject () && bool_5) {
        {
        routine_println_3F_ (GGS_string ("  between"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 68)) ;
        }
      }
    }
    {
    routine_println_3F_ (GGS_string ("  after"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 70)) ;
    }
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of for instruction test 6"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 73)) ;
  }
  UpEnumerator_stringlist enumerator_1547 (var_strList_129) ;
  GGS_uint index_1538 (uint32_t (0)) ;
  while (enumerator_1547.hasCurrentObject ()) {
    {
    routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_1547.current (HERE).readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 76)).add_operation (GGS_string ("' (idx: "), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 76)).add_operation (index_1538.getter_string (SOURCE_FILE ("testsuite_for_instruction.ggs", 76)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 76)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 76)), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 76)) ;
    }
    enumerator_1547.gotoNextObject () ;
    index_1538.increment_operation (inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 74)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of for instruction test 7"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 79)) ;
  }
  GGS_stringset temp_6 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 80)) ;
  GGS_stringset var_set_1706 = temp_6 ;
  var_set_1706.plusPlusAssignOperation (GGS_string ("A")  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 81)) ;
  var_set_1706.plusPlusAssignOperation (GGS_string ("B")  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 82)) ;
  var_set_1706.plusPlusAssignOperation (GGS_string ("C")  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 83)) ;
  var_set_1706.plusPlusAssignOperation (GGS_string ("D")  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 84)) ;
  var_set_1706.plusPlusAssignOperation (GGS_string ("E")  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 85)) ;
  var_set_1706.plusPlusAssignOperation (GGS_string ("F")  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 86)) ;
  var_set_1706.plusPlusAssignOperation (GGS_string ("G")  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 87)) ;
  var_set_1706.plusPlusAssignOperation (GGS_string ("H")  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 88)) ;
  UpEnumerator_stringset enumerator_1838 (var_set_1706) ;
  GGS_uint index_1829 (uint32_t (0)) ;
  while (enumerator_1838.hasCurrentObject ()) {
    {
    routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_1838.current (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 90)).add_operation (GGS_string ("' (idx: "), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 90)).add_operation (index_1829.getter_string (SOURCE_FILE ("testsuite_for_instruction.ggs", 90)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 90)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 90)), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 90)) ;
    }
    enumerator_1838.gotoNextObject () ;
    index_1829.increment_operation (inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 89)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of for instruction test 8"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 93)) ;
  }
  DownEnumerator_stringset enumerator_1980 (var_set_1706) ;
  GGS_uint index_1969 (uint32_t (0)) ;
  while (enumerator_1980.hasCurrentObject ()) {
    {
    routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_1980.current (HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 95)).add_operation (GGS_string ("' (idx: "), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 95)).add_operation (index_1969.getter_string (SOURCE_FILE ("testsuite_for_instruction.ggs", 95)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 95)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 95)), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 95)) ;
    }
    enumerator_1980.gotoNextObject () ;
    index_1969.increment_operation (inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 94)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- begin of for instruction test 9"), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 98)) ;
  }
  GGS_data var_data_2115 = GGS_data::class_func_emptyData (SOURCE_FILE ("testsuite_for_instruction.ggs", 99)) ;
  {
  var_data_2115.setter_appendByte (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 100)) ;
  }
  {
  var_data_2115.setter_appendByte (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 101)) ;
  }
  {
  var_data_2115.setter_appendByte (GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 102)) ;
  }
  {
  var_data_2115.setter_appendByte (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 103)) ;
  }
  {
  var_data_2115.setter_appendByte (GGS_uint (uint32_t (5U)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 104)) ;
  }
  {
  var_data_2115.setter_appendByte (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 105)) ;
  }
  {
  var_data_2115.setter_appendByte (GGS_uint (uint32_t (7U)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 106)) ;
  }
  {
  var_data_2115.setter_appendByte (GGS_uint (uint32_t (8U)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 107)) ;
  }
  UpEnumerator_data enumerator_2341 (var_data_2115) ;
  GGS_uint index_2332 (uint32_t (0)) ;
  while (enumerator_2341.hasCurrentObject ()) {
    {
    routine_println_3F_ (GGS_string ("  do '").add_operation (enumerator_2341.current (HERE).getter_string (SOURCE_FILE ("testsuite_for_instruction.ggs", 109)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 109)).add_operation (GGS_string ("' (idx: "), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 109)).add_operation (index_2332.getter_string (SOURCE_FILE ("testsuite_for_instruction.ggs", 109)), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 109)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 109)), inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 109)) ;
    }
    enumerator_2341.gotoNextObject () ;
    index_2332.increment_operation (inCompiler  COMMA_SOURCE_FILE ("testsuite_for_instruction.ggs", 108)) ;
  }
}


