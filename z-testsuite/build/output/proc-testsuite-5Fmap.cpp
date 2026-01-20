#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "map-a+map.h"
#include "proc-println-3F.h"
#include "proc-testsuite-5Fmap.h"
#include "struct-a+map-2Eelement.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_map'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_map (Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of map"), inCompiler  COMMA_SOURCE_FILE ("testsuite_map.ggs", 11)) ;
  }
  GGS_aMap var_m_361 = GGS_aMap::init (inCompiler COMMA_HERE) ;
  {
  var_m_361.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("g"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("testsuite_map.ggs", 13)), inCompiler COMMA_HERE), GGS_uint (uint32_t (37U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 13)) ;
  }
  var_m_361.log ("m"  COMMA_SOURCE_FILE ("testsuite_map.ggs", 14)) ;
  {
  var_m_361.setter_setValueForKey (GGS_uint (uint32_t (56U)), GGS_string ("g"), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 15)) ;
  }
  var_m_361.log ("m"  COMMA_SOURCE_FILE ("testsuite_map.ggs", 16)) ;
  GGS_aMap var_mm_462 = GGS_aMap::class_func_mapWithMapToOverride (var_m_361  COMMA_SOURCE_FILE ("testsuite_map.ggs", 17)) ;
  var_mm_462.log ("mm"  COMMA_SOURCE_FILE ("testsuite_map.ggs", 18)) ;
  GGS_uint var_v_520 ;
  var_mm_462.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("g"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("testsuite_map.ggs", 20)), inCompiler COMMA_HERE), var_v_520, inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 20)) ;
  var_v_520.log ("v"  COMMA_SOURCE_FILE ("testsuite_map.ggs", 21)) ;
  {
  var_mm_462.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("g"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("testsuite_map.ggs", 22)), inCompiler COMMA_HERE), GGS_uint (uint32_t (11U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 22)) ;
  }
  var_mm_462.log ("mm"  COMMA_SOURCE_FILE ("testsuite_map.ggs", 23)) ;
  var_mm_462.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("g"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("testsuite_map.ggs", 24)), inCompiler COMMA_HERE), var_v_520, inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 24)) ;
  var_v_520.log ("v"  COMMA_SOURCE_FILE ("testsuite_map.ggs", 25)) ;
  var_m_361 = var_mm_462.getter_overriddenMap (inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 26)) ;
  var_m_361.log ("m"  COMMA_SOURCE_FILE ("testsuite_map.ggs", 27)) ;
  var_m_361.getter_levels (SOURCE_FILE ("testsuite_map.ggs", 28)).log ("levelCount"  COMMA_SOURCE_FILE ("testsuite_map.ggs", 28)) ;
  var_m_361.getter_hasKeyAtLevel (GGS_string ("g"), GGS_uint (uint32_t (0U)) COMMA_SOURCE_FILE ("testsuite_map.ggs", 29)).log ("hasKeyAtLevel"  COMMA_SOURCE_FILE ("testsuite_map.ggs", 29)) ;
  var_m_361.getter_hasKeyAtLevel (GGS_string ("h"), GGS_uint (uint32_t (0U)) COMMA_SOURCE_FILE ("testsuite_map.ggs", 30)).log ("hasKeyAtLevel"  COMMA_SOURCE_FILE ("testsuite_map.ggs", 30)) ;
  GGS_location var_loc_879 = var_m_361.getter_locationForKey (GGS_string ("g"), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 31)) ;
  var_loc_879.log ("loc"  COMMA_SOURCE_FILE ("testsuite_map.ggs", 32)) ;
  GGS_aMap var_otherMap_937 = GGS_aMap::init (inCompiler COMMA_HERE) ;
  {
  var_otherMap_937.setter_insertKey (GGS_string ("A").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 35)), GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 35)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("B").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 36)), GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 36)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("C").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 37)), GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 37)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("D").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 38)), GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 38)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("E").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 39)), GGS_uint (uint32_t (5U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 39)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("F").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 40)), GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 40)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("G").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 41)), GGS_uint (uint32_t (7U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 41)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("H").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 42)), GGS_uint (uint32_t (8U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 42)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("I").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 43)), GGS_uint (uint32_t (9U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 43)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("K").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 44)), GGS_uint (uint32_t (10U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 44)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("L").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 45)), GGS_uint (uint32_t (11U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 45)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("M").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 46)), GGS_uint (uint32_t (12U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 46)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("N").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 47)), GGS_uint (uint32_t (13U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 47)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("O").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 48)), GGS_uint (uint32_t (14U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 48)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("P").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 49)), GGS_uint (uint32_t (15U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 49)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("R").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 50)), GGS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 50)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("S").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 51)), GGS_uint (uint32_t (17U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 51)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("T").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 52)), GGS_uint (uint32_t (18U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 52)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("U").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 53)), GGS_uint (uint32_t (19U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 53)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("V").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 54)), GGS_uint (uint32_t (20U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 54)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("W").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 55)), GGS_uint (uint32_t (21U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 55)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("X").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 56)), GGS_uint (uint32_t (22U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 56)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("Y").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 57)), GGS_uint (uint32_t (23U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 57)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("Z").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 58)), GGS_uint (uint32_t (24U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 58)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("a").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 59)), GGS_uint (uint32_t (25U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 59)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("b").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 60)), GGS_uint (uint32_t (26U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 60)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("c").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 61)), GGS_uint (uint32_t (27U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 61)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("d").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 62)), GGS_uint (uint32_t (28U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 62)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("e").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 63)), GGS_uint (uint32_t (29U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 63)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("f").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 64)), GGS_uint (uint32_t (30U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 64)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("g").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 65)), GGS_uint (uint32_t (31U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 65)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("h").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 66)), GGS_uint (uint32_t (32U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 66)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("i").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 67)), GGS_uint (uint32_t (33U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 67)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("j").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 68)), GGS_uint (uint32_t (34U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 68)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("k").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 69)), GGS_uint (uint32_t (35U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 69)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("l").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 70)), GGS_uint (uint32_t (36U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 70)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("m").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 71)), GGS_uint (uint32_t (37U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 71)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("n").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 72)), GGS_uint (uint32_t (38U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 72)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("o").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 73)), GGS_uint (uint32_t (39U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 73)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("p").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 74)), GGS_uint (uint32_t (40U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 74)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("q").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 75)), GGS_uint (uint32_t (41U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 75)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("r").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 76)), GGS_uint (uint32_t (42U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 76)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("s").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 77)), GGS_uint (uint32_t (43U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 77)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("t").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 78)), GGS_uint (uint32_t (44U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 78)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("u").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 79)), GGS_uint (uint32_t (45U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 79)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("v").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 80)), GGS_uint (uint32_t (46U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 80)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("w").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 81)), GGS_uint (uint32_t (47U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 81)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("x").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 82)), GGS_uint (uint32_t (48U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 82)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("y").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 83)), GGS_uint (uint32_t (49U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 83)) ;
  }
  {
  var_otherMap_937.setter_insertKey (GGS_string ("z").getter_nowhere (SOURCE_FILE ("testsuite_map.ggs", 84)), GGS_uint (uint32_t (50U)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 84)) ;
  }
  UpEnumerator_aMap enumerator_3003 (var_otherMap_937) ;
  while (enumerator_3003.hasCurrentObject ()) {
    {
    routine_println_3F_ (GGS_string ("  key '").add_operation (enumerator_3003.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 86)).add_operation (GGS_string ("', value: "), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 86)).add_operation (enumerator_3003.current (HERE).readProperty_value ().getter_string (SOURCE_FILE ("testsuite_map.ggs", 86)), inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 86)), inCompiler  COMMA_SOURCE_FILE ("testsuite_map.ggs", 86)) ;
    }
    enumerator_3003.gotoNextObject () ;
  }
  UpEnumerator_lstringlist enumerator_3101 (var_otherMap_937.getter_keyList (inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 88))) ;
  while (enumerator_3101.hasCurrentObject ()) {
    {
    GGS_uint joker_3151 ; // Joker input parameter
    var_otherMap_937.setter_removeKey (enumerator_3101.current (HERE).readProperty_mValue (), joker_3151, inCompiler COMMA_SOURCE_FILE ("testsuite_map.ggs", 89)) ;
    }
    enumerator_3101.gotoNextObject () ;
  }
}


