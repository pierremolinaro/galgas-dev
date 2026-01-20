#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "getter-lstring-op.h"
#include "getter-uint64-square.h"
#include "getter-uintlist-sum.h"
#include "method-lstring-op.h"
#include "method-uint64-square.h"
#include "method-uintlist-sum.h"
#include "proc-println-3F.h"
#include "proc-testsuite-5Ftype-5Fcategories.h"
#include "setter-lstring-append+int.h"
#include "setter-uint64list-prepend+square.h"
#include "setter-uintlist-append+square.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_type_categories'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_type_5F_categories (Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of type extension test"), inCompiler  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 4)) ;
  }
  extensionGetter_square (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 5)).getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 5)), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 5)).log ("Square of 7"  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 5)) ;
  GGS_uintlist temp_0 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 6)) ;
  GGS_uintlist var_aList_165 = temp_0 ;
  {
  var_aList_165.setter_append (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 7)) ;
  }
  {
  var_aList_165.setter_append (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 8)) ;
  }
  {
  var_aList_165.setter_append (GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 9)) ;
  }
  {
  var_aList_165.setter_append (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 10)) ;
  }
  extensionGetter_sum (var_aList_165, inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 11)).log ("Sum 1 + 2 + 3 + 4"  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 11)) ;
  extensionGetter_op (GGS_lstring::init_21__21_ (GGS_string ("Hello"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 12)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 12)).log ("Hello !"  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 12)) ;
  GGS_uint_36__34_ var_v_371 ;
  GGS_bigint var_cst_379 = GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 14)) ;
  extensionMethod_square (var_cst_379.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 15)), var_v_371, inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 15)) ;
  var_v_371.log ("v"  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 16)) ;
  GGS_uint var_u_432 ;
  extensionMethod_sum (var_aList_165, var_u_432, inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 18)) ;
  var_u_432.log ("u"  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 19)) ;
  GGS_string var_s_473 ;
  GGS_lstring var_strcst_481 = GGS_lstring::init_21__21_ (GGS_string ("Hello"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 21)), inCompiler COMMA_HERE) ;
  extensionMethod_op (var_strcst_481, var_s_473, inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 21)) ;
  var_s_473.log ("s"  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 22)) ;
  GGS_lstring var_ls_549 = GGS_lstring::init_21__21_ (GGS_string ("Hello"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 23)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_appendInt (var_ls_549, GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 24)) ;
  }
  var_ls_549.log ("ls"  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 25)) ;
  {
  extensionSetter_appendSquare (var_aList_165, GGS_uint (uint32_t (9U)), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 26)) ;
  }
  var_aList_165.log ("aList"  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 27)) ;
  GGS_uint_36__34_list temp_1 = GGS_uint_36__34_list::init (inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 28)) ;
  temp_1.plusPlusAssignOperation (GGS_uint_36__34_list_2E_element::init_21_ (GGS_uint_36__34_ (uint64_t (7ULL)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 28)) ;
  GGS_uint_36__34_list var_aList_36__34__658 = temp_1 ;
  {
  extensionSetter_prependSquare (var_aList_36__34__658, GGS_uint_36__34_ (uint64_t (5ULL)), inCompiler COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 29)) ;
  }
}


