#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "proc-println-3F.h"
#include "proc-testsuite-5Fbigint-5Ftype.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'testsuite_bigint_type'
//
//--------------------------------------------------------------------------------------------------

void routine_testsuite_5F_bigint_5F_type (Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*************************************** begin of @bigint test"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 4)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- construction"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 5)) ;
  }
  {
  routine_println_3F_ (GGS_bigint::class_func_zero (SOURCE_FILE ("testsuite_bigint.ggs", 6)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 6)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 6)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("1234", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 7)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 7)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 7)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-1234", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 8)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 8)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 8)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("1234", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 9)).getter_sint (inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 9)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 9)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 9)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-1234", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 10)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 10)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 10)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- getter string"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 11)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-123456789012345678901234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 12)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 12)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 12)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- getter hexString"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 13)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-123456789012345678901234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 14)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 14)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 14)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- getter xString"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 15)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-123456789012345678901234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 16)).getter_xString (SOURCE_FILE ("testsuite_bigint.ggs", 16)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 16)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("123456789012345678", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 17)).getter_spacedString (GGS_uint (uint32_t (3U)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 17)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 17)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-123456789012345678", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 18)).getter_spacedString (GGS_uint (uint32_t (3U)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 18)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 18)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- extract8ForUnsignedRepresentation"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 19)) ;
  }
  GGS_uintlist var_a_795 = GGS_bigint ("1328880485197782561564485803532558865", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 21)).getter_extract_38_ForUnsignedRepresentation (SOURCE_FILE ("testsuite_bigint.ggs", 21)) ;
  GGS_string var_s_881 = GGS_string::makeEmptyString () ;
  UpEnumerator_uintlist enumerator_895 (var_a_795) ;
  while (enumerator_895.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_895.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 24)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 24)) ;
    enumerator_895.gotoNextObject () ;
    if (enumerator_895.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 25)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 27)) ;
  }
  var_s_881 = GGS_string::makeEmptyString () ;
  DownEnumerator_uintlist enumerator_1106 (var_a_795) ;
  while (enumerator_1106.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_1106.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 31)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 31)) ;
    enumerator_1106.gotoNextObject () ;
    if (enumerator_1106.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 32)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 34)) ;
  }
  var_a_795 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 35)).getter_extract_38_ForUnsignedRepresentation (SOURCE_FILE ("testsuite_bigint.ggs", 35)) ;
  var_s_881 = GGS_string::makeEmptyString () ;
  UpEnumerator_uintlist enumerator_1295 (var_a_795) ;
  while (enumerator_1295.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_1295.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 38)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 38)) ;
    enumerator_1295.gotoNextObject () ;
    if (enumerator_1295.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 39)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 41)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- extract8ForSignedRepresentation"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 42)) ;
  }
  var_a_795 = GGS_bigint ("1328880485197782561564485803532558865", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 44)).getter_extract_38_ForSignedRepresentation (SOURCE_FILE ("testsuite_bigint.ggs", 44)) ;
  var_s_881 = GGS_string::makeEmptyString () ;
  UpEnumerator_uintlist enumerator_1585 (var_a_795) ;
  while (enumerator_1585.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_1585.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 47)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 47)) ;
    enumerator_1585.gotoNextObject () ;
    if (enumerator_1585.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 48)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 50)) ;
  }
  var_s_881 = GGS_string::makeEmptyString () ;
  DownEnumerator_uintlist enumerator_1802 (var_a_795) ;
  while (enumerator_1802.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_1802.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 54)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 54)) ;
    enumerator_1802.gotoNextObject () ;
    if (enumerator_1802.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 55)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 57)) ;
  }
  var_a_795 = GGS_bigint ("-1144201745", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 59)).getter_extract_38_ForSignedRepresentation (SOURCE_FILE ("testsuite_bigint.ggs", 59)) ;
  var_s_881 = GGS_string::makeEmptyString () ;
  UpEnumerator_uintlist enumerator_2071 (var_a_795) ;
  while (enumerator_2071.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_2071.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 62)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 62)) ;
    enumerator_2071.gotoNextObject () ;
    if (enumerator_2071.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 63)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 65)) ;
  }
  var_s_881 = GGS_string::makeEmptyString () ;
  DownEnumerator_uintlist enumerator_2250 (var_a_795) ;
  while (enumerator_2250.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_2250.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 69)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 69)) ;
    enumerator_2250.gotoNextObject () ;
    if (enumerator_2250.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 70)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 72)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- extract32ForUnsignedRepresentation"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 73)) ;
  }
  var_a_795 = GGS_bigint ("1328880485197782561564485803532558865", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 75)).getter_extract_33__32_ForUnsignedRepresentation (SOURCE_FILE ("testsuite_bigint.ggs", 75)) ;
  var_s_881 = GGS_string::makeEmptyString () ;
  UpEnumerator_uintlist enumerator_2564 (var_a_795) ;
  while (enumerator_2564.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_2564.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 78)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 78)) ;
    enumerator_2564.gotoNextObject () ;
    if (enumerator_2564.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 79)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 81)) ;
  }
  var_s_881 = GGS_string::makeEmptyString () ;
  DownEnumerator_uintlist enumerator_2768 (var_a_795) ;
  while (enumerator_2768.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_2768.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 85)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 85)) ;
    enumerator_2768.gotoNextObject () ;
    if (enumerator_2768.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 86)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 88)) ;
  }
  var_a_795 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 89)).getter_extract_33__32_ForUnsignedRepresentation (SOURCE_FILE ("testsuite_bigint.ggs", 89)) ;
  var_s_881 = GGS_string::makeEmptyString () ;
  UpEnumerator_uintlist enumerator_2949 (var_a_795) ;
  while (enumerator_2949.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_2949.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 92)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 92)) ;
    enumerator_2949.gotoNextObject () ;
    if (enumerator_2949.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 93)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 95)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- extract32ForSignedRepresentation"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 96)) ;
  }
  var_a_795 = GGS_bigint ("1328880485197782561564485803532558865", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 98)).getter_extract_33__32_ForSignedRepresentation (SOURCE_FILE ("testsuite_bigint.ggs", 98)) ;
  var_s_881 = GGS_string::makeEmptyString () ;
  UpEnumerator_uintlist enumerator_3243 (var_a_795) ;
  while (enumerator_3243.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_3243.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 101)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 101)) ;
    enumerator_3243.gotoNextObject () ;
    if (enumerator_3243.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 102)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 104)) ;
  }
  var_s_881 = GGS_string::makeEmptyString () ;
  DownEnumerator_uintlist enumerator_3446 (var_a_795) ;
  while (enumerator_3446.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_3446.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 108)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 108)) ;
    enumerator_3446.gotoNextObject () ;
    if (enumerator_3446.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 109)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 111)) ;
  }
  var_a_795 = GGS_bigint ("-366216421905", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 113)).getter_extract_33__32_ForSignedRepresentation (SOURCE_FILE ("testsuite_bigint.ggs", 113)) ;
  var_s_881 = GGS_string::makeEmptyString () ;
  UpEnumerator_uintlist enumerator_3705 (var_a_795) ;
  while (enumerator_3705.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_3705.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 116)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 116)) ;
    enumerator_3705.gotoNextObject () ;
    if (enumerator_3705.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 117)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 119)) ;
  }
  var_s_881 = GGS_string::makeEmptyString () ;
  DownEnumerator_uintlist enumerator_3886 (var_a_795) ;
  while (enumerator_3886.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_3886.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 123)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 123)) ;
    enumerator_3886.gotoNextObject () ;
    if (enumerator_3886.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 124)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 127)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- extract64ForUnsignedRepresentation"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 128)) ;
  }
  GGS_uint_36__34_list var_aa_4130 = GGS_bigint ("1328880485197782561564485803532558865", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 130)).getter_extract_36__34_ForUnsignedRepresentation (SOURCE_FILE ("testsuite_bigint.ggs", 130)) ;
  var_s_881 = GGS_string::makeEmptyString () ;
  UpEnumerator_uint_36__34_list enumerator_4228 (var_aa_4130) ;
  while (enumerator_4228.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_4228.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 133)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 133)) ;
    enumerator_4228.gotoNextObject () ;
    if (enumerator_4228.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 134)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 136)) ;
  }
  var_s_881 = GGS_string::makeEmptyString () ;
  DownEnumerator_uint_36__34_list enumerator_4424 (var_aa_4130) ;
  while (enumerator_4424.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_4424.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 140)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 140)) ;
    enumerator_4424.gotoNextObject () ;
    if (enumerator_4424.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 141)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 143)) ;
  }
  var_aa_4130 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 144)).getter_extract_36__34_ForUnsignedRepresentation (SOURCE_FILE ("testsuite_bigint.ggs", 144)) ;
  var_s_881 = GGS_string::makeEmptyString () ;
  UpEnumerator_uint_36__34_list enumerator_4599 (var_aa_4130) ;
  while (enumerator_4599.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_4599.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 147)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 147)) ;
    enumerator_4599.gotoNextObject () ;
    if (enumerator_4599.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 148)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 150)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- extract64ForSignedRepresentation"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 151)) ;
  }
  var_aa_4130 = GGS_bigint ("1328880485197782561564485803532558865", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 153)).getter_extract_36__34_ForSignedRepresentation (SOURCE_FILE ("testsuite_bigint.ggs", 153)) ;
  var_s_881 = GGS_string::makeEmptyString () ;
  UpEnumerator_uint_36__34_list enumerator_4895 (var_aa_4130) ;
  while (enumerator_4895.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_4895.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 156)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 156)) ;
    enumerator_4895.gotoNextObject () ;
    if (enumerator_4895.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 157)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 159)) ;
  }
  var_s_881 = GGS_string::makeEmptyString () ;
  DownEnumerator_uint_36__34_list enumerator_5091 (var_aa_4130) ;
  while (enumerator_5091.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_5091.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 163)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 163)) ;
    enumerator_5091.gotoNextObject () ;
    if (enumerator_5091.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 164)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 166)) ;
  }
  var_aa_4130 = GGS_bigint ("-366216421905", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 168)).getter_extract_36__34_ForSignedRepresentation (SOURCE_FILE ("testsuite_bigint.ggs", 168)) ;
  var_s_881 = GGS_string::makeEmptyString () ;
  UpEnumerator_uint_36__34_list enumerator_5344 (var_aa_4130) ;
  while (enumerator_5344.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_5344.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 171)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 171)) ;
    enumerator_5344.gotoNextObject () ;
    if (enumerator_5344.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 172)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 174)) ;
  }
  var_s_881 = GGS_string::makeEmptyString () ;
  DownEnumerator_uint_36__34_list enumerator_5523 (var_aa_4130) ;
  while (enumerator_5523.hasCurrentObject ()) {
    var_s_881.plusAssignOperation(enumerator_5523.current_mValue (HERE).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 178)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 178)) ;
    enumerator_5523.gotoNextObject () ;
    if (enumerator_5523.hasCurrentObject ()) {
      var_s_881.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 179)) ;
    }
  }
  {
  routine_println_3F_ (var_s_881, inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 181)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- Addition"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 182)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("111111111011111111100", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 183)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 183)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 183)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- Subtract"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 184)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-86419753208641975320", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 185)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 185)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 185)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- Multiply"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 186)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("12345678901234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 187)).multiply_operation (GGS_bigint ("98765432109876543210", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 187)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 187)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 187)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 187)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- Divide"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 188)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("98765432109876543210", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 189)).divide_operation (GGS_bigint ("12345678901234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 189)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 189)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 189)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 189)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-98765432109876543210", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 190)).divide_operation (GGS_bigint ("12345678901234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 190)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 190)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 190)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 190)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-98765432109876543210", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 191)).divide_operation (GGS_bigint ("-12345678901234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 191)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 191)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 191)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 191)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("98765432109876543210", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 192)).divide_operation (GGS_bigint ("-12345678901234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 192)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 192)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 192)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 192)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-7", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 193)).divide_operation (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 193)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 193)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 193)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 193)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-7", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 194)).divide_operation (GGS_bigint ("-2", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 194)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 194)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 194)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 194)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 195)).divide_operation (GGS_bigint ("-2", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 195)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 195)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 195)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 195)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- mod"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 196)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("9876543210", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 197)).modulo_operation (GGS_bigint ("1234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 197)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 197)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 197)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 197)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-9876543210", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 198)).modulo_operation (GGS_bigint ("1234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 198)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 198)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 198)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 198)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-9876543210", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 199)).modulo_operation (GGS_bigint ("-1234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 199)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 199)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 199)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 199)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("9876543210", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 200)).modulo_operation (GGS_bigint ("-1234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 200)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 200)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 200)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 200)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("2000", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 201)).modulo_operation (GGS_bigint ("183", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 201)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 201)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 201)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 201)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-2000", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 202)).modulo_operation (GGS_bigint ("183", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 202)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 202)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 202)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 202)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-2000", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 203)).modulo_operation (GGS_bigint ("-183", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 203)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 203)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 203)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 203)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("2000", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 204)).modulo_operation (GGS_bigint ("-183", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 204)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 204)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 204)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 204)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- divideBy"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 205)) ;
  }
  GGS_bigint var_quotient_6813 ;
  GGS_bigint var_remainder_6836 ;
  GGS_bigint var_cst_31__6852 = GGS_bigint ("98765432109876543210", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 208)) ;
  var_cst_31__6852.method_divideBy (GGS_bigint ("1234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 209)), var_quotient_6813, var_remainder_6836, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 208)) ;
  {
  routine_println_3F_ (var_quotient_6813.getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 213)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 213)).add_operation (var_remainder_6836.getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 213)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 213)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 213)) ;
  }
  GGS_bigint var_cst_32__7041 = GGS_bigint ("-98765432109876543210", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 214)) ;
  var_cst_32__7041.method_divideBy (GGS_bigint ("1234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 215)), var_quotient_6813, var_remainder_6836, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 214)) ;
  {
  routine_println_3F_ (var_quotient_6813.getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 219)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 219)).add_operation (var_remainder_6836.getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 219)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 219)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 219)) ;
  }
  GGS_bigint var_cst_33__7233 = GGS_bigint ("-98765432109876543210", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 220)) ;
  var_cst_33__7233.method_divideBy (GGS_bigint ("-1234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 221)), var_quotient_6813, var_remainder_6836, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 220)) ;
  {
  routine_println_3F_ (var_quotient_6813.getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 225)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 225)).add_operation (var_remainder_6836.getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 225)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 225)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 225)) ;
  }
  GGS_bigint var_cst_34__7425 = GGS_bigint ("98765432109876543210", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 226)) ;
  var_cst_34__7425.method_divideBy (GGS_bigint ("-1234567890", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 227)), var_quotient_6813, var_remainder_6836, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 226)) ;
  {
  routine_println_3F_ (var_quotient_6813.getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 231)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 231)).add_operation (var_remainder_6836.getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 231)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 231)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 231)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- operator <<"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 232)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("320255973457920", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 233)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 233)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 233)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-320255973457920", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 234)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 234)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 234)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("8000", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 235)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 235)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 235)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-8000", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 236)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 236)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- operator >>"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 237)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("19088743", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 238)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 238)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-19088744", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 239)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 239)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("500", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 240)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 240)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 240)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-500", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 241)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 241)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 241)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 242)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 242)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 242)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 243)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 243)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 243)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("3", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 244)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 244)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 244)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("3", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 245)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 245)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 245)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 246)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 246)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 246)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 247)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 247)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 247)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 248)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 248)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 248)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 249)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 249)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 249)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-5", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 250)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 250)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 250)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-5", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 251)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 251)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 251)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-4", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 252)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 252)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 252)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-4", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 253)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 253)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 253)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-2", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 254)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 254)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 254)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-2", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 255)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 255)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 255)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-1", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 256)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 256)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 256)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-1", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 257)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 257)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 257)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- operator &"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 258)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 259)).operator_and (GGS_bigint ("17185", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 259)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 259)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 259)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 259)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 260)).operator_and (GGS_bigint ("17185", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 260)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 260)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 260)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 260)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-128", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 261)).operator_and (GGS_bigint ("255", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 261)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 261)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 261)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 261)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- operator |"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 262)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 263)).operator_or (GGS_bigint ("17185", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 263)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 263)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 263)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 263)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 264)).operator_or (GGS_bigint ("17185", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 264)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 264)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 264)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 264)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-128", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 265)).operator_or (GGS_bigint ("255", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 265)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 265)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 265)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 265)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- operator ^"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 266)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 267)).operator_xor (GGS_bigint ("17185", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 267)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 267)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 267)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 267)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 268)).operator_xor (GGS_bigint ("17185", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 268)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 268)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 268)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 268)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-128", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 269)).operator_xor (GGS_bigint ("255", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 269)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 269)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 269)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 269)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-128", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 270)).operator_xor (GGS_bigint ("-255", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 270)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 270)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 270)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 270)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- operator ~"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 271)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-4661", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 272)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 272)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 272)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("4659", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 273)).getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 273)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 273)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- bitAtIndex"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 274)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 275)).getter_bitAtIndex (GGS_uint (uint32_t (7U)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 275)).getter_ocString (SOURCE_FILE ("testsuite_bigint.ggs", 275)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 275)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 276)).getter_bitAtIndex (GGS_uint (uint32_t (5U)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 276)).getter_ocString (SOURCE_FILE ("testsuite_bigint.ggs", 276)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 276)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 277)).getter_bitAtIndex (GGS_uint (uint32_t (25U)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 277)).getter_ocString (SOURCE_FILE ("testsuite_bigint.ggs", 277)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 277)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 278)).getter_bitAtIndex (GGS_uint (uint32_t (7U)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 278)).getter_ocString (SOURCE_FILE ("testsuite_bigint.ggs", 278)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 278)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 279)).getter_bitAtIndex (GGS_uint (uint32_t (5U)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 279)).getter_ocString (SOURCE_FILE ("testsuite_bigint.ggs", 279)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 279)) ;
  }
  {
  routine_println_3F_ (GGS_bigint ("-4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 280)).getter_bitAtIndex (GGS_uint (uint32_t (25U)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 280)).getter_ocString (SOURCE_FILE ("testsuite_bigint.ggs", 280)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 280)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- setBitAtIndex"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 281)) ;
  }
  GGS_bigint var_b_9692 = GGS_bigint ("4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 282)) ;
  {
  var_b_9692.setter_setBitAtIndex (GGS_bool (true), GGS_uint (uint32_t (14U)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 283)) ;
  }
  {
  routine_println_3F_ (var_b_9692.getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 284)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 284)) ;
  }
  {
  var_b_9692.setter_setBitAtIndex (GGS_bool (true), GGS_uint (uint32_t (40U)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 285)) ;
  }
  {
  routine_println_3F_ (var_b_9692.getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 286)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 286)) ;
  }
  var_b_9692 = GGS_bigint ("-4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 287)) ;
  {
  var_b_9692.setter_setBitAtIndex (GGS_bool (false), GGS_uint (uint32_t (14U)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 288)) ;
  }
  {
  routine_println_3F_ (var_b_9692.getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 289)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 289)) ;
  }
  {
  var_b_9692.setter_setBitAtIndex (GGS_bool (false), GGS_uint (uint32_t (40U)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 290)) ;
  }
  {
  routine_println_3F_ (var_b_9692.getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 291)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 291)) ;
  }
  {
  routine_println_3F_ (GGS_string ("--- complementBitAtIndex"), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 292)) ;
  }
  var_b_9692 = GGS_bigint ("4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 293)) ;
  {
  var_b_9692.setter_complementBitAtIndex (GGS_uint (uint32_t (14U)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 294)) ;
  }
  {
  routine_println_3F_ (var_b_9692.getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 295)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 295)) ;
  }
  var_b_9692 = GGS_bigint ("-4660", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 296)) ;
  {
  var_b_9692.setter_complementBitAtIndex (GGS_uint (uint32_t (40U)) COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 297)) ;
  }
  {
  routine_println_3F_ (var_b_9692.getter_hexString (SOURCE_FILE ("testsuite_bigint.ggs", 298)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 298)) ;
  }
  {
  routine_println_3F_ (GGS_string ("2**127 - 1 = ").add_operation (GGS_bigint ("170141183460469231731687303715884105727", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 300)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 300)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 300)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 300)) ;
  }
  {
  routine_println_3F_ (GGS_string ("(2**148 + 1) / 17 = ").add_operation (GGS_bigint ("356811923176489970264571492362373784095686657", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 301)).divide_operation (GGS_bigint ("17", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 301)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 301)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 301)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 301)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 301)) ;
  }
  {
  routine_println_3F_ (GGS_string ("2**607 - 1 = ").add_operation (GGS_bigint ("531137992816767098689588206552468627329593117727031923199444138200403559860852242739162502265229285668889329486246501015346579337652707239409519978766587351943831270835393219031728127", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 302)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 302)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 302)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 302)) ;
  }
  {
  routine_println_3F_ (GGS_string ("2**4423 - 1 = ").add_operation (GGS_bigint ("285542542228279613901563566102164008326164238644702889199247456602284400390600653875954571505539843239754513915896150297878399377056071435169747221107988791198200988477531339214282772016059009904586686254989084815735422480409022344297588352526004383890632616124076317387416881148592486188361873904175783145696016919574390765598280188599035578448591077683677175520434074287726578006266759615970759521327828555662781678385691581844436444812511562428136742490459363212810180276096088111401003377570363545725120924073646921576797146199387619296560302680261790118132925012323046444438622308877924609373773012481681672424493674474488537770155783006880852648161513067144814790288366664062257274665275787127374649231096375001170901890786263324619578795731425693805073056119677580338084333381987500902968831935913095269821311141322393356490178488728982288156282600813831296143663845945431144043753821542871277745606447858564159213328443580206422714694913091762716447041689678070096773590429808909616750452927258000843500344831628297089902728649981994387647234574276263729694848304750917174186181130688518792748622612293341368928056634384466646326572476167275660839105650528975713899320211121495795311427946254553305387067821067601768750977866100460014602138408448021225053689054793742003095722096732954750721718115531871310231057902608580607", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 303)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 303)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 303)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 303)) ;
  }
  {
  routine_println_3F_ (GGS_string ("2**44497 - 1 = ").add_operation (GGS_bigint ("854509824303633803193300705318403036509901591304021058343269258282290064782167635856200500014457645861481315295253223674938340502225641436794294836286613933671922838722349286185054453799484919702814066298682412853022594582702532253637046393573819102339382603546705057592743425373988510067594258489091882652816984230481339231089370597522429657962221023625389786838476222562700937572849493656778309709848902611559817481821648562991414301186852631109919628014506891879938269919876375041476054570480393817802067642573802934320804004689212061263134937191146939217967863913998340450302066353316060446899821960016965149455247451256866120416455837785237889442736716622863694799063147972421915137281185223639485530939080700703965630524284803696329522594560178565231006428355914264455809535904827184567881970752815068646412535212946406293446404577519747900684536609902072584992617981311048365318249332003277695727334239248756022919323029881117042744212106822448167090688816268058419617823050362806871644195094989164027842731200313536528752898778625674473549278406773185197120724873440981199286044998761054195231373956949189989191876556229344730115045091462226103168618834097344609997156610133228831405954118698397360867836938451267026626659091843988180773279436086490179650284300557692234183476442984646309183072757232974100222299116389491938691664026821610953870032133749491829983634456251002018767911077341998982406542117192442961159639187837594167906896813306451433188950986000602255947701445471051471124124848433682921474574972057506821415068467850112481880920331630720013627342971796220098146625253125901337980386234817629898710708176158298693133149214166399431656277231164600237527367266776679870865785797830236117277818351059865801588376786510903900434642861824307368660843525509146180113489215970253073134536932334593263343428657338627378492178677797784904272941831813460434829238122857112185866161235173379896102730767761423558393178166224715620952758653591232586065130931612235961024495955052576313785415587572218003004463096123010675460429586233582774784375746614062343087428887376655420063237888060863198948004060435770727103254016551671980979670924439768697027789157597450820625427140967084876253330432907082362616208058343177345138018812833029933660200418178113067998719426282674176029537056946676010743381949863248322018120347951203883971813116798180480041145250934319940195212376997070020403473240618427512395565994017639267642387590352270623403841409398778197965052818880494122679879637450982929872559880623884514662196694567744027940130038179920182595248220029960545836068437836537220421151865495276144874163510998224619086027469138960543563366461310280362835876324827709909151758836738659026346983354907158533741172008557347289191834118874344507211706399728488280164719941918548596996410064074112835516746454014440640147699966792001636649078492049497299992037010722502767123614674570208325085786203978913246013088500640052780403783197363796495378941014322353383867757116808444859236033884177503488694746360263081077518495278672673007687714633814675074081403927708449052582362241943697206287236587208562293641356094566185255157887794517532173283111833000302025613005213405482252878149070265205440373545426910161611341185559050988906020137614109481965847736796392112521375419675323000779270489340923806543050956827559032136728828425649916323160041509893239953929650589544864646169009568125970129331389668409973033907297445999076186651095765310311061043682896569016209694536996136266470191569408033323541694057386738735231465391417715857531488577897250851792909910169470724853261427849940549334305896475592823992656458347993884214575074296814676874464971197215649974506724058916041508916049169707455165438683627351824021232173847650175009569246844585339764331444039879715595935280515640897481257047884715263635621831312250733095244741473379412994928937246504471873360093422945901669688636733052872215188392668343870518332217357980686070609320554480910523795553942258900948600643831553785127382196992543338144141784198002454900271443091682756574616685753240566083384505911986644720838738796540754497874824089314354427768560390125821906974331377915589874833096832220364826214637532467443257219325373542595632168868196845662314535257745740540690088721258932375726926780766042960522570262391944742291827500524719618152204706641289353527039250445951674387140964202979771525691667923635515333128240868122085666451405605834956472406582298196815961996323161565850516941679845809803706388743206005082498287908828447142468612698942513775417111948840517510717444158415311425872235504912292900931530294540012529260625223947584186787091065270997026119386422407099057687522692243445528559804365149519299366360636524787812055597948447738733157386435933019181691527123300142439165132639220658338166882600717005946057068109508190289169077800589855030939849414305609938324421065685342787335122628943893224737558800955291230162354473703668269418246876450051459098729949686427616991310346258467807714200493294634954267280195055460982624792493147249023081291160699372476860084646890874325382990275414749482976830377419937253467357638865913508180286605409768240640904878608687284690578097084189943966991203576327162981834473756946679902799601556403227035997733408463051882878040648605903489943500990090428817282136562244543138227751934870681977529470093118307377797864388134866337375506717466865840299561391687595163814871073257516237138953084739741321046512519898783055985137562909986862822821418697909218618375824776243596129635576799359999369344085923480717698699573491947266917238316136594697515748884132844396814671847273719744879357852879547726224395778018791817246412295326838150979939296919653496539270225341826037714755592301500206279366160321101433476538168211877778289236382492839507816309054101996807881965990251144060531583269667332503639847271289331205431366064069530883820899868706709436836481848789690764673023862695740597045358606957928324456815766130005846385401900094395353684780895776336253796523782075679613024968339290175813865387793255361742847784029992110588949340556741643663846869775018478118394443365250793299817506244603536408515810504456085656681183484766909632504119159101857786213084370375778253371993950568270608368720255920096107484259695785002799244185251870094775729333995933499076257379601075025939759382282614484710286255549932745375952696109293041118929794123755168354275719367365141154223682577274756986939801666353878982712419672047895827951421563601304219352939201617281945130711444593498910500078357202775578698708417758650476732444321615389586337183178052363104577036667976981794379775137254974699125521663805999652545541936035723389826056812617646779754277945047644116609828329736790436393517413288251558898045514749445906423194323706306414119366629747907481287373940832842913969451233186914869606743291916409591019592632025299628197611384253264924748540717955006148011213196330973338173358350731330358801176687055820667007316206485174294980719681580611007576366315566817988676676629818069714322226851713501056676703693691882424689948234282990975689672226518343470550974174195976295776513379484342672440028765751071277361281234011824451864987118511900268023620660925537819599017123223240195222037027161559785371968202312289222379716023280199762503203345842364475873165443711996121637218656014077109938287634462641911237643661498730924997478477798307306107972975765021697764315038032227248049476011713075846328424181343680728329020299532724418468785014598773583912750973647902334456053103347236956679606482172145264307156698559926286047178503741949513540448038604980058134803318961867847317924106411305428822060455457034623993478081873112040879949284318699106416865521492614531231783253320962518186939715705143181582332451403715983077334128673665133436729743874451580776248833276287003390901217261036364534945948597578267069197289616142254891035095245916484120686035290315924214004246222851715780026230502200012304905654599808044383293639930610712768452762188272135526848937482560309725734239359041881081604932493295818851065897194460578664420343244668944218859930843009169151416439747854996132480384642823239375104265690829603313763978877633592443681156487226034007047864955055396171494523624931526010865247828680422244153827517874928298622742605275785719186799859505979308352491593626969988121413269340766953822202945692532342274077693139016760771380343305198289191630235123888130456500445772972946518534337647490350165170146543325102202345905951720938063341522132865825600159040043213174225940378385162335105254933060024773771167209509009338521005232769588766592518165697175352104674517670696569105465127985627784868398418070770887556648506376679874586510201116038731912112614381982989015173251887069224596014819312276729672573465458064549365015500115328448677712179357286925172763809121710405012759558336757794987895061919977712975746432004968898100686118376848236917818928054045219935018646614556888891673782521226109539876603853518249396964141573474411786178864152187231072872681832426617408041561826083277082996504979905121576729761882674166062981961840205928992149503122068791348059470110958176511423269913276037734681753745733428156637089438932739933696432356682668732464139632035094818062195320955001580567851453434840805453125631107205858205890026353091573367671720125016243983573396956393115752805646325308011707276533642086384504961180674698139170920517060518064920905572492922057196081196237682745164205846001032313420319686537276432540345071367632274054907466295796072834575234227652980765772996039382235258886338751540189442236614051487377368191871254652241540528333803670931581186398680731835448665759542476167180453375355150728414382395794212745437166115535367048263957768441505047319734903176176353583999693271099471070016855442488574546932825424729408666367431733711263035317370459792311926982579362304589031818587148975192530703366798574784205700976688975137170702704092122565561067535398561047770288142891333643540586094191942881098885861170676614495216217663224969625604494749752841526809562332705130595227694664136670233457880177927254357892280283501771674153340181295757185220624956488625960241342854349445359997526435561960392392589534148436324133221048085564212838030416837663335740949389023767630410667756195923000289601031700507406595751284778714617941817407995143996744786287420431561654314601536316419773722086777893902300557814544690726153524427504853234241083524047092443029212029099057510938541927161209092151527496660113715920637523480328430989742744810118275178802273249944379671941834661049810424824484335554854300332454752382382575387785362503969349048207228022378600321077242427273559577596216705954978385577476832481767698691019969363764124908054104431258135562309403229995669410507869061560001668799471259677428825587266421236272771356548966731920925935827605895525944958390557775188182599430773976329437360627262869464537271395411127635295102553106088630644348895245378046988082281991300125435706980577758382748696320651710629889378007269601604348150095922464466723718089944069302233407247100092030141634979668048628892544474704539980677959253045377690089917491920942135794067331069174835878047355763069916910505856744867228478819552076510220321221144225115311556902621320151580940631531454823566207528919787538960710731134397251446863301951561400004159243550508846994979870220021654014363061263907055278823448015537418189345262220832101054862193900982756780966682798488261862603073406590467181148676985277920649376717780278320966958417359163686441603606338188292114506821091632091406602191783475767863949798191920391303037823635440366852329792530304401282072217590937306513920702609468017126262860885494045694567006749197056309580643372985177988939029566239014458631659924443381694125529837649434600565981192424844144940596207132164490577515769239206357734633567452508425758085518073722500745788910329276083662174307997019821662396368784000485410203494746501418379420966077237082321290470478615887034185693579996771486215404804695481122481571513704280852627012186267469991635981685640889473373475894097871907535351273155661295260715372756782780366420854197224596223931832477283860850556978410751616679570401202979195793508679229270695813501332563153166070154095763822082051684399748732729553965958532985987911797902110713318155368558266214589918316073370489457222186414248641266582577935019778268426880584442584972373506134982469960153759083758243333220265889317394698666742717430467634753497645506911473017508272050122325088825503782634226189081418110360232044483094917122073348832945196558930045450606186630066464264923682396019146123557820494410011041105352029248308941356759691092988813708083281472269286627276152071817520526023642930790051602960171096698266145887952446714972709623121336088800287469715461344195144343476677832930394086124235564902368800329544881012516861962147429738421449344065429019424751594247732152478118453408107243377529364274352501904296565836899003489345368013052920775677626638558887457826306248930171608249290273621192147578458420275754041934364280873277576348340883830877789952351851735368425837704493979337701560295930387002196518418354534911347404051951004651581481820521681180801097862520366245152535253445173913441503424092683220656401689350515658469355395408017218547191074429639783599094899320410039863575946472558059877105808942471773922977396345497637789562340536844867686961011228671", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 304)).getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 304)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 304)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 304)) ;
  }
  GGS_bigint var_n_10493 = GGS_bigint ("8424432925592889329288197322308900672459420460792433", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 306)) ;
  {
  routine_println_3F_ (GGS_string ("n = ").add_operation (var_n_10493.getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 307)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 307)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 307)) ;
  }
  GGS_bigint var_n_32__10596 = var_n_10493.multiply_operation (var_n_10493, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 308)) ;
  GGS_bigint var_n_34__10613 = var_n_32__10596.multiply_operation (var_n_32__10596, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 309)) ;
  GGS_bigint var_n_38__10632 = var_n_34__10613.multiply_operation (var_n_34__10613, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 310)) ;
  GGS_bigint var_n_31__36__10651 = var_n_38__10632.multiply_operation (var_n_38__10632, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 311)) ;
  GGS_bigint var_n_31__37_plus_39__10671 = var_n_31__36__10651.multiply_operation (var_n_10493, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 312)).add_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 312)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 312)) ;
  {
  routine_println_3F_ (GGS_string ("n**17 + 9 = ").add_operation (var_n_31__37_plus_39__10671.getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 313)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 313)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 313)) ;
  }
  GGS_bigint var_nPlus_31__10738 = var_n_10493.add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 314)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 314)) ;
  GGS_bigint var_nPlus_31__5F__32__10759 = var_nPlus_31__10738.multiply_operation (var_nPlus_31__10738, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 315)) ;
  GGS_bigint var_nPlus_31__5F__34__10792 = var_nPlus_31__5F__32__10759.multiply_operation (var_nPlus_31__5F__32__10759, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 316)) ;
  GGS_bigint var_nPlus_31__5F__38__10829 = var_nPlus_31__5F__34__10792.multiply_operation (var_nPlus_31__5F__34__10792, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 317)) ;
  GGS_bigint var_nPlus_31__5F__31__36__10866 = var_nPlus_31__5F__38__10829.multiply_operation (var_nPlus_31__5F__38__10829, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 318)) ;
  GGS_bigint var_nPlus_31__5F__31__37_plus_39__10904 = var_nPlus_31__5F__31__36__10866.multiply_operation (var_nPlus_31__10738, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 319)).add_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 319)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 319)) ;
  {
  routine_println_3F_ (GGS_string ("(n+1)**17 + 9 = ").add_operation (var_nPlus_31__5F__31__37_plus_39__10904.getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 320)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 320)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 320)) ;
  }
  GGS_bigint var_a_11019 = var_nPlus_31__5F__31__37_plus_39__10904 ;
  GGS_bigint var_bb_11044 = var_n_31__37_plus_39__10671 ;
  GGS_bool var_continue_11064 = GGS_bool (true) ;
  bool loop_11082 = true ;
  while (loop_11082) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_continue_11064.boolEnum () ;
      loop_11082 = test_0 == GalgasBool::boolTrue ;
      if (loop_11082) {
        GGS_bigint var_remainder_11113 = var_a_11019.modulo_operation (var_bb_11044, inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 326)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::equal, var_remainder_11113.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 327)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_continue_11064 = GGS_bool (false) ;
            {
            routine_println_3F_ (GGS_string ("PGCD = ").add_operation (var_bb_11044.getter_string (SOURCE_FILE ("testsuite_bigint.ggs", 329)), inCompiler COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 329)), inCompiler  COMMA_SOURCE_FILE ("testsuite_bigint.ggs", 329)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          var_a_11019 = var_bb_11044 ;
          var_bb_11044 = var_remainder_11113 ;
        }
      }
    }
  }
}


