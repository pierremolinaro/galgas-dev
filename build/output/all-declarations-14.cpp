#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                        GGS__5B_formalParameterAST_5D_ & outArgument_outFormalParameterList,
                                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 43)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_2381 ;
      GGS_formalArgumentPassingModeAST var_formalParameterPassingMode_2432 ;
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_selector_2381 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 50)) ;
        switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
        case 1: {
          var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 52)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 54)) ;
          var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 55)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 57)) ;
          var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 58)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 73)) ;
        var_selector_2381 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 74)) ;
        var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 75)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 77)) ;
        var_selector_2381 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 78)) ;
        var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 79)) ;
      } break ;
      case 4: {
        var_selector_2381 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 81)) ;
        var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 82)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 84)) ;
        var_selector_2381 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 85)) ;
        var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 86)) ;
      } break ;
      case 6: {
        var_selector_2381 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 88)) ;
        var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 89)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 91)) ;
        var_selector_2381 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 92)) ;
        var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 93)) ;
      } break ;
      case 8: {
        var_selector_2381 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 95)) ;
        var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 96)) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterTypeName_3935 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_formalParameterTypeName_3935, inCompiler) ;
      GGS_lstring var_formalParameterName_3996 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 99)) ;
      GGS_bool var_isUnused_4029 = var_formalParameterName_3996.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 100)) ;
      outArgument_outFormalParameterList.plusPlusAssignOperation (GGS_formalParameterAST::init_21__21__21__21__21_ (var_selector_2381, var_formalParameterPassingMode_2432, var_formalParameterTypeName_3935, var_formalParameterName_3996, var_isUnused_4029, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 101)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 109)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 112)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 43)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 50)) ;
        switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 54)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 57)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 73)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 77)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 81)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 84)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 88)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 91)) ;
      } break ;
      case 8: {
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 99)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 109)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 112)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                               GGS__5B_actualParameterAST_5D_ & outArgument_outActualParameterList,
                                                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 121)) ;
  outArgument_outActualParameterList = GGS__5B_actualParameterAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_ (ioArgument_ioDeclarations, outArgument_outActualParameterList, inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 128)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 121)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 128)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS__5B_actualParameterAST_5D_ & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_selector_5355 ;
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
    var_selector_5355 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 142)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 144)) ;
    var_selector_5355 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 145)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 148)) ;
    GGS__5B_lstring_5D_ var_poisonedVarNameList_5509 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_5509, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputSingleJokerActualParameterAST::init_21__21_ (var_selector_5355, var_poisonedVarNameList_5509, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 150)) ;
  } break ;
  case 2: {
    GGS_lbigint var_count_5662 = inCompiler->synthetizedAttribute_bigintValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 152)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 153)) ;
    GGS_uint var_n_5689 = var_count_5662.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 154)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_selector_5355.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("\?")) ;
        inCompiler->emitSemanticError (var_selector_5355.readProperty_location (), GGS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 156)) ;
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, var_n_5689.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_count_5662.readProperty_location (), GGS_string ("the count value should be > 0"), fixItArray3  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 159)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      if (var_n_5689.isValid ()) {
        uint32_t variant_5925 = var_n_5689.uintValue () ;
        bool loop_5925 = true ;
        while (loop_5925) {
          loop_5925 = GGS_bool (ComparisonKind::greaterThan, var_n_5689.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
          if (loop_5925) {
            loop_5925 = GGS_bool (ComparisonKind::greaterThan, var_n_5689.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
          }
          if (loop_5925 && (0 == variant_5925)) {
            loop_5925 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 161)) ;
          }
          if (loop_5925) {
            variant_5925 -= 1 ;
            ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputJokerActualParameterAST::init_21__21_ (var_selector_5355.readProperty_location (), var_n_5689, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 163)) ;
            var_n_5689.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 164)) ;
          }
        }
      }
    }
  } break ;
  case 3: {
    GGS_lstring var_inputActualParameterName_6117 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 168)) ;
    GGS__5B_lstring_5D_ var_poisonedVarNameList_6175 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_6175, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputActualExistingVariableParameterAST::init_21__21__21_ (var_selector_5355, var_inputActualParameterName_6117, var_poisonedVarNameList_6175, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 170)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 176)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 177)) ;
    GGS_lstring var_inputActualParameterName_6448 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 178)) ;
    GGS__5B_lstring_5D_ var_poisonedVarNameList_6506 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_6506, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputActualSelfPropertyParameterAST::init_21__21__21_ (var_selector_5355, var_inputActualParameterName_6448, var_poisonedVarNameList_6506, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 180)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 186)) ;
    GGS__5B_lstring_5D_ var_poisonedVarNameList_6763 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_6763, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputActualSelfParameterAST::init_21__21__21_ (var_selector_5355, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 190)), var_poisonedVarNameList_6763, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 188)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 194)) ;
    GGS_lstring var_declarationTypeName_6987 ;
    switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
    case 1: {
      var_declarationTypeName_6987 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 197)) ;
    } break ;
    case 2: {
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_6987, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_inputActualParameterName_7172 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 201)) ;
    GGS__5B_lstring_5D_ var_poisonedVarNameList_7230 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_7230, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputActualNewVariableParameterAST::init_21__21__21__21_ (var_selector_5355, var_declarationTypeName_6987, var_inputActualParameterName_7172, var_poisonedVarNameList_7230, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 203)) ;
  } break ;
  case 7: {
    GGS_lstring var_declarationTypeName_7541 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_7541, inCompiler) ;
    GGS_lstring var_inputActualParameterName_7587 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 211)) ;
    GGS__5B_lstring_5D_ var_poisonedVarNameList_7645 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_7645, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputActualNewVariableParameterAST::init_21__21__21__21_ (var_selector_5355, var_declarationTypeName_7541, var_inputActualParameterName_7587, var_poisonedVarNameList_7645, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 213)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 220)) ;
    GGS_lstring var_declarationTypeName_7924 ;
    switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
    case 1: {
      var_declarationTypeName_7924 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 223)) ;
    } break ;
    case 2: {
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_7924, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_inputActualParameterName_8109 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 227)) ;
    GGS_bool var_markedAsUnused_8145 = var_inputActualParameterName_8109.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 228)) ;
    GGS__5B_lstring_5D_ var_poisonedVarNameList_8235 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_8235, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputActualNewConstantParameterAST::init_21__21__21__21__21_ (var_selector_5355, var_declarationTypeName_7924, var_inputActualParameterName_8109, var_markedAsUnused_8145, var_poisonedVarNameList_8235, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 230)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 142)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 144)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 148)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 152)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 153)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 168)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 176)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 177)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 178)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 186)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 194)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 201)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 7: {
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 211)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 220)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 227)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS__5B_actualParameterAST_5D_ & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_selector_8879 ;
  switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
  case 1: {
    var_selector_8879 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 248)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 250)) ;
    var_selector_8879 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 251)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
  case 1: {
    GGS_lstring var_outputInputActualParameterName_9018 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 254)) ;
    GGS__5B_lstring_5D_ var_structAttributeList_9060 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 258)) ;
        GGS_lstring var_structAttributeName_9160 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 259)) ;
        var_structAttributeList_9060.plusPlusAssignOperation (var_structAttributeName_9160  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 260)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_outputInputActualParameterAST::init_21__21__21_ (var_selector_8879, var_outputInputActualParameterName_9018, var_structAttributeList_9060, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 262)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_from COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 268)) ;
    GGS_semanticExpressionAST var_initializerCall_9466 ;
    nt_expression_ (ioArgument_ioDeclarations, var_initializerCall_9466, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_outputInputJokerParameterAST::init_21__21_ (var_selector_8879, var_initializerCall_9466, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 270)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 272)) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_outputInputSelfParameterAST::init_21_ (var_selector_8879, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 273)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 248)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 250)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 254)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 258)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 259)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_from COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 268)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 272)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS__5B_actualParameterAST_5D_ & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_selector_10069 ;
  switch (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler)) {
  case 1: {
    var_selector_10069 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 285)) ;
  } break ;
  case 2: {
    var_selector_10069 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 290)) ;
  } break ;
  default:
    break ;
  }
  GGS_semanticExpressionAST var_e_10274 ;
  nt_expression_ (ioArgument_ioDeclarations, var_e_10274, inCompiler) ;
  GGS_location var_endOfExpressionLocation_10295 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 293)) ;
  ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_outputActualParameterAST::init_21__21__21_ (var_selector_10069, var_e_10274, var_endOfExpressionLocation_10295, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 294)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 285)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                 GGS__5B_formalInputParameterAST_5D_ & outArgument_outFormalInputParameterList,
                                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 308)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_10990 ;
      switch (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler)) {
      case 1: {
        var_selector_10990 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 314)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 316)) ;
        var_selector_10990 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 317)) ;
      } break ;
      case 3: {
        var_selector_10990 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 319)) ;
      } break ;
      default:
        break ;
      }
      GGS_bool var_isConstant_11173 ;
      switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 323)) ;
        var_isConstant_11173 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 326)) ;
        var_isConstant_11173 = GGS_bool (true) ;
      } break ;
      case 3: {
        var_isConstant_11173 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterTypeName_11400 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_formalParameterTypeName_11400, inCompiler) ;
      GGS_lstring var_formalParameterName_11461 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 332)) ;
      GGS_bool var_isUnused_11494 = var_formalParameterName_11461.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 333)) ;
      outArgument_outFormalInputParameterList.plusPlusAssignOperation (GGS_formalInputParameterAST::init_21__21__21__21__21_ (var_selector_10990, var_formalParameterTypeName_11400, var_formalParameterName_11461, var_isUnused_11494, var_isConstant_11173, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 334)) ;
      if (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 342)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 345)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 308)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 314)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 316)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 323)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 326)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 332)) ;
      if (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 342)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 345)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i6_ (GGS__5B_lstring_5D_ & outArgument_outPoisonedVarNameList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i6_indexing (Lexique_galgasScanner_34_ * /* inCompiler */) {
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_ (GGS__5B_lstring_5D_ & outArgument_outPoisonedVarNameList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 358)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 359)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_varName_12242 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 361)) ;
    outArgument_outPoisonedVarNameList.plusPlusAssignOperation (var_varName_12242  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 362)) ;
    if (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 364)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 366)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 358)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 359)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 361)) ;
    if (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 364)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 366)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  GGS__5B_semanticInstructionAST_5D_ & outArgument_outInstructionsList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticInstructionAST var_instruction_3275 ;
      nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_3275, inCompiler) ;
      outArgument_outInstructionsList.plusPlusAssignOperation (var_instruction_3275  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 61)) ;
      if (select_galgas_34_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 64)) ;
        } break ;
        case 2: {
          GGS_string var_separator_3398 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 66)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_3398.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 67)).operator_not (SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 67)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 68)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 68)) ;
            }
          }
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_guard COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 75)) ;
    GGS_location var_instructionLocation_3663 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 76)) ;
    GGS__5B_CommaSeparatedExpressionElement_5D_ var_testExpression_3759 ;
    nt_comma_5F_separated_5F_expression_ (ioArgument_ioDeclarations, var_testExpression_3759, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 78)) ;
    GGS__5B_semanticInstructionAST_5D_ var_else_5F_instructionList_3846 ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_else_5F_instructionList_3846, inCompiler) ;
    GGS_location var_endOf_5F_else_5F_branch_3878 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 80)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 81)) ;
    GGS__5B_semanticInstructionAST_5D_ var_then_5F_instructionList_3983 ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_then_5F_instructionList_3983, inCompiler) ;
    GGS_location var_endOf_5F_then_5F_branch_4015 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 83)) ;
    GGS_ifInstructionAST var_instruction_4060 = GGS_ifInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_3663, var_testExpression_3759, var_then_5F_instructionList_3983, var_endOf_5F_then_5F_branch_4015, var_else_5F_instructionList_3846, var_endOf_5F_else_5F_branch_3878, inCompiler COMMA_HERE) ;
    outArgument_outInstructionsList.plusPlusAssignOperation (var_instruction_4060  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 92)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_semantic_5F_instruction_indexing (inCompiler) ;
      if (select_galgas_34_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 64)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_guard COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 75)) ;
    nt_comma_5F_separated_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 78)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 81)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 101)) ;
  GGS_bool var_isUsefull_4658 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 105)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_4658.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 107)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 107)) ;
        }
      }
      var_isUsefull_4658 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_functionName_4860 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 111)) ;
  GGS__5B_formalInputParameterAST_5D_ var_formalInputParameterList_4989 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_4989, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 113)) ;
  GGS_lstring var_resultTypeName_5070 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_5070, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 115)) ;
  GGS__5B_semanticInstructionAST_5D_ var_functionInstructionList_5176 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_functionInstructionList_5176, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 117)) ;
  GGS_location var_endOfFunctionInstructionList_5217 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 118)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_functionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21_ (GGS_bool (false), var_functionName_4860, var_formalInputParameterList_4989, var_resultTypeName_5070, var_isUsefull_4658, var_functionInstructionList_5176, var_endOfFunctionInstructionList_5217, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 119)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 101)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 105)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 111)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 113)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 115)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 117)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 135)) ;
  GGS_bool var_isUsefull_5763 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 139)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_5763.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 141)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 141)) ;
        }
      }
      var_isUsefull_5763 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_functionName_5965 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 145)) ;
  GGS__5B_formalInputParameterAST_5D_ var_formalInputParameterList_6094 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_6094, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 147)) ;
  GGS_lstring var_resultTypeName_6175 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_6175, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 149)) ;
  GGS__5B_semanticInstructionAST_5D_ var_functionInstructionList_6281 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_functionInstructionList_6281, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 151)) ;
  GGS_location var_endOfFunctionInstructionList_6322 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 152)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_functionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21_ (GGS_bool (false), var_functionName_5965, var_formalInputParameterList_6094, var_resultTypeName_6175, var_isUsefull_5763, var_functionInstructionList_6281, var_endOfFunctionInstructionList_6322, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 153)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 135)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 139)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 145)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 147)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 149)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 171)) ;
  GGS_bool var_isUsefull_7031 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 175)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_7031.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 177)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 177)) ;
        }
      }
      var_isUsefull_7031 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mActionName_7233 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 181)) ;
  GGS__5B_formalInputParameterAST_5D_ var_formalInputParameterList_7361 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_7361, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 183)) ;
  GGS_lstring var_resultTypeName_7442 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_7442, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_externFunctionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc (GGS_bool (false), var_mActionName_7233, var_formalInputParameterList_7361, var_resultTypeName_7442, var_isUsefull_7031, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 185)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 171)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 175)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 181)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 183)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 205)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 206)) ;
  switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 208)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 209)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_lstring var_actualParameterTypeName_8607 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_8607, inCompiler) ;
    GGS_lstring var_actualParameterName_8657 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 212)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::init_21__21_ (var_actualParameterTypeName_8607, var_actualParameterName_8657, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 215)) ;
    GGS_lstring var_actualParameterTypeName_8880 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_8880, inCompiler) ;
    GGS_lstring var_actualParameterName_8930 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 217)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::init_21__21_ (var_actualParameterTypeName_8880, var_actualParameterName_8930, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_lstring var_actualParameterName_9111 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 220)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar::init_21_ (var_actualParameterName_9111, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 223)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 205)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 206)) ;
  switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 208)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 212)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 215)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 217)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 220)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 223)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS__5B_actualInputParameterAST_5D_ & outArgument_outActualInputParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GGS__5B_actualInputParameterAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 233)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_10 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 236)) ;
        GGS_lstring var_selector_9671 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 237)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 238)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_9671, GGS_inputParameterAnonymousVariable::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 239)) ;
      } break ;
      case 2: {
        GGS_lstring var_selector_9835 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 241)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 242)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_9835, GGS_inputParameterAnonymousVariable::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 243)) ;
      } break ;
      case 3: {
        GGS_lstring var_selector_9990 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 245)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 246)) ;
        GGS_lstring var_actualParameterTypeName_10039 ;
        switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_10039 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 249)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_10039, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_10259 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 253)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_9990, GGS_inputParameterDeclaredVariable::init_21__21_ (var_actualParameterTypeName_10039, var_actualParameterName_10259, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 254)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 258)) ;
        GGS_lstring var_selector_10478 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 259)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 260)) ;
        GGS_lstring var_actualParameterTypeName_10536 ;
        switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_10536 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 263)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_10536, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_10756 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 267)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_10478, GGS_inputParameterDeclaredVariable::init_21__21_ (var_actualParameterTypeName_10536, var_actualParameterName_10756, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 268)) ;
      } break ;
      case 5: {
        GGS_lstring var_selector_10976 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 272)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 273)) ;
        GGS_lstring var_actualParameterTypeName_11025 ;
        switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_11025 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 276)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_11025, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_11246 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 280)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_10976, GGS_inputParameterDeclaredConstant::init_21__21_ (var_actualParameterTypeName_11025, var_actualParameterName_11246, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 281)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 285)) ;
        GGS_lstring var_selector_11465 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 286)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 287)) ;
        GGS_lstring var_actualParameterTypeName_11523 ;
        switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_11523 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 290)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_11523, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_11744 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 294)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_11465, GGS_inputParameterDeclaredConstant::init_21__21_ (var_actualParameterTypeName_11523, var_actualParameterName_11744, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 295)) ;
      } break ;
      case 7: {
        GGS_lstring var_selector_11964 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 299)) ;
        GGS_lstring var_actualParameterName_12003 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 300)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_11964, GGS_inputParameterVariable::init_21_ (var_actualParameterName_12003, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 301)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 303)) ;
        GGS_lstring var_selector_12164 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 304)) ;
        GGS_lstring var_actualParameterName_12212 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 305)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_12164, GGS_inputParameterVariable::init_21_ (var_actualParameterName_12212, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 306)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_9 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 309)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 311)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 233)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_10 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 236)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 238)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 241)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 242)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 245)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 246)) ;
        switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 253)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 258)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 260)) ;
        switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 267)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 272)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 273)) ;
        switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 280)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 285)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 287)) ;
        switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 294)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 299)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 300)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 303)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 305)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_9 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 309)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 311)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 29)) ;
  GGS_lstring var_methodName_1635 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 30)) ;
  GGS_location var_instructionLocation_1655 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 31)) ;
  GGS__5B_actualParameterAST_5D_ var_actualParameterList_1783 ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_1783, inCompiler) ;
  outArgument_outInstruction = GGS_superMethodCallInstructionAST::init_21__21__21_ (var_instructionLocation_1655, var_methodName_1635, var_actualParameterList_1783, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 30)) ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS__5B_fixitElementAST_5D_ & outArgument_outFixitListAST,
                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GGS__5B_fixitElementAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas4", 51)) ;
    GGS_bool var_hasFixItRemove_2488 = GGS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_17 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_remove COMMA_SOURCE_FILE ("instruction-error.galgas4", 55)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_hasFixItRemove_2488.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GenericArray <FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 57)), GGS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas4", 57)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          outArgument_outFixitListAST.plusPlusAssignOperation (GGS_fixitElementAST::class_func_fixItRemove (SOURCE_FILE ("instruction-error.galgas4", 59))  COMMA_SOURCE_FILE ("instruction-error.galgas4", 59)) ;
          var_hasFixItRemove_2488 = GGS_bool (true) ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas4", 63)) ;
        GGS_location var_errorLocation_2810 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 64)) ;
        GGS_semanticExpressionAST var_expression_2911 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_2911, inCompiler) ;
        outArgument_outFixitListAST.plusPlusAssignOperation (GGS_fixitElementAST::class_func_fixItReplace (var_expression_2911, var_errorLocation_2810  COMMA_SOURCE_FILE ("instruction-error.galgas4", 66))  COMMA_SOURCE_FILE ("instruction-error.galgas4", 66)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas4", 68)) ;
        GGS_location var_errorLocation_3065 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 69)) ;
        GGS_semanticExpressionAST var_expression_3166 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_3166, inCompiler) ;
        outArgument_outFixitListAST.plusPlusAssignOperation (GGS_fixitElementAST::class_func_fixItInsertAfter (var_expression_3166, var_errorLocation_3065  COMMA_SOURCE_FILE ("instruction-error.galgas4", 71))  COMMA_SOURCE_FILE ("instruction-error.galgas4", 71)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas4", 73)) ;
        GGS_location var_errorLocation_3325 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 74)) ;
        GGS_semanticExpressionAST var_expression_3426 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_3426, inCompiler) ;
        outArgument_outFixitListAST.plusPlusAssignOperation (GGS_fixitElementAST::class_func_fixItInsertBefore (var_expression_3426, var_errorLocation_3325  COMMA_SOURCE_FILE ("instruction-error.galgas4", 76))  COMMA_SOURCE_FILE ("instruction-error.galgas4", 76)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas4", 79)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas4", 51)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_17 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_remove COMMA_SOURCE_FILE ("instruction-error.galgas4", 55)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas4", 63)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas4", 68)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas4", 73)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas4", 79)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas4", 88)) ;
  GGS_location var_instructionLocation_3861 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 89)) ;
  GGS_semanticExpressionAST var_mReceiverExpression_3962 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mReceiverExpression_3962, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas4", 91)) ;
  GGS_semanticExpressionAST var_mErrorExpression_4055 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mErrorExpression_4055, inCompiler) ;
  GGS__5B_lstring_5D_ var_builtVariableList_4081 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas4", 96)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_builtVariableName_4186 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas4", 98)) ;
      var_builtVariableList_4081.plusPlusAssignOperation (var_builtVariableName_4186  COMMA_SOURCE_FILE ("instruction-error.galgas4", 99)) ;
      if (select_galgas_34_InstructionsSyntax_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas4", 101)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS__5B_fixitElementAST_5D_ var_fixitListAST_4355 ;
  nt_issue_5F_fixit_ (ioArgument_ioDeclarations, var_fixitListAST_4355, inCompiler) ;
  outArgument_outInstruction = GGS_errorInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_3861, var_mReceiverExpression_3962, var_mErrorExpression_4055, var_builtVariableList_4081, var_fixitListAST_4355, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas4", 88)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas4", 91)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas4", 96)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas4", 98)) ;
      if (select_galgas_34_InstructionsSyntax_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas4", 101)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 28)) ;
  GGS_location var_instructionLocation_1611 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 30)) ;
  GGS_semanticExpressionAST var_expression_1721 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_1721, inCompiler) ;
  outArgument_outInstruction = GGS_selfPlusEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_1611, var_expression_1721, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 30)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 42)) ;
  GGS_location var_instructionLocation_2116 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 44)) ;
  GGS_semanticExpressionAST var_expression_2226 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_2226, inCompiler) ;
  outArgument_outInstruction = GGS_selfMinusEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_2116, var_expression_2226, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 44)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 56)) ;
  GGS_location var_instructionLocation_2622 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 58)) ;
  GGS_semanticExpressionAST var_expression_2732 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_2732, inCompiler) ;
  outArgument_outInstruction = GGS_selfMulEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_2622, var_expression_2732, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 58)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 70)) ;
  GGS_location var_instructionLocation_3126 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 72)) ;
  GGS_semanticExpressionAST var_expression_3236 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_3236, inCompiler) ;
  outArgument_outInstruction = GGS_selfDivEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_3126, var_expression_3236, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 72)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (ioArgument_ioDeclarations, GGS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas4", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 36)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (ioArgument_ioDeclarations, GGS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas4", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 36)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                              const GGS_bool constinArgument_inHasSelfPrefix,
                                                                                                                                              GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_receiverName_2525 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas4", 45)) ;
  GGS_location var_instructionLocation_2547 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 46)) ;
  GGS__5B_lstring_5D_ var_propertyList_2603 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 50)) ;
      GGS_lstring var_attributeName_2678 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas4", 51)) ;
      var_propertyList_2603.plusPlusAssignOperation (var_attributeName_2678  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 52)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 56)) ;
    GGS_semanticExpressionAST var_expression_2834 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_2834, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, GGS_opAssignmentOperator::class_func_minusAssign (SOURCE_FILE ("instruction-concat.galgas4", 63)), var_expression_2834, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 67)) ;
    GGS_semanticExpressionAST var_expression_3136 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_3136, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, GGS_opAssignmentOperator::class_func_plusAssign (SOURCE_FILE ("instruction-concat.galgas4", 74)), var_expression_3136, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 78)) ;
    GGS_semanticExpressionAST var_expression_3438 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_3438, inCompiler) ;
    outArgument_outInstruction = GGS_plusPlusEqualElementInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, var_expression_3438, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 88)) ;
    GGS_semanticExpressionAST var_expression_3720 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_3720, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, GGS_opAssignmentOperator::class_func_mulAssign (SOURCE_FILE ("instruction-concat.galgas4", 95)), var_expression_3720, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 99)) ;
    GGS_semanticExpressionAST var_expression_4020 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_4020, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, GGS_opAssignmentOperator::class_func_andAssign (SOURCE_FILE ("instruction-concat.galgas4", 106)), var_expression_4020, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 110)) ;
    GGS_semanticExpressionAST var_expression_4320 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_4320, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, GGS_opAssignmentOperator::class_func_orAssign (SOURCE_FILE ("instruction-concat.galgas4", 117)), var_expression_4320, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 121)) ;
    GGS_semanticExpressionAST var_expression_4619 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_4619, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, GGS_opAssignmentOperator::class_func_xorAssign (SOURCE_FILE ("instruction-concat.galgas4", 128)), var_expression_4619, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 132)) ;
    GGS_semanticExpressionAST var_expression_4919 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_4919, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, GGS_opAssignmentOperator::class_func_divAssign (SOURCE_FILE ("instruction-concat.galgas4", 139)), var_expression_4919, inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    GGS__5B_actualParameterAST_5D_ var_actualParameterList_5235 ;
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_5235, inCompiler) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = constinArgument_inHasSelfPrefix.boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, var_propertyList_2603.getter_count (SOURCE_FILE ("instruction-concat.galgas4", 145)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2547, GGS_selfInExpressionAST::init_21_ (var_instructionLocation_2547, inCompiler COMMA_HERE), var_receiverName_2525, var_actualParameterList_5235, inCompiler COMMA_HERE) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GGS_lstring var_methodName_5595 ;
          {
          var_propertyList_2603.setter_removeLast (var_methodName_5595, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 153)) ;
          }
          GGS_semanticExpressionAST var_receiverExpression_5644 = GGS_selfInExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 154)), inCompiler COMMA_HERE) ;
          var_receiverExpression_5644 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_receiverName_2525.readProperty_location (), var_receiverExpression_5644, var_receiverName_2525, inCompiler COMMA_HERE) ;
          UpEnumerator__5B_lstring_5D_ enumerator_5850 (var_propertyList_2603) ;
          while (enumerator_5850.hasCurrentObject ()) {
            var_receiverExpression_5644 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (enumerator_5850.current (HERE).readProperty_location (), var_receiverExpression_5644, enumerator_5850.current (HERE), inCompiler COMMA_HERE) ;
            enumerator_5850.gotoNextObject () ;
          }
          outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2547, var_receiverExpression_5644, var_methodName_5595, var_actualParameterList_5235, inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, var_propertyList_2603.getter_count (SOURCE_FILE ("instruction-concat.galgas4", 166)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outInstruction = GGS_procCallInstructionAST::init_21__21__21_ (var_receiverName_2525.readProperty_location (), var_receiverName_2525, var_actualParameterList_5235, inCompiler COMMA_HERE) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GGS_lstring var_methodName_6432 ;
        {
        var_propertyList_2603.setter_removeLast (var_methodName_6432, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 173)) ;
        }
        GGS_semanticExpressionAST var_receiverExpression_6479 = GGS_varInExpressionAST::init_21_ (var_receiverName_2525, inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_6556 (var_propertyList_2603) ;
        while (enumerator_6556.hasCurrentObject ()) {
          var_receiverExpression_6479 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (enumerator_6556.current (HERE).readProperty_location (), var_receiverExpression_6479, enumerator_6556.current (HERE), inCompiler COMMA_HERE) ;
          enumerator_6556.gotoNextObject () ;
        }
        outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2547, var_receiverExpression_6479, var_methodName_6432, var_actualParameterList_5235, inCompiler COMMA_HERE) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas4", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 50)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas4", 51)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 56)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 67)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 78)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 88)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 99)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 110)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 121)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 132)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 9: {
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas4", 38)) ;
  GGS_location var_instructionLocation_2048 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas4", 39)) ;
  GGS_semanticExpressionAST var_mReceiverExpression_2149 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mReceiverExpression_2149, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas4", 41)) ;
  GGS_semanticExpressionAST var_mWarningExpression_2242 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mWarningExpression_2242, inCompiler) ;
  GGS__5B_fixitElementAST_5D_ var_fixitListAST_2323 ;
  nt_issue_5F_fixit_ (ioArgument_ioDeclarations, var_fixitListAST_2323, inCompiler) ;
  outArgument_outInstruction = GGS_warningInstructionAST::init_21__21__21__21_ (var_instructionLocation_2048, var_mReceiverExpression_2149, var_mWarningExpression_2242, var_fixitListAST_2323, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas4", 38)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas4", 41)) ;
  nt_expression_indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_comma_5F_separated_5F_expression_i17_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    GGS__5B_CommaSeparatedExpressionElement_5D_ & outArgument_outExpressionList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS__5B_CommaSeparatedExpressionElement_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_23 (inCompiler)) {
    case 1: {
      GGS_lstring var_varName_1691 ;
      GGS_bool var_isConstant_1717 ;
      switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 34)) ;
        var_varName_1691 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 35)) ;
        var_isConstant_1717 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 38)) ;
        var_isConstant_1717 = GGS_bool (true) ;
        switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
        case 1: {
          var_varName_1691 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 41)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 43)) ;
          var_varName_1691 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 44)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 47)) ;
      GGS_semanticExpressionAST var_expression_2078 ;
      nt_expression_5F_or_ (ioArgument_ioDeclarations, var_expression_2078, inCompiler) ;
      GGS_location var_endOfReceiverExpression_2102 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 49)) ;
      switch (select_galgas_34_InstructionsSyntax_26 (inCompiler)) {
      case 1: {
        outArgument_outExpressionList.plusPlusAssignOperation (GGS_CommaSeparatedExpressionElement::init_21_ (GGS_ifExpressionKind::class_func_letVarExp (var_varName_1691, var_isConstant_1717, var_expression_2078, var_endOfReceiverExpression_2102, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 56))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 51)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 51)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 59)) ;
        GGS_lstring var_typeName_2473 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_2473, inCompiler) ;
        outArgument_outExpressionList.plusPlusAssignOperation (GGS_CommaSeparatedExpressionElement::init_21_ (GGS_ifExpressionKind::class_func_letVarExp (var_varName_1691, var_isConstant_1717, var_expression_2078, var_endOfReceiverExpression_2102, var_typeName_2473  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 61)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 61)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      GGS_semanticExpressionAST var_expression_2787 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_2787, inCompiler) ;
      outArgument_outExpressionList.plusPlusAssignOperation (GGS_CommaSeparatedExpressionElement::init_21_ (GGS_ifExpressionKind::class_func_regularExp (var_expression_2787, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 71))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 71)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 71)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 74)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_comma_5F_separated_5F_expression_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_23 (inCompiler)) {
    case 1: {
      switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 34)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 35)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 38)) ;
        switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 41)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 43)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 47)) ;
      nt_expression_5F_or_indexing (inCompiler) ;
      switch (select_galgas_34_InstructionsSyntax_26 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 59)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 74)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 112)) ;
  GGS_location var_instructionLocation_5582 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 113)) ;
  GGS_lstring var_grammarComponentName_5651 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 114)) ;
  GGS_lstring var_labelName_5727 ;
  switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
    var_labelName_5727 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 117)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 119)) ;
    var_labelName_5727 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 120)) ;
  } break ;
  default:
    break ;
  }
  GGS__5B_actualParameterAST_5D_ var_actualParameterList_5939 ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_5939, inCompiler) ;
  nt_grammar_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instructionLocation_5582, var_actualParameterList_5939, var_grammarComponentName_5651, var_labelName_5727, outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 112)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 114)) ;
  switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 119)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 120)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
  nt_grammar_5F_instruction_5F_core_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i19_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  const GGS_location constinArgument_inInstructionLocation,
                                                                                                                  const GGS__5B_actualParameterAST_5D_ constinArgument_actualParameterList,
                                                                                                                  const GGS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GGS_lstring constinArgument_inLabelName,
                                                                                                                  GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 134)) ;
  GGS_semanticExpressionAST var_sourceExpression_6722 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_6722, inCompiler) ;
  GGS_location var_endOfSourceExpression_6748 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 136)) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_6908 ;
  switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_6908 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 142)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_6908, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_grammarInFileInstructionAST::init_21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_6722, var_endOfSourceExpression_6748, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_6908, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 134)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 142)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i20_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  const GGS_location constinArgument_inInstructionLocation,
                                                                                                                  const GGS__5B_actualParameterAST_5D_ constinArgument_actualParameterList,
                                                                                                                  const GGS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GGS_lstring constinArgument_inLabelName,
                                                                                                                  GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 164)) ;
  GGS_semanticExpressionAST var_sourceExpression_8117 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_8117, inCompiler) ;
  GGS_location var_endOfSourceExpression_8153 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 166)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 167)) ;
  GGS_semanticExpressionAST var_nameExpression_8255 ;
  nt_expression_ (ioArgument_ioDeclarations, var_nameExpression_8255, inCompiler) ;
  GGS_location var_endOfNameExpression_8289 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 169)) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_8438 ;
  switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_8438 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 175)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_8438, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_grammarInStringInstructionAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_8117, var_endOfSourceExpression_8153, var_nameExpression_8255, var_endOfNameExpression_8289, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_8438, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 164)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 167)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 175)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 44)) ;
  GGS_location var_instructionLocation_2351 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 47)) ;
  GGS_semanticExpressionAST var_variantExpression_2476 ;
  nt_expression_ (ioArgument_ioDeclarations, var_variantExpression_2476, inCompiler) ;
  GGS_location var_endOfVariantExpression_2503 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 50)) ;
  GGS__5B_semanticInstructionAST_5D_ var_firstInstructions_2641 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_firstInstructions_2641, inCompiler) ;
  GGS_location var_endOfFirstInstructions_2676 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 55)) ;
  GGS_semanticExpressionAST var_loopExpression_2792 ;
  nt_expression_ (ioArgument_ioDeclarations, var_loopExpression_2792, inCompiler) ;
  GGS_location var_endOfLoopExpression_2816 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 58)) ;
  GGS__5B_semanticInstructionAST_5D_ var_secondInstructions_2944 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_secondInstructions_2944, inCompiler) ;
  GGS_location var_endOfSecondInstructions_2972 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 61)) ;
  GGS_location var_endOfLoopInstruction_3031 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 62)) ;
  outArgument_outInstruction = GGS_loopInstructionWithVariantAST::init_21__21__21__21__21__21__21__21__21__21_ (var_instructionLocation_2351, var_variantExpression_2476, var_endOfVariantExpression_2503, var_firstInstructions_2641, var_endOfFirstInstructions_2676, var_loopExpression_2792, var_endOfLoopExpression_2816, var_secondInstructions_2944, var_endOfSecondInstructions_2972, var_endOfLoopInstruction_3031, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 47)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 50)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 55)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 58)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 61)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i22_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_1827 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 33)) ;
  GGS__5B_CommaSeparatedExpressionElement_5D_ var_testExpression_1921 ;
  nt_comma_5F_separated_5F_expression_ (ioArgument_ioDeclarations, var_testExpression_1921, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas4", 35)) ;
  GGS__5B_semanticInstructionAST_5D_ var_then_5F_instructionList_2004 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_then_5F_instructionList_2004, inCompiler) ;
  GGS_location var_endOf_5F_then_5F_branchLocation_2034 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 37)) ;
  GGS__5B_semanticInstructionAST_5D_ var_else_5F_instructionList_2111 ;
  switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_2111 = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas4", 42)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_else_5F_instructionList_2111, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas4", 45)) ;
    GGS_semanticInstructionAST var_instruction_2345 ;
    nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instruction_2345, inCompiler) ;
    GGS__5B_semanticInstructionAST_5D_ temp_0 = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 47)) ;
    temp_0.plusPlusAssignOperation (var_instruction_2345  COMMA_SOURCE_FILE ("instruction-if.galgas4", 47)) ;
    var_else_5F_instructionList_2111 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_ifInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_1827, var_testExpression_1921, var_then_5F_instructionList_2004, var_endOf_5F_then_5F_branchLocation_2034, var_else_5F_instructionList_2111, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 55)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_comma_5F_separated_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas4", 35)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas4", 42)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas4", 45)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas4", 63)) ;
  nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas4", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas4", 63)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas4", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i24_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                                                 GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & ioArgument_ioElementList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lbigint var_count_4850 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas4", 97)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 98)) ;
  GGS_uint var_n_4873 = var_count_4850.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 99)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_n_4873.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_4850.readProperty_location (), GGS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas4", 101)) ;
    }
  }
  if (var_n_4873.isValid ()) {
    uint32_t variant_4972 = var_n_4873.uintValue () ;
    bool loop_4972 = true ;
    while (loop_4972) {
      loop_4972 = GGS_bool (ComparisonKind::greaterThan, var_n_4873.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_4972) {
        loop_4972 = GGS_bool (ComparisonKind::greaterThan, var_n_4873.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_4972 && (0 == variant_4972)) {
        loop_4972 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas4", 103)) ;
      }
      if (loop_4972) {
        variant_4972 -= 1 ;
        ioArgument_ioElementList.plusPlusAssignOperation (GGS_forInstructionEnumeratedObjectElementAST::init_21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas4", 104)), GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas4", 104)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas4", 104)) ;
        var_n_4873.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 105)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas4", 97)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 98)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i25_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & ioArgument_ioElementList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_typeName_5368 ;
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    var_typeName_5368 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas4", 115)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_5368, inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 120)) ;
    ioArgument_ioElementList.plusPlusAssignOperation (GGS_forInstructionEnumeratedObjectElementAST::init_21__21__21_ (var_typeName_5368, GGS_bool (true), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 121)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas4", 121)) ;
  } break ;
  case 2: {
    GGS_lstring var_constantName_5598 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas4", 123)) ;
    GGS_bool var_isUnused_5622 = var_constantName_5598.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("instruction-for.galgas4", 124)) ;
    ioArgument_ioElementList.plusPlusAssignOperation (GGS_forInstructionEnumeratedObjectElementAST::init_21__21__21_ (var_typeName_5368, var_isUnused_5622, var_constantName_5598, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas4", 125)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 120)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas4", 123)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 133)) ;
  GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ var_elementList_6038 = GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_ (ioArgument_ioDeclarations, var_elementList_6038, inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_33 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 138)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_location var_location_6212 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 140)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas4", 142)) ;
  GGS_semanticExpressionAST var_enumeratedExpression_6319 ;
  nt_expression_ (ioArgument_ioDeclarations, var_enumeratedExpression_6319, inCompiler) ;
  outArgument_outEnumeratedObject = GGS_enumeratedCollectionCstListInExpAST::init_21__21__21_ (var_elementList_6038, var_enumeratedExpression_6319, var_location_6212, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 133)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_33 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 138)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas4", 142)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_6783 ;
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    var_typeName_6783 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas4", 157)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_6783, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_enumerationVariable_6917 ;
  switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 163)) ;
    var_enumerationVariable_6917 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 164)) ;
  } break ;
  case 2: {
    var_enumerationVariable_6917 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas4", 166)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas4", 168)) ;
  GGS_semanticExpressionAST var_enumeratedExpression_7124 ;
  nt_expression_ (ioArgument_ioDeclarations, var_enumeratedExpression_7124, inCompiler) ;
  outArgument_outEnumeratedObject = GGS_enumeratedCollectionVarInExpAST::init_21__21__21__21_ (var_typeName_6783, var_enumerationVariable_6917, var_enumeratedExpression_7124, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 174)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 163)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas4", 166)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas4", 168)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas4", 182)) ;
  GGS_location var_instructionLocation_7575 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 183)) ;
  GGS__5B_forInstructionEnumeratedObjectAST_5D_ var_mEnumeratedObjectList_7620 = GGS__5B_forInstructionEnumeratedObjectAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_bool var_ascending_7711 ;
    switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
    case 1: {
      var_ascending_7711 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 190)) ;
      var_ascending_7711 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_abstractEnumeratedCollectionAST var_enumeratedObject_7915 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (ioArgument_ioDeclarations, var_enumeratedObject_7915, inCompiler) ;
    var_mEnumeratedObjectList_7620.plusPlusAssignOperation (GGS_forInstructionEnumeratedObjectAST::init_21__21_ (var_ascending_7711, var_enumeratedObject_7915, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas4", 194)) ;
    if (select_galgas_34_InstructionsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 196)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_semanticExpressionAST var_mWhileExpression_8055 ;
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    var_mWhileExpression_8055 = GGS_trueExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 200)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas4", 202)) ;
    nt_expression_ (ioArgument_ioDeclarations, var_mWhileExpression_8055, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_while_5F_expression_8239 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 205)) ;
  GGS__5B_semanticInstructionAST_5D_ var_mBeforeInstructionList_8313 ;
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_8313 = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas4", 210)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mBeforeInstructionList_8313, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_before_5F_branch_8524 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 213)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas4", 214)) ;
  GGS_lstring var_indexVariableName_8587 ;
  switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
    var_indexVariableName_8587 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 217)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 219)) ;
    var_indexVariableName_8587 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas4", 220)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 221)) ;
  } break ;
  default:
    break ;
  }
  GGS__5B_semanticInstructionAST_5D_ var_mDoInstructionList_8804 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mDoInstructionList_8804, inCompiler) ;
  GGS_location var_endof_5F_do_5F_branch_8832 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 224)) ;
  GGS__5B_semanticInstructionAST_5D_ var_mBetweenInstructionList_8899 ;
  switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_8899 = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas4", 229)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mBetweenInstructionList_8899, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_between_5F_branch_9114 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 232)) ;
  GGS__5B_semanticInstructionAST_5D_ var_mAfterInstructionList_9186 ;
  switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_9186 = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas4", 237)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mAfterInstructionList_9186, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_after_5F_branch_9393 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 240)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas4", 241)) ;
  GGS_location var_endof_5F_foreach_5F_instruction_9447 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 242)) ;
  outArgument_outInstruction = GGS_forInstructionAST::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_instructionLocation_7575, var_mEnumeratedObjectList_7620, var_indexVariableName_8587, var_mWhileExpression_8055, var_endof_5F_while_5F_expression_8239, var_mBeforeInstructionList_8313, var_endof_5F_before_5F_branch_8524, var_mBetweenInstructionList_8899, var_endof_5F_between_5F_branch_9114, var_mDoInstructionList_8804, var_endof_5F_do_5F_branch_8832, var_mAfterInstructionList_9186, var_endof_5F_after_5F_branch_9393, var_endof_5F_foreach_5F_instruction_9447, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas4", 182)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 190)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 196)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas4", 202)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas4", 210)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas4", 214)) ;
  switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 219)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas4", 220)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 221)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas4", 229)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas4", 237)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas4", 241)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas4", 28)) ;
  GGS_location var_instructionLocation_1613 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 29)) ;
  GGS_semanticExpressionAST var_switchExpression_1691 ;
  nt_expression_ (ioArgument_ioDeclarations, var_switchExpression_1691, inCompiler) ;
  GGS_location var_endOfSwitchExpression_1717 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 31)) ;
  GGS__5B_switchBranchAST_5D_ var_switchBranches_1783 = GGS__5B_switchBranchAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas4", 34)) ;
    GGS__5B_lstring_5D_ var_constantNameList_1899 ;
    GGS__5B_switchExtractedValuesAST_5D_ var_associatedValuesExtraction_1958 ;
    nt_switch_5F_case_ (ioArgument_ioDeclarations, var_constantNameList_1899, var_associatedValuesExtraction_1958, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 39)) ;
    GGS__5B_semanticInstructionAST_5D_ var_instructions_2054 ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructions_2054, inCompiler) ;
    var_switchBranches_1783.plusPlusAssignOperation (GGS_switchBranchAST::init_21__21__21__21_ (var_constantNameList_1899, var_associatedValuesExtraction_1958, var_instructions_2054, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 41)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 41)) ;
    if (select_galgas_34_InstructionsSyntax_43 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas4", 44)) ;
  GGS_location var_endOfSwitchInstruction_2207 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 45)) ;
  outArgument_outInstruction = GGS_switchInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1613, var_switchExpression_1691, var_endOfSwitchExpression_1717, var_switchBranches_1783, var_endOfSwitchInstruction_2207, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas4", 28)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas4", 34)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 39)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_43 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas4", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i30_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS__5B_lstring_5D_ & outArgument_outConstantNameList,
                                                                                                  GGS__5B_switchExtractedValuesAST_5D_ & outArgument_outAssociatedValuesExtraction,
                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_constantName_2812 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas4", 62)) ;
    {
    outArgument_outConstantNameList.setter_append (var_constantName_2812, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 63)) ;
    }
    if (select_galgas_34_InstructionsSyntax_44 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GGS__5B_switchExtractedValuesAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 70)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
      case 1: {
        GGS_lbigint var_n_3029 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas4", 73)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 74)) ;
        UpEnumerator_range enumerator_3073 (GGS_range (GGS_uint (uint32_t (0U)), var_n_3029.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 75)).subtract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 75)))) ;
        while (enumerator_3073.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.plusPlusAssignOperation (GGS_switchExtractedValuesAST::init_21__21__21_ (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 76)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 76)), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 76)) ;
          enumerator_3073.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 79)) ;
        outArgument_outAssociatedValuesExtraction.plusPlusAssignOperation (GGS_switchExtractedValuesAST::init_21__21__21_ (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 80)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 80)), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 80)) ;
      } break ;
      case 3: {
        GGS_lstring var_typeName_3302 ;
        switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3302, inCompiler) ;
        } break ;
        case 2: {
          var_typeName_3302 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 86)) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_constantName_3484 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas4", 88)) ;
        GGS_bool var_constantMarkedAsUnused_3512 = var_constantName_3484.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("instruction-switch.galgas4", 89)) ;
        outArgument_outAssociatedValuesExtraction.plusPlusAssignOperation (GGS_switchExtractedValuesAST::init_21__21__21_ (var_typeName_3302, var_constantName_3484, var_constantMarkedAsUnused_3512, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 90)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_46 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 93)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 95)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas4", 62)) ;
    if (select_galgas_34_InstructionsSyntax_44 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 70)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas4", 73)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 74)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 79)) ;
      } break ;
      case 3: {
        switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas4", 88)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_46 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 93)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 95)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_2362 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 48)) ;
  GGS_bool var_prefixedBySelf_2422 ;
  switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
    var_prefixedBySelf_2422 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 54)) ;
    var_prefixedBySelf_2422 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mReceiverName_2566 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 57)) ;
  switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
    GGS__5B_actualParameterAST_5D_ var_actualParameterList_2685 ;
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_2685, inCompiler) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_prefixedBySelf_2422.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outInstruction = GGS_selfSetterCallInstructionAST::init_21__21__21_ (var_instructionLocation_2362, var_mReceiverName_2566, var_actualParameterList_2685, inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_instructionLocation_2362, GGS_string ("invalid mutating proc call"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 67)) ;
      outArgument_outInstruction.drop () ; // Release error dropped variable
    }
  } break ;
  case 2: {
    GGS__5B_lstring_5D_ var_receiverStructProperties_3012 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 72)) ;
      GGS_lstring var_structProperty_3105 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 73)) ;
      var_receiverStructProperties_3012.plusPlusAssignOperation (var_structProperty_3105  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 74)) ;
      if (select_galgas_34_InstructionsSyntax_51 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    GGS_lstring var_setterName_3245 ;
    {
    var_receiverStructProperties_3012.setter_removeLast (var_setterName_3245, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 77)) ;
    }
    GGS__5B_actualParameterAST_5D_ var_actualParameterList_3350 ;
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_3350, inCompiler) ;
    outArgument_outInstruction = GGS_setterCallInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2362, var_prefixedBySelf_2422, var_mReceiverName_2566, var_receiverStructProperties_3012, var_setterName_3245, var_actualParameterList_3350, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 48)) ;
  switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 57)) ;
  switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 72)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 73)) ;
      if (select_galgas_34_InstructionsSyntax_51 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 28)) ;
  GGS_location var_instructionLocation_1611 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 29)) ;
  GGS__5B_semanticInstructionAST_5D_ var_firstInstructions_1730 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_firstInstructions_1730, inCompiler) ;
  GGS_location var_endOfFirstInstructions_1765 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 32)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 33)) ;
  GGS__5B_CommaSeparatedExpressionElement_5D_ var_loopExpression_1874 ;
  nt_comma_5F_separated_5F_expression_ (ioArgument_ioDeclarations, var_loopExpression_1874, inCompiler) ;
  GGS_location var_endOfLoopExpression_1898 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 36)) ;
  GGS__5B_semanticInstructionAST_5D_ var_secondInstructions_2026 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_secondInstructions_2026, inCompiler) ;
  GGS_location var_endOfSecondInstructions_2054 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 39)) ;
  GGS_location var_endOfLoopInstruction_2113 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 40)) ;
  outArgument_outInstruction = GGS_loopInstructionWithoutVariantAST::init_21__21__21__21__21__21__21__21_ (var_instructionLocation_1611, var_firstInstructions_1730, var_endOfFirstInstructions_1765, var_loopExpression_1874, var_endOfLoopExpression_1898, var_secondInstructions_2026, var_endOfSecondInstructions_2054, var_endOfLoopInstruction_2113, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 28)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 33)) ;
  nt_comma_5F_separated_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 36)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas4", 101)) ;
  GGS_lstring var_typeName_4374 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4374, inCompiler) ;
  GGS_lstring var_constantName_4407 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas4", 103)) ;
  switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GGS_undefinedLocalConstantDeclarationAST::init_21__21__21_ (var_typeName_4374.readProperty_location (), var_typeName_4374, var_constantName_4407, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas4", 111)) ;
    GGS_semanticExpressionAST var_sourceExpression_4651 ;
    nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_4651, inCompiler) ;
    outArgument_outInstruction = GGS_localVariableOrConstantDeclarationWithAssignmentAST::init_21__21__21__21__21_ (var_typeName_4374.readProperty_location (), GGS_bool (true), var_typeName_4374, var_constantName_4407, var_sourceExpression_4651, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas4", 101)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas4", 103)) ;
  switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas4", 111)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas4", 127)) ;
  GGS_lstring var_variableName_5169 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas4", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas4", 129)) ;
  GGS_semanticExpressionAST var_sourceExpression_5255 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_5255, inCompiler) ;
  outArgument_outInstruction = GGS_localConstantDeclarationWithAssignmentAST::init_21__21__21_ (var_variableName_5169.readProperty_location (), var_variableName_5169, var_sourceExpression_5255, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas4", 127)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas4", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas4", 129)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas4", 36)) ;
  GGS_location var_instructionLocation_1921 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas4", 37)) ;
  GGS__5B_lstring_5D_ var_dropList_1977 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_variableName_2028 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas4", 40)) ;
    var_dropList_1977.plusPlusAssignOperation (var_variableName_2028  COMMA_SOURCE_FILE ("instruction-drop.galgas4", 41)) ;
    if (select_galgas_34_InstructionsSyntax_53 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas4", 43)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GGS_dropInstructionAST::init_21__21_ (var_instructionLocation_1921, var_dropList_1977, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas4", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas4", 40)) ;
    if (select_galgas_34_InstructionsSyntax_53 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas4", 43)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 93)) ;
  GGS_lstring var_variableName_3994 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 95)) ;
  GGS_semanticExpressionAST var_sourceExpression_4080 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_4080, inCompiler) ;
  outArgument_outInstruction = GGS_localVariableDeclarationWithAssignmentAST::init_21__21__21_ (var_variableName_3994.readProperty_location (), var_variableName_3994, var_sourceExpression_4080, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 95)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 108)) ;
  GGS_lstring var_typeName_4550 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4550, inCompiler) ;
  GGS_lstring var_variableName_4583 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 110)) ;
  switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GGS_localVariableDeclarationNoAssignmentAST::init_21__21__21_ (var_typeName_4550.readProperty_location (), var_typeName_4550, var_variableName_4583, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 114)) ;
    GGS_semanticExpressionAST var_sourceExpression_4799 ;
    nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_4799, inCompiler) ;
    outArgument_outInstruction = GGS_localVariableOrConstantDeclarationWithAssignmentAST::init_21__21__21__21__21_ (var_typeName_4550.readProperty_location (), GGS_bool (false), var_typeName_4550, var_variableName_4583, var_sourceExpression_4799, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 108)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 110)) ;
  switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 114)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 37)) ;
  GGS_location var_instructionLocation_2001 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 38)) ;
  GGS_assignmentSupplementAST var_supplement_2071 ;
  switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
    var_supplement_2071 = GGS_assignmentSupplementAST::class_func_none (SOURCE_FILE ("instruction-self-assignment.galgas4", 41)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 43)) ;
    GGS__5B_actualOutputArgumentAST_5D_ var_subcriptsArguments_2244 ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_subcriptsArguments_2244, inCompiler) ;
    var_supplement_2071 = GGS_assignmentSupplementAST::class_func_subcript (var_subcriptsArguments_2244, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 48))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 48)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 49)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 51)) ;
  GGS_semanticExpressionAST var_sourceExpression_2450 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_2450, inCompiler) ;
  outArgument_outInstruction = GGS_selfAssignmentInstructionAST::init_21__21__21_ (var_instructionLocation_2001, var_supplement_2071, var_sourceExpression_2450, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 37)) ;
  switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 43)) ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 49)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 51)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 55)) ;
  GGS_location var_instructionLocation_2470 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 57)) ;
  GGS__5B_actualOutputArgumentAST_5D_ var_actualParameterList_2568 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_actualParameterList_2568, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 59)) ;
  outArgument_outInstruction = GGS_superInitInstructionAST::init_21__21_ (var_instructionLocation_2470, var_actualParameterList_2568, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 57)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_2009 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 38)) ;
  GGS_lstring var_mTypeName_2073 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 40)) ;
  GGS_lstring var_mMethodName_2161 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 41)) ;
  GGS__5B_actualParameterAST_5D_ var_actualParameterList_2265 ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_2265, inCompiler) ;
  outArgument_outInstruction = GGS_typeMethodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2009, var_mTypeName_2073, var_mMethodName_2161, var_actualParameterList_2265, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 41)) ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mTargetVariableName_1618 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 29)) ;
  GGS_assignmentSupplementAST var_supplement_1672 ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
    var_supplement_1672 = GGS_assignmentSupplementAST::class_func_none (SOURCE_FILE ("instruction-assignment.galgas4", 32)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 34)) ;
    GGS__5B_actualOutputArgumentAST_5D_ var_subcriptsArguments_1845 ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_subcriptsArguments_1845, inCompiler) ;
    var_supplement_1672 = GGS_assignmentSupplementAST::class_func_subcript (var_subcriptsArguments_1845, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 39))  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 39)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 40)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 42)) ;
    GGS_lstring var_propertyName_2013 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 43)) ;
    var_supplement_1672 = GGS_assignmentSupplementAST::class_func_property (var_propertyName_2013  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 46)) ;
  GGS_semanticExpressionAST var_mSourceExpression_2158 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mSourceExpression_2158, inCompiler) ;
  outArgument_outInstruction = GGS_assignmentInstructionAST::init_21__21__21__21_ (var_mTargetVariableName_1618.readProperty_location (), var_mTargetVariableName_1618, var_supplement_1672, var_mSourceExpression_2158, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 29)) ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 34)) ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 40)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 42)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 43)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 46)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 61)) ;
  GGS_lstring var_mTargetVariableName_2632 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 62)) ;
  GGS_assignmentSupplementAST var_supplement_2686 ;
  switch (select_galgas_34_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
    var_supplement_2686 = GGS_assignmentSupplementAST::class_func_none (SOURCE_FILE ("instruction-assignment.galgas4", 65)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 67)) ;
    GGS__5B_actualOutputArgumentAST_5D_ var_subcriptsArguments_2859 ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_subcriptsArguments_2859, inCompiler) ;
    var_supplement_2686 = GGS_assignmentSupplementAST::class_func_subcript (var_subcriptsArguments_2859, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 72))  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 72)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 73)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 75)) ;
    GGS_lstring var_propertyName_3027 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 76)) ;
    var_supplement_2686 = GGS_assignmentSupplementAST::class_func_property (var_propertyName_3027  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 77)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 79)) ;
  GGS_semanticExpressionAST var_mSourceExpression_3172 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mSourceExpression_3172, inCompiler) ;
  outArgument_outInstruction = GGS_selfPropertyAssignmentInstructionAST::init_21__21__21__21_ (var_mTargetVariableName_2632.readProperty_location (), var_mTargetVariableName_2632, var_supplement_2686, var_mSourceExpression_3172, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 62)) ;
  switch (select_galgas_34_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 67)) ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 73)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 75)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 76)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 79)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i43_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 27)) ;
  GGS_lstring var_resultTypeName_1692 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_1692, inCompiler) ;
  GGS_lstring var_functionName_1731 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 30)) ;
  GGS__5B_semanticInstructionAST_5D_ var_functionInstructionList_1817 ;
  switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
  case 1: {
    GGS_semanticExpressionAST var_expression_1918 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_1918, inCompiler) ;
    GGS_assignmentInstructionAST var_assignment_1940 = GGS_assignmentInstructionAST::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 35)), GGS_string ("result").getter_here (inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 36)), GGS_assignmentSupplementAST::class_func_none (SOURCE_FILE ("declararation-global-constant.galgas4", 37)), var_expression_1918, inCompiler COMMA_HERE) ;
    GGS__5B_semanticInstructionAST_5D_ temp_0 = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 40)) ;
    temp_0.plusPlusAssignOperation (var_assignment_1940  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 40)) ;
    var_functionInstructionList_1817 = temp_0 ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 42)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_functionInstructionList_1817, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 44)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfFunctionInstructionList_2228 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_onceFunctionDeclarationAST::init_21_isPredefined_21__21__21__21__21__21_ (GGS_bool (false), var_functionName_1731, var_resultTypeName_1692, var_functionInstructionList_1817, var_endOfFunctionInstructionList_2228, GGS_bool (false), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i43_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 27)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 30)) ;
  switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
  case 1: {
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 42)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 44)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i44_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 62)) ;
  GGS_lstring var_resultTypeName_2764 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_2764, inCompiler) ;
  GGS_lstring var_functionName_2803 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 65)) ;
  GGS__5B_semanticInstructionAST_5D_ var_functionInstructionList_2889 ;
  switch (select_galgas_34_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
    GGS_semanticExpressionAST var_expression_2990 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_2990, inCompiler) ;
    GGS_assignmentInstructionAST var_assignment_3012 = GGS_assignmentInstructionAST::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 70)), GGS_string ("result").getter_here (inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 71)), GGS_assignmentSupplementAST::class_func_none (SOURCE_FILE ("declararation-global-constant.galgas4", 72)), var_expression_2990, inCompiler COMMA_HERE) ;
    GGS__5B_semanticInstructionAST_5D_ temp_0 = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 75)) ;
    temp_0.plusPlusAssignOperation (var_assignment_3012  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 75)) ;
    var_functionInstructionList_2889 = temp_0 ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 77)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_functionInstructionList_2889, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 79)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfFunctionInstructionList_3300 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_onceFunctionDeclarationAST::init_21_isPredefined_21__21__21__21__21__21_ (GGS_bool (false), var_functionName_2803, var_resultTypeName_2764, var_functionInstructionList_2889, var_endOfFunctionInstructionList_3300, GGS_bool (true), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i44_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 62)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 65)) ;
  switch (select_galgas_34_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 77)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 79)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i45_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 32)) ;
  GGS_bool var_isUsefull_1761 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_60 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 36)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_1761.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 38)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 38)) ;
        }
      }
      var_isUsefull_1761 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mActionName_1972 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 42)) ;
  GGS__5B_formalParameterAST_5D_ var_mFormalParameterList_2088 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameterList_2088, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_externProcedureDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (GGS_bool (false), GGS_bool (false), var_mActionName_1972, var_mFormalParameterList_2088, var_isUsefull_1761, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i45_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_60 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 36)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 42)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i46_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 31)) ;
  GGS_bool var_isUsefull_1719 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_61 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 35)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_1719.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 37)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 37)) ;
        }
      }
      var_isUsefull_1719 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_routineName_1921 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 41)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_2037 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_2037, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 43)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_2148 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_2148, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 45)) ;
  GGS_location var_endOfInstructionList_2188 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_procDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (GGS_bool (false), GGS_bool (false), var_routineName_1921, var_formalParameterList_2037, var_isUsefull_1719, var_routineInstructionList_2148, var_endOfInstructionList_2188, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i46_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_61 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 35)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 41)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 43)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i47_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 62)) ;
  GGS_bool var_isUsefull_2694 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 66)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_2694.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 68)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 68)) ;
        }
      }
      var_isUsefull_2694 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_routineName_2896 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 72)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_3012 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3012, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 74)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_3123 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_3123, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 76)) ;
  GGS_location var_endOfInstructionList_3163 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 77)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_procDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (GGS_bool (false), GGS_bool (true), var_routineName_2896, var_formalParameterList_3012, var_isUsefull_2694, var_routineInstructionList_3123, var_endOfInstructionList_3163, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 78)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i47_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 72)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 74)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 76)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_0 (inCompiler) == 2) {
      nt_declaration_ (ioArgument_ioDeclarations, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_start_5F_symbol_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_0 (inCompiler) == 2) {
      nt_declaration_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 60)) ;
  GGS_lstring var_filewrapperName_3071 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 62)) ;
  GGS_lstring var_filewrapperPath_3160 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 63)) ;
  GGS__5B_lstring_5D_ var_filewrapperTextFileExtensionList_3212 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_3212, inCompiler) ;
  GGS__5B_lstring_5D_ var_filewrapperBinaryFileExtensionList_3283 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_3283, inCompiler) ;
  GGS__5B_filewrapperTemplateAST_5D_ var_filewrapperTemplateList_3371 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_3371, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (false), GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 70)), var_filewrapperName_3071, var_filewrapperPath_3160, var_filewrapperTextFileExtensionList_3212, var_filewrapperBinaryFileExtensionList_3283, var_filewrapperTemplateList_3371, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 60)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 63)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 83)) ;
  GGS_lstring var_filewrapperName_3978 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 85)) ;
  GGS_lstring var_filewrapperPath_4067 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 86)) ;
  GGS__5B_lstring_5D_ var_filewrapperTextFileExtensionList_4119 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_4119, inCompiler) ;
  GGS__5B_lstring_5D_ var_filewrapperBinaryFileExtensionList_4190 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_4190, inCompiler) ;
  GGS__5B_filewrapperTemplateAST_5D_ var_filewrapperTemplateList_4278 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_4278, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 93)), var_filewrapperName_3978, var_filewrapperPath_4067, var_filewrapperTextFileExtensionList_4119, var_filewrapperBinaryFileExtensionList_4190, var_filewrapperTemplateList_4278, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 90)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 83)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 84)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 86)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GGS__5B_lstring_5D_ & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 106)) ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_pathExtension_4959 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 110)) ;
      outArgument_outFilewrapperTextFileExtensionList.plusPlusAssignOperation (var_pathExtension_4959  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 111)) ;
      if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 113)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 106)) ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 110)) ;
      if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 113)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GGS__5B_lstring_5D_ & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 123)) ;
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_pathExtension_5403 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 127)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.plusPlusAssignOperation (var_pathExtension_5403  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 128)) ;
      if (select_galgas_34_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 130)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 133)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 123)) ;
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 127)) ;
      if (select_galgas_34_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 130)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 133)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS__5B_filewrapperTemplateAST_5D_ & outArgument_outFilewrapperTemplateList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 140)) ;
  outArgument_outFilewrapperTemplateList = GGS__5B_filewrapperTemplateAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 144)) ;
      GGS_lstring var_mFilewrapperTemplateName_5908 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 145)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 146)) ;
      GGS_lstring var_mFilewrapperTemplatePath_5967 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 147)) ;
      GGS__5B_formalTemplateInputParameterAST_5D_ var_filewrapperTemplateFormalInputParameters_6038 = GGS__5B_formalTemplateInputParameterAST_5D_::init (inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 149)) ;
      switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          GGS_lstring var_selector_6155 ;
          switch (select_galgas_34_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
            var_selector_6155 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 155)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 157)) ;
            var_selector_6155 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 158)) ;
          } break ;
          case 3: {
            var_selector_6155 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 160)) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_typeName_6394 ;
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_6394, inCompiler) ;
          GGS_lstring var_argumentName_6433 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 163)) ;
          GGS_bool var_isUnused_6461 = var_argumentName_6433.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 164)) ;
          var_filewrapperTemplateFormalInputParameters_6038.plusPlusAssignOperation (GGS_formalTemplateInputParameterAST::init_21__21__21__21_ (var_selector_6155, var_typeName_6394, var_argumentName_6433, var_isUnused_6461, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 165)) ;
          if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 167)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 170)) ;
      outArgument_outFilewrapperTemplateList.plusPlusAssignOperation (GGS_filewrapperTemplateAST::init_21__21__21_ (var_mFilewrapperTemplateName_5908, var_mFilewrapperTemplatePath_5967, var_filewrapperTemplateFormalInputParameters_6038, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 171)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 177)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 140)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 145)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 146)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 147)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 149)) ;
      switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          switch (select_galgas_34_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 157)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 160)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_indexing (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 163)) ;
          if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 167)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 170)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 177)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 41)) ;
  GGS_lstring var_typeName_2248 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_2248, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_9 (inCompiler) == 2) {
      GGS_lstring var_t_2342 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_2342, inCompiler) ;
      var_typeName_2248 = function_makeEmbeddedTypeLName (var_typeName_2248, var_t_2342, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 47)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 48)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_2464 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 50)) ;
  GGS__5B_formalInputParameterAST_5D_ var_formalInputParameterList_2579 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_2579, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 52)) ;
  GGS_lstring var_returnedTypeName_2660 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_2660, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 54)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_2768 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_2768, inCompiler) ;
  GGS_location var_endOfInstructionList_2810 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 57)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_overridingExtensionGetterAST::init_21_isPredefined_21__21__21__21__21__21_ (GGS_bool (false), var_typeName_2248, var_getterName_2464, var_formalInputParameterList_2579, var_returnedTypeName_2660, var_routineInstructionList_2768, var_endOfInstructionList_2810, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 41)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 43)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_9 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 48)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 50)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 52)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 54)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i7_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                        GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 73)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 74)) ;
  GGS_lstring var_getterName_3390 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 75)) ;
  GGS__5B_formalInputParameterAST_5D_ var_formalInputParameterList_3505 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_3505, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 77)) ;
  GGS_lstring var_returnedTypeName_3586 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_3586, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 79)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_3694 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_3694, inCompiler) ;
  GGS_location var_endOfInstructionList_3736 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 82)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_overridingExtensionGetterAST::init_21_isPredefined_21__21__21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_getterName_3390, var_formalInputParameterList_3505, var_returnedTypeName_3586, var_routineInstructionList_3694, var_endOfInstructionList_3736, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 83)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 73)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 74)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 75)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 77)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 79)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i8_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                        GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("abstract-method.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("abstract-method.galgas4", 29)) ;
  GGS_lstring var_methodName_1631 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("abstract-method.galgas4", 30)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_1762 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_1762, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_methodName_1631, var_formalParameterList_1762, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("abstract-method.galgas4", 32)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("abstract-method.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("abstract-method.galgas4", 29)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("abstract-method.galgas4", 30)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 39)) ;
  GGS_lstring var_typeName_2065 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_2065, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_10 (inCompiler) == 2) {
      GGS_lstring var_t_2159 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_2159, inCompiler) ;
      var_typeName_2065 = function_makeEmbeddedTypeLName (var_typeName_2065, var_t_2159, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 45)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_2281 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 48)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_2419 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_2419, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_2065, var_methodName_2281, var_formalParameterList_2419, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 39)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_10 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 48)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i10_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 63)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 64)) ;
  GGS_lstring var_typeName_2895 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_11 (inCompiler) == 2) {
      GGS_lstring var_t_2993 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_2993, inCompiler) ;
      var_typeName_2895 = function_makeEmbeddedTypeLName (var_typeName_2895, var_t_2993, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 69)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 70)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_3115 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 72)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_3254 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3254, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_2895, var_methodName_3115, var_formalParameterList_3254, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 62)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 63)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_11 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 70)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 72)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas4", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas4", 40)) ;
  GGS_lstring var_typeName_2152 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_2152, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas4", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_12 (inCompiler) == 2) {
      GGS_lstring var_t_2246 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_2246, inCompiler) ;
      var_typeName_2152 = function_makeEmbeddedTypeLName (var_typeName_2152, var_t_2246, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 46)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas4", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_2368 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas4", 49)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_2491 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_2491, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas4", 51)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_2602 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_2602, inCompiler) ;
  GGS_location var_endOfSetterLocation_2644 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas4", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas4", 54)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_extensionSetterAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_2152, var_setterName_2368, var_formalParameterList_2491, var_routineInstructionList_2602, var_endOfSetterLocation_2644, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas4", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas4", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas4", 40)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas4", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_12 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas4", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas4", 49)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas4", 51)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas4", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i12_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas4", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas4", 70)) ;
  GGS_lstring var_setterName_3192 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas4", 71)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_3315 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3315, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas4", 73)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_3426 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_3426, inCompiler) ;
  GGS_location var_endOfSetterLocation_3468 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas4", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas4", 76)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_extensionSetterAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_setterName_3192, var_formalParameterList_3315, var_routineInstructionList_3426, var_endOfSetterLocation_3468, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas4", 77)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas4", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas4", 70)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas4", 71)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas4", 73)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas4", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i13_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("initializer.galgas4", 26)) ;
  GGS_location var_initLocation_1481 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 27)) ;
  GGS__5B_formalInputParameterAST_5D_ var_formalParameterList_1569 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_1569, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("initializer.galgas4", 29)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_1654 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_1654, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("initializer.galgas4", 31)) ;
  GGS_location var_endOfMethodLocation_1694 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 32)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_initializerAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), GGS_lstring::init_21__21_ (constinArgument_inTypeName.readProperty_string (), var_initLocation_1481, inCompiler COMMA_HERE), var_formalParameterList_1569, var_routineInstructionList_1654, var_endOfMethodLocation_1694, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("initializer.galgas4", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("initializer.galgas4", 26)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("initializer.galgas4", 29)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("initializer.galgas4", 31)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas4", 27)) ;
  GGS_lstring var_typeName_1585 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_1585, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_13 (inCompiler) == 2) {
      GGS_lstring var_t_1679 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_1679, inCompiler) ;
      var_typeName_1585 = function_makeEmbeddedTypeLName (var_typeName_1585, var_t_1679, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 33)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 34)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_1801 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas4", 36)) ;
  GGS__5B_formalInputParameterAST_5D_ var_formalInputParameterList_1908 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_1908, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 38)) ;
  GGS_lstring var_returnedTypeName_1989 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_1989, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 40)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_2097 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_2097, inCompiler) ;
  GGS_location var_endOfInstructionList_2139 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 43)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_extensionGetterAST::init_21_isPredefined_21__21__21__21__21__21_ (GGS_bool (false), var_typeName_1585, var_getterName_1801, var_formalInputParameterList_1908, var_returnedTypeName_1989, var_routineInstructionList_2097, var_endOfInstructionList_2139, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas4", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas4", 27)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_13 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 34)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas4", 36)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 38)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 40)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i15_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas4", 59)) ;
  GGS_lstring var_typeName_2679 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_14 (inCompiler) == 2) {
      GGS_lstring var_t_2777 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_2777, inCompiler) ;
      var_typeName_2679 = function_makeEmbeddedTypeLName (var_typeName_2679, var_t_2777, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 64)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_2899 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas4", 67)) ;
  GGS__5B_formalInputParameterAST_5D_ var_formalInputParameterList_3006 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_3006, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 69)) ;
  GGS_lstring var_returnedTypeName_3087 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_3087, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 71)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_3195 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_3195, inCompiler) ;
  GGS_location var_endOfInstructionList_3227 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 73)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 74)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_extensionGetterAST::init_21_isPredefined_21__21__21__21__21__21_ (GGS_bool (false), var_typeName_2679, var_getterName_2899, var_formalInputParameterList_3006, var_returnedTypeName_3087, var_routineInstructionList_3195, var_endOfInstructionList_3227, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas4", 75)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas4", 59)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_14 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas4", 67)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 69)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 71)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas4", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 28)) ;
  GGS_lstring var_typeName_1591 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_1591, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_15 (inCompiler) == 2) {
      GGS_lstring var_t_1685 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_1685, inCompiler) ;
      var_typeName_1591 = function_makeEmbeddedTypeLName (var_typeName_1591, var_t_1685, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 34)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 35)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_1807 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 37)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_1938 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_1938, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 39)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_2049 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_2049, inCompiler) ;
  GGS_location var_endOfMethodLocation_2091 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 42)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_overridingExtensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_1591, var_methodName_1807, var_formalParameterList_1938, var_routineInstructionList_2049, var_endOfMethodLocation_2091, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 27)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 28)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_15 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 35)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 37)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 39)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i17_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 58)) ;
  GGS_lstring var_methodName_2649 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 59)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_2780 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_2780, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 61)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_2891 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_2891, inCompiler) ;
  GGS_location var_endOfMethodLocation_2933 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 63)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 64)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_overridingExtensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_methodName_2649, var_formalParameterList_2780, var_routineInstructionList_2891, var_endOfMethodLocation_2933, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 58)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 59)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 61)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i18_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("abstract-getter.galgas4", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("abstract-getter.galgas4", 27)) ;
  GGS_lstring var_mGetterName_1509 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("abstract-getter.galgas4", 28)) ;
  GGS__5B_formalInputParameterAST_5D_ var_mFormalInputParameterList_1652 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalInputParameterList_1652, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("abstract-getter.galgas4", 30)) ;
  GGS_lstring var_returnedTypeName_1734 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_1734, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_mGetterName_1509, var_mFormalInputParameterList_1652, var_returnedTypeName_1734, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("abstract-getter.galgas4", 32)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("abstract-getter.galgas4", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("abstract-getter.galgas4", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("abstract-getter.galgas4", 28)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("abstract-getter.galgas4", 30)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 38)) ;
  GGS_lstring var_typeName_2025 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_2025, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_16 (inCompiler) == 2) {
      GGS_lstring var_t_2119 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_2119, inCompiler) ;
      var_typeName_2025 = function_makeEmbeddedTypeLName (var_typeName_2025, var_t_2119, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 44)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_2232 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 47)) ;
  GGS__5B_formalInputParameterAST_5D_ var_formalInputParameterList_2382 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_2382, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 49)) ;
  GGS_lstring var_returnedTypeName_2463 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_2463, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_2025, var_getterName_2232, var_formalInputParameterList_2382, var_returnedTypeName_2463, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 38)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_16 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 45)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 47)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 49)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i20_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 66)) ;
  GGS_lstring var_getterName_2980 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 67)) ;
  GGS__5B_formalInputParameterAST_5D_ var_formalInputParameterList_3130 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_3130, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 69)) ;
  GGS_lstring var_returnedTypeName_3211 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_3211, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_getterName_2980, var_formalInputParameterList_3130, var_returnedTypeName_3211, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 71)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 66)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 67)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 69)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 25)) ;
  GGS_lstring var_typeName_1468 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_1468, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 29)) ;
    switch (select_galgas_34_DeclarationsSyntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 31)) ;
      ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_equatableExtensionAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_typeName_1468, GGS_equatableComparableExtension::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 35)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 32)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 38)) ;
      ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_equatableExtensionAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_typeName_1468, GGS_equatableComparableExtension::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 42)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 39)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 46)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_19 (inCompiler) == 2) {
      nt_method_5F_declaration_ (var_typeName_1468, ioArgument_ioDeclarations, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 25)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 29)) ;
    switch (select_galgas_34_DeclarationsSyntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 38)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 46)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_19 (inCompiler) == 2) {
      nt_method_5F_declaration_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i22_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas4", 25)) ;
  GGS_lstring var_typeName_1472 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_1472, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas4", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
      GGS_lstring var_t_1566 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_1566, inCompiler) ;
      var_typeName_1472 = function_makeEmbeddedTypeLName (var_typeName_1472, var_t_1566, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 31)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas4", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_1688 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas4", 34)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_1811 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_1811, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas4", 36)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_1922 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_1922, inCompiler) ;
  GGS_location var_endOfMethodLocation_1954 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas4", 39)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_extensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_1472, var_methodName_1688, var_formalParameterList_1811, var_routineInstructionList_1922, var_endOfMethodLocation_1954, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas4", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas4", 25)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas4", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas4", 32)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas4", 34)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas4", 36)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas4", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i23_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas4", 54)) ;
  GGS_lstring var_methodName_2487 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas4", 55)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_2610 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_2610, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas4", 57)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_2721 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_2721, inCompiler) ;
  GGS_location var_endOfMethodLocation_2753 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas4", 60)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_extensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_methodName_2487, var_formalParameterList_2610, var_routineInstructionList_2721, var_endOfMethodLocation_2753, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas4", 61)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas4", 54)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas4", 55)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas4", 57)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas4", 60)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i24_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 25)) ;
  GGS_lstring var_structTypeName_1440 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 26)) ;
  GGS_structComparison var_comparison_1510 ;
  switch (select_galgas_34_DeclarationsSyntax_21 (inCompiler)) {
  case 1: {
    var_comparison_1510 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-struct.galgas4", 29)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 31)) ;
    var_comparison_1510 = GGS_structComparison::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 34)) ;
    var_comparison_1510 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 37)) ;
  GGS__5B_propertyInCollectionAST_5D_ var_propertyList_1722 = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_1722, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_structTypeName_1440, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 45)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (false), var_structTypeName_1440, var_propertyList_1722, GGS_string::makeEmptyString (), var_comparison_1510, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 25)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 26)) ;
  switch (select_galgas_34_DeclarationsSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i25_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS__5B_propertyInCollectionAST_5D_ & ioArgument_ioAttributeInCollectionList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  GGS_AccessControlAST var_accessControl_2210 ;
  nt_acces_5F_control_ (var_accessControl_2210, inCompiler) ;
  GGS_propertyMutability var_mutability_2253 ;
  switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas4", 48)) ;
    var_mutability_2253 = GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-property.galgas4", 49)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas4", 51)) ;
    extensionMethod_checkCompatibilityWithLet (var_accessControl_2210, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas4", 52)), inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas4", 52)) ;
    var_mutability_2253 = GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-property.galgas4", 53)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_2487 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_propertyTypeName_2487, inCompiler) ;
  GGS_lstring var_propertyName_2528 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas4", 56)) ;
  GGS_bool var_selectorAttribute_2550 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas4", 60)) ;
      var_selectorAttribute_2550 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_propertyInCollectionInitializationAST var_initialization_2705 ;
  switch (select_galgas_34_DeclarationsSyntax_25 (inCompiler)) {
  case 1: {
    var_initialization_2705 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas4", 65)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas4", 67)) ;
    GGS_semanticExpressionAST var_expression_2820 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_2820, inCompiler) ;
    var_initialization_2705 = GGS_propertyInCollectionInitializationAST::class_func_some (var_expression_2820  COMMA_SOURCE_FILE ("declaration-property.galgas4", 69)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (var_mutability_2253, var_propertyTypeName_2487, var_propertyName_2528, var_accessControl_2210, var_selectorAttribute_2550, var_initialization_2705, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-property.galgas4", 71)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas4", 48)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas4", 51)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas4", 56)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas4", 60)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas4", 67)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 27)) ;
  GGS_lstring var_enumTypeName_1542 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 28)) ;
  GGS_structComparison var_comparison_1608 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-enum.galgas4", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 32)) ;
      switch (var_comparison_1608.enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        {
          var_comparison_1608 = GGS_structComparison::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas4", 35)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 37)), GGS_string ("duplicated attribute"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 37)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 39)), GGS_string ("%comparable and %equatable are mutually exclusive"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 39)) ;
        }
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 42)) ;
      switch (var_comparison_1608.enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        {
          var_comparison_1608 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas4", 45)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 47)), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 47)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 49)), GGS_string ("%comparable and %equatable are mutually exclusive"), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 49)) ;
        }
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 52)) ;
  GGS__5B_enumConstant_5D_ var_constantList_2238 = GGS__5B_enumConstant_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 56)) ;
      GGS_lstring var_constantName_2316 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 57)) ;
      GGS__5B_associatedValue_5D_ var_associatedValueTypeList_2359 = GGS__5B_associatedValue_5D_::init (inCompiler COMMA_HERE) ;
      switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 61)) ;
        bool repeatFlag_6 = true ;
        while (repeatFlag_6) {
          GGS_lstring var_associatedValueType_2490 ;
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_associatedValueType_2490, inCompiler) ;
          GGS_lstring var_associatedValueName_2540 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 64)) ;
          {
          var_associatedValueTypeList_2359.setter_append (GGS_associatedValue::init_21__21_ (var_associatedValueType_2490, var_associatedValueName_2540, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 65)) ;
          }
          if (select_galgas_34_DeclarationsSyntax_29 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 67)) ;
          }else{
            repeatFlag_6 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 69)) ;
      } break ;
      default:
        break ;
      }
      var_constantList_2238.plusPlusAssignOperation (GGS_enumConstant::init_21__21_ (var_constantName_2316, var_associatedValueTypeList_2359, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 71)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_enumTypeName_1542, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 75)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, var_constantList_2238.getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 76)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (var_enumTypeName_1542.readProperty_location (), GGS_string ("an enumerated type must define at least one case constant"), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 77)) ;
    }
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_enumDeclarationAST::init_21_isPredefined_21__21__21_comparison (GGS_bool (false), var_enumTypeName_1542, var_constantList_2238, var_comparison_1608, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 79)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 32)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 42)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 52)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 56)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 57)) ;
      switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 61)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          nt_type_5F_definition_indexing (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 64)) ;
          if (select_galgas_34_DeclarationsSyntax_29 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 67)) ;
          }else{
            repeatFlag_2 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 69)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 75)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i27_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_optionset COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 27)) ;
  GGS_lstring var_optionSetTypeName_1556 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 28)) ;
  GGS_bool var_isEquatable_1617 ;
  switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
  case 1: {
    var_isEquatable_1617 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_equatable COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 33)) ;
    var_isEquatable_1617 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 36)) ;
  GGS__5B_lstring_5D_ var_slotList_1752 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 40)) ;
      GGS_lstring var_slotName_1826 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 41)) ;
      var_slotList_1752.plusPlusAssignOperation (var_slotName_1826  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 42)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_optionSetTypeName_1556, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 46)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_slotList_1752.getter_count (SOURCE_FILE ("declaration-type-optionset.galgas4", 47)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_optionSetTypeName_1556.readProperty_location (), GGS_string ("an optionset type must define at least one case constant"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 48)) ;
    }
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_optionSetDeclarationAST::init_21_isPredefined_21__21__21_isEquatable (GGS_bool (false), var_optionSetTypeName_1556, var_slotList_1752, var_isEquatable_1617, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_optionset COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 28)) ;
  switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_equatable COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 40)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 41)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 27)) ;
  GGS_lstring var_graphTypeName_1551 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 29)) ;
  GGS_lstring var_elementTypeName_1647 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_elementTypeName_1647, inCompiler) ;
  GGS_lstring var_arrayTypeName_1672 = function_makeArrayTypeLName (var_elementTypeName_1647, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 31)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioDeclarations.readProperty_implicitTypeDeclarationSet ().getter_contains (var_arrayTypeName_1672.readProperty_string () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 32)).operator_not (SOURCE_FILE ("declaration-type-graph.galgas4", 32)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioDeclarations.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (var_arrayTypeName_1672.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 33)) ;
      ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_arrayTypeDeclarationAST::init_21_isPredefined_21_arrayTypeName_21_elementTypeName_21_isUsefull (GGS_bool (false), var_arrayTypeName_1672, var_elementTypeName_1647, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 34)) ;
    }
  }
  GGS_string var_lstringArrayTypeName_2158 = function_makeArrayTypeName (GGS_string ("lstring"), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 42)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = ioArgument_ioDeclarations.readProperty_implicitTypeDeclarationSet ().getter_contains (var_lstringArrayTypeName_2158 COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 43)).operator_not (SOURCE_FILE ("declaration-type-graph.galgas4", 43)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioDeclarations.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (var_lstringArrayTypeName_2158  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 44)) ;
      ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_arrayTypeDeclarationAST::init_21_isPredefined_21_arrayTypeName_21_elementTypeName_21_isUsefull (GGS_bool (false), var_lstringArrayTypeName_2158.getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 47)), GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 48)), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 45)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 52)) ;
  GGS__5B_graphInsertModifier_5D_ var_graphInsertModifierList_2630 = GGS__5B_graphInsertModifier_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_DeclarationsSyntax_32 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_insertSetter COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 56)) ;
      GGS_lstring var_insertName_2759 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 57)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 58)) ;
      GGS_lstring var_errorMessage_2825 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 59)) ;
      var_graphInsertModifierList_2630.plusPlusAssignOperation (GGS_graphInsertModifier::init_21__21_ (var_insertName_2759, var_errorMessage_2825, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 60)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 62)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_graphDeclarationAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_graphTypeName_1551, var_arrayTypeName_1672, var_elementTypeName_1647, var_graphInsertModifierList_2630, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 63)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 29)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_32 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_insertSetter COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 56)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 57)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 58)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 59)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 62)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GGS_lstring & outArgument_outTypeName,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 105)) ;
      GGS_lstring var_typeName_4875 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4875, inCompiler) ;
      outArgument_outTypeName = function_makeEmbeddedTypeLName (outArgument_outTypeName, var_typeName_4875, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 107)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 109)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_t_5050 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_t_5050, inCompiler) ;
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_t_5050.readProperty_location (), GGS_string ("not handled yet"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 112)) ;
        if (select_galgas_34_DeclarationsSyntax_34 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 114)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 116)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 121)) ;
    GGS_lstring var_unwrappedTypeName_5198 = outArgument_outTypeName ;
    {
    extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, outArgument_outTypeName, var_unwrappedTypeName_5198, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 123)) ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 105)) ;
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 109)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_type_5F_definition_indexing (inCompiler) ;
        if (select_galgas_34_DeclarationsSyntax_34 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 114)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 116)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 121)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i30_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 138)) ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
    GGS_lstring var_elementTypeName_5939 = outArgument_outTypeName ;
    outArgument_outTypeName = function_makeArrayTypeLName (var_elementTypeName_5939, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 142)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = ioArgument_ioDeclarations.readProperty_implicitTypeDeclarationSet ().getter_contains (outArgument_outTypeName.readProperty_string () COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 143)).operator_not (SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 143)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioDeclarations.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (outArgument_outTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 144)) ;
        ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_arrayTypeDeclarationAST::init_21_isPredefined_21_arrayTypeName_21_elementTypeName_21_isUsefull (GGS_bool (false), outArgument_outTypeName, var_elementTypeName_5939, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 145)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 153)) ;
    GGS_lstring var_keyTypeName_6450 = outArgument_outTypeName ;
    GGS_lstring var_valueTypeName_6524 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_valueTypeName_6524, inCompiler) ;
    outArgument_outTypeName = function_makeDictionaryTypeLName (var_keyTypeName_6450, var_valueTypeName_6524, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 156)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = ioArgument_ioDeclarations.readProperty_implicitTypeDeclarationSet ().getter_contains (outArgument_outTypeName.readProperty_string () COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 157)).operator_not (SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 157)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        ioArgument_ioDeclarations.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (outArgument_outTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 158)) ;
        ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_dictionaryDeclarationAST::init_21_isPredefined_21_dictionaryTypeName_21_keyTypeName_21_valueTypeName_21_equatable (GGS_bool (false), outArgument_outTypeName, var_keyTypeName_6450, var_valueTypeName_6524, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 159)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 168)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 138)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 153)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 168)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 175)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 179)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 181)), GGS_string ("Not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 181)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 182)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 175)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_indexing (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 179)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 182)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 27)) ;
  GGS_lstring var_mapTypeName_1550 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 28)) ;
  GGS_bool var_isEquatable_1631 ;
  switch (select_galgas_34_DeclarationsSyntax_38 (inCompiler)) {
  case 1: {
    var_isEquatable_1631 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 33)) ;
    var_isEquatable_1631 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 36)) ;
  GGS__5B_propertyInCollectionAST_5D_ var_propertyList_1755 = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_insertSetterAST_5D_ var_mInsertSetterList_1808 = GGS__5B_insertSetterAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_mapAccessorAST_5D_ var_mSearchMethodList_1876 = GGS__5B_mapAccessorAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_mapAccessorAST_5D_ var_mRemoveSetterList_1926 = GGS__5B_mapAccessorAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_mapAccessorAST_5D_ var_replaceMethodList_1976 = GGS__5B_mapAccessorAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_location_5D_ var_insertOrReplaceDeclarationListAST_2020 = GGS__5B_location_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_mapAccessorAST_5D_ var_searchSubcriptListAST_2086 = GGS__5B_mapAccessorAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_1755, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertSetterList_1808, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_method_5F_declaration_ (var_mSearchMethodList_1876, inCompiler) ;
    } break ;
    case 5: {
      nt_search_5F_subcript_5F_declaration_ (var_searchSubcriptListAST_2086, inCompiler) ;
    } break ;
    case 6: {
      nt_remove_5F_setter_5F_declaration_ (var_mRemoveSetterList_1926, inCompiler) ;
    } break ;
    case 7: {
      nt_replace_5F_setter_5F_declaration_ (var_replaceMethodList_1976, inCompiler) ;
    } break ;
    case 8: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_2020, inCompiler) ;
    } break ;
    case 9: {
      nt_method_5F_declaration_ (var_mapTypeName_1550, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 62)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_mapDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (GGS_bool (false), var_mapTypeName_1550, var_propertyList_1755, var_mInsertSetterList_1808, var_mSearchMethodList_1876, var_searchSubcriptListAST_2086, var_mRemoveSetterList_1926, var_replaceMethodList_1976, var_insertOrReplaceDeclarationListAST_2020, var_isEquatable_1631, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 63)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 28)) ;
  switch (select_galgas_34_DeclarationsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 33)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_search_5F_subcript_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_remove_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_replace_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_insert_5F_or_5F_replace_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 62)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i34_ (GGS__5B_mapAccessorAST_5D_ & ioArgument_ioMapSearchMethodListAST,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_searchMethod COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 80)) ;
  GGS_lstring var_methodName_3291 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 82)) ;
  GGS_lstring var_errorMessage_3353 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 83)) ;
  ioArgument_ioMapSearchMethodListAST.plusPlusAssignOperation (GGS_mapAccessorAST::init_21__21_ (var_methodName_3291, var_errorMessage_3353, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 84)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_searchMethod COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 80)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 81)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 82)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 83)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_subcript_5F_declaration_i35_ (GGS__5B_mapAccessorAST_5D_ & ioArgument_ioMapSearchSubcriptListAST,
                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 90)) ;
  GGS_lstring var_methodName_3679 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 92)) ;
  GGS_lstring var_errorMessage_3741 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 93)) ;
  ioArgument_ioMapSearchSubcriptListAST.plusPlusAssignOperation (GGS_mapAccessorAST::init_21__21_ (var_methodName_3679, var_errorMessage_3741, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_subcript_5F_declaration_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 91)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i36_ (GGS__5B_mapAccessorAST_5D_ & ioArgument_ioMapRemoveMethodListAST,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_removeSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 100)) ;
  GGS_lstring var_mMethodName_4062 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 102)) ;
  GGS_lstring var_mErrorMessage_4125 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 103)) ;
  ioArgument_ioMapRemoveMethodListAST.plusPlusAssignOperation (GGS_mapAccessorAST::init_21__21_ (var_mMethodName_4062, var_mErrorMessage_4125, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 104)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_removeSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 100)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 103)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i37_ (GGS__5B_mapAccessorAST_5D_ & ioArgument_ioMapReplaceMethodListAST,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_replaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 110)) ;
  GGS_lstring var_mMethodName_4450 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 111)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 112)) ;
  GGS_lstring var_mErrorMessage_4513 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 113)) ;
  ioArgument_ioMapReplaceMethodListAST.plusPlusAssignOperation (GGS_mapAccessorAST::init_21__21_ (var_mMethodName_4450, var_mErrorMessage_4513, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 114)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_replaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 110)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 111)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 113)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i38_ (GGS__5B_location_5D_ & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_insertOrReplaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 120)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.plusPlusAssignOperation (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 121))  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 121)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i38_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_insertOrReplaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 120)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i39_ (GGS__5B_insertSetterAST_5D_ & ioArgument_ioMapMethodList,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_insertSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 127)) ;
  GGS_lstring var_mMethodName_5112 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 129)) ;
  GGS_lstring var_mErrorMessage_5175 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 130)) ;
  GGS_lstring var_mShadowErrorMessage_5207 ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_5207 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 133)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 135)) ;
    var_mShadowErrorMessage_5207 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 136)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.plusPlusAssignOperation (GGS_insertSetterAST::init_21__21__21_ (var_mMethodName_5112, var_mErrorMessage_5175, var_mShadowErrorMessage_5207, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i39_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_insertSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 127)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 129)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 130)) ;
  switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 135)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 136)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i40_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_sortedarray COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 13)) ;
  GGS_lstring var_sortedArrayTypeName_607 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 14)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 15)) ;
  GGS_lstring var_elementTypeName_654 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 16)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 17)) ;
  GGS__5B_sortedArraySortDescriptorAST_5D_ var_sortDescriptorList_719 = GGS__5B_sortedArraySortDescriptorAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_sorted_5F_array_5F_sort_5F_descriptor_ (var_sortDescriptorList_719, inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_41 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 22)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 24)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_sortedArrayTypeDeclarationAST::init_21_isPredefined_21_sortedArrayTypeName_21_elementTypeName_21_sortDescriptorList (GGS_bool (false), var_sortedArrayTypeName_607, var_elementTypeName_654, var_sortDescriptorList_719, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 25)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i40_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_sortedarray COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 13)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 14)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 15)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 16)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 17)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_sorted_5F_array_5F_sort_5F_descriptor_indexing (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_41 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 22)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 24)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sorted_5F_array_5F_sort_5F_descriptor_i41_ (GGS__5B_sortedArraySortDescriptorAST_5D_ & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_propertyName_1341 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 36)) ;
  GGS_bool var_ascending_1369 ;
  switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 39)) ;
    var_ascending_1369 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 42)) ;
    var_ascending_1369 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.plusPlusAssignOperation (GGS_sortedArraySortDescriptorAST::init_21__21_ (var_propertyName_1341, var_ascending_1369, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sorted_5F_array_5F_sort_5F_descriptor_i41_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 36)) ;
  switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 39)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 42)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i42_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  GGS_bool var_isAbstract_1528 ;
  GGS_bool var_clonable_1553 ;
  GGS_bool var_finalClass_1576 ;
  switch (select_galgas_34_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    var_isAbstract_1528 = GGS_bool (false) ;
    var_clonable_1553 = GGS_bool (false) ;
    var_finalClass_1576 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 35)) ;
    var_isAbstract_1528 = GGS_bool (true) ;
    var_clonable_1553 = GGS_bool (false) ;
    var_finalClass_1576 = GGS_bool (false) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_final COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 40)) ;
    var_isAbstract_1528 = GGS_bool (false) ;
    var_clonable_1553 = GGS_bool (false) ;
    var_finalClass_1576 = GGS_bool (true) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 45)) ;
    var_isAbstract_1528 = GGS_bool (false) ;
    var_clonable_1553 = GGS_bool (true) ;
    var_finalClass_1576 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 50)) ;
  GGS_lstring var_className_2004 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 51)) ;
  GGS_lstring var_superClassName_2059 ;
  switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
    var_superClassName_2059 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas4", 54)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 56)) ;
    var_superClassName_2059 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 57)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_generateInSeparateFile_2257 ;
  switch (select_galgas_34_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
    var_generateInSeparateFile_2257 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 63)) ;
    var_generateInSeparateFile_2257 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 66)) ;
  GGS__5B_propertyInCollectionAST_5D_ var_propertyList_2480 = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_2480, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_className_2004, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 75)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_classDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_isAbstract_1528, var_finalClass_1576, var_className_2004, var_superClassName_2059, var_generateInSeparateFile_2257, var_propertyList_2480, var_clonable_1553, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 76)) ;
  GGS_lstring temp_1 ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_superClassName_2059.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = var_superClassName_2059 ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = function_makeWeakTypeLName (var_superClassName_2059, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 93)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_weakReferenceDeclarationAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_className_2004, function_makeWeakTypeLName (var_className_2004, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 90)), temp_1, var_generateInSeparateFile_2257, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 87)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i42_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 35)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_final COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 40)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 45)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 50)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 51)) ;
  switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 56)) ;
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 57)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 63)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 75)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i43_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 27)) ;
  GGS_lstring var_externTypeName_1553 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 28)) ;
  GGS_string var_cppPredeclarationCode_1643 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_1643, inCompiler) ;
  GGS_string var_cppClassCode_1710 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_1710, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 31)) ;
  GGS__5B__5B_typeNameFormalParameterName_5D__5D_ var_externTypeConstructorList_1773 = GGS__5B__5B_typeNameFormalParameterName_5D__5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_externTypeGetter_5D_ var_externTypeGetterList_1833 = GGS__5B_externTypeGetter_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_externTypeSetter_5D_ var_externTypeSetterList_1888 = GGS__5B_externTypeSetter_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_externTypeMethod_5D_ var_externTypeMethodList_1943 = GGS__5B_externTypeMethod_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_47 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_ (ioArgument_ioDeclarations, var_externTypeConstructorList_1773, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_ (ioArgument_ioDeclarations, var_externTypeGetterList_1833, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_ (ioArgument_ioDeclarations, var_externTypeSetterList_1888, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_ (ioArgument_ioDeclarations, var_externTypeMethodList_1943, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_externTypeDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_externTypeName_1553, var_cppPredeclarationCode_1643, var_cppClassCode_1710, var_externTypeConstructorList_1773, var_externTypeGetterList_1833, var_externTypeSetterList_1888, var_externTypeMethodList_1943, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i43_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 27)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 28)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_47 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i44_ (GGS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 62)) ;
  outArgument_outCppPredeclarationCode = GGS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_48 (inCompiler) == 2) {
      GGS_lstring var_cppPredeclarationCodeElement_2893 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 66)) ;
      outArgument_outCppPredeclarationCode.plusAssignOperation(var_cppPredeclarationCodeElement_2893.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 67)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i44_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_48 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 69)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i45_ (GGS_string & outArgument_outCppClassCode,
                                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 75)) ;
  outArgument_outCppClassCode = GGS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_49 (inCompiler) == 2) {
      GGS_lstring var_cppPredeclarationCodeElement_3273 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 79)) ;
      outArgument_outCppClassCode.plusAssignOperation(var_cppPredeclarationCodeElement_3273.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 80)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i45_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_49 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 79)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i46_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GGS__5B__5B_typeNameFormalParameterName_5D__5D_ & ioArgument_ioExternTypeConstructorList,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 90)) ;
  GGS__5B_typeNameFormalParameterName_5D_ var_argumentTypeList_3717 = GGS__5B_typeNameFormalParameterName_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_DeclarationsSyntax_52 (inCompiler)) {
      case 1: {
        GGS_lstring var_selector_3815 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 96)) ;
        GGS_lstring var_argumentTypeName_3877 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_3877, inCompiler) ;
        GGS_lstring var_argumentName_3924 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 98)) ;
        var_argumentTypeList_3717.plusPlusAssignOperation (GGS_typeNameFormalParameterName::init_21__21__21_ (var_selector_3815, var_argumentTypeName_3877, var_argumentName_3924, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 99)) ;
      } break ;
      case 2: {
        GGS_lstring var_selector_4301 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 107)) ;
        GGS_lstring var_argumentTypeName_4372 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_4372, inCompiler) ;
        GGS_lstring var_argumentName_4419 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 109)) ;
        var_argumentTypeList_3717.plusPlusAssignOperation (GGS_typeNameFormalParameterName::init_21__21__21_ (var_selector_4301, var_argumentTypeName_4372, var_argumentName_4419, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 110)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_DeclarationsSyntax_51 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 113)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 116)) ;
  ioArgument_ioExternTypeConstructorList.plusPlusAssignOperation (var_argumentTypeList_3717  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 117)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i46_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 90)) ;
  switch (select_galgas_34_DeclarationsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_DeclarationsSyntax_52 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 96)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 98)) ;
      } break ;
      case 2: {
        nt_type_5F_definition_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 109)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_DeclarationsSyntax_51 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 113)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i47_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GGS__5B_externTypeGetter_5D_ & ioArgument_ioExternTypeGetterList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 124)) ;
  GGS_lstring var_getterName_4917 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 125)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 126)) ;
  GGS__5B_typeNameFormalParameterName_5D_ var_argumentTypeList_4976 = GGS__5B_typeNameFormalParameterName_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_DeclarationsSyntax_55 (inCompiler)) {
      case 1: {
        GGS_lstring var_selector_5074 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 132)) ;
        GGS_lstring var_argumentTypeName_5136 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_5136, inCompiler) ;
        GGS_lstring var_argumentName_5192 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 134)) ;
        var_argumentTypeList_4976.plusPlusAssignOperation (GGS_typeNameFormalParameterName::init_21__21__21_ (var_selector_5074, var_argumentTypeName_5136, var_argumentName_5192, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 135)) ;
      } break ;
      case 2: {
        GGS_lstring var_selector_5578 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 143)) ;
        GGS_lstring var_argumentTypeName_5649 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_5649, inCompiler) ;
        GGS_lstring var_argumentName_5705 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 145)) ;
        var_argumentTypeList_4976.plusPlusAssignOperation (GGS_typeNameFormalParameterName::init_21__21__21_ (var_selector_5578, var_argumentTypeName_5649, var_argumentName_5705, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 146)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_DeclarationsSyntax_54 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 149)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 152)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 153)) ;
  GGS_lstring var_resultTypeName_5911 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_5911, inCompiler) ;
  ioArgument_ioExternTypeGetterList.plusPlusAssignOperation (GGS_externTypeGetter::init_21__21__21_ (var_getterName_4917, var_resultTypeName_5911, var_argumentTypeList_4976, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 155)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i47_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 124)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 125)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 126)) ;
  switch (select_galgas_34_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_DeclarationsSyntax_55 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 132)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 134)) ;
      } break ;
      case 2: {
        nt_type_5F_definition_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 145)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_DeclarationsSyntax_54 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 149)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 152)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 153)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i48_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GGS__5B_externTypeSetter_5D_ & ioArgument_ioExternTypeSetterList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 162)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 163)) ;
  GGS_lstring var_setterName_6316 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 164)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_6402 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_6402, inCompiler) ;
  ioArgument_ioExternTypeSetterList.plusPlusAssignOperation (GGS_externTypeSetter::init_21__21_ (var_setterName_6316, var_formalParameterList_6402, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 166)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i48_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 162)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 163)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 164)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i49_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GGS__5B_externTypeMethod_5D_ & ioArgument_ioExternTypeMethodList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 173)) ;
  GGS_lstring var_methodName_6783 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 174)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_6869 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_6869, inCompiler) ;
  ioArgument_ioExternTypeMethodList.plusPlusAssignOperation (GGS_externTypeMethod::init_21__21__21_ (var_methodName_6783, var_formalParameterList_6869, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 176)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 176)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i49_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 173)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 174)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_acces_5F_control_i50_ (GGS_AccessControlAST & outArgument_outAccessControl,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outAccessControl.drop () ; // Release 'out' argument
  switch (select_galgas_34_DeclarationsSyntax_56 (inCompiler)) {
  case 1: {
    outArgument_outAccessControl = GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas4", 29)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas4", 31)) ;
    outArgument_outAccessControl = GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas4", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas4", 34)) ;
    switch (select_galgas_34_DeclarationsSyntax_57 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_protectedAccess (SOURCE_FILE ("accessControl.galgas4", 36)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 38)) ;
      GGS_lstring var_value_1794 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 39)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::notEqual, var_value_1794.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_value_1794.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas4", 41)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 43)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_protectedSetAccess (SOURCE_FILE ("accessControl.galgas4", 44)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas4", 47)) ;
    switch (select_galgas_34_DeclarationsSyntax_58 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_privateAccess (SOURCE_FILE ("accessControl.galgas4", 49)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 51)) ;
      GGS_lstring var_value_2108 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 52)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_value_2108.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_value_2108.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.galgas4", 54)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 56)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_privateSetAccess (SOURCE_FILE ("accessControl.galgas4", 57)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas4", 60)) ;
    switch (select_galgas_34_DeclarationsSyntax_59 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_fileprivateSetAccess (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas4", 62))  COMMA_SOURCE_FILE ("accessControl.galgas4", 62)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 64)) ;
      GGS_lstring var_value_2461 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 65)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_fileprivateSetAccess (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas4", 66))  COMMA_SOURCE_FILE ("accessControl.galgas4", 66)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::notEqual, var_value_2461.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_value_2461.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas4", 68)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 70)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_acces_5F_control_i50_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas4", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas4", 34)) ;
    switch (select_galgas_34_DeclarationsSyntax_57 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 38)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 39)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 43)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas4", 47)) ;
    switch (select_galgas_34_DeclarationsSyntax_58 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 51)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 52)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 56)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas4", 60)) ;
    switch (select_galgas_34_DeclarationsSyntax_59 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 64)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 65)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 70)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas4", 29)) ;
  GGS_lstring var_lexiqueComponentName_1646 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 32)) ;
  GGS__5B_templateDelimitor_32_AST_5D_ var_templateDelimitorList_1736 = GGS__5B_templateDelimitor_32_AST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_templateReplacementAST_5D_ var_templateReplacementList_1798 = GGS__5B_templateReplacementAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_lexicalAttributeAST_5D_ var_lexicalAttributeList_1859 = GGS__5B_lexicalAttributeAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_terminalDeclarationAST_5D_ var_terminalDeclarationList_1920 = GGS__5B_terminalDeclarationAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_lexicalMessageDeclarationAST_5D_ var_lexicalMessageDeclarationList_1990 = GGS__5B_lexicalMessageDeclarationAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_lexicalListDeclarationAST_5D_ var_lexicalListDeclarationList_2063 = GGS__5B_lexicalListDeclarationAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_abstractLexicalRuleAST_5D_ var_lexicalRuleList_2130 = GGS__5B_abstractLexicalRuleAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_indexingAST_5D_ var_indexingListAST_2175 = GGS__5B_indexingAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_1736, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_1798, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_ (var_lexicalAttributeList_1859, inCompiler) ;
    } break ;
    case 5: {
      nt_terminal_5F_declaration_ (var_terminalDeclarationList_1920, inCompiler) ;
    } break ;
    case 6: {
      nt_lexical_5F_list_5F_declaration_ (var_lexicalListDeclarationList_2063, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_explicit_5F_rule_ (var_lexicalRuleList_2130, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_implicit_5F_rule_ (var_lexicalRuleList_2130, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_message_5F_declaration_ (var_lexicalMessageDeclarationList_1990, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_indexing_5F_declaration_ (var_indexingListAST_2175, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 64)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_1646, GGS_bool (false), var_templateDelimitorList_1736, var_templateReplacementList_1798, var_lexicalAttributeList_1859, var_terminalDeclarationList_1920, var_lexicalMessageDeclarationList_1990, var_lexicalListDeclarationList_2063, var_lexicalRuleList_2130, var_indexingListAST_2175, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas4", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_terminal_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_lexical_5F_list_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_explicit_5F_rule_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_implicit_5F_rule_indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_message_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_indexing_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GGS__5B_indexingAST_5D_ & ioArgument_ioIndexingListAST,
                                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas4", 84)) ;
  GGS_lstring var_indexName_3570 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 86)) ;
  GGS_lstring var_indexComment_3653 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 87)) ;
  ioArgument_ioIndexingListAST.plusPlusAssignOperation (GGS_indexingAST::init_21__21_ (var_indexName_3570, var_indexComment_3653, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas4", 84)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 86)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 87)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_ (GGS__5B_lexicalMessageDeclarationAST_5D_ & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                            Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas4", 95)) ;
  GGS_lstring var_messageName_3991 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 96)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 97)) ;
  GGS_lstring var_messageValue_4042 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 98)) ;
  ioArgument_ioLexicalMessageDeclarationList.plusPlusAssignOperation (GGS_lexicalMessageDeclarationAST::init_21__21_ (var_messageName_3991, var_messageValue_4042, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 99)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas4", 95)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 96)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 97)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 98)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_ (GGS__5B_abstractLexicalRuleAST_5D_ & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas4", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas4", 106)) ;
  GGS_lstring var_listName_4376 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 107)) ;
  ioArgument_ioLexicalImplicitRuleList.plusPlusAssignOperation (GGS_lexicalImplicitRuleAST::init_21_ (var_listName_4376, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 108)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas4", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas4", 106)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 107)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_ (GGS__5B_abstractLexicalRuleAST_5D_ & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas4", 114)) ;
  GGS_lexicalExpressionAST var_lexicalRuleExpression_4716 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_4716, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 116)) ;
  GGS__5B_lexicalInstructionAST_5D_ var_instructionList_4780 = GGS__5B_lexicalInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_instructionList_4780, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 122)) ;
  ioArgument_ioLexicalExplicitRuleList.plusPlusAssignOperation (GGS_lexicalExplicitRuleAST::init_21__21_ (var_lexicalRuleExpression_4716, var_instructionList_4780, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 123)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas4", 114)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 122)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_ (GGS__5B_lexicalInstructionAST_5D_ & ioArgument_ioInstructionList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas4", 129)) ;
  GGS_lexicalInstructionAST var_instruction_5243 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_5243, inCompiler) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (var_instruction_5243  COMMA_SOURCE_FILE ("lexique-component.galgas4", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas4", 129)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_ (GGS__5B_lexicalWhileBranchAST_5D_ & ioArgument_ioLexicalWhileBranchList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas4", 137)) ;
  GGS_lexicalExpressionAST var_whileExpression_5552 ;
  nt_lexical_5F_expression_ (var_whileExpression_5552, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 139)) ;
  GGS__5B_lexicalInstructionAST_5D_ var_whileInstructionList_5610 = GGS__5B_lexicalInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_whileInstructionList_5610, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.plusPlusAssignOperation (GGS_lexicalWhileBranchAST::init_21__21_ (var_whileExpression_5552, var_whileInstructionList_5610, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 145)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas4", 137)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 139)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lchar var_character_6044 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 151)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCharacterInputArgumentAST::init_21_ (var_character_6044, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lbigint var_unsignedValue_6376 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas4", 158)) ;
  outArgument_outEffectiveArgument = GGS_lexicalUnsignedInputArgumentAST::init_21_ (var_unsignedValue_6376, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas4", 158)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_location var_currentLocation_6700 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 165)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 166)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCurrentCharacterInputArgumentAST::init_21_ (var_currentLocation_6700, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 166)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lstring var_idf_7075 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 173)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GGS_lexicalAttributeInputArgumentAST::init_21_ (var_idf_7075, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 177)) ;
    GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ var_functionActualArgumentList_7237 = GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 181)) ;
        GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_7405 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_7405, inCompiler) ;
        var_functionActualArgumentList_7237.plusPlusAssignOperation (var_arg_7405  COMMA_SOURCE_FILE ("lexique-component.galgas4", 183)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 185)) ;
    outArgument_outEffectiveArgument = GGS_lexicalFunctionInputArgumentAST::init_21__21_ (var_idf_7075, var_functionActualArgumentList_7237, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 173)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 177)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 181)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 185)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_term_ (outArgument_outExpression, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_expression_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_lexical_5F_term_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 202)) ;
      GGS_lexicalExpressionAST var_rightExpression_8059 ;
      nt_lexical_5F_factor_ (var_rightExpression_8059, inCompiler) ;
      outArgument_outExpression = GGS_lexicalOrExpressionAST::init_21__21_ (outArgument_outExpression, var_rightExpression_8059, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_term_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_lexical_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 202)) ;
      nt_lexical_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_string_8356 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 211)) ;
  outArgument_outExpression = GGS_lexicalStringMatchAST::init_21_ (var_string_8356, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 211)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 218)) ;
  GGS_lstring var_string_8618 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 219)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas4", 220)) ;
  GGS_lstring var_errorMessage_8661 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 221)) ;
  outArgument_outExpression = GGS_lexicalStringNotMatchAST::init_21__21_ (var_string_8618, var_errorMessage_8661, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 218)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 219)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas4", 220)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 221)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_character_8943 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 228)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_lexicalCharacterMatchAST::init_21_ (var_character_8943, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 232)) ;
    GGS_lchar var_upperBound_9071 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 233)) ;
    outArgument_outExpression = GGS_lexicalCharacterIntervalMatchAST::init_21__21_ (var_character_8943, var_upperBound_9071, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 228)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 232)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 233)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_characterSet_9376 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 241)) ;
  outArgument_outExpression = GGS_lexicalCharacterSetMatchAST::init_21_ (var_characterSet_9376, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 241)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_ (GGS__5B_lexicalListDeclarationAST_5D_ & ioArgument_ioLexicalListDeclarationList,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas4", 248)) ;
  GGS_lstring var_name_9694 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 249)) ;
  GGS__5B_sentLexicalAttributeAST_5D_ var_sentAttributeList_9735 = GGS__5B_sentLexicalAttributeAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_9805 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 253)) ;
      GGS_lstring var_sentAttribute_9840 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 254)) ;
      var_sentAttributeList_9735.plusPlusAssignOperation (GGS_sentLexicalAttributeAST::init_21__21_ (var_selector_9805, var_sentAttribute_9840, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 255)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 257)) ;
      GGS_lstring var_selector_9940 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 258)) ;
      GGS_lstring var_sentAttribute_9984 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 259)) ;
      var_sentAttributeList_9735.plusPlusAssignOperation (GGS_sentLexicalAttributeAST::init_21__21_ (var_selector_9940, var_sentAttribute_9984, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 260)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_theStyle_10079 ;
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas4", 264)) ;
    var_theStyle_10079 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 265)) ;
  } break ;
  case 2: {
    var_theStyle_10079 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 267)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas4", 269)) ;
  GGS_lstring var_errorMessage_10262 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 270)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 271)) ;
  GGS__5B_lexicalListEntryAST_5D_ var_entryList_10292 = GGS__5B_lexicalListEntryAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_10292, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 276)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 278)) ;
  ioArgument_ioLexicalListDeclarationList.plusPlusAssignOperation (GGS_lexicalListDeclarationAST::init_21__21__21__21__21_ (var_name_9694, var_theStyle_10079, var_errorMessage_10262, var_sentAttributeList_9735, var_entryList_10292, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 279)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas4", 248)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 249)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 253)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 254)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 257)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 259)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas4", 264)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 265)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas4", 269)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 270)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 271)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 276)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 278)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_ (GGS__5B_lexicalListEntryAST_5D_ & ioArgument_ioLexicalListEntryList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_entrySpelling_10734 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 285)) ;
  GGS_bool var_isTemplateEndMark_10757 = GGS_bool (false) ;
  GGS_bool var_nonAtomicSelection_10791 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas4", 290)) ;
      var_isTemplateEndMark_10757 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas4", 293)) ;
      var_nonAtomicSelection_10791 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_terminalSpelling_10990 ;
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 298)) ;
    var_terminalSpelling_10990 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 299)) ;
  } break ;
  case 2: {
    var_terminalSpelling_10990 = var_entrySpelling_10734 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.plusPlusAssignOperation (GGS_lexicalListEntryAST::init_21__21__21_nonAtomicSelection_21_isEndOfTemplateMark (var_entrySpelling_10734, var_terminalSpelling_10990, var_nonAtomicSelection_10791, var_isTemplateEndMark_10757, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 303)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 285)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas4", 290)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas4", 293)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 298)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 299)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_ (GGS__5B_lexicalAttributeAST_5D_ & ioArgument_ioLexicalAttributeList,
                                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_typeName_11524 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas4", 313)) ;
  GGS_lstring var_name_11566 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 314)) ;
  ioArgument_ioLexicalAttributeList.plusPlusAssignOperation (GGS_lexicalAttributeAST::init_21__21_ (var_typeName_11524, var_name_11566, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 315)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas4", 313)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 314)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_ (GGS__5B_terminalDeclarationAST_5D_ & ioArgument_ioTerminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_name_11851 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 321)) ;
  GGS__5B_sentLexicalAttributeAST_5D_ var_sentAttributeList_11896 = GGS__5B_sentLexicalAttributeAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_11992 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 325)) ;
      GGS_lstring var_sentAttribute_12027 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 326)) ;
      var_sentAttributeList_11896.plusPlusAssignOperation (GGS_sentLexicalAttributeAST::init_21__21_ (var_selector_11992, var_sentAttribute_12027, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 327)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 329)) ;
      GGS_lstring var_selector_12127 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas4", 330)) ;
      GGS_lstring var_sentAttribute_12171 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 331)) ;
      var_sentAttributeList_11896.plusPlusAssignOperation (GGS_sentLexicalAttributeAST::init_21__21_ (var_selector_12127, var_sentAttribute_12171, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 332)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_theStyle_12266 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("lexique-component.galgas4", 334)) ;
  GGS_bool var_nonAtomicSelection_12324 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_12359 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas4", 339)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_theStyle_12266.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas4", 341)), GGS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas4", 341)) ;
        }
      }
      var_theStyle_12266 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 343)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas4", 345)) ;
      var_nonAtomicSelection_12324 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas4", 348)) ;
      var_templateEndMark_12359 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas4", 351)) ;
  GGS_lstring var_errorMessage_12738 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 352)) ;
  ioArgument_ioTerminalDeclarationList.plusPlusAssignOperation (GGS_terminalDeclarationAST::init_21__21__21__21__21_nonAtomicSelection_21_isEndOfTemplateMark (var_name_11851, var_sentAttributeList_11896, var_errorMessage_12738, var_theStyle_12266, var_nonAtomicSelection_12324, var_templateEndMark_12359, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas4", 353)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 321)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 325)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 326)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 329)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 331)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas4", 339)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas4", 343)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas4", 345)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas4", 348)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas4", 351)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas4", 352)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i21_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS__5B_lexicalSendSearchAST_5D_ var_lexicalSendSearchList_1983 = GGS__5B_lexicalSendSearchAST_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_attributeName_2076 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 40)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 41)) ;
    GGS_lstring var_searchListName_2136 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 42)) ;
    var_lexicalSendSearchList_1983.plusPlusAssignOperation (GGS_lexicalSendSearchAST::init_21__21_ (var_attributeName_2076, var_searchListName_2136, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 43)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 44)) ;
    if (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction_2310 ;
  switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
    GGS_lstring var_defaultSentTerminal_2382 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 50)) ;
    var_lexicalSendDefaultAction_2310 = GGS_lexicalSendTerminalByDefaultAST::init_21_ (var_defaultSentTerminal_2382, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 53)) ;
    GGS_lstring var_defaultErrorMessageName_2546 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 54)) ;
    var_lexicalSendDefaultAction_2310 = GGS_lexicalErrorByDefaultAST::init_21_ (var_defaultErrorMessageName_2546, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_lexicalStructuredSendInstructionAST::init_21__21_ (var_lexicalSendSearchList_1983, var_lexicalSendDefaultAction_2310, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 40)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 41)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 42)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 44)) ;
    if (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 46)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 50)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 54)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i22_ (GGS__5B_lexicalInstructionAST_5D_ & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_actionName_3073 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 61)) ;
  GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_ var_actualArgumentList_3136 = GGS__5B_abstractLexicalRoutineActualArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 66)) ;
      GGS_location var_passingModeLocation_3210 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 67)) ;
      GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_3343 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_3343, inCompiler) ;
      var_actualArgumentList_3136.plusPlusAssignOperation (GGS_lexicalFormalInputArgumentAST::init_21__21_ (var_passingModeLocation_3210, var_arg_3343, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 69)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 71)) ;
      GGS_location var_passingModeLocation_3466 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 72)) ;
      GGS_lstring var_attributeName_3537 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 73)) ;
      var_actualArgumentList_3136.plusPlusAssignOperation (GGS_lexicalAttributeInputOutputArgumentAST::init_21__21_ (var_passingModeLocation_3466, var_attributeName_3537, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 74)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS__5B_lstring_5D_ var_errorMessageList_3685 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 79)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_errorMessageName_3789 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 81)) ;
      var_errorMessageList_3685.plusPlusAssignOperation (var_errorMessageName_3789  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 82)) ;
      if (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 84)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 87)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalRoutineCallInstructionAST::init_21__21__21_ (var_actionName_3073, var_actualArgumentList_3136, var_errorMessageList_3685, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 63)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 66)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 71)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 73)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 79)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 81)) ;
      if (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 84)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 87)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GGS__5B_lexicalInstructionAST_5D_ & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 34)) ;
  GGS_lstring var_tagName_1771 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 35)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalTagInstructionAST::init_21_ (var_tagName_1771, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 34)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i24_ (GGS__5B_lexicalInstructionAST_5D_ & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 35)) ;
  GGS__5B_lexicalSelectBranchAST_5D_ var_lexicalWhileBranchList_1877 = GGS__5B_lexicalSelectBranchAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 38)) ;
    GGS_lexicalExpressionAST var_selectExpression_1985 ;
    nt_lexical_5F_expression_ (var_selectExpression_1985, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 40)) ;
    GGS__5B_lexicalInstructionAST_5D_ var_selectInstructionList_2048 = GGS__5B_lexicalInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
        nt_lexical_5F_instruction_ (var_selectInstructionList_2048, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_lexicalWhileBranchList_1877.plusPlusAssignOperation (GGS_lexicalSelectBranchAST::init_21__21_ (var_selectExpression_1985, var_selectInstructionList_2048, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 46)) ;
    if (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 49)) ;
  GGS__5B_lexicalInstructionAST_5D_ var_defaultInstructionList_2308 = GGS__5B_lexicalInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_defaultInstructionList_2308, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 55)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalSelectInstructionAST::init_21__21_ (var_lexicalWhileBranchList_1877, var_defaultInstructionList_2308, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 56)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 35)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 38)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 40)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
        nt_lexical_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 49)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i25_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_sentTerminal_2471 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 51)) ;
  outArgument_outInstruction = GGS_lexicalSimpleSendInstructionAST::init_21_ (var_sentTerminal_2471, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_ (GGS__5B_lexicalInstructionAST_5D_ & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 37)) ;
  GGS_lstring var_tagName_1926 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 39)) ;
  GGS_lstring var_terminalName_1971 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 40)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalRewindInstructionAST::init_21__21_ (var_tagName_1926, var_terminalName_1971, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_ (GGS__5B_lexicalInstructionAST_5D_ & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 38)) ;
  GGS_location var_location_1996 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 39)) ;
  GGS__5B_lexicalInstructionAST_5D_ var_repeatedInstructionList_2055 = GGS__5B_lexicalInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList_2055, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS__5B_lexicalWhileBranchAST_5D_ var_lexicalWhileBranchList_2203 = GGS__5B_lexicalWhileBranchAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList_2203, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 50)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalRepeatInstructionAST::init_21__21__21_ (var_repeatedInstructionList_2055, var_lexicalWhileBranchList_2203, var_location_1996, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 38)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_indexing (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GGS__5B_lexicalInstructionAST_5D_ & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 34)) ;
  GGS_lstring var_warningMessageName_1783 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 35)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalWarningInstructionAST::init_21_ (var_warningMessageName_1783, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 34)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GGS__5B_lexicalInstructionAST_5D_ & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 34)) ;
  GGS_lstring var_terminalName_1773 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 35)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalDropInstructionAST::init_21_ (var_terminalName_1773, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 34)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GGS__5B_lexicalInstructionAST_5D_ & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 34)) ;
  GGS_lstring var_errorMessageName_1777 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 35)) ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_lexicalErrorInstructionAST::init_21_ (var_errorMessageName_1777, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 34)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 39)) ;
  GGS_lstring var_lexiqueComponentName_2050 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 42)) ;
  GGS_lstring var_lexiqueSuperComponentName_2112 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 45)) ;
  GGS__5B_templateDelimitor_32_AST_5D_ var_templateDelimitorList_2207 = GGS__5B_templateDelimitor_32_AST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_templateReplacementAST_5D_ var_templateReplacementList_2269 = GGS__5B_templateReplacementAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_2207, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_2269, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 54)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_templateLexiqueComponentAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_2050, var_lexiqueSuperComponentName_2112, var_templateDelimitorList_2207, var_templateReplacementList_2269, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i32_ (GGS__5B_templateDelimitor_32_AST_5D_ & ioArgument_ioTemplateDelimitorList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 67)) ;
  GGS_lstring var_startString_2919 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 68)) ;
  GGS_bool var_nonAtomicSelection_2940 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_2975 = GGS_bool (false) ;
  GGS_bool var_preserved_3007 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 74)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_nonAtomicSelection_2940.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 76)), GGS_string ("duplicated %nonAtomicSelection attribute"), fixItArray2  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 76)) ;
        }
      }
      var_nonAtomicSelection_2940 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 80)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_templateEndMark_2975.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 82)), GGS_string ("duplicated %templateEndMark attribute"), fixItArray4  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 82)) ;
        }
      }
      var_templateEndMark_2975 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 86)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_preserved_3007.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 88)), GGS_string ("duplicated %preserved attribute"), fixItArray6  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 88)) ;
        }
      }
      var_preserved_3007 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 92)) ;
  GGS_lstring var_endString_3570 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 93)) ;
  ioArgument_ioTemplateDelimitorList.plusPlusAssignOperation (GGS_templateDelimitor_32_AST::init_21__21_nonAtomicSelection_21__21__21_ (var_startString_2919, var_nonAtomicSelection_2940, var_templateEndMark_2975, var_preserved_3007, var_endString_3570, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 94)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 74)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 80)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 86)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i33_ (GGS__5B_templateReplacementAST_5D_ & ioArgument_ioTemplateReplacement,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 105)) ;
  GGS_lstring var_matchString_3988 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 106)) ;
  GGS_lstring var_replacementString_4018 ;
  GGS_lstring var_replacementFunction_4053 ;
  switch (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 110)) ;
    var_replacementString_4018 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 111)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 112)) ;
    var_replacementFunction_4053 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 113)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 115)) ;
    var_replacementString_4018 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 116)) ;
    var_replacementFunction_4053 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 117)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.plusPlusAssignOperation (GGS_templateReplacementAST::init_21__21__21_ (var_matchString_3988, var_replacementString_4018, var_replacementFunction_4053, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 119)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 106)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 110)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 111)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 112)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 113)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 115)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 116)) ;
  } break ;
  default:
    break ;
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas4", 28)) ;
  GGS_lstring var_optionComponentName_1570 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas4", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 30)) ;
  GGS__5B_commandLineOptionAST_5D_ temp_0 = GGS__5B_commandLineOptionAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas4", 31)) ;
  GGS__5B_commandLineOptionAST_5D_ var_options_1631 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_ (var_options_1631, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 36)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_optionComponentName_1570, var_options_1631, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas4", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_i1_ (GGS__5B_commandLineOptionAST_5D_ & ioArgument_ioCommandLineOptionList,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mOptionTypeName_2084 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas4", 47)) ;
  GGS_lstring var_mOptionInternalName_2133 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas4", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 49)) ;
  GGS_lchar var_mOptionInvocationLetter_2188 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 51)) ;
  GGS_lstring var_mOptionInvocationString_2251 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 53)) ;
  GGS_lstring var_mOptionComment_2315 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 54)) ;
  GGS_lstring var_defaultValue_2339 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 55)), inCompiler COMMA_HERE) ;
  GGS_optionDefaultValueEnumAST var_optionDefaultValueKind_2419 ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_2419 = GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas4", 58)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas4", 60)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_2339 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 62)) ;
      var_optionDefaultValueKind_2419 = GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas4", 63)) ;
    } break ;
    case 2: {
      GGS_lbigint var_v_2713 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas4", 65)) ;
      var_defaultValue_2339 = GGS_lstring::init_21__21_ (var_v_2713.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas4", 66)), var_v_2713.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_2419 = GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas4", 67)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.plusPlusAssignOperation (GGS_commandLineOptionAST::init_21__21__21__21__21__21__21_ (var_mOptionTypeName_2084, var_mOptionInternalName_2133, var_mOptionInvocationLetter_2188, var_mOptionInvocationString_2251, var_mOptionComment_2315, var_defaultValue_2339, var_optionDefaultValueKind_2419, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas4", 70)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas4", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas4", 48)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 50)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 54)) ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas4", 60)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas4", 62)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas4", 65)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas4", 119)) ;
  GGS_lstring var_mGUIName_4508 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 120)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 121)) ;
  GGS__5B_lstring_5D_ var_importedOptionList_4545 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_guiSimpleAttributeAST_5D_ var_simpleGlobalAttributes_4603 = GGS__5B_guiSimpleAttributeAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_withLexiqueAST_5D_ var_withLexiqueList_4658 = GGS__5B_withLexiqueAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_projectIndexingDescriptorAST_5D_ var_projectExtensionList_4720 = GGS__5B_projectIndexingDescriptorAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas4", 128)) ;
      GGS_lstring var_fileExtension_4807 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 129)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas4", 130)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas4", 131)) ;
      GGS_lstring var_indexingPathSuffix_4873 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 132)) ;
      var_projectExtensionList_4720.plusPlusAssignOperation (GGS_projectIndexingDescriptorAST::init_21__21_ (var_fileExtension_4807, var_indexingPathSuffix_4873, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 133)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_4603, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_4545, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_4658, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 142)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.plusPlusAssignOperation (GGS_galgasGUIComponentAST::init_21__21__21__21__21_ (var_mGUIName_4508, var_importedOptionList_4545, var_simpleGlobalAttributes_4603, var_withLexiqueList_4658, var_projectExtensionList_4720, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 143)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas4", 119)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 120)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 121)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas4", 128)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 129)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas4", 130)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas4", 131)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 132)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 142)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS__5B_withLexiqueAST_5D_ & ioArgument_ioWithLexiqueList,
                                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas4", 154)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas4", 155)) ;
  GGS_lstring var_lexiqueReference_5593 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 156)) ;
  GGS__5B_guiLabelAST_5D_ var_labels_5634 = GGS__5B_guiLabelAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_guiSimpleAttributeAST_5D_ var_simpleAttributes_5680 = GGS__5B_guiSimpleAttributeAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_guiCompoundAttributeAST_5D_ var_compoundAttributes_5738 = GGS__5B_guiCompoundAttributeAST_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 160)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas4", 163)) ;
      GGS_uint var_displayStyle_5822 ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_5822 = GGS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 168)) ;
        var_displayStyle_5822 = GGS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GGS__5B_terminalLabelAST_5D_ var_terminalList_5959 = GGS__5B_terminalLabelAST_5D_::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_terminal_6030 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 173)) ;
        GGS_uint var_displayFlags_6058 ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_6058 = GGS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 178)) ;
          var_displayFlags_6058 = GGS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 181)) ;
          GGS_lbigint var_leadingStrip_6252 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas4", 182)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_leadingStrip_6252.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 183)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_6252.readProperty_location (), GGS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 184)) ;
            }
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 186)) ;
          GGS_lbigint var_endingStrip_6429 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas4", 187)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::greaterOrEqual, var_endingStrip_6429.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 188)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_6429.readProperty_location (), GGS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 189)) ;
            }
          }
          var_displayFlags_6058 = var_leadingStrip_6252.readProperty_bigint ().left_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 191)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 191)).operator_or (var_endingStrip_6429.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas4", 191)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 191)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 192)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_5959.plusPlusAssignOperation (GGS_terminalLabelAST::init_21__21_ (var_terminal_6030, var_displayFlags_6058, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 194)) ;
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 196)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_5634.plusPlusAssignOperation (GGS_guiLabelAST::init_21__21__21_ (var_displayStyle_5822, var_terminalList_5959, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 198)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 198)) ;
    } break ;
    case 3: {
      GGS_lstring var_key_6840 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 200)) ;
      GGS_lstring var_name_6877 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 201)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 202)) ;
      GGS_lstring var_value_6903 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 203)), inCompiler COMMA_HERE) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GGS_lstring var_v_6988 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 205)) ;
        var_value_6903 = GGS_lstring::init_21__21_ (var_value_6903.readProperty_string ().add_operation (var_v_6988.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 206)), var_v_6988.readProperty_location (), inCompiler COMMA_HERE) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_5738.plusPlusAssignOperation (GGS_guiCompoundAttributeAST::init_21__21__21_ (var_key_6840, var_name_6877, var_value_6903, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 209)) ;
    } break ;
    case 4: {
      GGS_lstring var_name_7169 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 211)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 212)) ;
      GGS_lstring var_value_7217 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 213)) ;
      var_simpleAttributes_5680.plusPlusAssignOperation (GGS_guiSimpleAttributeAST::init_21__21_ (var_name_7169, var_value_7217, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 214)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 216)) ;
  ioArgument_ioWithLexiqueList.plusPlusAssignOperation (GGS_withLexiqueAST::init_21__21__21__21_ (var_lexiqueReference_5593, var_labels_5634, var_simpleAttributes_5680, var_compoundAttributes_5738, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 217)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas4", 154)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas4", 155)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 156)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 160)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas4", 163)) ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 168)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 173)) ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 178)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 181)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas4", 182)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 186)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas4", 187)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 192)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 196)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 200)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 201)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 202)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 205)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 211)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 212)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 213)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 216)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS__5B_lstring_5D_ & ioArgument_ioImportedOptionList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas4", 223)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas4", 224)) ;
  GGS_lstring var_optionReference_7613 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 225)) ;
  ioArgument_ioImportedOptionList.plusPlusAssignOperation (var_optionReference_7613  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 226)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas4", 223)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas4", 224)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 225)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS__5B_guiSimpleAttributeAST_5D_ & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mKey_7895 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 232)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 233)) ;
  GGS_lstring var_mValue_7917 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 234)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_value_7990 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 236)) ;
    var_mValue_7917 = GGS_lstring::init_21__21_ (var_mValue_7917.readProperty_string ().add_operation (var_value_7990.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 237)), var_value_7990.readProperty_location (), inCompiler COMMA_HERE) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.plusPlusAssignOperation (GGS_guiSimpleAttributeAST::init_21__21_ (var_mKey_7895, var_mValue_7917, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 240)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas4", 232)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 233)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas4", 236)) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 46)) ;
  GGS_lstring var_syntaxComponentName_2589 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 49)) ;
  GGS_lstring var_importedLexiqueReference_2666 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 50)) ;
  GGS_bool var_hasTranslateFeature_2734 ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_2734 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 56)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_translatable COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 57)) ;
    var_hasTranslateFeature_2734 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 60)) ;
  GGS__5B_nonterminalDeclarationAST_5D_ var_nonterminalDeclarationList_2924 = GGS__5B_nonterminalDeclarationAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_syntaxRuleAST_5D_ var_ruleList_2993 = GGS__5B_syntaxRuleAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_2924, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_2993, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 71)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.plusPlusAssignOperation (GGS_syntaxComponentAST::init_21__21__21__21__21_ (var_syntaxComponentName_2589, var_importedLexiqueReference_2666, var_nonterminalDeclarationList_2924, var_ruleList_2993, var_hasTranslateFeature_2734, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 72)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 46)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 50)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 56)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_translatable COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 71)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 86)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 87)) ;
  GGS_lstring var_syntaxComponentName_3794 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 89)) ;
  GGS__5B_nonterminalDeclarationAST_5D_ var_nonterminalDeclarationList_3860 = GGS__5B_nonterminalDeclarationAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_syntaxRuleAST_5D_ var_ruleList_3929 = GGS__5B_syntaxRuleAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_3860, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_3929, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 100)) ;
  {
  extensionSetter_insertKey (ioArgument_ioDeclarations.mProperty_mSyntaxExtensions, var_syntaxComponentName_3794.readProperty_string (), var_syntaxComponentName_3794, var_nonterminalDeclarationList_3860, var_ruleList_3929, inCompiler COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 101)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 86)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 87)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 88)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 89)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 100)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS__5B_nonterminalDeclarationAST_5D_ & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 115)) ;
  GGS_lstring var_mNonterminalName_4814 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 116)) ;
  GGS__5B_nonTerminalLabelAST_5D_ var_labels_4889 = GGS__5B_nonTerminalLabelAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_formalParameterAST_5D_ var_firstBranchFormalParameters_4976 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_firstBranchFormalParameters_4976, inCompiler) ;
  var_labels_4889.plusPlusAssignOperation (GGS_nonTerminalLabelAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 119)), inCompiler COMMA_HERE), var_firstBranchFormalParameters_4976, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 119)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 119)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 122)) ;
      GGS_lstring var_labelName_5141 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 123)) ;
      GGS__5B_formalParameterAST_5D_ var_formalParameters_5228 ;
      nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameters_5228, inCompiler) ;
      var_labels_4889.plusPlusAssignOperation (GGS_nonTerminalLabelAST::init_21__21__21_ (var_labelName_5141, var_formalParameters_5228, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 125)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 125)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.plusPlusAssignOperation (GGS_nonterminalDeclarationAST::init_21__21_ (var_mNonterminalName_4814, var_labels_4889, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 127)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 115)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 116)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 122)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 123)) ;
      nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                const GGS_lstring constinArgument_inLabelName,
                                                                                                                GGS__5B_syntaxRuleLabelAST_5D_ & ioArgument_ioLabelList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS__5B_formalParameterAST_5D_ var_mFormalParameters_5881 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameters_5881, inCompiler) ;
  GGS_location var_endOfArguments_5908 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 139)) ;
  GGS__5B_syntaxInstructionAST_5D_ var_mSyntaxInstructionList_6026 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mSyntaxInstructionList_6026, inCompiler) ;
  ioArgument_ioLabelList.plusPlusAssignOperation (GGS_syntaxRuleLabelAST::init_21__21__21__21__21_ (constinArgument_inLabelName, var_mFormalParameters_5881, var_endOfArguments_5908, var_mSyntaxInstructionList_6026, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 146)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 147)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 139)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 147)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS__5B_syntaxRuleAST_5D_ & ioArgument_ioRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 154)) ;
  GGS_lstring var_mNonterminalName_6494 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 155)) ;
  GGS_lstring var_labelName_6546 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 156)), inCompiler COMMA_HERE) ;
  GGS__5B_syntaxRuleLabelAST_5D_ var_mLabelList_6596 = GGS__5B_syntaxRuleLabelAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, var_labelName_6546, var_mLabelList_6596, inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 161)) ;
      var_labelName_6546 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 162)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.plusPlusAssignOperation (GGS_syntaxRuleAST::init_21__21_ (var_mNonterminalName_6494, var_mLabelList_6596, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 164)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 154)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 155)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 161)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 162)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS__5B_syntaxInstructionAST_5D_ & outArgument_outSyntaxInstructionList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outSyntaxInstructionList.drop () ; // Release 'out' argument
  outArgument_outSyntaxInstructionList = GGS__5B_syntaxInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_SyntaxComponentSyntax_7 (inCompiler)) {
      case 1: {
        GGS_semanticInstructionAST var_instruction_7429 ;
        nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_7429, inCompiler) ;
        outArgument_outSyntaxInstructionList.plusPlusAssignOperation (var_instruction_7429  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 181)) ;
      } break ;
      case 2: {
        GGS_syntaxInstructionAST var_instruction_7559 ;
        nt_syntax_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_7559, inCompiler) ;
        outArgument_outSyntaxInstructionList.plusPlusAssignOperation (var_instruction_7559  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 184)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_6 (inCompiler) == 2) {
        switch (select_galgas_34_SyntaxComponentSyntax_8 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 188)) ;
        } break ;
        case 2: {
          GGS_string var_separator_7701 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 190)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_7701.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 191)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 191)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 192)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 192)) ;
            }
          }
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_SyntaxComponentSyntax_7 (inCompiler)) {
      case 1: {
        nt_semantic_5F_instruction_indexing (inCompiler) ;
      } break ;
      case 2: {
        nt_syntax_5F_instruction_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_6 (inCompiler) == 2) {
        switch (select_galgas_34_SyntaxComponentSyntax_8 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas4", 188)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 47)) ;
  GGS_location var_instructionLocation_2289 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 48)) ;
  GGS_semanticExpressionAST var_sentExpression_2390 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sentExpression_2390, inCompiler) ;
  outArgument_outInstruction = GGS_syntaxSendInstructionAST::init_21__21_ (var_instructionLocation_2289, var_sentExpression_2390, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas4", 47)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mNonterminalName_1513 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 26)) ;
  GGS__5B_actualParameterAST_5D_ var_mActualParameterList_1647 ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_mActualParameterList_1647, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_1790 ;
  switch (select_galgas_34_SyntaxComponentSyntax_9 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_1790 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 33)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_1790, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_nonterminalCallInstruction::init_21__21__21__21_ (var_mNonterminalName_1513.readProperty_location (), var_mNonterminalName_1513, var_mActualParameterList_1647, var_grammarInstructionSyntaxDirectedTranslationResult_1790, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 26)) ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 33)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_terminalName_1511 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 26)) ;
  GGS__5B_actualInputParameterAST_5D_ var_actualInputParameterList_1612 ;
  nt_actual_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_actualInputParameterList_1612, inCompiler) ;
  GGS__5B__32_lstring_5D_ var_indexNameList_1680 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_1680, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1816 ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1946 ;
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1816 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1946 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 36)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1816, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1946, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_terminalCheckInstructionAST::init_21__21__21__21__21__21_ (var_terminalName_1511.readProperty_location (), var_terminalName_1511, var_actualInputParameterList_1612, var_indexNameList_1680, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_1816, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_1946, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 26)) ;
  nt_actual_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 36)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i9_ (GGS__5B__32_lstring_5D_ & outArgument_outIndexNameList,
                                                                                                                            Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GGS__5B__32_lstring_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 56)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 57)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_indexName_3142 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 59)) ;
      GGS_lstring var_postfixName_3207 ;
      switch (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler)) {
      case 1: {
        var_postfixName_3207 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas4", 62)) ;
      } break ;
      case 2: {
        var_postfixName_3207 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 64)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.plusPlusAssignOperation (GGS__32_lstring::init_21__21_ (var_indexName_3142, var_postfixName_3207, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 66)) ;
      if (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 68)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 70)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 56)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 57)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 59)) ;
      switch (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 64)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 68)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 70)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas4", 37)) ;
  GGS_location var_mSelectInstructionLocation_1989 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 38)) ;
  GGS__5B_SyntaxInstructionListAST_5D_ var_mSelectBranchList_2041 = GGS__5B_SyntaxInstructionListAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_syntaxInstructionAST_5D_ var_il_2170 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_il_2170, inCompiler) ;
  var_mSelectBranchList_2041.plusPlusAssignOperation (GGS_SyntaxInstructionListAST::init_21__21_ (var_il_2170, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 41)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas4", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas4", 43)) ;
    GGS__5B_syntaxInstructionAST_5D_ var_instructionList_2324 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructionList_2324, inCompiler) ;
    var_mSelectBranchList_2041.plusPlusAssignOperation (GGS_SyntaxInstructionListAST::init_21__21_ (var_instructionList_2324, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 45)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas4", 45)) ;
    if (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas4", 48)) ;
  GGS_location var_endOf_5F_select_5F_instruction_2440 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 49)) ;
  outArgument_outInstruction = GGS_selectInstruction::init_21__21__21_ (var_mSelectInstructionLocation_1989, var_mSelectBranchList_2041, var_endOf_5F_select_5F_instruction_2440, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas4", 37)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas4", 43)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas4", 48)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 39)) ;
  GGS_location var_mRepeatInstructionLocation_2114 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 40)) ;
  GGS__5B_syntaxInstructionAST_5D_ var_mRepeatedInstructionList_2235 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mRepeatedInstructionList_2235, inCompiler) ;
  GGS_location var_endOf_5F_repeated_5F_instructions_2269 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 42)) ;
  GGS__5B_SyntaxInstructionListAST_5D_ var_mRepeatBranchList_2322 = GGS__5B_SyntaxInstructionListAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 45)) ;
    GGS__5B_syntaxInstructionAST_5D_ var_mInstructionList_2478 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_2478, inCompiler) ;
    var_mRepeatBranchList_2322.plusPlusAssignOperation (GGS_SyntaxInstructionListAST::init_21__21_ (var_mInstructionList_2478, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 47)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 47)) ;
    if (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 50)) ;
  GGS_location var_endOf_5F_repeat_5F_instruction_2597 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 51)) ;
  outArgument_outInstruction = GGS_repeatInstruction::init_21__21__21__21__21_ (var_mRepeatInstructionLocation_2114, var_mRepeatedInstructionList_2235, var_endOf_5F_repeated_5F_instructions_2269, var_mRepeatBranchList_2322, var_endOf_5F_repeat_5F_instruction_2597, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 39)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 45)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 50)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lbool var_hasIndexing_1942 ;
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_1942 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 38)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_hasIndexing_1942 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 40)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 43)) ;
  GGS_lstring var_mGrammarName_2126 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 44)) ;
  GGS_lstring var_mGrammarClass_2208 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 45)) ;
  GGS_bool var_hasTranslateFeature_2263 ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_2263 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_translatable COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 51)) ;
    var_hasTranslateFeature_2263 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 54)) ;
  GGS__5B_lstring_5D_ var_syntaxComponents_2441 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 58)) ;
    GGS_lstring var_syntaxComponent_2524 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 59)) ;
    var_syntaxComponents_2441.plusPlusAssignOperation (var_syntaxComponent_2524  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 60)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_startSymbol_2658 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 64)) ;
  GGS__5B_nonTerminalLabelAST_5D_ var_mLabelList_2704 = GGS__5B_nonTerminalLabelAST_5D_::init (inCompiler COMMA_HERE) ;
  nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 66)), var_mLabelList_2704, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 69)) ;
      GGS_lstring var_labelName_2887 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 70)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, var_labelName_2887, var_mLabelList_2704, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS__5B_lstring_5D_ var_unusedNonterminalList_3030 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 77)) ;
      GGS_lstring var_nonterminalSymbolName_3143 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 78)) ;
      var_unusedNonterminalList_3030.plusPlusAssignOperation (var_nonterminalSymbolName_3143  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 79)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 82)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_galgas_33_GrammarComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21_ (GGS_bool (false), var_hasIndexing_1942, var_mGrammarName_2126, var_mGrammarClass_2208, var_syntaxComponents_2441, var_startSymbol_2658, var_mLabelList_2704, var_unusedNonterminalList_3030, var_hasTranslateFeature_2263, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 83)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 43)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 45)) ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_translatable COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 51)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 54)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 58)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 59)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 64)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 69)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 70)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 77)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 78)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              const GGS_lstring constinArgument_inLabelName,
                                                                                                                              GGS__5B_nonTerminalLabelAST_5D_ & ioArgument_ioLabelList,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  GGS_stringset var_argumentNameSet_3867 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_3919 = GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 103)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_argumentName_4041 ;
      nt_label_5F_formal_5F_parameter_ (ioArgument_ioDeclarations, var_argumentName_4041, var_formalParameterList_3919, inCompiler) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_argumentNameSet_3867.getter_contains (var_argumentName_4041.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 108)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_4041.readProperty_location (), GGS_string ("there is already an argument named '").add_operation (var_argumentName_4041.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 109)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 109)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 109)) ;
        }
      }
      var_argumentNameSet_3867.plusPlusAssignOperation (var_argumentName_4041.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 111)) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 113)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 116)) ;
  ioArgument_ioLabelList.plusPlusAssignOperation (GGS_nonTerminalLabelAST::init_21__21__21_ (constinArgument_inLabelName, var_formalParameterList_3919, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 117)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 117)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 103)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_label_5F_formal_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 113)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS__5B_formalParameterAST_5D_ & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_4763 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 125)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 126)) ;
  GGS_lstring var_typeName_4838 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4838, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 128)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterAST::init_21__21__21__21__21_ (var_selector_4763, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 131)), var_typeName_4838, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 129)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 125)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 126)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 128)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS__5B_formalParameterAST_5D_ & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 143)) ;
  GGS_lstring var_selector_5380 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 144)) ;
  GGS_lstring var_typeName_5454 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_5454, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 146)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterAST::init_21__21__21__21__21_ (var_selector_5380, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 149)), var_typeName_5454, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 147)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 143)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 146)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS__5B_formalParameterAST_5D_ & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_6010 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 161)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 162)) ;
  GGS_lstring var_typeName_6085 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_6085, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 164)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterAST::init_21__21__21__21__21_ (var_selector_6010, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 167)), var_typeName_6085, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 165)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 161)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 162)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 164)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS__5B_formalParameterAST_5D_ & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 179)) ;
  GGS_lstring var_selector_6631 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 180)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 181)) ;
  GGS_lstring var_typeName_6715 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_6715, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 183)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterAST::init_21__21__21__21__21_ (var_selector_6631, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 186)), var_typeName_6715, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 184)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 181)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 183)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS__5B_formalParameterAST_5D_ & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_7270 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 198)) ;
  GGS_lstring var_typeName_7335 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_7335, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 200)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterAST::init_21__21__21__21__21_ (var_selector_7270, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 203)), var_typeName_7335, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 201)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 198)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 200)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS__5B_formalParameterAST_5D_ & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 215)) ;
  GGS_lstring var_selector_7877 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 216)) ;
  GGS_lstring var_typeName_7951 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_7951, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 218)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterAST::init_21__21__21__21__21_ (var_selector_7877, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 221)), var_typeName_7951, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 219)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 215)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 218)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS__5B_formalParameterAST_5D_ & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_8501 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 233)) ;
  GGS_lstring var_typeName_8566 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_8566, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 235)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterAST::init_21__21__21__21__21_ (var_selector_8501, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 238)), var_typeName_8566, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 236)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 233)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 235)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS__5B_formalParameterAST_5D_ & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 250)) ;
  GGS_lstring var_selector_9107 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 251)) ;
  GGS_lstring var_typeName_9181 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_9181, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 253)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.plusPlusAssignOperation (GGS_formalParameterAST::init_21__21__21__21__21_ (var_selector_9107, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 254)), var_typeName_9181, outArgument_outArgumentName, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 254)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 250)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas4", 253)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 38)) ;
  GGS__5B_semanticInstructionAST_5D_ var_prologueInstructionList_2105 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_2105, inCompiler) ;
  GGS_location var_endOfPrologue_2138 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 41)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.plusPlusAssignOperation (GGS_prologueEpilogueAST::init_21__21_ (var_prologueInstructionList_2105, var_endOfPrologue_2138, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 38)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 53)) ;
  GGS__5B_semanticInstructionAST_5D_ var_prologueInstructionList_2677 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_2677, inCompiler) ;
  GGS_location var_endOfPrologue_2710 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 56)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.plusPlusAssignOperation (GGS_prologueEpilogueAST::init_21__21_ (var_prologueInstructionList_2677, var_endOfPrologue_2710, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 57)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 53)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 56)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 68)) ;
  GGS_lstring var_mSourceFileExtension_3203 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 70)) ;
  GGS_lstring var_mSourceFileHelp_3275 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 71)) ;
  GGS_lstring var_referenceGrammar_3335 ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_3335 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas4", 75)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 77)) ;
    var_referenceGrammar_3335 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 78)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_selector_3512 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 81)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_selector_3512.readProperty_string ().objectCompare (GGS_string ("sourceFilePath"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_3512.readProperty_location (), GGS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 83)) ;
    }
  }
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_lstring var_typeName_3719 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 87)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, var_typeName_3719.readProperty_string ().objectCompare (GGS_string ("lstring"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_3719.readProperty_location (), GGS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 89)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_lstring var_sourceFileVariableName_3890 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 92)) ;
  GGS_bool var_isUnused_3922 = var_sourceFileVariableName_3890.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 95)) ;
  GGS__5B_semanticInstructionAST_5D_ var_mInstructionList_4070 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_4070, inCompiler) ;
  GGS_location var_endOfInstructionList_4096 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 97)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 98)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.plusPlusAssignOperation (GGS_programRuleAST::init_21__21__21__21__21__21__21_ (var_mSourceFileExtension_3203, var_mSourceFileHelp_3275, var_sourceFileVariableName_3890, var_isUnused_3922, var_referenceGrammar_3335, var_mInstructionList_4070, var_endOfInstructionList_4096, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 99)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 71)) ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 78)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 81)) ;
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 87)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 95)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas4", 98)) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentAST::GGS_lexicalRoutineFormalArgumentAST (void) :
mProperty_mLexicalFormalArgumentMode (),
mProperty_mLexicalFormalArgumentType (),
mProperty_mArgumentNameForComment () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentAST::GGS_lexicalRoutineFormalArgumentAST (const GGS_lexicalRoutineFormalArgumentAST & inSource) :
mProperty_mLexicalFormalArgumentMode (inSource.mProperty_mLexicalFormalArgumentMode),
mProperty_mLexicalFormalArgumentType (inSource.mProperty_mLexicalFormalArgumentType),
mProperty_mArgumentNameForComment (inSource.mProperty_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentAST & GGS_lexicalRoutineFormalArgumentAST::operator = (const GGS_lexicalRoutineFormalArgumentAST & inSource) {
  mProperty_mLexicalFormalArgumentMode = inSource.mProperty_mLexicalFormalArgumentMode ;
  mProperty_mLexicalFormalArgumentType = inSource.mProperty_mLexicalFormalArgumentType ;
  mProperty_mArgumentNameForComment = inSource.mProperty_mArgumentNameForComment ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentAST GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (const GGS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                           const GGS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                           const GGS_string & in_mArgumentNameForComment,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineFormalArgumentAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalFormalArgumentMode = in_mLexicalFormalArgumentMode ;
  result.mProperty_mLexicalFormalArgumentType = in_mLexicalFormalArgumentType ;
  result.mProperty_mArgumentNameForComment = in_mArgumentNameForComment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineFormalArgumentAST::GGS_lexicalRoutineFormalArgumentAST (const GGS_lexicalArgumentModeAST & inOperand0,
                                                                          const GGS_lexicalTypeEnum & inOperand1,
                                                                          const GGS_string & inOperand2) :
mProperty_mLexicalFormalArgumentMode (inOperand0),
mProperty_mLexicalFormalArgumentType (inOperand1),
mProperty_mArgumentNameForComment (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRoutineFormalArgumentAST::isValid (void) const {
  return mProperty_mLexicalFormalArgumentMode.isValid () && mProperty_mLexicalFormalArgumentType.isValid () && mProperty_mArgumentNameForComment.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentAST::drop (void) {
  mProperty_mLexicalFormalArgumentMode.drop () ;
  mProperty_mLexicalFormalArgumentType.drop () ;
  mProperty_mArgumentNameForComment.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineFormalArgumentAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRoutineFormalArgumentAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalFormalArgumentMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArgumentNameForComment.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineFormalArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentAST ("lexicalRoutineFormalArgumentAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineFormalArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueAnalysisContext::GGS_lexiqueAnalysisContext (void) :
mProperty_mLexiqueName (),
mProperty_mLexicalRoutineMessageMap (),
mProperty_mLexicalFunctionMap (),
mProperty_mLexicalMessageMap (),
mProperty_mTerminalMap (),
mProperty_mTerminalList (),
mProperty_mLexicalAttributeMap (),
mProperty_mLexicalTokenListMap (),
mProperty_mUnicodeStringToGenerate (),
mProperty_mTemplateDelimitorList (),
mProperty_mUnicodeTestFunctions () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueAnalysisContext::GGS_lexiqueAnalysisContext (const GGS_lexiqueAnalysisContext & inSource) :
mProperty_mLexiqueName (inSource.mProperty_mLexiqueName),
mProperty_mLexicalRoutineMessageMap (inSource.mProperty_mLexicalRoutineMessageMap),
mProperty_mLexicalFunctionMap (inSource.mProperty_mLexicalFunctionMap),
mProperty_mLexicalMessageMap (inSource.mProperty_mLexicalMessageMap),
mProperty_mTerminalMap (inSource.mProperty_mTerminalMap),
mProperty_mTerminalList (inSource.mProperty_mTerminalList),
mProperty_mLexicalAttributeMap (inSource.mProperty_mLexicalAttributeMap),
mProperty_mLexicalTokenListMap (inSource.mProperty_mLexicalTokenListMap),
mProperty_mUnicodeStringToGenerate (inSource.mProperty_mUnicodeStringToGenerate),
mProperty_mTemplateDelimitorList (inSource.mProperty_mTemplateDelimitorList),
mProperty_mUnicodeTestFunctions (inSource.mProperty_mUnicodeTestFunctions) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueAnalysisContext & GGS_lexiqueAnalysisContext::operator = (const GGS_lexiqueAnalysisContext & inSource) {
  mProperty_mLexiqueName = inSource.mProperty_mLexiqueName ;
  mProperty_mLexicalRoutineMessageMap = inSource.mProperty_mLexicalRoutineMessageMap ;
  mProperty_mLexicalFunctionMap = inSource.mProperty_mLexicalFunctionMap ;
  mProperty_mLexicalMessageMap = inSource.mProperty_mLexicalMessageMap ;
  mProperty_mTerminalMap = inSource.mProperty_mTerminalMap ;
  mProperty_mTerminalList = inSource.mProperty_mTerminalList ;
  mProperty_mLexicalAttributeMap = inSource.mProperty_mLexicalAttributeMap ;
  mProperty_mLexicalTokenListMap = inSource.mProperty_mLexicalTokenListMap ;
  mProperty_mUnicodeStringToGenerate = inSource.mProperty_mUnicodeStringToGenerate ;
  mProperty_mTemplateDelimitorList = inSource.mProperty_mTemplateDelimitorList ;
  mProperty_mUnicodeTestFunctions = inSource.mProperty_mUnicodeTestFunctions ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexiqueAnalysisContext GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mLexiqueName,
                                                                                                         const GGS_lexicalRoutineMap & in_mLexicalRoutineMessageMap,
                                                                                                         const GGS_lexicalFunctionMap & in_mLexicalFunctionMap,
                                                                                                         const GGS_lexicalMessageMap & in_mLexicalMessageMap,
                                                                                                         const GGS_terminalMap & in_mTerminalMap,
                                                                                                         const GGS__5B_terminalAST_5D_ & in_mTerminalList,
                                                                                                         const GGS_lexicalAttributeMap & in_mLexicalAttributeMap,
                                                                                                         const GGS_lexicalExplicitTokenListMapMap & in_mLexicalTokenListMap,
                                                                                                         const GGS_stringset & in_mUnicodeStringToGenerate,
                                                                                                         const GGS__5B_templateDelimitorAST_5D_ & in_mTemplateDelimitorList,
                                                                                                         const GGS_stringset & in_mUnicodeTestFunctions,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexiqueAnalysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexiqueName = in_mLexiqueName ;
  result.mProperty_mLexicalRoutineMessageMap = in_mLexicalRoutineMessageMap ;
  result.mProperty_mLexicalFunctionMap = in_mLexicalFunctionMap ;
  result.mProperty_mLexicalMessageMap = in_mLexicalMessageMap ;
  result.mProperty_mTerminalMap = in_mTerminalMap ;
  result.mProperty_mTerminalList = in_mTerminalList ;
  result.mProperty_mLexicalAttributeMap = in_mLexicalAttributeMap ;
  result.mProperty_mLexicalTokenListMap = in_mLexicalTokenListMap ;
  result.mProperty_mUnicodeStringToGenerate = in_mUnicodeStringToGenerate ;
  result.mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  result.mProperty_mUnicodeTestFunctions = in_mUnicodeTestFunctions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueAnalysisContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueAnalysisContext::GGS_lexiqueAnalysisContext (const GGS_string & inOperand0,
                                                        const GGS_lexicalRoutineMap & inOperand1,
                                                        const GGS_lexicalFunctionMap & inOperand2,
                                                        const GGS_lexicalMessageMap & inOperand3,
                                                        const GGS_terminalMap & inOperand4,
                                                        const GGS__5B_terminalAST_5D_ & inOperand5,
                                                        const GGS_lexicalAttributeMap & inOperand6,
                                                        const GGS_lexicalExplicitTokenListMapMap & inOperand7,
                                                        const GGS_stringset & inOperand8,
                                                        const GGS__5B_templateDelimitorAST_5D_ & inOperand9,
                                                        const GGS_stringset & inOperand10) :
mProperty_mLexiqueName (inOperand0),
mProperty_mLexicalRoutineMessageMap (inOperand1),
mProperty_mLexicalFunctionMap (inOperand2),
mProperty_mLexicalMessageMap (inOperand3),
mProperty_mTerminalMap (inOperand4),
mProperty_mTerminalList (inOperand5),
mProperty_mLexicalAttributeMap (inOperand6),
mProperty_mLexicalTokenListMap (inOperand7),
mProperty_mUnicodeStringToGenerate (inOperand8),
mProperty_mTemplateDelimitorList (inOperand9),
mProperty_mUnicodeTestFunctions (inOperand10) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexiqueAnalysisContext::isValid (void) const {
  return mProperty_mLexiqueName.isValid () && mProperty_mLexicalRoutineMessageMap.isValid () && mProperty_mLexicalFunctionMap.isValid () && mProperty_mLexicalMessageMap.isValid () && mProperty_mTerminalMap.isValid () && mProperty_mTerminalList.isValid () && mProperty_mLexicalAttributeMap.isValid () && mProperty_mLexicalTokenListMap.isValid () && mProperty_mUnicodeStringToGenerate.isValid () && mProperty_mTemplateDelimitorList.isValid () && mProperty_mUnicodeTestFunctions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueAnalysisContext::drop (void) {
  mProperty_mLexiqueName.drop () ;
  mProperty_mLexicalRoutineMessageMap.drop () ;
  mProperty_mLexicalFunctionMap.drop () ;
  mProperty_mLexicalMessageMap.drop () ;
  mProperty_mTerminalMap.drop () ;
  mProperty_mTerminalList.drop () ;
  mProperty_mLexicalAttributeMap.drop () ;
  mProperty_mLexicalTokenListMap.drop () ;
  mProperty_mUnicodeStringToGenerate.drop () ;
  mProperty_mTemplateDelimitorList.drop () ;
  mProperty_mUnicodeTestFunctions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexiqueAnalysisContext::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexiqueAnalysisContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalRoutineMessageMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalMessageMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalAttributeMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalTokenListMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnicodeStringToGenerate.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnicodeTestFunctions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexiqueAnalysisContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueAnalysisContext ("lexiqueAnalysisContext",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::GGS_XcodeProjectDescriptor (void) :
mProperty_mSequenceNumber (),
mProperty_mMainGroupReference (),
mProperty_mMainGroupChildrenRefs (),
mProperty_mProjectObjectReference (),
mProperty_mGroupList (),
mProperty_mToolTargetList (),
mProperty_mAppTargetList (),
mProperty_mCFileList (),
mProperty_mCppFileList (),
mProperty_m_5F_Swift_5F_FileList (),
mProperty_m_5F_M_5F_FileList (),
mProperty_m_5F_MM_5F_FileList (),
mProperty_mFrameworkFileList (),
mProperty_mHeaderFileList (),
mProperty_mBuildFileList (),
mProperty_mDefaultConfigurationRef (),
mProperty_mDefaultConfigurationSettingList (),
mProperty_mProjectBuildConfigurationRef (),
mProperty_mInfoPlistFileList (),
mProperty_mXIB_5F_fileList (),
mProperty_mTIFF_5F_fileList (),
mProperty_mICNS_5F_fileList (),
mProperty_mApplicationBundleName (),
mProperty_mProjectName () {
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::GGS_XcodeProjectDescriptor (const GGS_XcodeProjectDescriptor & inSource) :
mProperty_mSequenceNumber (inSource.mProperty_mSequenceNumber),
mProperty_mMainGroupReference (inSource.mProperty_mMainGroupReference),
mProperty_mMainGroupChildrenRefs (inSource.mProperty_mMainGroupChildrenRefs),
mProperty_mProjectObjectReference (inSource.mProperty_mProjectObjectReference),
mProperty_mGroupList (inSource.mProperty_mGroupList),
mProperty_mToolTargetList (inSource.mProperty_mToolTargetList),
mProperty_mAppTargetList (inSource.mProperty_mAppTargetList),
mProperty_mCFileList (inSource.mProperty_mCFileList),
mProperty_mCppFileList (inSource.mProperty_mCppFileList),
mProperty_m_5F_Swift_5F_FileList (inSource.mProperty_m_5F_Swift_5F_FileList),
mProperty_m_5F_M_5F_FileList (inSource.mProperty_m_5F_M_5F_FileList),
mProperty_m_5F_MM_5F_FileList (inSource.mProperty_m_5F_MM_5F_FileList),
mProperty_mFrameworkFileList (inSource.mProperty_mFrameworkFileList),
mProperty_mHeaderFileList (inSource.mProperty_mHeaderFileList),
mProperty_mBuildFileList (inSource.mProperty_mBuildFileList),
mProperty_mDefaultConfigurationRef (inSource.mProperty_mDefaultConfigurationRef),
mProperty_mDefaultConfigurationSettingList (inSource.mProperty_mDefaultConfigurationSettingList),
mProperty_mProjectBuildConfigurationRef (inSource.mProperty_mProjectBuildConfigurationRef),
mProperty_mInfoPlistFileList (inSource.mProperty_mInfoPlistFileList),
mProperty_mXIB_5F_fileList (inSource.mProperty_mXIB_5F_fileList),
mProperty_mTIFF_5F_fileList (inSource.mProperty_mTIFF_5F_fileList),
mProperty_mICNS_5F_fileList (inSource.mProperty_mICNS_5F_fileList),
mProperty_mApplicationBundleName (inSource.mProperty_mApplicationBundleName),
mProperty_mProjectName (inSource.mProperty_mProjectName) {
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor & GGS_XcodeProjectDescriptor::operator = (const GGS_XcodeProjectDescriptor & inSource) {
  mProperty_mSequenceNumber = inSource.mProperty_mSequenceNumber ;
  mProperty_mMainGroupReference = inSource.mProperty_mMainGroupReference ;
  mProperty_mMainGroupChildrenRefs = inSource.mProperty_mMainGroupChildrenRefs ;
  mProperty_mProjectObjectReference = inSource.mProperty_mProjectObjectReference ;
  mProperty_mGroupList = inSource.mProperty_mGroupList ;
  mProperty_mToolTargetList = inSource.mProperty_mToolTargetList ;
  mProperty_mAppTargetList = inSource.mProperty_mAppTargetList ;
  mProperty_mCFileList = inSource.mProperty_mCFileList ;
  mProperty_mCppFileList = inSource.mProperty_mCppFileList ;
  mProperty_m_5F_Swift_5F_FileList = inSource.mProperty_m_5F_Swift_5F_FileList ;
  mProperty_m_5F_M_5F_FileList = inSource.mProperty_m_5F_M_5F_FileList ;
  mProperty_m_5F_MM_5F_FileList = inSource.mProperty_m_5F_MM_5F_FileList ;
  mProperty_mFrameworkFileList = inSource.mProperty_mFrameworkFileList ;
  mProperty_mHeaderFileList = inSource.mProperty_mHeaderFileList ;
  mProperty_mBuildFileList = inSource.mProperty_mBuildFileList ;
  mProperty_mDefaultConfigurationRef = inSource.mProperty_mDefaultConfigurationRef ;
  mProperty_mDefaultConfigurationSettingList = inSource.mProperty_mDefaultConfigurationSettingList ;
  mProperty_mProjectBuildConfigurationRef = inSource.mProperty_mProjectBuildConfigurationRef ;
  mProperty_mInfoPlistFileList = inSource.mProperty_mInfoPlistFileList ;
  mProperty_mXIB_5F_fileList = inSource.mProperty_mXIB_5F_fileList ;
  mProperty_mTIFF_5F_fileList = inSource.mProperty_mTIFF_5F_fileList ;
  mProperty_mICNS_5F_fileList = inSource.mProperty_mICNS_5F_fileList ;
  mProperty_mApplicationBundleName = inSource.mProperty_mApplicationBundleName ;
  mProperty_mProjectName = inSource.mProperty_mProjectName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_XcodeProjectDescriptor GGS_XcodeProjectDescriptor::init (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XcodeProjectDescriptor result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XcodeProjectDescriptor::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mSequenceNumber = GGS_uint (uint32_t (0U)) ;
  mProperty_mMainGroupReference = GGS_string::makeEmptyString () ;
  mProperty_mMainGroupChildrenRefs = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mProjectObjectReference = GGS_string::makeEmptyString () ;
  mProperty_mGroupList = GGS__5B_XCodeGroup_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mToolTargetList = GGS__5B_XCodeToolTarget_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mAppTargetList = GGS__5B_XCodeAppTarget_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mCFileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mCppFileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_m_5F_Swift_5F_FileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_m_5F_M_5F_FileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_m_5F_MM_5F_FileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mFrameworkFileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mHeaderFileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mBuildFileList = GGS__5B_BuildFile_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mDefaultConfigurationRef = GGS_string::makeEmptyString () ;
  mProperty_mDefaultConfigurationSettingList = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mProjectBuildConfigurationRef = GGS_string::makeEmptyString () ;
  mProperty_mInfoPlistFileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mXIB_5F_fileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mTIFF_5F_fileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mICNS_5F_fileList = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  mProperty_mApplicationBundleName = GGS_string::makeEmptyString () ;
  mProperty_mProjectName = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::GGS_XcodeProjectDescriptor (const GGS_uint & inOperand0,
                                                        const GGS_string & inOperand1,
                                                        const GGS__5B_string_5D_ & inOperand2,
                                                        const GGS_string & inOperand3,
                                                        const GGS__5B_XCodeGroup_5D_ & inOperand4,
                                                        const GGS__5B_XCodeToolTarget_5D_ & inOperand5,
                                                        const GGS__5B_XCodeAppTarget_5D_ & inOperand6,
                                                        const GGS__5B__32_string_5D_ & inOperand7,
                                                        const GGS__5B__32_string_5D_ & inOperand8,
                                                        const GGS__5B__32_string_5D_ & inOperand9,
                                                        const GGS__5B__32_string_5D_ & inOperand10,
                                                        const GGS__5B__32_string_5D_ & inOperand11,
                                                        const GGS__5B__32_string_5D_ & inOperand12,
                                                        const GGS__5B__32_string_5D_ & inOperand13,
                                                        const GGS__5B_BuildFile_5D_ & inOperand14,
                                                        const GGS_string & inOperand15,
                                                        const GGS__5B_string_5D_ & inOperand16,
                                                        const GGS_string & inOperand17,
                                                        const GGS__5B__32_string_5D_ & inOperand18,
                                                        const GGS__5B__32_string_5D_ & inOperand19,
                                                        const GGS__5B__32_string_5D_ & inOperand20,
                                                        const GGS__5B__32_string_5D_ & inOperand21,
                                                        const GGS_string & inOperand22,
                                                        const GGS_string & inOperand23) :
mProperty_mSequenceNumber (inOperand0),
mProperty_mMainGroupReference (inOperand1),
mProperty_mMainGroupChildrenRefs (inOperand2),
mProperty_mProjectObjectReference (inOperand3),
mProperty_mGroupList (inOperand4),
mProperty_mToolTargetList (inOperand5),
mProperty_mAppTargetList (inOperand6),
mProperty_mCFileList (inOperand7),
mProperty_mCppFileList (inOperand8),
mProperty_m_5F_Swift_5F_FileList (inOperand9),
mProperty_m_5F_M_5F_FileList (inOperand10),
mProperty_m_5F_MM_5F_FileList (inOperand11),
mProperty_mFrameworkFileList (inOperand12),
mProperty_mHeaderFileList (inOperand13),
mProperty_mBuildFileList (inOperand14),
mProperty_mDefaultConfigurationRef (inOperand15),
mProperty_mDefaultConfigurationSettingList (inOperand16),
mProperty_mProjectBuildConfigurationRef (inOperand17),
mProperty_mInfoPlistFileList (inOperand18),
mProperty_mXIB_5F_fileList (inOperand19),
mProperty_mTIFF_5F_fileList (inOperand20),
mProperty_mICNS_5F_fileList (inOperand21),
mProperty_mApplicationBundleName (inOperand22),
mProperty_mProjectName (inOperand23) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_XcodeProjectDescriptor::isValid (void) const {
  return mProperty_mSequenceNumber.isValid () && mProperty_mMainGroupReference.isValid () && mProperty_mMainGroupChildrenRefs.isValid () && mProperty_mProjectObjectReference.isValid () && mProperty_mGroupList.isValid () && mProperty_mToolTargetList.isValid () && mProperty_mAppTargetList.isValid () && mProperty_mCFileList.isValid () && mProperty_mCppFileList.isValid () && mProperty_m_5F_Swift_5F_FileList.isValid () && mProperty_m_5F_M_5F_FileList.isValid () && mProperty_m_5F_MM_5F_FileList.isValid () && mProperty_mFrameworkFileList.isValid () && mProperty_mHeaderFileList.isValid () && mProperty_mBuildFileList.isValid () && mProperty_mDefaultConfigurationRef.isValid () && mProperty_mDefaultConfigurationSettingList.isValid () && mProperty_mProjectBuildConfigurationRef.isValid () && mProperty_mInfoPlistFileList.isValid () && mProperty_mXIB_5F_fileList.isValid () && mProperty_mTIFF_5F_fileList.isValid () && mProperty_mICNS_5F_fileList.isValid () && mProperty_mApplicationBundleName.isValid () && mProperty_mProjectName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XcodeProjectDescriptor::drop (void) {
  mProperty_mSequenceNumber.drop () ;
  mProperty_mMainGroupReference.drop () ;
  mProperty_mMainGroupChildrenRefs.drop () ;
  mProperty_mProjectObjectReference.drop () ;
  mProperty_mGroupList.drop () ;
  mProperty_mToolTargetList.drop () ;
  mProperty_mAppTargetList.drop () ;
  mProperty_mCFileList.drop () ;
  mProperty_mCppFileList.drop () ;
  mProperty_m_5F_Swift_5F_FileList.drop () ;
  mProperty_m_5F_M_5F_FileList.drop () ;
  mProperty_m_5F_MM_5F_FileList.drop () ;
  mProperty_mFrameworkFileList.drop () ;
  mProperty_mHeaderFileList.drop () ;
  mProperty_mBuildFileList.drop () ;
  mProperty_mDefaultConfigurationRef.drop () ;
  mProperty_mDefaultConfigurationSettingList.drop () ;
  mProperty_mProjectBuildConfigurationRef.drop () ;
  mProperty_mInfoPlistFileList.drop () ;
  mProperty_mXIB_5F_fileList.drop () ;
  mProperty_mTIFF_5F_fileList.drop () ;
  mProperty_mICNS_5F_fileList.drop () ;
  mProperty_mApplicationBundleName.drop () ;
  mProperty_mProjectName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XcodeProjectDescriptor::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XcodeProjectDescriptor:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSequenceNumber.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMainGroupReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMainGroupChildrenRefs.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProjectObjectReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mToolTargetList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAppTargetList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_Swift_5F_FileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_M_5F_FileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_MM_5F_FileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworkFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHeaderFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProjectBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInfoPlistFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mXIB_5F_fileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTIFF_5F_fileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mICNS_5F_fileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mApplicationBundleName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProjectName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @XcodeProjectDescriptor generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XcodeProjectDescriptor ("XcodeProjectDescriptor",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XcodeProjectDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addTIFF_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addTIFF_5F_file (GGS_XcodeProjectDescriptor & ioObject,
                                      const GGS_string constinArgument_inFileName,
                                      GGS_string & outArgument_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 33)) ;
  }
  ioObject.mProperty_mTIFF_5F_fileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 34)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addInfoPlistFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (GGS_XcodeProjectDescriptor & ioObject,
                                       const GGS_string constinArgument_inFileName,
                                       GGS_string & outArgument_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 42)) ;
  }
  ioObject.mProperty_mInfoPlistFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 43)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addXIBFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (GGS_XcodeProjectDescriptor & ioObject,
                                 const GGS_string constinArgument_inFileName,
                                 GGS_string & outArgument_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 51)) ;
  }
  ioObject.mProperty_mXIB_5F_fileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 52)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addFrameworkFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (GGS_XcodeProjectDescriptor & ioObject,
                                       const GGS_string constinArgument_inFileName,
                                       GGS_string & outArgument_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 60)) ;
  }
  ioObject.mProperty_mFrameworkFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 61)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addSwiftFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSwiftFile (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inFileName,
                                   GGS_string & outArgument_outFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 69)) ;
  }
  ioObject.mProperty_m_5F_Swift_5F_FileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 70)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inFileName,
                               GGS_string & outArgument_outFileRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 78)) ;
  }
  ioObject.mProperty_m_5F_M_5F_FileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 79)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addMMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (GGS_XcodeProjectDescriptor & ioObject,
                                const GGS_string constinArgument_inFileName,
                                GGS_string & outArgument_outFileRef,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 87)) ;
  }
  ioObject.mProperty_m_5F_MM_5F_FileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 88)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addCppFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (GGS_XcodeProjectDescriptor & ioObject,
                                 const GGS_string constinArgument_inFileName,
                                 GGS_string & outArgument_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 96)) ;
  }
  ioObject.mProperty_mCppFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 97)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addCFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCFile (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inFileName,
                               GGS_string & outArgument_outFileRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 105)) ;
  }
  ioObject.mProperty_mCFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 106)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addHeaderFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inFileName,
                                    GGS_string & outArgument_outFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 114)) ;
  }
  ioObject.mProperty_mHeaderFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 115)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addBuildFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inFileReference,
                                   const GGS_string constinArgument_inFileName,
                                   GGS_string & outArgument_outBuildRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBuildRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 124)) ;
  }
  ioObject.mProperty_mBuildFileList.plusPlusAssignOperation (GGS_BuildFile::init_21__21__21_ (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 125)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addToolTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inTargetName,
                                    const GGS_string constinArgument_inProductFileName,
                                    const GGS__5B_string_5D_ constinArgument_inSourceList,
                                    const GGS__5B_string_5D_ constinArgument_inToolFrameworksFileRefList,
                                    const GGS__5B_string_5D_ constinArgument_inBuildConfigurationSettingList,
                                    GGS_string & outArgument_outTargetRef,
                                    GGS_string & outArgument_outProductFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 138)) ;
  }
  GGS_string var_buildPhaseRef_5601 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_5601, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 139)) ;
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 140)) ;
  }
  GGS_string var_buildConfigurationListRef_5698 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_5698, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 141)) ;
  }
  GGS_string var_buildConfigurationRef_5761 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_5761, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 142)) ;
  }
  GGS_string var_frameworkBuildRef_5820 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_5820, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 143)) ;
  }
  ioObject.mProperty_mToolTargetList.plusPlusAssignOperation (GGS_XCodeToolTarget::init_21__21__21__21__21__21__21__21__21__21__21_ (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_5601, var_buildConfigurationListRef_5698, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_5761, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef_5820, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 144)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addAppTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inTargetName,
                                   const GGS_string constinArgument_inProductFileName,
                                   const GGS__5B_string_5D_ constinArgument_inSourceList,
                                   const GGS__5B_string_5D_ constinArgument_inFrameworksFileRefList,
                                   const GGS__5B_string_5D_ constinArgument_inResourceFileBuildRefs,
                                   const GGS__5B_string_5D_ constinArgument_inBuildConfigurationSettingList,
                                   const GGS__5B_string_5D_ constinArgument_inDependentTargetRefList,
                                   const GGS__5B__32_string_5D_ constinArgument_inProductCopyList,
                                   GGS_string & outArgument_outProductFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 170)) ;
  }
  GGS_string var_buildPhaseRef_6875 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_6875, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 171)) ;
  }
  GGS_string var_targetRef_6926 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_targetRef_6926, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 172)) ;
  }
  GGS_string var_buildConfigurationListRef_6973 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_6973, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 173)) ;
  }
  GGS_string var_buildConfigurationRef_7036 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_7036, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 174)) ;
  }
  GGS_string var_frameworkBuildRef_7095 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_7095, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 175)) ;
  }
  GGS_string var_resourceBuildRef_7150 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_resourceBuildRef_7150, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 176)) ;
  }
  GGS__5B__32_string_5D_ var_dependentTargets_7185 = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_7223 (constinArgument_inDependentTargetRefList) ;
  while (enumerator_7223.hasCurrentObject ()) {
    GGS_string var_dependencyBuildRef_7289 ;
    {
    extensionSetter_getReferenceKey (ioObject, var_dependencyBuildRef_7289, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 179)) ;
    }
    var_dependentTargets_7185.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_dependencyBuildRef_7289, enumerator_7223.current (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 180)) ;
    enumerator_7223.gotoNextObject () ;
  }
  GGS__5B_string_5D_ var_resourceFileBuildRefs_7385 = constinArgument_inResourceFileBuildRefs ;
  UpEnumerator__5B__32_string_5D_ enumerator_7448 (constinArgument_inProductCopyList) ;
  while (enumerator_7448.hasCurrentObject ()) {
    GGS_string var_buildRef_7567 ;
    {
    extensionSetter_addBuildFile (ioObject, enumerator_7448.current (HERE).readProperty_mValue_30_ (), enumerator_7448.current (HERE).readProperty_mValue_31_ (), var_buildRef_7567, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 184)) ;
    }
    var_resourceFileBuildRefs_7385.plusPlusAssignOperation (var_buildRef_7567  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 185)) ;
    enumerator_7448.gotoNextObject () ;
  }
  ioObject.mProperty_mAppTargetList.plusPlusAssignOperation (GGS_XCodeAppTarget::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_targetRef_6926, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_6875, var_buildConfigurationListRef_6973, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_7036, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef_7095, var_dependentTargets_7185, var_resourceBuildRef_7150, var_resourceFileBuildRefs_7385, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 187)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inGroupName,
                               const GGS_string constinArgument_inGroupPath,
                               const GGS__5B_string_5D_ constinArgument_inChildrenRefs,
                               GGS_string & outArgument_outGroupRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mDefaultConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 213)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 216)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 219)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 221)) ;
  }
  ioObject.mProperty_mGroupList.plusPlusAssignOperation (GGS_XCodeGroup::init_21__21__21__21_ (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 222)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addGroupWithFiles'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (GGS_XcodeProjectDescriptor & ioObject,
                                        const GGS_string constinArgument_inGroupName,
                                        const GGS_string constinArgument_inGroupPath,
                                        const GGS_stringset constinArgument_inFileNames,
                                        GGS__5B_string_5D_ & ioArgument_ioCFileBuildRefs,
                                        GGS__5B_string_5D_ & ioArgument_ioCppFileBuildRefs,
                                        GGS__5B_string_5D_ & ioArgument_ioSwiftFileBuildRefs,
                                        GGS__5B_string_5D_ & ioArgument_ioFrameWorkFileBuildRefs,
                                        GGS__5B_string_5D_ & ioArgument_ioResourceFileBuildRefs,
                                        GGS_string & outArgument_outGroupRef,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mDefaultConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 238)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 241)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 244)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 246)) ;
  }
  GGS__5B_string_5D_ var_childrenRefs_9757 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringset enumerator_9783 (constinArgument_inFileNames) ;
  while (enumerator_9783.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, enumerator_9783.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 250)).objectCompare (GGS_string ("c"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_string var_cFileRef_9903 ;
        {
        extensionSetter_addCFile (ioObject, enumerator_9783.current_key (HERE), var_cFileRef_9903, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 251)) ;
        }
        var_childrenRefs_9757.plusPlusAssignOperation (var_cFileRef_9903  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 252)) ;
        GGS_string var_buildRef_10029 ;
        {
        extensionSetter_addBuildFile (ioObject, var_cFileRef_9903, enumerator_9783.current_key (HERE), var_buildRef_10029, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 253)) ;
        }
        ioArgument_ioCFileBuildRefs.plusPlusAssignOperation (var_buildRef_10029  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 254)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, enumerator_9783.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 255)).objectCompare (GGS_string ("cpp"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_string var_cppFileRef_10179 ;
          {
          extensionSetter_addCppFile (ioObject, enumerator_9783.current_key (HERE), var_cppFileRef_10179, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 256)) ;
          }
          var_childrenRefs_9757.plusPlusAssignOperation (var_cppFileRef_10179  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 257)) ;
          GGS_string var_buildRef_10311 ;
          {
          extensionSetter_addBuildFile (ioObject, var_cppFileRef_10179, enumerator_9783.current_key (HERE), var_buildRef_10311, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 258)) ;
          }
          ioArgument_ioCppFileBuildRefs.plusPlusAssignOperation (var_buildRef_10311  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 259)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::equal, enumerator_9783.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 260)).objectCompare (GGS_string ("h"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_string var_headerFileRef_10464 ;
            {
            extensionSetter_addHeaderFile (ioObject, enumerator_9783.current_key (HERE), var_headerFileRef_10464, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 261)) ;
            }
            var_childrenRefs_9757.plusPlusAssignOperation (var_headerFileRef_10464  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 262)) ;
          }
        }
        if (GalgasBool::boolFalse == test_8) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, enumerator_9783.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 263)).objectCompare (GGS_string ("framework"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GGS_string var_framework_5F_FileRef_10632 ;
              {
              extensionSetter_addFrameworkFile (ioObject, enumerator_9783.current_key (HERE), var_framework_5F_FileRef_10632, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 264)) ;
              }
              GGS_string var_buildRef_10744 ;
              {
              extensionSetter_addBuildFile (ioObject, var_framework_5F_FileRef_10632, enumerator_9783.current_key (HERE), var_buildRef_10744, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 265)) ;
              }
              var_childrenRefs_9757.plusPlusAssignOperation (var_framework_5F_FileRef_10632  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 266)) ;
              ioArgument_ioFrameWorkFileBuildRefs.plusPlusAssignOperation (var_buildRef_10744  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 267)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, enumerator_9783.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 268)).objectCompare (GGS_string ("plist"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GGS_string var_resource_5F_FileRef_10951 ;
                {
                extensionSetter_addInfoPlistFile (ioObject, enumerator_9783.current_key (HERE), var_resource_5F_FileRef_10951, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 269)) ;
                }
                var_childrenRefs_9757.plusPlusAssignOperation (var_resource_5F_FileRef_10951  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 270)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GalgasBool test_11 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, enumerator_9783.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 271)).objectCompare (GGS_string ("xib"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                  GGS_string var_resource_5F_FileRef_11113 ;
                  {
                  extensionSetter_addXIBFile (ioObject, enumerator_9783.current_key (HERE), var_resource_5F_FileRef_11113, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 272)) ;
                  }
                  var_childrenRefs_9757.plusPlusAssignOperation (var_resource_5F_FileRef_11113  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 273)) ;
                  GGS_string var_buildRef_11263 ;
                  {
                  extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11113, enumerator_9783.current_key (HERE), var_buildRef_11263, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 274)) ;
                  }
                  ioArgument_ioResourceFileBuildRefs.plusPlusAssignOperation (var_buildRef_11263  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 275)) ;
                }
              }
              if (GalgasBool::boolFalse == test_11) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, enumerator_9783.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 276)).objectCompare (GGS_string ("tiff"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    GGS_string var_resource_5F_FileRef_11423 ;
                    {
                    extensionSetter_addTIFF_5F_file (ioObject, enumerator_9783.current_key (HERE), var_resource_5F_FileRef_11423, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 277)) ;
                    }
                    var_childrenRefs_9757.plusPlusAssignOperation (var_resource_5F_FileRef_11423  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 278)) ;
                    GGS_string var_buildRef_11573 ;
                    {
                    extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11423, enumerator_9783.current_key (HERE), var_buildRef_11573, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 279)) ;
                    }
                    ioArgument_ioResourceFileBuildRefs.plusPlusAssignOperation (var_buildRef_11573  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 280)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  GalgasBool test_13 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_13) {
                    test_13 = GGS_bool (ComparisonKind::equal, enumerator_9783.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 281)).objectCompare (GGS_string ("icns"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_13) {
                      GGS_string var_resource_5F_FileRef_11733 ;
                      {
                      extensionSetter_addICNS_5F_file (ioObject, enumerator_9783.current_key (HERE), var_resource_5F_FileRef_11733, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 282)) ;
                      }
                      var_childrenRefs_9757.plusPlusAssignOperation (var_resource_5F_FileRef_11733  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 283)) ;
                      GGS_string var_buildRef_11883 ;
                      {
                      extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11733, enumerator_9783.current_key (HERE), var_buildRef_11883, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 284)) ;
                      }
                      ioArgument_ioResourceFileBuildRefs.plusPlusAssignOperation (var_buildRef_11883  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 285)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_13) {
                    GalgasBool test_14 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_14) {
                      test_14 = GGS_bool (ComparisonKind::equal, enumerator_9783.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 286)).objectCompare (GGS_string ("swift"))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_14) {
                        GGS_string var_swiftFileRef_12044 ;
                        {
                        extensionSetter_addSwiftFile (ioObject, enumerator_9783.current_key (HERE), var_swiftFileRef_12044, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 287)) ;
                        }
                        GGS_string var_buildRef_12146 ;
                        {
                        extensionSetter_addBuildFile (ioObject, var_swiftFileRef_12044, enumerator_9783.current_key (HERE), var_buildRef_12146, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 288)) ;
                        }
                        var_childrenRefs_9757.plusPlusAssignOperation (var_swiftFileRef_12044  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 289)) ;
                        ioArgument_ioSwiftFileBuildRefs.plusPlusAssignOperation (var_buildRef_12146  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 290)) ;
                      }
                    }
                    if (GalgasBool::boolFalse == test_14) {
                      GenericArray <FixItDescription> fixItArray15 ;
                      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 292)), GGS_string ("unhandled extension for file '").add_operation (enumerator_9783.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 292)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 292)), fixItArray15  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 292)) ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_9783.gotoNextObject () ;
  }
  ioObject.mProperty_mGroupList.plusPlusAssignOperation (GGS_XCodeGroup::init_21__21__21__21_ (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, var_childrenRefs_9757, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 295)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (GGS_XcodeProjectDescriptor & ioObject,
                                            const GGS_string constinArgument_inGroupRef,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mMainGroupChildrenRefs.plusPlusAssignOperation (constinArgument_inGroupRef  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 302)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (GGS_XcodeProjectDescriptor & ioObject,
                                                        const GGS__5B_string_5D_ constinArgument_inSettingList,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mDefaultConfigurationSettingList.plusAssignOperation(constinArgument_inSettingList, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 309)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor getReferenceKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getReferenceKey (GGS_XcodeProjectDescriptor & ioObject,
                                      GGS_string & outArgument_outRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRef.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mProjectObjectReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_XcodeProjectDescriptor temp_2 = ioObject ;
      ioObject.mProperty_mProjectObjectReference = temp_2.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 369)).getter_md_35_ (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 369)).getter_rightSubString (GGS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 369)) ;
      ioObject.mProperty_mSequenceNumber.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 370)) ;
    }
  }
  const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
  outArgument_outRef = temp_3.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 372)).getter_md_35_ (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 372)).getter_rightSubString (GGS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 372)) ;
  ioObject.mProperty_mSequenceNumber.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 373)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor generateAtPath'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAtPath (const GGS_XcodeProjectDescriptor inObject,
                                     const GGS_string constinArgument_inPath,
                                     const GGS_string constinArgument_inCacheFilePath,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_XcodeProjectDescriptor temp_0 = inObject ;
  const GGS_XcodeProjectDescriptor temp_1 = inObject ;
  const GGS_XcodeProjectDescriptor temp_2 = inObject ;
  const GGS_XcodeProjectDescriptor temp_3 = inObject ;
  const GGS_XcodeProjectDescriptor temp_4 = inObject ;
  const GGS_XcodeProjectDescriptor temp_5 = inObject ;
  const GGS_XcodeProjectDescriptor temp_6 = inObject ;
  const GGS_XcodeProjectDescriptor temp_7 = inObject ;
  const GGS_XcodeProjectDescriptor temp_8 = inObject ;
  const GGS_XcodeProjectDescriptor temp_9 = inObject ;
  const GGS_XcodeProjectDescriptor temp_10 = inObject ;
  const GGS_XcodeProjectDescriptor temp_11 = inObject ;
  const GGS_XcodeProjectDescriptor temp_12 = inObject ;
  const GGS_XcodeProjectDescriptor temp_13 = inObject ;
  const GGS_XcodeProjectDescriptor temp_14 = inObject ;
  const GGS_XcodeProjectDescriptor temp_15 = inObject ;
  const GGS_XcodeProjectDescriptor temp_16 = inObject ;
  const GGS_XcodeProjectDescriptor temp_17 = inObject ;
  const GGS_XcodeProjectDescriptor temp_18 = inObject ;
  const GGS_XcodeProjectDescriptor temp_19 = inObject ;
  const GGS_XcodeProjectDescriptor temp_20 = inObject ;
  const GGS_XcodeProjectDescriptor temp_21 = inObject ;
  const GGS_XcodeProjectDescriptor temp_22 = inObject ;
  GGS_string var_contents_17877 = GGS_string (filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (inCompiler, temp_0.readProperty_mProjectObjectReference (), temp_1.readProperty_mMainGroupReference (), temp_2.readProperty_mGroupList (), temp_3.readProperty_mMainGroupChildrenRefs (), temp_4.readProperty_mToolTargetList (), temp_5.readProperty_mAppTargetList (), temp_6.readProperty_mCFileList (), temp_7.readProperty_mCppFileList (), temp_8.readProperty_m_5F_Swift_5F_FileList (), temp_9.readProperty_m_5F_M_5F_FileList (), temp_10.readProperty_m_5F_MM_5F_FileList (), temp_11.readProperty_mFrameworkFileList (), temp_12.readProperty_mHeaderFileList (), temp_13.readProperty_mInfoPlistFileList (), temp_14.readProperty_mTIFF_5F_fileList (), temp_15.readProperty_mICNS_5F_fileList (), temp_16.readProperty_mXIB_5F_fileList (), temp_17.readProperty_mBuildFileList (), temp_18.readProperty_mDefaultConfigurationRef (), temp_19.readProperty_mDefaultConfigurationSettingList (), temp_20.readProperty_mProjectBuildConfigurationRef (), temp_21.readProperty_mApplicationBundleName (), temp_22.readProperty_mProjectName () COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 445))) ;
  GGS_string var_projectCoreFile_18600 = constinArgument_inPath.add_operation (GGS_string ("/project.pbxproj"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 470)) ;
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    GGS_bool test_24 = var_projectCoreFile_18600.getter_fileExists (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 471)).operator_not (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 471)) ;
    if (GalgasBool::boolTrue != test_24.boolEnum ()) {
      test_24 = constinArgument_inCacheFilePath.getter_fileExists (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 471)).operator_not (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 471)) ;
    }
    GGS_bool test_25 = test_24 ;
    if (GalgasBool::boolTrue != test_25.boolEnum ()) {
      test_25 = GGS_bool (ComparisonKind::notEqual, GGS_string::class_func_stringWithContentsOfFile (constinArgument_inCacheFilePath, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 471)).objectCompare (var_contents_17877)) ;
    }
    test_23 = test_25.boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      GGS_bool joker_18858 ; // Joker input parameter
      var_contents_17877.method_writeToFileWhenDifferentContents (constinArgument_inCacheFilePath, joker_18858, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 472)) ;
      var_contents_17877.method_makeDirectoryAndWriteToFile (var_projectCoreFile_18600, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 473)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_terminalInstructionForGrammarAnalysis_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis_2E_weak::GGS_terminalInstructionForGrammarAnalysis_2E_weak (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis_2E_weak & GGS_terminalInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_terminalInstructionForGrammarAnalysis & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis_2E_weak::GGS_terminalInstructionForGrammarAnalysis_2E_weak (const GGS_terminalInstructionForGrammarAnalysis & inSource) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis_2E_weak GGS_terminalInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_terminalInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis GGS_terminalInstructionForGrammarAnalysis_2E_weak::unwrappedValue (void) const {
  GGS_terminalInstructionForGrammarAnalysis result ;
  if (isValid ()) {
    const cPtr_terminalInstructionForGrammarAnalysis * p = (cPtr_terminalInstructionForGrammarAnalysis *) ptr () ;
    if (nullptr != p) {
      result = GGS_terminalInstructionForGrammarAnalysis (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis GGS_terminalInstructionForGrammarAnalysis_2E_weak::bang_terminalInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_terminalInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_terminalInstructionForGrammarAnalysis) ;
      result = GGS_terminalInstructionForGrammarAnalysis ((cPtr_terminalInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis_2E_weak ("terminalInstructionForGrammarAnalysis.weak",
                                                                                                  & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @u_38_PredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_u_38_PredefinedTypeAST::objectCompare (const GGS_u_38_PredefinedTypeAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_PredefinedTypeAST::GGS_u_38_PredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_u_38_PredefinedTypeAST GGS_u_38_PredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_u_38_PredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_u_38_PredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->u_38_PredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_u_38_PredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_u_38_PredefinedTypeAST::
u_38_PredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                 const GGS_string & in_mPredefinedTypeName,
                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_PredefinedTypeAST::GGS_u_38_PredefinedTypeAST (const cPtr_u_38_PredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_u_38_PredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @u8PredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_u_38_PredefinedTypeAST::cPtr_u_38_PredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_u_38_PredefinedTypeAST::cPtr_u_38_PredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                          const GGS_string & in_mPredefinedTypeName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_u_38_PredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_u_38_PredefinedTypeAST ;
}

void cPtr_u_38_PredefinedTypeAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@u8PredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_u_38_PredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_u_38_PredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_u_38_PredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @u8PredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_u_38_PredefinedTypeAST ("u8PredefinedTypeAST",
                                                                           & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_u_38_PredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_u_38_PredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_u_38_PredefinedTypeAST_2E_weak::objectCompare (const GGS_u_38_PredefinedTypeAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_PredefinedTypeAST_2E_weak::GGS_u_38_PredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_PredefinedTypeAST_2E_weak & GGS_u_38_PredefinedTypeAST_2E_weak::operator = (const GGS_u_38_PredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_PredefinedTypeAST_2E_weak::GGS_u_38_PredefinedTypeAST_2E_weak (const GGS_u_38_PredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_u_38_PredefinedTypeAST_2E_weak GGS_u_38_PredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_u_38_PredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_PredefinedTypeAST GGS_u_38_PredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_u_38_PredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_u_38_PredefinedTypeAST * p = (cPtr_u_38_PredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_u_38_PredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_u_38_PredefinedTypeAST GGS_u_38_PredefinedTypeAST_2E_weak::bang_u_38_PredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_u_38_PredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_u_38_PredefinedTypeAST) ;
      result = GGS_u_38_PredefinedTypeAST ((cPtr_u_38_PredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @u8PredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_u_38_PredefinedTypeAST_2E_weak ("u8PredefinedTypeAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_u_38_PredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_u_38_PredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionAST::GGS_propertyInCollectionAST (void) :
mProperty_mutability (),
mProperty_typeName (),
mProperty_name (),
mProperty_accessControl (),
mProperty_hasSelector (),
mProperty_initialization () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionAST::GGS_propertyInCollectionAST (const GGS_propertyInCollectionAST & inSource) :
mProperty_mutability (inSource.mProperty_mutability),
mProperty_typeName (inSource.mProperty_typeName),
mProperty_name (inSource.mProperty_name),
mProperty_accessControl (inSource.mProperty_accessControl),
mProperty_hasSelector (inSource.mProperty_hasSelector),
mProperty_initialization (inSource.mProperty_initialization) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionAST & GGS_propertyInCollectionAST::operator = (const GGS_propertyInCollectionAST & inSource) {
  mProperty_mutability = inSource.mProperty_mutability ;
  mProperty_typeName = inSource.mProperty_typeName ;
  mProperty_name = inSource.mProperty_name ;
  mProperty_accessControl = inSource.mProperty_accessControl ;
  mProperty_hasSelector = inSource.mProperty_hasSelector ;
  mProperty_initialization = inSource.mProperty_initialization ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyInCollectionAST GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (const GGS_propertyMutability & in_mutability,
                                                                                                                                      const GGS_lstring & in_typeName,
                                                                                                                                      const GGS_lstring & in_name,
                                                                                                                                      const GGS_AccessControlAST & in_accessControl,
                                                                                                                                      const GGS_bool & in_hasSelector,
                                                                                                                                      const GGS_propertyInCollectionInitializationAST & in_initialization,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mutability = in_mutability ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_name = in_name ;
  result.mProperty_accessControl = in_accessControl ;
  result.mProperty_hasSelector = in_hasSelector ;
  result.mProperty_initialization = in_initialization ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionAST::GGS_propertyInCollectionAST (const GGS_propertyMutability & inOperand0,
                                                          const GGS_lstring & inOperand1,
                                                          const GGS_lstring & inOperand2,
                                                          const GGS_AccessControlAST & inOperand3,
                                                          const GGS_bool & inOperand4,
                                                          const GGS_propertyInCollectionInitializationAST & inOperand5) :
mProperty_mutability (inOperand0),
mProperty_typeName (inOperand1),
mProperty_name (inOperand2),
mProperty_accessControl (inOperand3),
mProperty_hasSelector (inOperand4),
mProperty_initialization (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyInCollectionAST::isValid (void) const {
  return mProperty_mutability.isValid () && mProperty_typeName.isValid () && mProperty_name.isValid () && mProperty_accessControl.isValid () && mProperty_hasSelector.isValid () && mProperty_initialization.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionAST::drop (void) {
  mProperty_mutability.drop () ;
  mProperty_typeName.drop () ;
  mProperty_name.drop () ;
  mProperty_accessControl.drop () ;
  mProperty_hasSelector.drop () ;
  mProperty_initialization.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyInCollectionAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mutability.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_accessControl.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_hasSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_initialization.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyInCollectionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionAST ("propertyInCollectionAST",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyInCollectionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionAST ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                      const GGS_lexiqueAnalysisContext in__5F_inLexiqueAnalysisContext,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateConditionCode (in__5F_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@selfMutability propertiesAreMutable'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_propertiesAreMutable (const GGS_selfMutability & inObject,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result ; // Returned variable
  const GGS_selfMutability temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_selfMutability::Enumeration::invalid:
    break ;
  case GGS_selfMutability::Enumeration::enum_none:
    {
      result = GGS_bool (false) ;
    }
    break ;
  case GGS_selfMutability::Enumeration::enum_propertiesAreMutableSelfIsNot:
  case GGS_selfMutability::Enumeration::enum_selfAndPropertiesAreMutable:
  case GGS_selfMutability::Enumeration::enum_initializer:
    {
      result = GGS_bool (true) ;
    }
    break ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------

GGS_enumConstant::GGS_enumConstant (void) :
mProperty_name (),
mProperty_associatedValueTypeList () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstant::GGS_enumConstant (const GGS_enumConstant & inSource) :
mProperty_name (inSource.mProperty_name),
mProperty_associatedValueTypeList (inSource.mProperty_associatedValueTypeList) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstant & GGS_enumConstant::operator = (const GGS_enumConstant & inSource) {
  mProperty_name = inSource.mProperty_name ;
  mProperty_associatedValueTypeList = inSource.mProperty_associatedValueTypeList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumConstant GGS_enumConstant::init_21__21_ (const GGS_lstring & in_name,
                                                 const GGS__5B_associatedValue_5D_ & in_associatedValueTypeList,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumConstant result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  result.mProperty_associatedValueTypeList = in_associatedValueTypeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstant::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstant::GGS_enumConstant (const GGS_lstring & inOperand0,
                                    const GGS__5B_associatedValue_5D_ & inOperand1) :
mProperty_name (inOperand0),
mProperty_associatedValueTypeList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumConstant::isValid (void) const {
  return mProperty_name.isValid () && mProperty_associatedValueTypeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstant::drop (void) {
  mProperty_name.drop () ;
  mProperty_associatedValueTypeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstant::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumConstant:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_associatedValueTypeList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @enumConstant generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstant ("enumConstant",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumConstant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstant ;
}

