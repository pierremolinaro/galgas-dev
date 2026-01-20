#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "list-my+list.h"
#include "proc-println-3F.h"
#include "proc-testsuite-5Flist.h"
#include "struct-my+list-2Eelement.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_list'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_list (Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_myList temp_0 = GGS_myList::init (inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 10)) ;
  GGS_myList var_strList_126 = temp_0 ;
  {
  var_strList_126.setter_append (GGS_string ("a"), inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 11)) ;
  }
  {
  var_strList_126.setter_append (GGS_string ("b"), inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 12)) ;
  }
  {
  var_strList_126.setter_append (GGS_string ("c"), inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 13)) ;
  }
  {
  var_strList_126.setter_append (GGS_string ("d"), inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 14)) ;
  }
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of list direct access"), inCompiler  COMMA_SOURCE_FILE ("testsuite_list.ggs", 15)) ;
  }
  GGS_string var_s_343 = var_strList_126.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 16)) ;
  var_s_343.log ("s"  COMMA_SOURCE_FILE ("testsuite_list.ggs", 17)) ;
  var_s_343 = var_strList_126.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 18)) ;
  var_s_343.log ("s"  COMMA_SOURCE_FILE ("testsuite_list.ggs", 19)) ;
  var_s_343 = var_strList_126.getter_mValueAtIndex (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 20)) ;
  var_s_343.log ("s"  COMMA_SOURCE_FILE ("testsuite_list.ggs", 21)) ;
  var_s_343 = var_strList_126.getter_mValueAtIndex (GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 22)) ;
  var_s_343.log ("s"  COMMA_SOURCE_FILE ("testsuite_list.ggs", 23)) ;
  {
  var_strList_126.setter_setMValueAtIndex (GGS_string ("z"), GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 24)) ;
  }
  var_strList_126.log ("strList"  COMMA_SOURCE_FILE ("testsuite_list.ggs", 25)) ;
  {
  routine_println_3F_ (GGS_string ("--- test .= operator on list"), inCompiler  COMMA_SOURCE_FILE ("testsuite_list.ggs", 26)) ;
  }
  var_strList_126.plusAssignOperation(var_strList_126, inCompiler  COMMA_SOURCE_FILE ("testsuite_list.ggs", 27)) ;
  var_s_343.log ("s"  COMMA_SOURCE_FILE ("testsuite_list.ggs", 28)) ;
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of list compare"), inCompiler  COMMA_SOURCE_FILE ("testsuite_list.ggs", 29)) ;
  }
  GGS_myList temp_1 = GGS_myList::init (inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 30)) ;
  temp_1.plusPlusAssignOperation (GGS_myList_2E_element::init_21_ (GGS_string ("az"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("testsuite_list.ggs", 30)) ;
  GGS_myList var_aList_708 = temp_1 ;
  GGS_myList temp_2 = GGS_myList::init (inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 31)) ;
  temp_2.plusPlusAssignOperation (GGS_myList_2E_element::init_21_ (GGS_string ("az"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("testsuite_list.ggs", 31)) ;
  GGS_myList var_bList_740 = temp_2 ;
  GGS_bool var_comp_778 = GGS_bool (ComparisonKind::equal, var_aList_708.objectCompare (var_bList_740)) ;
  var_comp_778.log ("comp"  COMMA_SOURCE_FILE ("testsuite_list.ggs", 33)) ;
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of collection value"), inCompiler  COMMA_SOURCE_FILE ("testsuite_list.ggs", 34)) ;
  }
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 35)) ;
  temp_3.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("a"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("testsuite_list.ggs", 35)) ;
  GGS_stringlist var_s_31__897 = temp_3 ;
  {
  var_s_31__897.setter_append (GGS_string ("b"), inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 36)) ;
  }
  GGS_stringlist temp_4 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 37)) ;
  temp_4.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("c"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("testsuite_list.ggs", 37)) ;
  GGS_stringlist var_s_32__949 = temp_4 ;
  {
  var_s_32__949.setter_append (GGS_string ("d"), inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 38)) ;
  }
  GGS_stringlist temp_5 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 39)) ;
  temp_5.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("e"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("testsuite_list.ggs", 39)) ;
  var_s_32__949.plusAssignOperation(temp_5, inCompiler  COMMA_SOURCE_FILE ("testsuite_list.ggs", 39)) ;
  GGS_stringlist var_str_1018 = var_s_31__897.add_operation (var_s_32__949, inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 40)) ;
  var_str_1018.log ("str"  COMMA_SOURCE_FILE ("testsuite_list.ggs", 41)) ;
  GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("testsuite_list.ggs", 42)) ;
  temp_6.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("a"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("testsuite_list.ggs", 42)) ;
  temp_6.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("b"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("testsuite_list.ggs", 42)) ;
  temp_6.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("c"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("testsuite_list.ggs", 42)) ;
  temp_6.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("d"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("testsuite_list.ggs", 42)) ;
  temp_6.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("e"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("testsuite_list.ggs", 42)) ;
  GGS_stringlist var_str_32__1048 = temp_6 ;
  var_str_32__1048.log ("str2"  COMMA_SOURCE_FILE ("testsuite_list.ggs", 43)) ;
}


