#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "proc-list+unicode+character+properties.h"
#include "proc-print-3F.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'listUnicodeCharacterProperties'
//
//--------------------------------------------------------------------------------------------------

void routine_listUnicodeCharacterProperties (Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_print_3F_ (GGS_string ("---- Unassigned Unicode Characters\n"), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 6)) ;
  }
  GGS_uint var_unicodeValue_166 = GGS_uint (uint32_t (0U)) ;
  GGS_uint var_matchedValue_195 = GGS_uint (uint32_t (0U)) ;
  GGS_bool var_found_224 = GGS_bool (false) ;
  if (GGS_uint (uint32_t (65536U)).substract_operation (var_unicodeValue_166, inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 10)).isValid ()) {
    uint32_t variant_240 = GGS_uint (uint32_t (65536U)).substract_operation (var_unicodeValue_166, inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 10)).uintValue () ;
    bool loop_240 = true ;
    while (loop_240) {
      loop_240 = GGS_bool (ComparisonKind::lowerThan, var_unicodeValue_166.objectCompare (GGS_uint (uint32_t (65536U)))).isValid () ;
      if (loop_240) {
        loop_240 = GGS_bool (ComparisonKind::lowerThan, var_unicodeValue_166.objectCompare (GGS_uint (uint32_t (65536U)))).boolValue () ;
      }
      if (loop_240 && (0 == variant_240)) {
        loop_240 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("xml_parsing_semantics.galgas", 10)) ;
      }
      if (loop_240) {
        variant_240 -= 1 ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = var_unicodeValue_166.getter_isUnicodeValueAssigned (SOURCE_FILE ("xml_parsing_semantics.galgas", 12)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GalgasBool test_1 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_1) {
              test_1 = var_found_224.boolEnum () ;
              if (GalgasBool::boolTrue == test_1) {
                {
                routine_print_3F_ (GGS_string ("  - [").add_operation (var_matchedValue_195.getter_hexString (SOURCE_FILE ("xml_parsing_semantics.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 14)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 14)).add_operation (var_unicodeValue_166.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 14)).getter_hexString (SOURCE_FILE ("xml_parsing_semantics.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 14)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 14)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 14)) ;
                }
                var_found_224 = GGS_bool (false) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = var_found_224.operator_not (SOURCE_FILE ("xml_parsing_semantics.galgas", 17)).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              var_matchedValue_195 = var_unicodeValue_166 ;
              var_found_224 = GGS_bool (true) ;
            }
          }
        }
        var_unicodeValue_166.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 21)) ;
      }
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_found_224.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      routine_print_3F_ (GGS_string ("  - [").add_operation (var_matchedValue_195.getter_hexString (SOURCE_FILE ("xml_parsing_semantics.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 24)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 24)).add_operation (var_unicodeValue_166.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 24)).getter_hexString (SOURCE_FILE ("xml_parsing_semantics.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 24)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 24)) ;
      }
      var_found_224 = GGS_bool (false) ;
    }
  }
  {
  routine_print_3F_ (GGS_string ("---- Unicode Letters\n"), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 28)) ;
  }
  var_unicodeValue_166 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint (uint32_t (65536U)).substract_operation (var_unicodeValue_166, inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 30)).isValid ()) {
    uint32_t variant_810 = GGS_uint (uint32_t (65536U)).substract_operation (var_unicodeValue_166, inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 30)).uintValue () ;
    bool loop_810 = true ;
    while (loop_810) {
      loop_810 = GGS_bool (ComparisonKind::lowerThan, var_unicodeValue_166.objectCompare (GGS_uint (uint32_t (65536U)))).isValid () ;
      if (loop_810) {
        loop_810 = GGS_bool (ComparisonKind::lowerThan, var_unicodeValue_166.objectCompare (GGS_uint (uint32_t (65536U)))).boolValue () ;
      }
      if (loop_810 && (0 == variant_810)) {
        loop_810 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("xml_parsing_semantics.galgas", 30)) ;
      }
      if (loop_810) {
        variant_810 -= 1 ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = var_unicodeValue_166.getter_isUnicodeValueAssigned (SOURCE_FILE ("xml_parsing_semantics.galgas", 32)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GGS_char var_c_934 = GGS_char::class_func_unicodeCharacterWithUnsigned (var_unicodeValue_166  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 33)) ;
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_c_934.getter_isUnicodeLetter (SOURCE_FILE ("xml_parsing_semantics.galgas", 34)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                routine_print_3F_ (GGS_string ("  '").add_operation (var_c_934.getter_string (SOURCE_FILE ("xml_parsing_semantics.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 35)).add_operation (GGS_string ("' ("), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 35)).add_operation (var_unicodeValue_166.getter_hexString (SOURCE_FILE ("xml_parsing_semantics.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 36)).add_operation (GGS_string ("), name: '"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 36)).add_operation (var_c_934.getter_unicodeName (SOURCE_FILE ("xml_parsing_semantics.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 37)).add_operation (GGS_string ("', to upper: '"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 37)).add_operation (var_c_934.getter_unicodeToUpper (SOURCE_FILE ("xml_parsing_semantics.galgas", 38)).getter_string (SOURCE_FILE ("xml_parsing_semantics.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 38)).add_operation (GGS_string ("', to lower: '"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 38)).add_operation (var_c_934.getter_unicodeToLower (SOURCE_FILE ("xml_parsing_semantics.galgas", 39)).getter_string (SOURCE_FILE ("xml_parsing_semantics.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 39)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 35)) ;
                }
              }
            }
          }
        }
        var_unicodeValue_166.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 43)) ;
      }
    }
  }
  {
  routine_print_3F_ (GGS_string ("---- Unicode Numbers\n"), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 46)) ;
  }
  var_unicodeValue_166 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint (uint32_t (65536U)).substract_operation (var_unicodeValue_166, inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 48)).isValid ()) {
    uint32_t variant_1387 = GGS_uint (uint32_t (65536U)).substract_operation (var_unicodeValue_166, inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 48)).uintValue () ;
    bool loop_1387 = true ;
    while (loop_1387) {
      loop_1387 = GGS_bool (ComparisonKind::lowerThan, var_unicodeValue_166.objectCompare (GGS_uint (uint32_t (65536U)))).isValid () ;
      if (loop_1387) {
        loop_1387 = GGS_bool (ComparisonKind::lowerThan, var_unicodeValue_166.objectCompare (GGS_uint (uint32_t (65536U)))).boolValue () ;
      }
      if (loop_1387 && (0 == variant_1387)) {
        loop_1387 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("xml_parsing_semantics.galgas", 48)) ;
      }
      if (loop_1387) {
        variant_1387 -= 1 ;
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = var_unicodeValue_166.getter_isUnicodeValueAssigned (SOURCE_FILE ("xml_parsing_semantics.galgas", 50)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GGS_char var_c_1511 = GGS_char::class_func_unicodeCharacterWithUnsigned (var_unicodeValue_166  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 51)) ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = var_c_1511.getter_isUnicodeNumber (SOURCE_FILE ("xml_parsing_semantics.galgas", 52)).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                {
                routine_print_3F_ (GGS_string ("  '").add_operation (var_c_1511.getter_string (SOURCE_FILE ("xml_parsing_semantics.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 53)).add_operation (GGS_string ("' ("), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 53)).add_operation (var_unicodeValue_166.getter_hexString (SOURCE_FILE ("xml_parsing_semantics.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 53)).add_operation (GGS_string ("), name: '"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 53)).add_operation (var_c_1511.getter_unicodeName (SOURCE_FILE ("xml_parsing_semantics.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 53)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 53)) ;
                }
              }
            }
          }
        }
        var_unicodeValue_166.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 56)) ;
      }
    }
  }
  {
  routine_print_3F_ (GGS_string ("---- Unicode Separators\n"), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 59)) ;
  }
  var_unicodeValue_166 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint (uint32_t (65536U)).substract_operation (var_unicodeValue_166, inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 61)).isValid ()) {
    uint32_t variant_1819 = GGS_uint (uint32_t (65536U)).substract_operation (var_unicodeValue_166, inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 61)).uintValue () ;
    bool loop_1819 = true ;
    while (loop_1819) {
      loop_1819 = GGS_bool (ComparisonKind::lowerThan, var_unicodeValue_166.objectCompare (GGS_uint (uint32_t (65536U)))).isValid () ;
      if (loop_1819) {
        loop_1819 = GGS_bool (ComparisonKind::lowerThan, var_unicodeValue_166.objectCompare (GGS_uint (uint32_t (65536U)))).boolValue () ;
      }
      if (loop_1819 && (0 == variant_1819)) {
        loop_1819 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("xml_parsing_semantics.galgas", 61)) ;
      }
      if (loop_1819) {
        variant_1819 -= 1 ;
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = var_unicodeValue_166.getter_isUnicodeValueAssigned (SOURCE_FILE ("xml_parsing_semantics.galgas", 63)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_char var_c_1943 = GGS_char::class_func_unicodeCharacterWithUnsigned (var_unicodeValue_166  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 64)) ;
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = var_c_1943.getter_isUnicodeSeparator (SOURCE_FILE ("xml_parsing_semantics.galgas", 65)).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                {
                routine_print_3F_ (GGS_string ("  '").add_operation (var_c_1943.getter_string (SOURCE_FILE ("xml_parsing_semantics.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 66)).add_operation (GGS_string ("' ("), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 66)).add_operation (var_unicodeValue_166.getter_hexString (SOURCE_FILE ("xml_parsing_semantics.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 66)).add_operation (GGS_string ("), name: '"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 66)).add_operation (var_c_1943.getter_unicodeName (SOURCE_FILE ("xml_parsing_semantics.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 66)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 66)) ;
                }
              }
            }
          }
        }
        var_unicodeValue_166.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 69)) ;
      }
    }
  }
  {
  routine_print_3F_ (GGS_string ("---- Unicode Punctuation\n"), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 72)) ;
  }
  var_unicodeValue_166 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint (uint32_t (65536U)).substract_operation (var_unicodeValue_166, inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 74)).isValid ()) {
    uint32_t variant_2255 = GGS_uint (uint32_t (65536U)).substract_operation (var_unicodeValue_166, inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 74)).uintValue () ;
    bool loop_2255 = true ;
    while (loop_2255) {
      loop_2255 = GGS_bool (ComparisonKind::lowerThan, var_unicodeValue_166.objectCompare (GGS_uint (uint32_t (65536U)))).isValid () ;
      if (loop_2255) {
        loop_2255 = GGS_bool (ComparisonKind::lowerThan, var_unicodeValue_166.objectCompare (GGS_uint (uint32_t (65536U)))).boolValue () ;
      }
      if (loop_2255 && (0 == variant_2255)) {
        loop_2255 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("xml_parsing_semantics.galgas", 74)) ;
      }
      if (loop_2255) {
        variant_2255 -= 1 ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = var_unicodeValue_166.getter_isUnicodeValueAssigned (SOURCE_FILE ("xml_parsing_semantics.galgas", 76)).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GGS_char var_c_2379 = GGS_char::class_func_unicodeCharacterWithUnsigned (var_unicodeValue_166  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 77)) ;
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = var_c_2379.getter_isUnicodePunctuation (SOURCE_FILE ("xml_parsing_semantics.galgas", 78)).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                {
                routine_print_3F_ (GGS_string ("  - ").add_operation (var_unicodeValue_166.getter_hexString (SOURCE_FILE ("xml_parsing_semantics.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 79)).add_operation (GGS_string (", name: '"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 79)).add_operation (var_c_2379.getter_unicodeName (SOURCE_FILE ("xml_parsing_semantics.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 79)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 79)) ;
                }
              }
            }
          }
        }
        var_unicodeValue_166.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 82)) ;
      }
    }
  }
  {
  routine_print_3F_ (GGS_string ("---- Unicode Command\n"), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 85)) ;
  }
  var_unicodeValue_166 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint (uint32_t (65536U)).substract_operation (var_unicodeValue_166, inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 87)).isValid ()) {
    uint32_t variant_2668 = GGS_uint (uint32_t (65536U)).substract_operation (var_unicodeValue_166, inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 87)).uintValue () ;
    bool loop_2668 = true ;
    while (loop_2668) {
      loop_2668 = GGS_bool (ComparisonKind::lowerThan, var_unicodeValue_166.objectCompare (GGS_uint (uint32_t (65536U)))).isValid () ;
      if (loop_2668) {
        loop_2668 = GGS_bool (ComparisonKind::lowerThan, var_unicodeValue_166.objectCompare (GGS_uint (uint32_t (65536U)))).boolValue () ;
      }
      if (loop_2668 && (0 == variant_2668)) {
        loop_2668 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("xml_parsing_semantics.galgas", 87)) ;
      }
      if (loop_2668) {
        variant_2668 -= 1 ;
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = var_unicodeValue_166.getter_isUnicodeValueAssigned (SOURCE_FILE ("xml_parsing_semantics.galgas", 89)).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            GGS_char var_c_2792 = GGS_char::class_func_unicodeCharacterWithUnsigned (var_unicodeValue_166  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 90)) ;
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = var_c_2792.getter_isUnicodeCommand (SOURCE_FILE ("xml_parsing_semantics.galgas", 91)).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                {
                routine_print_3F_ (GGS_string ("  - ").add_operation (var_unicodeValue_166.getter_hexString (SOURCE_FILE ("xml_parsing_semantics.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 92)).add_operation (GGS_string (", name: '"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 92)).add_operation (var_c_2792.getter_unicodeName (SOURCE_FILE ("xml_parsing_semantics.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 92)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 92)) ;
                }
              }
            }
          }
        }
        var_unicodeValue_166.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 95)) ;
      }
    }
  }
  {
  routine_print_3F_ (GGS_string ("---- Unicode Mark\n"), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 98)) ;
  }
  var_unicodeValue_166 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint (uint32_t (65536U)).substract_operation (var_unicodeValue_166, inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 100)).isValid ()) {
    uint32_t variant_3074 = GGS_uint (uint32_t (65536U)).substract_operation (var_unicodeValue_166, inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 100)).uintValue () ;
    bool loop_3074 = true ;
    while (loop_3074) {
      loop_3074 = GGS_bool (ComparisonKind::lowerThan, var_unicodeValue_166.objectCompare (GGS_uint (uint32_t (65536U)))).isValid () ;
      if (loop_3074) {
        loop_3074 = GGS_bool (ComparisonKind::lowerThan, var_unicodeValue_166.objectCompare (GGS_uint (uint32_t (65536U)))).boolValue () ;
      }
      if (loop_3074 && (0 == variant_3074)) {
        loop_3074 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("xml_parsing_semantics.galgas", 100)) ;
      }
      if (loop_3074) {
        variant_3074 -= 1 ;
        GalgasBool test_14 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_14) {
          test_14 = var_unicodeValue_166.getter_isUnicodeValueAssigned (SOURCE_FILE ("xml_parsing_semantics.galgas", 102)).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
            GGS_char var_c_3198 = GGS_char::class_func_unicodeCharacterWithUnsigned (var_unicodeValue_166  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 103)) ;
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              test_15 = var_c_3198.getter_isUnicodeMark (SOURCE_FILE ("xml_parsing_semantics.galgas", 104)).boolEnum () ;
              if (GalgasBool::boolTrue == test_15) {
                {
                routine_print_3F_ (GGS_string ("  - ").add_operation (var_unicodeValue_166.getter_hexString (SOURCE_FILE ("xml_parsing_semantics.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 105)).add_operation (GGS_string (", name: '"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 105)).add_operation (var_c_3198.getter_unicodeName (SOURCE_FILE ("xml_parsing_semantics.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 105)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 105)) ;
                }
              }
            }
          }
        }
        var_unicodeValue_166.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 108)) ;
      }
    }
  }
  {
  routine_print_3F_ (GGS_string ("---- Done.\n"), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_semantics.galgas", 111)) ;
  }
}


