#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "-sortedlist-my+sorted+list.h"
#include "proc-println-3F.h"
#include "proc-testsuite-5Fsortedlist.h"
#include "struct-my+sorted+list-2Eelement.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_sortedlist'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_sortedlist (Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mySortedList temp_0 = GGS_mySortedList::init (inCompiler COMMA_SOURCE_FILE ("testsuite_sortedlist.ggs", 10)) ;
  GGS_mySortedList var_strList_110 = temp_0 ;
  {
  var_strList_110.setter_insert (GGS_string ("b"), inCompiler COMMA_SOURCE_FILE ("testsuite_sortedlist.ggs", 11)) ;
  }
  {
  var_strList_110.setter_insert (GGS_string ("a"), inCompiler COMMA_SOURCE_FILE ("testsuite_sortedlist.ggs", 12)) ;
  }
  {
  var_strList_110.setter_insert (GGS_string ("d"), inCompiler COMMA_SOURCE_FILE ("testsuite_sortedlist.ggs", 13)) ;
  }
  {
  var_strList_110.setter_insert (GGS_string ("c"), inCompiler COMMA_SOURCE_FILE ("testsuite_sortedlist.ggs", 14)) ;
  }
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of sorted list test"), inCompiler  COMMA_SOURCE_FILE ("testsuite_sortedlist.ggs", 15)) ;
  }
  UpEnumerator_mySortedList enumerator_328 (var_strList_110) ;
  GGS_uint index_319 (uint32_t (0)) ;
  while (enumerator_328.hasCurrentObject ()) {
    {
    routine_println_3F_ (GGS_string ("  index ").add_operation (index_319.getter_string (SOURCE_FILE ("testsuite_sortedlist.ggs", 17)), inCompiler COMMA_SOURCE_FILE ("testsuite_sortedlist.ggs", 17)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("testsuite_sortedlist.ggs", 17)).add_operation (enumerator_328.current (HERE).readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("testsuite_sortedlist.ggs", 17)), inCompiler  COMMA_SOURCE_FILE ("testsuite_sortedlist.ggs", 17)) ;
    }
    enumerator_328.gotoNextObject () ;
    index_319.increment_operation (inCompiler  COMMA_SOURCE_FILE ("testsuite_sortedlist.ggs", 16)) ;
  }
}


