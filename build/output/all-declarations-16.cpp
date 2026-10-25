#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                        GGS_formalParameterListAST & outArgument_outFormalParameterList,
                                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GGS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 816)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_27474 ;
      GGS_formalArgumentPassingModeAST var_formalParameterPassingMode_27525 ;
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_selector_27474 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 823)) ;
        switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
        case 1: {
          var_formalParameterPassingMode_27525 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 825)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 827)) ;
          var_formalParameterPassingMode_27525 = GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 828)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 830)) ;
          var_formalParameterPassingMode_27525 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 831)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 834)) ;
        var_selector_27474 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 835)) ;
        switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
        case 1: {
          var_formalParameterPassingMode_27525 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 837)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 839)) ;
          var_formalParameterPassingMode_27525 = GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 840)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 842)) ;
          var_formalParameterPassingMode_27525 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 843)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 846)) ;
        var_selector_27474 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 847)) ;
        var_formalParameterPassingMode_27525 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 848)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 850)) ;
        var_selector_27474 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 851)) ;
        var_formalParameterPassingMode_27525 = GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 852)) ;
      } break ;
      case 5: {
        var_selector_27474 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 854)) ;
        var_formalParameterPassingMode_27525 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 855)) ;
      } break ;
      case 6: {
        var_selector_27474 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 857)) ;
        var_formalParameterPassingMode_27525 = GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 858)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 860)) ;
        var_selector_27474 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 861)) ;
        var_formalParameterPassingMode_27525 = GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 862)) ;
      } break ;
      case 8: {
        var_selector_27474 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 864)) ;
        var_formalParameterPassingMode_27525 = GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 865)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 867)) ;
        var_selector_27474 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 868)) ;
        var_formalParameterPassingMode_27525 = GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 869)) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterTypeName_28999 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_formalParameterTypeName_28999, inCompiler) ;
      GGS_bool var_isUnused_29042 ;
      switch (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler)) {
      case 1: {
        var_isUnused_29042 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 876)) ;
        var_isUnused_29042 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterName_29197 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 879)) ;
      outArgument_outFormalParameterList.addAssignOperation (var_selector_27474, var_formalParameterPassingMode_27525, var_formalParameterTypeName_28999, var_formalParameterName_29197, var_isUnused_29042  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 880)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 887)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 890)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 816)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 823)) ;
        switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 827)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 830)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 834)) ;
        switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 839)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 842)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 846)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 850)) ;
      } break ;
      case 5: {
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 857)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 860)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 864)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 867)) ;
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
      switch (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 876)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 879)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 887)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 890)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                               GGS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 899)) ;
  outArgument_outActualParameterList = GGS_actualParameterListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_ (ioArgument_ioDeclarations, outArgument_outActualParameterList, inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 906)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 909)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 899)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 906)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 909)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_selector_30488 ;
  switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
  case 1: {
    var_selector_30488 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 920)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 922)) ;
    var_selector_30488 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 923)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 926)) ;
    GGS_lstringlist var_poisonedVarNameList_30642 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_30642, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_inputSingleJokerActualParameterAST::init_21__21_ (var_selector_30488, var_poisonedVarNameList_30642, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 928)) ;
  } break ;
  case 2: {
    GGS_lbigint var_count_30796 = inCompiler->synthetizedAttribute_bigintValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 930)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 931)) ;
    GGS_uint var_n_30823 = var_count_30796.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 932)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_selector_30488.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("\?")) ;
        inCompiler->emitSemanticError (var_selector_30488.readProperty_location (), GGS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 934)) ;
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, var_n_30823.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_count_30796.readProperty_location (), GGS_string ("the count value should be > 0"), fixItArray3  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 937)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      if (var_n_30823.isValid ()) {
        uint32_t variant_31060 = var_n_30823.uintValue () ;
        bool loop_31060 = true ;
        while (loop_31060) {
          loop_31060 = GGS_bool (ComparisonKind::greaterThan, var_n_30823.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
          if (loop_31060) {
            loop_31060 = GGS_bool (ComparisonKind::greaterThan, var_n_30823.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
          }
          if (loop_31060 && (0 == variant_31060)) {
            loop_31060 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 939)) ;
          }
          if (loop_31060) {
            variant_31060 -= 1 ;
            ioArgument_ioActualParameterList.addAssignOperation (GGS_inputJokerActualParameterAST::init_21__21_ (var_selector_30488.readProperty_location (), var_n_30823, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 941)) ;
            var_n_30823.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 942)) ;
          }
        }
      }
    }
  } break ;
  case 3: {
    GGS_lstring var_inputActualParameterName_31253 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 946)) ;
    GGS_lstringlist var_poisonedVarNameList_31311 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_31311, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_inputActualExistingVariableParameterAST::init_21__21__21_ (var_selector_30488, var_inputActualParameterName_31253, var_poisonedVarNameList_31311, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 948)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 954)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 955)) ;
    GGS_lstring var_inputActualParameterName_31585 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 956)) ;
    GGS_lstringlist var_poisonedVarNameList_31643 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_31643, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_inputActualSelfPropertyParameterAST::init_21__21__21_ (var_selector_30488, var_inputActualParameterName_31585, var_poisonedVarNameList_31643, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 958)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 964)) ;
    GGS_lstringlist var_poisonedVarNameList_31901 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_31901, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_inputActualSelfParameterAST::init_21__21__21_ (var_selector_30488, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 968)), var_poisonedVarNameList_31901, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 966)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 972)) ;
    GGS_lstring var_declarationTypeName_32126 ;
    switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
    case 1: {
      var_declarationTypeName_32126 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 975)) ;
    } break ;
    case 2: {
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_32126, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_inputActualParameterName_32311 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 979)) ;
    GGS_lstringlist var_poisonedVarNameList_32369 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_32369, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_inputActualNewVariableParameterAST::init_21__21__21__21_ (var_selector_30488, var_declarationTypeName_32126, var_inputActualParameterName_32311, var_poisonedVarNameList_32369, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 981)) ;
  } break ;
  case 7: {
    GGS_lstring var_declarationTypeName_32681 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_32681, inCompiler) ;
    GGS_lstring var_inputActualParameterName_32727 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 989)) ;
    GGS_lstringlist var_poisonedVarNameList_32785 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_32785, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_inputActualNewVariableParameterAST::init_21__21__21__21_ (var_selector_30488, var_declarationTypeName_32681, var_inputActualParameterName_32727, var_poisonedVarNameList_32785, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 991)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 998)) ;
    GGS_lstring var_declarationTypeName_33065 ;
    switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
    case 1: {
      var_declarationTypeName_33065 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1001)) ;
    } break ;
    case 2: {
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_33065, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GGS_bool var_markedAsUnused_33241 ;
    switch (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler)) {
    case 1: {
      var_markedAsUnused_33241 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1009)) ;
      var_markedAsUnused_33241 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_inputActualParameterName_33391 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1012)) ;
    GGS_lstringlist var_poisonedVarNameList_33449 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_33449, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_inputActualNewConstantParameterAST::init_21__21__21__21__21_ (var_selector_30488, var_declarationTypeName_33065, var_inputActualParameterName_33391, var_markedAsUnused_33241, var_poisonedVarNameList_33449, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1014)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 920)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 922)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 926)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 930)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 931)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 946)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 954)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 955)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 956)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 964)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 972)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 979)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 7: {
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 989)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 998)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1009)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1012)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_selector_34096 ;
  switch (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler)) {
  case 1: {
    var_selector_34096 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1032)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1034)) ;
    var_selector_34096 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1035)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler)) {
  case 1: {
    GGS_lstring var_outputInputActualParameterName_34235 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1038)) ;
    GGS_lstringlist var_structAttributeList_34277 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1042)) ;
        GGS_lstring var_structAttributeName_34379 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1043)) ;
        var_structAttributeList_34277.addAssignOperation (var_structAttributeName_34379  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1044)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    ioArgument_ioActualParameterList.addAssignOperation (GGS_outputInputActualParameterAST::init_21__21__21_ (var_selector_34096, var_outputInputActualParameterName_34235, var_structAttributeList_34277, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1046)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_from COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1052)) ;
    GGS_semanticExpressionAST var_initializerCall_34686 ;
    nt_expression_ (ioArgument_ioDeclarations, var_initializerCall_34686, inCompiler) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_outputInputJokerParameterAST::init_21__21_ (var_selector_34096, var_initializerCall_34686, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1054)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1056)) ;
    ioArgument_ioActualParameterList.addAssignOperation (GGS_outputInputSelfParameterAST::init_21_ (var_selector_34096, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1057)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1032)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1034)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1038)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1042)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1043)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_from COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1052)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1056)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_selector_35292 ;
  switch (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler)) {
  case 1: {
    var_selector_35292 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1069)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1071)) ;
    var_selector_35292 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1072)) ;
  } break ;
  default:
    break ;
  }
  GGS_semanticExpressionAST var_e_35457 ;
  nt_expression_ (ioArgument_ioDeclarations, var_e_35457, inCompiler) ;
  GGS_location var_endOfExpressionLocation_35478 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1075)) ;
  ioArgument_ioActualParameterList.addAssignOperation (GGS_outputActualParameterAST::init_21__21__21_ (var_selector_35292, var_e_35457, var_endOfExpressionLocation_35478, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1076)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1069)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1071)) ;
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_actualParameterListAST & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_selector_35899 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1087)) ;
  GGS_semanticExpressionAST var_e_35982 ;
  nt_expression_ (ioArgument_ioDeclarations, var_e_35982, inCompiler) ;
  GGS_location var_endOfExpressionLocation_36003 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1089)) ;
  ioArgument_ioActualParameterList.addAssignOperation (GGS_outputActualParameterAST::init_21__21__21_ (var_selector_35899, var_e_35982, var_endOfExpressionLocation_36003, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1090)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                 GGS_formalInputParameterListAST & outArgument_outFormalInputParameterList,
                                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1104)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_36701 ;
      switch (select_galgas_34_ParameterArgumentSyntax_19 (inCompiler)) {
      case 1: {
        var_selector_36701 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1110)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1112)) ;
        var_selector_36701 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1113)) ;
      } break ;
      case 3: {
        var_selector_36701 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1115)) ;
      } break ;
      default:
        break ;
      }
      GGS_bool var_isConstant_36884 ;
      switch (select_galgas_34_ParameterArgumentSyntax_20 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1119)) ;
        var_isConstant_36884 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1122)) ;
        var_isConstant_36884 = GGS_bool (true) ;
      } break ;
      case 3: {
        var_isConstant_36884 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterTypeName_37111 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_formalParameterTypeName_37111, inCompiler) ;
      GGS_bool var_isUnused_37154 ;
      switch (select_galgas_34_ParameterArgumentSyntax_21 (inCompiler)) {
      case 1: {
        var_isUnused_37154 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1132)) ;
        var_isUnused_37154 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterName_37309 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1135)) ;
      outArgument_outFormalInputParameterList.addAssignOperation (var_selector_36701, var_formalParameterTypeName_37111, var_formalParameterName_37309, var_isUnused_37154, var_isConstant_36884  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1136)) ;
      if (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1143)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1146)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1104)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_19 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1110)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1112)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_ParameterArgumentSyntax_20 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1119)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1122)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
      switch (select_galgas_34_ParameterArgumentSyntax_21 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1132)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1135)) ;
      if (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1143)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1146)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_ (GGS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_indexing (Lexique_galgasScanner_34_ * /* inCompiler */) {
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_ (GGS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1160)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_varName_38022 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1162)) ;
    outArgument_outPoisonedVarNameList.addAssignOperation (var_varName_38022  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1163)) ;
    if (select_galgas_34_ParameterArgumentSyntax_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1165)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1167)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1160)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1162)) ;
    if (select_galgas_34_ParameterArgumentSyntax_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1165)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas3", 1167)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  GGS_semanticInstructionListAST & outArgument_outInstructionsList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticInstructionAST var_instruction_14147 ;
      nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_14147, inCompiler) ;
      outArgument_outInstructionsList.addAssignOperation (var_instruction_14147  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 350)) ;
      if (select_galgas_34_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 353)) ;
        } break ;
        case 2: {
          GGS_string var_separator_14270 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 355)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_14270.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 356)).operator_not (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 356)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 357)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 357)) ;
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
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_guard COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 364)) ;
    GGS_location var_instructionLocation_14538 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 365)) ;
    GGS_CommaSeparatedExpressionList var_testExpression_14634 ;
    nt_comma_5F_separated_5F_expression_ (ioArgument_ioDeclarations, var_testExpression_14634, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 367)) ;
    GGS_semanticInstructionListAST var_else_5F_instructionList_14721 ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_else_5F_instructionList_14721, inCompiler) ;
    GGS_location var_endOf_5F_else_5F_branch_14753 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 369)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 370)) ;
    GGS_semanticInstructionListAST var_then_5F_instructionList_14858 ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_then_5F_instructionList_14858, inCompiler) ;
    GGS_location var_endOf_5F_then_5F_branch_14890 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 372)) ;
    GGS_ifInstructionAST var_instruction_14935 = GGS_ifInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_14538, var_testExpression_14634, var_then_5F_instructionList_14858, var_endOf_5F_then_5F_branch_14890, var_else_5F_instructionList_14721, var_endOf_5F_else_5F_branch_14753, inCompiler COMMA_HERE) ;
    outArgument_outInstructionsList.addAssignOperation (var_instruction_14935  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 381)) ;
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
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 353)) ;
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
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_guard COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 364)) ;
    nt_comma_5F_separated_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 367)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 370)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 390)) ;
  GGS_bool var_isOnce_15534 = GGS_bool (false) ;
  GGS_bool var_isUsefull_15557 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 395)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isOnce_15534.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 397)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 397)) ;
        }
      }
      var_isOnce_15534 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 401)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_isUsefull_15557.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 403)), GGS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 403)) ;
        }
      }
      var_isUsefull_15557 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_functionName_15894 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 407)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_16025 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_16025, inCompiler) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_isOnce_15534.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, var_formalInputParameterList_16025.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 409)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (var_functionName_15894.readProperty_location (), GGS_string ("an 'once' function should has no argument"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 410)) ;
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 412)) ;
  GGS_lstring var_resultTypeName_16243 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_16243, inCompiler) ;
  GGS_lstring var_resultVariableName_16276 ;
  switch (select_galgas_34_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    var_resultVariableName_16276 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 416)) ;
  } break ;
  case 2: {
    var_resultVariableName_16276 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 418)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 420)) ;
  GGS_semanticInstructionListAST var_functionInstructionList_16501 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_functionInstructionList_16501, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 422)) ;
  GGS_location var_endOfFunctionInstructionList_16542 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 423)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_isOnce_15534.boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_onceFunctionDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_functionName_15894, var_resultTypeName_16243, var_resultVariableName_16276, var_functionInstructionList_16501, var_endOfFunctionInstructionList_16542, GGS_bool (false), var_isUsefull_15557, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 425)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_functionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (GGS_bool (false), var_functionName_15894, var_formalInputParameterList_16025, var_resultTypeName_16243, var_isUsefull_15557, var_resultVariableName_16276, var_functionInstructionList_16501, var_endOfFunctionInstructionList_16542, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 436)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 390)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 395)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 401)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 407)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 412)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 416)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 420)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 422)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 453)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 454)) ;
  GGS_bool var_isOnce_17471 = GGS_bool (false) ;
  GGS_bool var_isUsefull_17494 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 459)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isOnce_17471.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 461)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 461)) ;
        }
      }
      var_isOnce_17471 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 465)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_isUsefull_17494.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 467)), GGS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 467)) ;
        }
      }
      var_isUsefull_17494 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_functionName_17831 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 471)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_17962 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_17962, inCompiler) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_isOnce_17471.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, var_formalInputParameterList_17962.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 473)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (var_functionName_17831.readProperty_location (), GGS_string ("an 'once' function should has no argument"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 474)) ;
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 476)) ;
  GGS_lstring var_resultTypeName_18180 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_18180, inCompiler) ;
  GGS_lstring var_resultVariableName_18213 ;
  switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    var_resultVariableName_18213 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 480)) ;
  } break ;
  case 2: {
    var_resultVariableName_18213 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 482)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 484)) ;
  GGS_semanticInstructionListAST var_functionInstructionList_18438 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_functionInstructionList_18438, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 486)) ;
  GGS_location var_endOfFunctionInstructionList_18479 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 487)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_isOnce_17471.boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_onceFunctionDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_functionName_17831, var_resultTypeName_18180, var_resultVariableName_18213, var_functionInstructionList_18438, var_endOfFunctionInstructionList_18479, GGS_bool (true), var_isUsefull_17494, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 489)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_functionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (GGS_bool (false), var_functionName_17831, var_formalInputParameterList_17962, var_resultTypeName_18180, var_isUsefull_17494, var_resultVariableName_18213, var_functionInstructionList_18438, var_endOfFunctionInstructionList_18479, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 500)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 453)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 454)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 459)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 465)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 471)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 476)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 480)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 484)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 486)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 519)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 520)) ;
  GGS_bool var_isUsefull_19591 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 524)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_19591.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 526)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 526)) ;
        }
      }
      var_isUsefull_19591 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mActionName_19794 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 530)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_19924 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_19924, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 532)) ;
  GGS_lstring var_resultTypeName_20005 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_20005, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_externFunctionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc (GGS_bool (false), var_mActionName_19794, var_formalInputParameterList_19924, var_resultTypeName_20005, var_isUsefull_19591, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 534)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 519)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 520)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_8 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 524)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 530)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 532)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 554)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 555)) ;
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 557)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 558)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_lstring var_actualParameterTypeName_21173 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_21173, inCompiler) ;
    GGS_lstring var_actualParameterName_21223 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 561)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::init_21__21_ (var_actualParameterTypeName_21173, var_actualParameterName_21223, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 564)) ;
    GGS_lstring var_actualParameterTypeName_21447 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_21447, inCompiler) ;
    GGS_lstring var_actualParameterName_21497 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 566)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::init_21__21_ (var_actualParameterTypeName_21447, var_actualParameterName_21497, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_lstring var_actualParameterName_21679 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 569)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar::init_21_ (var_actualParameterName_21679, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 572)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 554)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 555)) ;
  switch (select_galgas_34_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 557)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 561)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 564)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 566)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 569)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 572)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GGS_actualInputParameterListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 582)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 585)) ;
        GGS_lstring var_selector_22244 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 586)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 587)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_22244, GGS_inputParameterAnonymousVariable::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 588)) ;
      } break ;
      case 2: {
        GGS_lstring var_selector_22405 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 590)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 591)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_22405, GGS_inputParameterAnonymousVariable::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 592)) ;
      } break ;
      case 3: {
        GGS_lstring var_selector_22557 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 594)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 595)) ;
        GGS_lstring var_actualParameterTypeName_22606 ;
        switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_22606 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 598)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_22606, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_22826 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 602)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_22557, GGS_inputParameterDeclaredVariable::init_21__21_ (var_actualParameterTypeName_22606, var_actualParameterName_22826, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 603)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 607)) ;
        GGS_lstring var_selector_23042 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 608)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 609)) ;
        GGS_lstring var_actualParameterTypeName_23100 ;
        switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_23100 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 612)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_23100, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_23320 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 616)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_23042, GGS_inputParameterDeclaredVariable::init_21__21_ (var_actualParameterTypeName_23100, var_actualParameterName_23320, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 617)) ;
      } break ;
      case 5: {
        GGS_lstring var_selector_23537 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 621)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 622)) ;
        GGS_lstring var_actualParameterTypeName_23586 ;
        switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_23586 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 625)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_23586, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_23807 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 629)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_23537, GGS_inputParameterDeclaredConstant::init_21__21_ (var_actualParameterTypeName_23586, var_actualParameterName_23807, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 630)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 634)) ;
        GGS_lstring var_selector_24023 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 635)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 636)) ;
        GGS_lstring var_actualParameterTypeName_24081 ;
        switch (select_galgas_34_InstructionsSyntax_16 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_24081 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 639)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_24081, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_24302 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 643)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_24023, GGS_inputParameterDeclaredConstant::init_21__21_ (var_actualParameterTypeName_24081, var_actualParameterName_24302, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 644)) ;
      } break ;
      case 7: {
        GGS_lstring var_selector_24519 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 648)) ;
        GGS_lstring var_actualParameterName_24558 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 649)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_24519, GGS_inputParameterVariable::init_21_ (var_actualParameterName_24558, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 650)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 652)) ;
        GGS_lstring var_selector_24717 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 653)) ;
        GGS_lstring var_actualParameterName_24765 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 654)) ;
        outArgument_outActualInputParameterList.addAssignOperation (var_selector_24717, GGS_inputParameterVariable::init_21_ (var_actualParameterName_24765, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 655)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_11 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 658)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 660)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 582)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 585)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 587)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 590)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 591)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 594)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 595)) ;
        switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 602)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 607)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 609)) ;
        switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 616)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 621)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 622)) ;
        switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 629)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 634)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 636)) ;
        switch (select_galgas_34_InstructionsSyntax_16 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 643)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 648)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 649)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 652)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 654)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_11 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 658)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas3", 660)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas3", 85)) ;
  GGS_location var_instructionLocation_3430 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas3", 86)) ;
  GGS_logListAST var_logList_3487 = GGS_logListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
    case 1: {
      GGS_lstring var_loggedVariableName_3552 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 90)) ;
      var_logList_3487.addAssignOperation (var_loggedVariableName_3552, GGS_varInExpressionAST::init_21_ (var_loggedVariableName_3552, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-log.galgas3", 91)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas3", 93)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 94)) ;
      GGS_lstring var_propertyName_3717 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 95)) ;
      var_logList_3487.addAssignOperation (var_propertyName_3717, GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_propertyName_3717.readProperty_location (), GGS_selfInExpressionAST::init_21_ (var_propertyName_3717.readProperty_location (), inCompiler COMMA_HERE), var_propertyName_3717, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-log.galgas3", 96)) ;
    } break ;
    case 3: {
      GGS_lstring var_logMessage_3938 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 100)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 101)) ;
      GGS_semanticExpressionAST var_logExpression_4007 ;
      nt_expression_ (ioArgument_ioDeclarations, var_logExpression_4007, inCompiler) ;
      var_logList_3487.addAssignOperation (var_logMessage_3938, var_logExpression_4007  COMMA_SOURCE_FILE ("instruction-log.galgas3", 103)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 106)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GGS_logInstructionAST::init_21__21_ (var_instructionLocation_3430, var_logList_3487, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas3", 85)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 90)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas3", 93)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 94)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas3", 95)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 100)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 101)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_17 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas3", 106)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 53)) ;
  GGS_lstring var_methodName_2484 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 54)) ;
  GGS_location var_instructionLocation_2504 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 55)) ;
  GGS_actualParameterListAST var_actualParameterList_2634 ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_2634, inCompiler) ;
  outArgument_outInstruction = GGS_superMethodCallInstructionAST::init_21__21__21_ (var_instructionLocation_2504, var_methodName_2484, var_actualParameterList_2634, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-super-method-call.galgas3", 54)) ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_fixitListAST & outArgument_outFixitListAST,
                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GGS_fixitListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas3", 134)) ;
    GGS_bool var_hasFixItRemove_5225 = GGS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_21 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_remove COMMA_SOURCE_FILE ("instruction-error.galgas3", 138)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_hasFixItRemove_5225.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GenericArray <FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 140)), GGS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas3", 140)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItRemove (SOURCE_FILE ("instruction-error.galgas3", 142))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 142)) ;
          var_hasFixItRemove_5225 = GGS_bool (true) ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas3", 146)) ;
        GGS_location var_errorLocation_5546 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 147)) ;
        GGS_semanticExpressionAST var_expression_5647 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_5647, inCompiler) ;
        outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItReplace (var_expression_5647, var_errorLocation_5546  COMMA_SOURCE_FILE ("instruction-error.galgas3", 149))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 149)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas3", 151)) ;
        GGS_location var_errorLocation_5801 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 152)) ;
        GGS_semanticExpressionAST var_expression_5902 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_5902, inCompiler) ;
        outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItInsertAfter (var_expression_5902, var_errorLocation_5801  COMMA_SOURCE_FILE ("instruction-error.galgas3", 154))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 154)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas3", 156)) ;
        GGS_location var_errorLocation_6061 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 157)) ;
        GGS_semanticExpressionAST var_expression_6162 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_6162, inCompiler) ;
        outArgument_outFixitListAST.addAssignOperation (GGS_fixitElementAST::class_func_fixItInsertBefore (var_expression_6162, var_errorLocation_6061  COMMA_SOURCE_FILE ("instruction-error.galgas3", 159))  COMMA_SOURCE_FILE ("instruction-error.galgas3", 159)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_20 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 162)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas3", 134)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_21 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_remove COMMA_SOURCE_FILE ("instruction-error.galgas3", 138)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas3", 146)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas3", 151)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas3", 156)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_20 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 162)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas3", 171)) ;
  GGS_location var_instructionLocation_6597 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas3", 172)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 173)) ;
  GGS_semanticExpressionAST var_mReceiverExpression_6706 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mReceiverExpression_6706, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 175)) ;
  GGS_semanticExpressionAST var_mErrorExpression_6799 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mErrorExpression_6799, inCompiler) ;
  GGS_lstringlist var_builtVariableList_6825 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas3", 180)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_builtVariableName_6932 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas3", 182)) ;
      var_builtVariableList_6825.addAssignOperation (var_builtVariableName_6932  COMMA_SOURCE_FILE ("instruction-error.galgas3", 183)) ;
      if (select_galgas_34_InstructionsSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 185)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_fixitListAST var_fixitListAST_7096 ;
  nt_issue_5F_fixit_ (ioArgument_ioDeclarations, var_fixitListAST_7096, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 189)) ;
  outArgument_outInstruction = GGS_errorInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_6597, var_mReceiverExpression_6706, var_mErrorExpression_6799, var_builtVariableList_6825, var_fixitListAST_7096, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas3", 171)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 173)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 175)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas3", 180)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas3", 182)) ;
      if (select_galgas_34_InstructionsSyntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 185)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-error.galgas3", 189)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 106)) ;
  GGS_location var_instructionLocation_4499 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 107)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 108)) ;
  GGS_semanticExpressionAST var_expression_4609 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_4609, inCompiler) ;
  outArgument_outInstruction = GGS_selfPlusEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_4499, var_expression_4609, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 106)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 108)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 120)) ;
  GGS_location var_instructionLocation_5005 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 121)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 122)) ;
  GGS_semanticExpressionAST var_expression_5115 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_5115, inCompiler) ;
  outArgument_outInstruction = GGS_selfMinusEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_5005, var_expression_5115, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 120)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 122)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 134)) ;
  GGS_location var_instructionLocation_5512 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 135)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 136)) ;
  GGS_semanticExpressionAST var_expression_5622 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_5622, inCompiler) ;
  outArgument_outInstruction = GGS_selfMulEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_5512, var_expression_5622, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 136)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 148)) ;
  GGS_location var_instructionLocation_6017 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 149)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 150)) ;
  GGS_semanticExpressionAST var_expression_6127 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_6127, inCompiler) ;
  outArgument_outInstruction = GGS_selfDivEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_6017, var_expression_6127, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 148)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas3", 150)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (ioArgument_ioDeclarations, GGS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas3", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 235)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (ioArgument_ioDeclarations, GGS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas3", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 235)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                              const GGS_bool constinArgument_inHasSelfPrefix,
                                                                                                                                              GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_receiverName_9320 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 244)) ;
  GGS_location var_instructionLocation_9342 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 245)) ;
  GGS_lstringlist var_propertyList_9400 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 249)) ;
      GGS_lstring var_attributeName_9475 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 250)) ;
      var_propertyList_9400.addAssignOperation (var_attributeName_9475  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 251)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 255)) ;
    GGS_semanticExpressionAST var_expression_9631 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_9631, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_9342, constinArgument_inHasSelfPrefix, var_receiverName_9320, var_propertyList_9400, GGS_opAssignmentOperator::class_func_minusAssign (SOURCE_FILE ("instruction-concat.galgas3", 262)), var_expression_9631, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 266)) ;
    GGS_semanticExpressionAST var_expression_9934 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_9934, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_9342, constinArgument_inHasSelfPrefix, var_receiverName_9320, var_propertyList_9400, GGS_opAssignmentOperator::class_func_plusAssign (SOURCE_FILE ("instruction-concat.galgas3", 273)), var_expression_9934, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 277)) ;
    GGS_semanticExpressionAST var_expression_10237 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_10237, inCompiler) ;
    outArgument_outInstruction = GGS_plusPlusEqualElementInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_9342, constinArgument_inHasSelfPrefix, var_receiverName_9320, var_propertyList_9400, var_expression_10237, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 287)) ;
    GGS_semanticExpressionAST var_expression_10520 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_10520, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_9342, constinArgument_inHasSelfPrefix, var_receiverName_9320, var_propertyList_9400, GGS_opAssignmentOperator::class_func_mulAssign (SOURCE_FILE ("instruction-concat.galgas3", 294)), var_expression_10520, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 298)) ;
    GGS_semanticExpressionAST var_expression_10821 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_10821, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_9342, constinArgument_inHasSelfPrefix, var_receiverName_9320, var_propertyList_9400, GGS_opAssignmentOperator::class_func_andAssign (SOURCE_FILE ("instruction-concat.galgas3", 305)), var_expression_10821, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 309)) ;
    GGS_semanticExpressionAST var_expression_11122 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_11122, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_9342, constinArgument_inHasSelfPrefix, var_receiverName_9320, var_propertyList_9400, GGS_opAssignmentOperator::class_func_orAssign (SOURCE_FILE ("instruction-concat.galgas3", 316)), var_expression_11122, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 320)) ;
    GGS_semanticExpressionAST var_expression_11422 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_11422, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_9342, constinArgument_inHasSelfPrefix, var_receiverName_9320, var_propertyList_9400, GGS_opAssignmentOperator::class_func_xorAssign (SOURCE_FILE ("instruction-concat.galgas3", 327)), var_expression_11422, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 331)) ;
    GGS_semanticExpressionAST var_expression_11723 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_11723, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_9342, constinArgument_inHasSelfPrefix, var_receiverName_9320, var_propertyList_9400, GGS_opAssignmentOperator::class_func_divAssign (SOURCE_FILE ("instruction-concat.galgas3", 338)), var_expression_11723, inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    GGS_actualParameterListAST var_actualParameterList_12042 ;
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_12042, inCompiler) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = constinArgument_inHasSelfPrefix.boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, var_propertyList_9400.getter_count (SOURCE_FILE ("instruction-concat.galgas3", 344)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_9342, GGS_selfInExpressionAST::init_21_ (var_instructionLocation_9342, inCompiler COMMA_HERE), var_receiverName_9320, var_actualParameterList_12042, inCompiler COMMA_HERE) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GGS_lstring var_methodName_12401 ;
          {
          var_propertyList_9400.setter_popLast (var_methodName_12401, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas3", 352)) ;
          }
          GGS_semanticExpressionAST var_receiverExpression_12450 = GGS_selfInExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas3", 353)), inCompiler COMMA_HERE) ;
          var_receiverExpression_12450 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_receiverName_9320.readProperty_location (), var_receiverExpression_12450, var_receiverName_9320, inCompiler COMMA_HERE) ;
          UpEnumerator_lstringlist enumerator_12650 (var_propertyList_9400) ;
          while (enumerator_12650.hasCurrentObject ()) {
            var_receiverExpression_12450 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (enumerator_12650.current_mValue (HERE).readProperty_location (), var_receiverExpression_12450, enumerator_12650.current_mValue (HERE), inCompiler COMMA_HERE) ;
            enumerator_12650.gotoNextObject () ;
          }
          outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_9342, var_receiverExpression_12450, var_methodName_12401, var_actualParameterList_12042, inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, var_propertyList_9400.getter_count (SOURCE_FILE ("instruction-concat.galgas3", 365)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outInstruction = GGS_procCallInstructionAST::init_21__21__21_ (var_receiverName_9320.readProperty_location (), var_receiverName_9320, var_actualParameterList_12042, inCompiler COMMA_HERE) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GGS_lstring var_methodName_13263 ;
        {
        var_propertyList_9400.setter_popLast (var_methodName_13263, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas3", 372)) ;
        }
        GGS_semanticExpressionAST var_receiverExpression_13310 = GGS_varInExpressionAST::init_21_ (var_receiverName_9320, inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_13380 (var_propertyList_9400) ;
        while (enumerator_13380.hasCurrentObject ()) {
          var_receiverExpression_13310 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (enumerator_13380.current_mValue (HERE).readProperty_location (), var_receiverExpression_13310, enumerator_13380.current_mValue (HERE), inCompiler COMMA_HERE) ;
          enumerator_13380.gotoNextObject () ;
        }
        outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_9342, var_receiverExpression_13310, var_methodName_13263, var_actualParameterList_12042, inCompiler COMMA_HERE) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 244)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 249)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas3", 250)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 255)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 266)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 277)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 287)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 298)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 309)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 320)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas3", 331)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i17_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas3", 64)) ;
  GGS_location var_instructionLocation_3026 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas3", 65)) ;
  GGS_semanticExpressionAST var_mReceiverExpression_3127 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mReceiverExpression_3127, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas3", 67)) ;
  GGS_semanticExpressionAST var_mWarningExpression_3220 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mWarningExpression_3220, inCompiler) ;
  GGS_fixitListAST var_fixitListAST_3296 ;
  nt_issue_5F_fixit_ (ioArgument_ioDeclarations, var_fixitListAST_3296, inCompiler) ;
  outArgument_outInstruction = GGS_warningInstructionAST::init_21__21__21__21_ (var_instructionLocation_3026, var_mReceiverExpression_3127, var_mWarningExpression_3220, var_fixitListAST_3296, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas3", 64)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas3", 67)) ;
  nt_expression_indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_comma_5F_separated_5F_expression_i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    GGS_CommaSeparatedExpressionList & outArgument_outExpressionList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_CommaSeparatedExpressionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
      GGS_lstring var_varName_3529 ;
      GGS_bool var_isConstant_3555 ;
      switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 96)) ;
        var_varName_3529 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 97)) ;
        var_isConstant_3555 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 100)) ;
        var_isConstant_3555 = GGS_bool (true) ;
        switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
        case 1: {
          var_varName_3529 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 103)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 105)) ;
          var_varName_3529 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 106)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 109)) ;
      GGS_semanticExpressionAST var_expression_3916 ;
      nt_expression_5F_or_ (ioArgument_ioDeclarations, var_expression_3916, inCompiler) ;
      GGS_location var_endOfReceiverExpression_3940 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 111)) ;
      switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
      case 1: {
        outArgument_outExpressionList.addAssignOperation (GGS_ifExpressionKind::class_func_letVarExp (var_varName_3529, var_isConstant_3555, var_expression_3916, var_endOfReceiverExpression_3940, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 118))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 113))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 113)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 121)) ;
        GGS_lstring var_typeName_4308 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4308, inCompiler) ;
        outArgument_outExpressionList.addAssignOperation (GGS_ifExpressionKind::class_func_letVarExp (var_varName_3529, var_isConstant_3555, var_expression_3916, var_endOfReceiverExpression_3940, var_typeName_4308  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 123))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 123)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      GGS_semanticExpressionAST var_expression_4619 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_4619, inCompiler) ;
      outArgument_outExpressionList.addAssignOperation (GGS_ifExpressionKind::class_func_regularExp (var_expression_4619, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 133))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 133))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 133)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 136)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_comma_5F_separated_5F_expression_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
      switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 96)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 97)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 100)) ;
        switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 103)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 105)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 109)) ;
      nt_expression_5F_or_indexing (inCompiler) ;
      switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 121)) ;
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
    if (select_galgas_34_InstructionsSyntax_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas3", 136)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i19_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 188)) ;
  GGS_location var_instructionLocation_8786 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 189)) ;
  GGS_lstring var_grammarComponentName_8855 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 190)) ;
  GGS_lstring var_labelName_8931 ;
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    var_labelName_8931 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 193)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 195)) ;
    var_labelName_8931 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 196)) ;
  } break ;
  default:
    break ;
  }
  GGS_actualParameterListAST var_actualParameterList_9146 ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_9146, inCompiler) ;
  nt_grammar_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instructionLocation_8786, var_actualParameterList_9146, var_grammarComponentName_8855, var_labelName_8931, outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 188)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 190)) ;
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 195)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 196)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
  nt_grammar_5F_instruction_5F_core_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i20_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  const GGS_location constinArgument_inInstructionLocation,
                                                                                                                  const GGS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GGS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GGS_lstring constinArgument_inLabelName,
                                                                                                                  GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 210)) ;
  GGS_semanticExpressionAST var_sourceExpression_9939 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_9939, inCompiler) ;
  GGS_location var_endOfSourceExpression_9965 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 212)) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_10125 ;
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_10125 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 218)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_10125, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_grammarInFileInstructionAST::init_21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_9939, var_endOfSourceExpression_9965, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_10125, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 210)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 218)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  const GGS_location constinArgument_inInstructionLocation,
                                                                                                                  const GGS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GGS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GGS_lstring constinArgument_inLabelName,
                                                                                                                  GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 240)) ;
  GGS_semanticExpressionAST var_sourceExpression_11341 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_11341, inCompiler) ;
  GGS_location var_endOfSourceExpression_11377 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 242)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 243)) ;
  GGS_semanticExpressionAST var_nameExpression_11479 ;
  nt_expression_ (ioArgument_ioDeclarations, var_nameExpression_11479, inCompiler) ;
  GGS_location var_endOfNameExpression_11513 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 245)) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_11662 ;
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_11662 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 251)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_11662, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_grammarInStringInstructionAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_11341, var_endOfSourceExpression_11377, var_nameExpression_11479, var_endOfNameExpression_11513, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_11662, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 240)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 243)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas3", 251)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 89)) ;
  GGS_location var_instructionLocation_3962 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 92)) ;
  GGS_semanticExpressionAST var_variantExpression_4087 ;
  nt_expression_ (ioArgument_ioDeclarations, var_variantExpression_4087, inCompiler) ;
  GGS_location var_endOfVariantExpression_4114 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 95)) ;
  GGS_semanticInstructionListAST var_firstInstructions_4254 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_firstInstructions_4254, inCompiler) ;
  GGS_location var_endOfFirstInstructions_4289 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 99)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 100)) ;
  GGS_semanticExpressionAST var_loopExpression_4405 ;
  nt_expression_ (ioArgument_ioDeclarations, var_loopExpression_4405, inCompiler) ;
  GGS_location var_endOfLoopExpression_4429 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 103)) ;
  GGS_semanticInstructionListAST var_secondInstructions_4559 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_secondInstructions_4559, inCompiler) ;
  GGS_location var_endOfSecondInstructions_4587 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 105)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 106)) ;
  GGS_location var_endOfLoopInstruction_4646 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 107)) ;
  outArgument_outInstruction = GGS_loopInstructionWithVariantAST::init_21__21__21__21__21__21__21__21__21__21_ (var_instructionLocation_3962, var_variantExpression_4087, var_endOfVariantExpression_4114, var_firstInstructions_4254, var_endOfFirstInstructions_4289, var_loopExpression_4405, var_endOfLoopExpression_4429, var_secondInstructions_4559, var_endOfSecondInstructions_4587, var_endOfLoopInstruction_4646, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 92)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 95)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 100)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 103)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas3", 106)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i23_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_3756 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 85)) ;
  GGS_CommaSeparatedExpressionList var_testExpression_3850 ;
  nt_comma_5F_separated_5F_expression_ (ioArgument_ioDeclarations, var_testExpression_3850, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas3", 87)) ;
  GGS_semanticInstructionListAST var_then_5F_instructionList_3933 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_then_5F_instructionList_3933, inCompiler) ;
  GGS_location var_endOf_5F_then_5F_branchLocation_3963 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 89)) ;
  GGS_semanticInstructionListAST var_else_5F_instructionList_4042 ;
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_4042 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas3", 94)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_else_5F_instructionList_4042, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas3", 97)) ;
    GGS_semanticInstructionAST var_instruction_4276 ;
    nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instruction_4276, inCompiler) ;
    GGS_semanticInstructionListAST temp_0 = GGS_semanticInstructionListAST::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas3", 99)) ;
    temp_0.plusPlusAssignOperation (GGS_semanticInstructionListAST_2E_element::init_21_ (var_instruction_4276, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas3", 99)) ;
    var_else_5F_instructionList_4042 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_ifInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_3756, var_testExpression_3850, var_then_5F_instructionList_3933, var_endOf_5F_then_5F_branchLocation_3963, var_else_5F_instructionList_4042, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas3", 107)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_comma_5F_separated_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas3", 87)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas3", 94)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas3", 97)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i24_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas3", 115)) ;
  nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas3", 117)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas3", 115)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas3", 117)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i25_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas3", 118)) ;
  GGS_location var_instructionLocation_4402 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 119)) ;
  GGS_semanticExpressionAST var_switchExpression_4480 ;
  nt_expression_ (ioArgument_ioDeclarations, var_switchExpression_4480, inCompiler) ;
  GGS_location var_endOfSwitchExpression_4506 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 121)) ;
  GGS_switchBranchesAST var_switchBranches_4572 = GGS_switchBranchesAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas3", 124)) ;
    GGS__5B_lstring_5D_ var_constantNameList_4688 ;
    GGS_switchExtractedValuesListAST var_associatedValuesExtraction_4749 ;
    nt_switch_5F_case_ (ioArgument_ioDeclarations, var_constantNameList_4688, var_associatedValuesExtraction_4749, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 129)) ;
    GGS_semanticInstructionListAST var_instructions_4845 ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructions_4845, inCompiler) ;
    var_switchBranches_4572.addAssignOperation (var_constantNameList_4688, var_associatedValuesExtraction_4749, var_instructions_4845, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 131))  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 131)) ;
    if (select_galgas_34_InstructionsSyntax_35 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas3", 134)) ;
  GGS_location var_endOfSwitchInstruction_4995 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 135)) ;
  outArgument_outInstruction = GGS_switchInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_4402, var_switchExpression_4480, var_endOfSwitchExpression_4506, var_switchBranches_4572, var_endOfSwitchInstruction_4995, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas3", 118)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas3", 124)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 129)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_35 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas3", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS__5B_lstring_5D_ & outArgument_outConstantNameList,
                                                                                                  GGS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_constantName_5603 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 152)) ;
    {
    outArgument_outConstantNameList.setter_append (var_constantName_5603, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 153)) ;
    }
    if (select_galgas_34_InstructionsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 155)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GGS_switchExtractedValuesListAST::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 160)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
      case 1: {
        GGS_lbigint var_n_5821 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas3", 163)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 164)) ;
        UpEnumerator_range enumerator_5865 (GGS_range (GGS_uint (uint32_t (0U)), var_n_5821.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 165)).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 165)))) ;
        while (enumerator_5865.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssignOperation (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 166)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 166)), GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 166)) ;
          enumerator_5865.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 169)) ;
        outArgument_outAssociatedValuesExtraction.addAssignOperation (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 170)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 170)), GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 170)) ;
      } break ;
      case 3: {
        GGS_lstring var_typeName_6088 ;
        switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_6088, inCompiler) ;
        } break ;
        case 2: {
          var_typeName_6088 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas3", 176)) ;
        } break ;
        default:
          break ;
        }
        GGS_bool var_constantMarkedAsUnused_6252 ;
        switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_6252 = GGS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas3", 182)) ;
          var_constantMarkedAsUnused_6252 = GGS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_constantName_6463 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 185)) ;
        outArgument_outAssociatedValuesExtraction.addAssignOperation (var_typeName_6088, var_constantName_6463, var_constantMarkedAsUnused_6252  COMMA_SOURCE_FILE ("instruction-switch.galgas3", 186)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_38 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 189)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 191)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 152)) ;
    if (select_galgas_34_InstructionsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 155)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 160)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas3", 163)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 164)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 169)) ;
      } break ;
      case 3: {
        switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas3", 182)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas3", 185)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_38 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 189)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas3", 191)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i27_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                 GGS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lbigint var_count_9962 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas3", 266)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 267)) ;
  GGS_uint var_n_9985 = var_count_9962.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas3", 268)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_n_9985.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_9962.readProperty_location (), GGS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas3", 270)) ;
    }
  }
  if (var_n_9985.isValid ()) {
    uint32_t variant_10086 = var_n_9985.uintValue () ;
    bool loop_10086 = true ;
    while (loop_10086) {
      loop_10086 = GGS_bool (ComparisonKind::greaterThan, var_n_9985.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_10086) {
        loop_10086 = GGS_bool (ComparisonKind::greaterThan, var_n_9985.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_10086 && (0 == variant_10086)) {
        loop_10086 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas3", 272)) ;
      }
      if (loop_10086) {
        variant_10086 -= 1 ;
        ioArgument_ioElementList.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 273)), GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 273))  COMMA_SOURCE_FILE ("instruction-for.galgas3", 273)) ;
        var_n_9985.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 274)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas3", 266)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 267)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_typeName_10481 ;
  switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    var_typeName_10481 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 284)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_10481, inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 289)) ;
    ioArgument_ioElementList.addAssignOperation (var_typeName_10481, GGS_bool (true), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas3", 290))  COMMA_SOURCE_FILE ("instruction-for.galgas3", 290)) ;
  } break ;
  case 2: {
    GGS_bool var_isUnused_10690 ;
    switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
    case 1: {
      var_isUnused_10690 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas3", 296)) ;
      var_isUnused_10690 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_constantName_10831 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 299)) ;
    ioArgument_ioElementList.addAssignOperation (var_typeName_10481, var_isUnused_10690, var_constantName_10831  COMMA_SOURCE_FILE ("instruction-for.galgas3", 300)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 289)) ;
  } break ;
  case 2: {
    switch (select_galgas_34_InstructionsSyntax_44 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas3", 296)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 299)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 308)) ;
  GGS_forInstructionEnumeratedObjectElementListAST var_elementList_11218 = GGS_forInstructionEnumeratedObjectElementListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_ (ioArgument_ioDeclarations, var_elementList_11218, inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 313)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_location var_location_11394 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 315)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 316)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 317)) ;
  GGS_semanticExpressionAST var_enumeratedExpression_11501 ;
  nt_expression_ (ioArgument_ioDeclarations, var_enumeratedExpression_11501, inCompiler) ;
  outArgument_outEnumeratedObject = GGS_enumeratedCollectionCstListInExpAST::init_21__21__21_ (var_elementList_11218, var_enumeratedExpression_11501, var_location_11394, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 308)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 313)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 316)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 317)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_11966 ;
  switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
    var_typeName_11966 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas3", 332)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_11966, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_enumerationVariable_12100 ;
  switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 338)) ;
    var_enumerationVariable_12100 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas3", 339)) ;
  } break ;
  case 2: {
    var_enumerationVariable_12100 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 341)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 343)) ;
  GGS_semanticExpressionAST var_enumeratedExpression_12307 ;
  nt_expression_ (ioArgument_ioDeclarations, var_enumeratedExpression_12307, inCompiler) ;
  outArgument_outEnumeratedObject = GGS_enumeratedCollectionVarInExpAST::init_21__21__21__21_ (var_typeName_11966, var_enumerationVariable_12100, var_enumeratedExpression_12307, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 349)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 338)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 341)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas3", 343)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas3", 357)) ;
  GGS_location var_instructionLocation_12759 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 358)) ;
  GGS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList_12804 = GGS_forInstructionEnumeratedObjectListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_bool var_ascending_12897 ;
    switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
    case 1: {
      var_ascending_12897 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 365)) ;
      var_ascending_12897 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_abstractEnumeratedCollectionAST var_enumeratedObject_13101 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (ioArgument_ioDeclarations, var_enumeratedObject_13101, inCompiler) ;
    var_mEnumeratedObjectList_12804.addAssignOperation (var_ascending_12897, var_enumeratedObject_13101  COMMA_SOURCE_FILE ("instruction-for.galgas3", 369)) ;
    if (select_galgas_34_InstructionsSyntax_48 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 371)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_semanticExpressionAST var_mWhileExpression_13238 ;
  switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
    var_mWhileExpression_13238 = GGS_trueExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 375)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas3", 377)) ;
    nt_expression_ (ioArgument_ioDeclarations, var_mWhileExpression_13238, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_while_5F_expression_13423 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 380)) ;
  GGS_semanticInstructionListAST var_mBeforeInstructionList_13499 ;
  switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_13499 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas3", 385)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mBeforeInstructionList_13499, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_before_5F_branch_13712 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 388)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas3", 389)) ;
  GGS_lstring var_indexVariableName_13775 ;
  switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
    var_indexVariableName_13775 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 392)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 394)) ;
    var_indexVariableName_13775 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 395)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 396)) ;
  } break ;
  default:
    break ;
  }
  GGS_semanticInstructionListAST var_mDoInstructionList_13993 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mDoInstructionList_13993, inCompiler) ;
  GGS_location var_endof_5F_do_5F_branch_14021 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 399)) ;
  GGS_semanticInstructionListAST var_mBetweenInstructionList_14090 ;
  switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_14090 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas3", 404)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mBetweenInstructionList_14090, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_between_5F_branch_14307 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 407)) ;
  GGS_semanticInstructionListAST var_mAfterInstructionList_14381 ;
  switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_14381 = GGS_semanticInstructionListAST::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas3", 412)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mAfterInstructionList_14381, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_after_5F_branch_14590 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 415)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas3", 416)) ;
  GGS_location var_endof_5F_foreach_5F_instruction_14644 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas3", 417)) ;
  outArgument_outInstruction = GGS_forInstructionAST::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_instructionLocation_12759, var_mEnumeratedObjectList_12804, var_indexVariableName_13775, var_mWhileExpression_13238, var_endof_5F_while_5F_expression_13423, var_mBeforeInstructionList_13499, var_endof_5F_before_5F_branch_13712, var_mBetweenInstructionList_14090, var_endof_5F_between_5F_branch_14307, var_mDoInstructionList_13993, var_endof_5F_do_5F_branch_14021, var_mAfterInstructionList_14381, var_endof_5F_after_5F_branch_14590, var_endof_5F_foreach_5F_instruction_14644, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas3", 357)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 365)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_48 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 371)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas3", 377)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas3", 385)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas3", 389)) ;
  switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 394)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas3", 395)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas3", 396)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas3", 404)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas3", 412)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas3", 416)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_4108 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 103)) ;
  GGS_bool var_prefixedBySelf_4168 ;
  switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
    var_prefixedBySelf_4168 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 108)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 109)) ;
    var_prefixedBySelf_4168 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mReceiverName_4312 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 112)) ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
    GGS_actualParameterListAST var_actualParameterList_4433 ;
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_4433, inCompiler) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_prefixedBySelf_4168.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outInstruction = GGS_selfSetterCallInstructionAST::init_21__21__21_ (var_instructionLocation_4108, var_mReceiverName_4312, var_actualParameterList_4433, inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_instructionLocation_4108, GGS_string ("invalid mutating proc call"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 122)) ;
      outArgument_outInstruction.drop () ; // Release error dropped variable
    }
  } break ;
  case 2: {
    GGS_lstringlist var_receiverStructProperties_4763 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 127)) ;
      GGS_lstring var_structProperty_4858 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 128)) ;
      var_receiverStructProperties_4763.addAssignOperation (var_structProperty_4858  COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 129)) ;
      if (select_galgas_34_InstructionsSyntax_57 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    GGS_lstring var_setterName_4995 ;
    {
    var_receiverStructProperties_4763.setter_popLast (var_setterName_4995, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 132)) ;
    }
    GGS_actualParameterListAST var_actualParameterList_5102 ;
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_5102, inCompiler) ;
    outArgument_outInstruction = GGS_setterCallInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_4108, var_prefixedBySelf_4168, var_mReceiverName_4312, var_receiverStructProperties_4763, var_setterName_4995, var_actualParameterList_5102, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 103)) ;
  switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 108)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 109)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 112)) ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 127)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas3", 128)) ;
      if (select_galgas_34_InstructionsSyntax_57 (inCompiler) == 2) {
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 65)) ;
  GGS_location var_instructionLocation_2983 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 66)) ;
  GGS_semanticInstructionListAST var_firstInstructions_3104 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_firstInstructions_3104, inCompiler) ;
  GGS_location var_endOfFirstInstructions_3139 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 70)) ;
  GGS_CommaSeparatedExpressionList var_loopExpression_3248 ;
  nt_comma_5F_separated_5F_expression_ (ioArgument_ioDeclarations, var_loopExpression_3248, inCompiler) ;
  GGS_location var_endOfLoopExpression_3272 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 72)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 73)) ;
  GGS_semanticInstructionListAST var_secondInstructions_3402 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_secondInstructions_3402, inCompiler) ;
  GGS_location var_endOfSecondInstructions_3430 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 75)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 76)) ;
  GGS_location var_endOfLoopInstruction_3489 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 77)) ;
  outArgument_outInstruction = GGS_loopInstructionWithoutVariantAST::init_21__21__21__21__21__21__21__21_ (var_instructionLocation_2983, var_firstInstructions_3104, var_endOfFirstInstructions_3139, var_loopExpression_3248, var_endOfLoopExpression_3272, var_secondInstructions_3402, var_endOfSecondInstructions_3430, var_endOfLoopInstruction_3489, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 65)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 70)) ;
  nt_comma_5F_separated_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 73)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas3", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 101)) ;
  GGS_lstring var_typeName_4284 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4284, inCompiler) ;
  GGS_lstring var_constantName_4317 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 103)) ;
  switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GGS_undefinedLocalConstantDeclarationAST::init_21__21__21_ (var_typeName_4284.readProperty_location (), var_typeName_4284, var_constantName_4317, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 111)) ;
    GGS_semanticExpressionAST var_sourceExpression_4562 ;
    nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_4562, inCompiler) ;
    outArgument_outInstruction = GGS_localVariableOrConstantDeclarationWithAssignmentAST::init_21__21__21__21__21_ (var_typeName_4284.readProperty_location (), GGS_bool (true), var_typeName_4284, var_constantName_4317, var_sourceExpression_4562, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 101)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 103)) ;
  switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 111)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 127)) ;
  GGS_lstring var_variableName_5081 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 129)) ;
  GGS_semanticExpressionAST var_sourceExpression_5167 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_5167, inCompiler) ;
  outArgument_outInstruction = GGS_localConstantDeclarationWithAssignmentAST::init_21__21__21_ (var_variableName_5081.readProperty_location (), var_variableName_5081, var_sourceExpression_5167, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas3", 127)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas3", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas3", 129)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas3", 60)) ;
  GGS_location var_instructionLocation_2727 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas3", 61)) ;
  GGS_lstringlist var_dropList_2785 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_variableName_2836 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas3", 64)) ;
    var_dropList_2785.addAssignOperation (var_variableName_2836  COMMA_SOURCE_FILE ("instruction-drop.galgas3", 65)) ;
    if (select_galgas_34_InstructionsSyntax_59 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas3", 67)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GGS_dropInstructionAST::init_21__21_ (var_instructionLocation_2727, var_dropList_2785, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas3", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas3", 64)) ;
    if (select_galgas_34_InstructionsSyntax_59 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas3", 67)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 93)) ;
  GGS_lstring var_variableName_3902 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 95)) ;
  GGS_semanticExpressionAST var_sourceExpression_3988 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_3988, inCompiler) ;
  outArgument_outInstruction = GGS_localVariableDeclarationWithAssignmentAST::init_21__21__21_ (var_variableName_3902.readProperty_location (), var_variableName_3902, var_sourceExpression_3988, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 95)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 108)) ;
  GGS_lstring var_typeName_4459 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4459, inCompiler) ;
  GGS_lstring var_variableName_4492 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 110)) ;
  switch (select_galgas_34_InstructionsSyntax_60 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GGS_localVariableDeclarationNoAssignmentAST::init_21__21__21_ (var_typeName_4459.readProperty_location (), var_typeName_4459, var_variableName_4492, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 114)) ;
    GGS_semanticExpressionAST var_sourceExpression_4709 ;
    nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_4709, inCompiler) ;
    outArgument_outInstruction = GGS_localVariableOrConstantDeclarationWithAssignmentAST::init_21__21__21__21__21_ (var_typeName_4459.readProperty_location (), GGS_bool (false), var_typeName_4459, var_variableName_4492, var_sourceExpression_4709, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 108)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 110)) ;
  switch (select_galgas_34_InstructionsSyntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas3", 114)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 58)) ;
  GGS_location var_instructionLocation_2728 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 59)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 60)) ;
  GGS_semanticExpressionAST var_sourceExpression_2837 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_2837, inCompiler) ;
  outArgument_outInstruction = GGS_selfAssignmentInstructionAST::init_21__21_ (var_instructionLocation_2728, var_sourceExpression_2837, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 58)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas3", 60)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_2950 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 63)) ;
  GGS_lstring var_mTypeName_3014 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 65)) ;
  GGS_lstring var_mMethodName_3102 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 66)) ;
  GGS_actualParameterListAST var_actualParameterList_3208 ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_3208, inCompiler) ;
  outArgument_outInstruction = GGS_typeMethodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2950, var_mTypeName_3014, var_mMethodName_3102, var_actualParameterList_3208, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas3", 66)) ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 71)) ;
  GGS_location var_instructionLocation_2978 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 72)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 73)) ;
  GGS_actualOutputArgumentList var_actualParameterList_3076 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_actualParameterList_3076, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 75)) ;
  outArgument_outInstruction = GGS_superInitInstructionAST::init_21__21_ (var_instructionLocation_2978, var_actualParameterList_3076, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 73)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas3", 75)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mTargetVariableName_3411 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 85)) ;
  GGS_lstring var_optionalProperty_3449 ;
  switch (select_galgas_34_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
    var_optionalProperty_3449 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas3", 88)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 90)) ;
    GGS_actualOutputArgumentList var_outExpressionList_3645 ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_outExpressionList_3645, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 95)) ;
    GenericArray <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 96)), GGS_string ("not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 96)) ;
    var_optionalProperty_3449.drop () ; // Release error dropped variable
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 98)) ;
    GGS_lstring var_attributeName_3786 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 99)) ;
    var_optionalProperty_3449 = var_attributeName_3786 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 102)) ;
  GGS_semanticExpressionAST var_mSourceExpression_3920 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mSourceExpression_3920, inCompiler) ;
  outArgument_outInstruction = GGS_assignmentInstructionAST::init_21__21__21__21_ (var_mTargetVariableName_3411.readProperty_location (), var_mTargetVariableName_3411, var_optionalProperty_3449, var_mSourceExpression_3920, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 85)) ;
  switch (select_galgas_34_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 90)) ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 95)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 98)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 99)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 102)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 116)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 117)) ;
  GGS_lstring var_mTargetVariableName_4401 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 118)) ;
  GGS_lstring var_optionalProperty_4439 ;
  switch (select_galgas_34_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
    var_optionalProperty_4439 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas3", 121)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 123)) ;
    GGS_actualOutputArgumentList var_outExpressionList_4637 ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_outExpressionList_4637, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 128)) ;
    GenericArray <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 129)), GGS_string ("not handled yet"), fixItArray0  COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 129)) ;
    var_optionalProperty_4439.drop () ; // Release error dropped variable
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 131)) ;
    GGS_lstring var_attributeName_4778 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 132)) ;
    var_optionalProperty_4439 = var_attributeName_4778 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 135)) ;
  GGS_semanticExpressionAST var_mSourceExpression_4912 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mSourceExpression_4912, inCompiler) ;
  outArgument_outInstruction = GGS_selfPropertyAssignmentInstructionAST::init_21__21__21__21_ (var_mTargetVariableName_4401.readProperty_location (), var_mTargetVariableName_4401, var_optionalProperty_4439, var_mSourceExpression_4912, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i43_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 116)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 118)) ;
  switch (select_galgas_34_InstructionsSyntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 123)) ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 128)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 131)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 132)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas3", 135)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i44_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 67)) ;
  GGS_bool var_isUsefull_2942 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 71)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_2942.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 73)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 73)) ;
        }
      }
      var_isUsefull_2942 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mActionName_3155 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 77)) ;
  GGS_formalParameterListAST var_mFormalParameterList_3273 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameterList_3273, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_semanticDeclarationListAST_2E_element::init_21_ (GGS_externProcedureDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (GGS_bool (false), GGS_bool (false), var_mActionName_3155, var_mFormalParameterList_3273, var_isUsefull_2942, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 79)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i44_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_63 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 71)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 77)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i45_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 102)) ;
  GGS_bool var_isUsefull_4058 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 106)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_4058.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 108)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 108)) ;
        }
      }
      var_isUsefull_4058 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mRoutineName_4262 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 112)) ;
  GGS_formalParameterListAST var_mFormalParameterList_4381 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameterList_4381, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 114)) ;
  GGS_semanticInstructionListAST var_mRoutineInstructionList_4495 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mRoutineInstructionList_4495, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 116)) ;
  GGS_location var_endOfInstructionList_4536 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 117)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_procDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (GGS_bool (false), GGS_bool (false), var_mRoutineName_4262, var_mFormalParameterList_4381, var_isUsefull_4058, var_mRoutineInstructionList_4495, var_endOfInstructionList_4536, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 118)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i45_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 106)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 112)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 114)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i46_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 133)) ;
  GGS_bool var_isUsefull_5046 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_65 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 137)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_5046.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 139)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 139)) ;
        }
      }
      var_isUsefull_5046 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mRoutineName_5250 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 143)) ;
  GGS_formalParameterListAST var_mFormalParameterList_5369 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameterList_5369, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 145)) ;
  GGS_semanticInstructionListAST var_mRoutineInstructionList_5483 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mRoutineInstructionList_5483, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 147)) ;
  GGS_location var_endOfInstructionList_5524 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 148)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_procDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (GGS_bool (false), GGS_bool (true), var_mRoutineName_5250, var_mFormalParameterList_5369, var_isUsefull_5046, var_mRoutineInstructionList_5483, var_endOfInstructionList_5524, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 149)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i46_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 132)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 133)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_65 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 137)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 143)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 145)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas3", 147)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 227)) ;
  GGS_lstring var_mFilewrapperName_9190 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 228)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 229)) ;
  GGS_lstring var_mFilewrapperPath_9280 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 230)) ;
  GGS_lstringlist var_filewrapperTextFileExtensionList_9333 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_9333, inCompiler) ;
  GGS_lstringlist var_filewrapperBinaryFileExtensionList_9404 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_9404, inCompiler) ;
  GGS_filewrapperTemplateListAST var_filewrapperTemplateList_9492 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_9492, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_semanticDeclarationListAST_2E_element::init_21_ (GGS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (false), GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 237)), var_mFilewrapperName_9190, var_mFilewrapperPath_9280, var_filewrapperTextFileExtensionList_9333, var_filewrapperBinaryFileExtensionList_9404, var_filewrapperTemplateList_9492, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 234)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 227)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 228)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 229)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 230)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 249)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 250)) ;
  GGS_lstring var_mFilewrapperName_10111 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 251)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 252)) ;
  GGS_lstring var_mFilewrapperPath_10201 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 253)) ;
  GGS_lstringlist var_filewrapperTextFileExtensionList_10254 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_10254, inCompiler) ;
  GGS_lstringlist var_filewrapperBinaryFileExtensionList_10325 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_10325, inCompiler) ;
  GGS_filewrapperTemplateListAST var_filewrapperTemplateList_10413 ;
  nt_filewrapper_5F_templates_ (ioArgument_ioDeclarations, var_filewrapperTemplateList_10413, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_semanticDeclarationListAST_2E_element::init_21_ (GGS_filewrapperDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), GGS_bool (true), GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 260)), var_mFilewrapperName_10111, var_mFilewrapperPath_10201, var_filewrapperTextFileExtensionList_10254, var_filewrapperBinaryFileExtensionList_10325, var_filewrapperTemplateList_10413, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 257)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 249)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 250)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 251)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 252)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 253)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GGS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 273)) ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_pathExtension_11108 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 277)) ;
      outArgument_outFilewrapperTextFileExtensionList.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_pathExtension_11108, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 278)) ;
      if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 280)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 283)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 273)) ;
  switch (select_galgas_34_DeclarationsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 277)) ;
      if (select_galgas_34_DeclarationsSyntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 280)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 283)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GGS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 290)) ;
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_pathExtension_11557 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 294)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_pathExtension_11557, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 295)) ;
      if (select_galgas_34_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 297)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 300)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 290)) ;
  switch (select_galgas_34_DeclarationsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 294)) ;
      if (select_galgas_34_DeclarationsSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 297)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 300)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 307)) ;
  outArgument_outFilewrapperTemplateList = GGS_filewrapperTemplateListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 311)) ;
      GGS_lstring var_mFilewrapperTemplateName_12067 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 312)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 313)) ;
      GGS_lstring var_mFilewrapperTemplatePath_12126 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 314)) ;
      GGS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_12199 = GGS_formalTemplateInputParameterListAST::init (inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 316)) ;
      switch (select_galgas_34_DeclarationsSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          GGS_lstring var_selector_12316 ;
          switch (select_galgas_34_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
            var_selector_12316 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 322)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 324)) ;
            var_selector_12316 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 325)) ;
          } break ;
          case 3: {
            var_selector_12316 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 327)) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_typeName_12555 ;
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_12555, inCompiler) ;
          GGS_bool var_isUnused_12585 ;
          switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
            var_isUnused_12585 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 334)) ;
            var_isUnused_12585 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_argumentName_12745 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 337)) ;
          var_filewrapperTemplateFormalInputParameters_12199.plusPlusAssignOperation (GGS_formalTemplateInputParameterListAST_2E_element::init_21__21__21__21_ (var_selector_12316, var_typeName_12555, var_argumentName_12745, var_isUnused_12585, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 338)) ;
          if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 340)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 343)) ;
      outArgument_outFilewrapperTemplateList.plusPlusAssignOperation (GGS_filewrapperTemplateListAST_2E_element::init_21__21__21_ (var_mFilewrapperTemplateName_12067, var_mFilewrapperTemplatePath_12126, var_filewrapperTemplateFormalInputParameters_12199, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 344)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 350)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 307)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 311)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 312)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 313)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 314)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 316)) ;
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
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 324)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 327)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_indexing (inCompiler) ;
          switch (select_galgas_34_DeclarationsSyntax_9 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 334)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 337)) ;
          if (select_galgas_34_DeclarationsSyntax_7 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 340)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 343)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasDeclarationsSyntax.galgas4", 350)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 129)) ;
  GGS_lstring var_typeName_5220 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_5220, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 131)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_10 (inCompiler) == 2) {
      GGS_lstring var_t_5314 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_5314, inCompiler) ;
      var_typeName_5220 = function_makeEmbeddedTypeLName (var_typeName_5220, var_t_5314, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 135)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 136)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_5435 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 138)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_5550 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_5550, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 140)) ;
  GGS_lstring var_returnedTypeName_5631 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_5631, inCompiler) ;
  GGS_lstring var_resultVariableName_5666 ;
  switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
    var_resultVariableName_5666 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 144)) ;
  } break ;
  case 2: {
    var_resultVariableName_5666 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 146)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 148)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_5891 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_5891, inCompiler) ;
  GGS_location var_endOfInstructionList_5933 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 150)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 151)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_typeName_5220, var_getterName_5435, var_formalInputParameterList_5550, var_returnedTypeName_5631, var_resultVariableName_5666, var_routineInstructionList_5891, var_endOfInstructionList_5933, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 129)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 131)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_10 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 136)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 138)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 140)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 144)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 148)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i7_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                        GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 168)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 169)) ;
  GGS_lstring var_getterName_6540 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 170)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_6655 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_6655, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 172)) ;
  GGS_lstring var_returnedTypeName_6736 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_6736, inCompiler) ;
  GGS_lstring var_resultVariableName_6771 ;
  switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
    var_resultVariableName_6771 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 176)) ;
  } break ;
  case 2: {
    var_resultVariableName_6771 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 178)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 180)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_6996 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_6996, inCompiler) ;
  GGS_location var_endOfInstructionList_7038 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 182)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 183)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_getterName_6540, var_formalInputParameterList_6655, var_returnedTypeName_6736, var_resultVariableName_6771, var_routineInstructionList_6996, var_endOfInstructionList_7038, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 184)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 168)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 169)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 170)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 172)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 176)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 180)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-getter.galgas3", 183)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 86)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 87)) ;
  GGS_lstring var_typeName_3712 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3712, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 89)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_13 (inCompiler) == 2) {
      GGS_lstring var_t_3806 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3806, inCompiler) ;
      var_typeName_3712 = function_makeEmbeddedTypeLName (var_typeName_3712, var_t_3806, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 93)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 94)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_3927 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 96)) ;
  GGS_formalParameterListAST var_formalParameterList_4067 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4067, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_3712, var_methodName_3927, var_formalParameterList_4067, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 98)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 85)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 86)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 87)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 89)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_13 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 94)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 96)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i9_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                        GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 110)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 111)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 112)) ;
  GGS_lstring var_typeName_4544 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_14 (inCompiler) == 2) {
      GGS_lstring var_t_4642 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4642, inCompiler) ;
      var_typeName_4544 = function_makeEmbeddedTypeLName (var_typeName_4544, var_t_4642, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 117)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 118)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_4763 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 120)) ;
  GGS_formalParameterListAST var_formalParameterList_4904 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4904, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_4544, var_methodName_4763, var_formalParameterList_4904, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 122)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 110)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 111)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_14 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 118)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas3", 120)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas3", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas3", 105)) ;
  GGS_lstring var_typeName_4298 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4298, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 107)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_15 (inCompiler) == 2) {
      GGS_lstring var_t_4392 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4392, inCompiler) ;
      var_typeName_4298 = function_makeEmbeddedTypeLName (var_typeName_4298, var_t_4392, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas3", 111)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 112)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_setterName_4513 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 114)) ;
  GGS_formalParameterListAST var_formalParameterList_4638 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4638, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 116)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4751 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4751, inCompiler) ;
  GGS_location var_endOfSetterLocation_4793 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas3", 118)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 119)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionSetterAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_4298, var_setterName_4513, var_formalParameterList_4638, var_routineInstructionList_4751, var_endOfSetterLocation_4793, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas3", 120)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas3", 104)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas3", 105)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 107)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_15 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 112)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 114)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 116)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 119)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i11_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas3", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas3", 135)) ;
  GGS_lstring var_setterName_5342 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 136)) ;
  GGS_formalParameterListAST var_formalParameterList_5467 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_5467, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 138)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_5580 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_5580, inCompiler) ;
  GGS_location var_endOfSetterLocation_5622 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas3", 140)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 141)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionSetterAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_setterName_5342, var_formalParameterList_5467, var_routineInstructionList_5580, var_endOfSetterLocation_5622, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas3", 142)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("extension-setter.galgas3", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-setter.galgas3", 135)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-setter.galgas3", 136)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 138)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-setter.galgas3", 141)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas3", 79)) ;
  GGS_lstring var_typeName_3241 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3241, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 81)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_16 (inCompiler) == 2) {
      GGS_lstring var_t_3335 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3335, inCompiler) ;
      var_typeName_3241 = function_makeEmbeddedTypeLName (var_typeName_3241, var_t_3335, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas3", 85)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 86)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 88)) ;
  GGS_location var_initLocation_3443 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 89)) ;
  GGS_formalInputParameterListAST var_formalParameterList_3531 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3531, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 91)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_3616 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_3616, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 93)) ;
  GGS_location var_endOfMethodLocation_3656 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 94)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_initializerAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), GGS_lstring::init_21__21_ (var_typeName_3241.readProperty_string (), var_initLocation_3443, inCompiler COMMA_HERE), var_formalParameterList_3531, var_routineInstructionList_3616, var_endOfMethodLocation_3656, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-initializer.galgas3", 79)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 81)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_16 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 86)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 88)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 91)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 93)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i13_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 108)) ;
  GGS_location var_initLocation_4164 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 109)) ;
  GGS_formalInputParameterListAST var_formalParameterList_4252 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4252, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 111)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4337 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4337, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 113)) ;
  GGS_location var_endOfMethodLocation_4377 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 114)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_initializerAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), GGS_lstring::init_21__21_ (constinArgument_inTypeName.readProperty_string (), var_initLocation_4164, inCompiler COMMA_HERE), var_formalParameterList_4252, var_routineInstructionList_4337, var_endOfMethodLocation_4377, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas3", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("extension-initializer.galgas3", 108)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 111)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-initializer.galgas3", 113)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 86)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 87)) ;
  GGS_lstring var_typeName_3586 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3586, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 89)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_17 (inCompiler) == 2) {
      GGS_lstring var_t_3680 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3680, inCompiler) ;
      var_typeName_3586 = function_makeEmbeddedTypeLName (var_typeName_3586, var_t_3680, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 93)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 94)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mGetterName_3792 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 96)) ;
  GGS_formalInputParameterListAST var_mFormalInputParameterList_3937 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalInputParameterList_3937, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 98)) ;
  GGS_lstring var_returnedTypeName_4019 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_4019, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_3586, var_mGetterName_3792, var_mFormalInputParameterList_3937, var_returnedTypeName_4019, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 100)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 86)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 87)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 89)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_17 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 94)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 96)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 98)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i15_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 114)) ;
  GGS_lstring var_mGetterName_4514 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 115)) ;
  GGS_formalInputParameterListAST var_mFormalInputParameterList_4659 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalInputParameterList_4659, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 117)) ;
  GGS_lstring var_returnedTypeName_4741 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_4741, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_mGetterName_4514, var_mFormalInputParameterList_4659, var_returnedTypeName_4741, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 119)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 114)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 115)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-abstract-getter.galgas3", 117)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas3", 105)) ;
  GGS_lstring var_typeName_4279 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4279, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 107)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_18 (inCompiler) == 2) {
      GGS_lstring var_t_4373 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4373, inCompiler) ;
      var_typeName_4279 = function_makeEmbeddedTypeLName (var_typeName_4279, var_t_4373, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas3", 111)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 112)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_4494 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 114)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_4601 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_4601, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 116)) ;
  GGS_lstring var_returnedTypeName_4682 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_4682, inCompiler) ;
  GGS_lstring var_resultVariableName_4717 ;
  switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
    var_resultVariableName_4717 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 120)) ;
  } break ;
  case 2: {
    var_resultVariableName_4717 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 122)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 124)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4942 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4942, inCompiler) ;
  GGS_location var_endOfInstructionList_4984 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 126)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 127)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_typeName_4279, var_getterName_4494, var_formalInputParameterList_4601, var_returnedTypeName_4682, var_resultVariableName_4717, var_routineInstructionList_4942, var_endOfInstructionList_4984, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas3", 128)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas3", 105)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 107)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_18 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 112)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 114)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 116)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_19 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 120)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 124)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 127)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i17_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas3", 144)) ;
  GGS_lstring var_typeName_5551 = constinArgument_inTypeName ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
      GGS_lstring var_t_5649 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_5649, inCompiler) ;
      var_typeName_5551 = function_makeEmbeddedTypeLName (var_typeName_5551, var_t_5649, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas3", 149)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 150)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_5770 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 152)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_5877 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_5877, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 154)) ;
  GGS_lstring var_returnedTypeName_5958 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_5958, inCompiler) ;
  GGS_lstring var_resultVariableName_5993 = GGS_lstring::init_21__21_ (GGS_string ("result"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 156)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 157)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_6126 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_6126, inCompiler) ;
  GGS_location var_endOfInstructionList_6168 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas3", 159)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 160)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionGetterAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_typeName_5551, var_getterName_5770, var_formalInputParameterList_5877, var_returnedTypeName_5958, var_resultVariableName_5993, var_routineInstructionList_6126, var_endOfInstructionList_6168, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas3", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-getter.galgas3", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_20 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 150)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-getter.galgas3", 152)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 154)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 157)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-getter.galgas3", 160)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 93)) ;
  GGS_lstring var_typeName_3777 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3777, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_21 (inCompiler) == 2) {
      GGS_lstring var_t_3871 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3871, inCompiler) ;
      var_typeName_3777 = function_makeEmbeddedTypeLName (var_typeName_3777, var_t_3871, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 99)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 100)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_3992 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 102)) ;
  GGS_formalParameterListAST var_formalParameterList_4125 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4125, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 104)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4238 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4238, inCompiler) ;
  GGS_location var_endOfMethodLocation_4280 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 106)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 107)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_3777, var_methodName_3992, var_formalParameterList_4125, var_routineInstructionList_4238, var_endOfMethodLocation_4280, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 108)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 92)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 93)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_21 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 100)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 102)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 104)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 107)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i19_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 123)) ;
  GGS_lstring var_methodName_4839 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 124)) ;
  GGS_formalParameterListAST var_formalParameterList_4972 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4972, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 126)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_5085 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_5085, inCompiler) ;
  GGS_location var_endOfMethodLocation_5127 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 129)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingExtensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_methodName_4839, var_formalParameterList_4972, var_routineInstructionList_5085, var_endOfMethodLocation_5127, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 130)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 123)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 124)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 126)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-overriding-method.galgas3", 129)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 103)) ;
  GGS_lstring var_typeName_4276 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4276, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 105)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_22 (inCompiler) == 2) {
      GGS_lstring var_t_4370 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_4370, inCompiler) ;
      var_typeName_4276 = function_makeEmbeddedTypeLName (var_typeName_4276, var_t_4370, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 109)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 110)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_getterName_4482 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 112)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_4634 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_4634, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 114)) ;
  GGS_lstring var_returnedTypeName_4715 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_4715, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_typeName_4276, var_getterName_4482, var_formalInputParameterList_4634, var_returnedTypeName_4715, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 116)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 102)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 103)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 105)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_22 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 110)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 112)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 114)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i21_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 129)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 130)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 131)) ;
  GGS_lstring var_getterName_5233 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 132)) ;
  GGS_formalInputParameterListAST var_formalInputParameterList_5385 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_5385, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 134)) ;
  GGS_lstring var_returnedTypeName_5466 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_returnedTypeName_5466, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_overridingAbstractExtensionGetterAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_getterName_5233, var_formalInputParameterList_5385, var_returnedTypeName_5466, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 136)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_override COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 129)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 130)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 131)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 132)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas3", 134)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i22_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 54)) ;
  GGS_lstring var_typeName_2313 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_2313, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 56)) ;
  GGS_equatableComparableExtension var_theExtension_2369 ;
  switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 59)) ;
    var_theExtension_2369 = GGS_equatableComparableExtension::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas3", 60)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 62)) ;
    var_theExtension_2369 = GGS_equatableComparableExtension::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas3", 63)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_equatableExtensionAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_typeName_2313, var_theExtension_2369, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 54)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 56)) ;
  switch (select_galgas_34_DeclarationsSyntax_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 59)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas3", 62)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i23_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 80)) ;
  GGS_lstring var_typeName_3320 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3320, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 82)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_24 (inCompiler) == 2) {
      GGS_lstring var_t_3414 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3414, inCompiler) ;
      var_typeName_3320 = function_makeEmbeddedTypeLName (var_typeName_3320, var_t_3414, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 86)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 87)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mMethodName_3535 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 89)) ;
  GGS_formalParameterListAST var_formalParameterList_3669 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3669, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_typeName_3320, var_mMethodName_3535, var_formalParameterList_3669, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 91)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 79)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 80)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 82)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_24 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 87)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 89)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i24_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 104)) ;
  GGS_lstring var_methodName_4146 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 105)) ;
  GGS_formalParameterListAST var_formalParameterList_4279 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4279, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_abstractExtensionMethodAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_methodName_4146, var_formalParameterList_4279, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 107)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 103)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 104)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-abstract-method.galgas3", 105)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i25_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas3", 88)) ;
  GGS_lstring var_typeName_3590 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3590, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_25 (inCompiler) == 2) {
      GGS_lstring var_t_3684 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3684, inCompiler) ;
      var_typeName_3590 = function_makeEmbeddedTypeLName (var_typeName_3590, var_t_3684, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas3", 94)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 95)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_methodName_3805 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 97)) ;
  GGS_formalParameterListAST var_formalParameterList_3930 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3930, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 99)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4043 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4043, inCompiler) ;
  GGS_location var_endOfMethodLocation_4075 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 102)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), var_typeName_3590, var_methodName_3805, var_formalParameterList_3930, var_routineInstructionList_4043, var_endOfMethodLocation_4075, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas3", 103)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas3", 88)) ;
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 90)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_25 (inCompiler) == 2) {
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("extension-method.galgas3", 95)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 97)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 99)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i26_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                         GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas3", 117)) ;
  GGS_lstring var_methodName_4609 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 118)) ;
  GGS_formalParameterListAST var_formalParameterList_4734 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_4734, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 120)) ;
  GGS_semanticInstructionListAST var_routineInstructionList_4847 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_4847, inCompiler) ;
  GGS_location var_endOfMethodLocation_4879 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas3", 122)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 123)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_extensionMethodAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), constinArgument_inTypeName, var_methodName_4609, var_formalParameterList_4734, var_routineInstructionList_4847, var_endOfMethodLocation_4879, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas3", 124)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_method_5F_declaration_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extension-method.galgas3", 117)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extension-method.galgas3", 118)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("extension-method.galgas3", 120)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("extension-method.galgas3", 123)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_acces_5F_control_i27_ (GGS_AccessControlAST & outArgument_outAccessControl,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outAccessControl.drop () ; // Release 'out' argument
  switch (select_galgas_34_DeclarationsSyntax_26 (inCompiler)) {
  case 1: {
    outArgument_outAccessControl = GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas4", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas4", 89)) ;
    outArgument_outAccessControl = GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas4", 90)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas4", 92)) ;
    switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_protectedAccess (SOURCE_FILE ("accessControl.galgas4", 94)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 96)) ;
      GGS_lstring var_value_3356 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 97)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::notEqual, var_value_3356.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_value_3356.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas4", 99)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 101)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_protectedSetAccess (SOURCE_FILE ("accessControl.galgas4", 102)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas4", 105)) ;
    switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_privateAccess (SOURCE_FILE ("accessControl.galgas4", 107)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 109)) ;
      GGS_lstring var_value_3672 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 110)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_value_3672.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_value_3672.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.galgas4", 112)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 114)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_privateSetAccess (SOURCE_FILE ("accessControl.galgas4", 115)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas4", 118)) ;
    switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
    case 1: {
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_fileprivateSetAccess (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas4", 120))  COMMA_SOURCE_FILE ("accessControl.galgas4", 120)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 122)) ;
      GGS_lstring var_value_4027 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 123)) ;
      outArgument_outAccessControl = GGS_AccessControlAST::class_func_fileprivateSetAccess (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("accessControl.galgas4", 124))  COMMA_SOURCE_FILE ("accessControl.galgas4", 124)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::notEqual, var_value_4027.readProperty_string ().objectCompare (GGS_string ("set"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_value_4027.readProperty_location (), GGS_string ("only 'set' is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas4", 126)) ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 128)) ;
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

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_acces_5F_control_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_public COMMA_SOURCE_FILE ("accessControl.galgas4", 89)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_protected COMMA_SOURCE_FILE ("accessControl.galgas4", 92)) ;
    switch (select_galgas_34_DeclarationsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 96)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 97)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 101)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("accessControl.galgas4", 105)) ;
    switch (select_galgas_34_DeclarationsSyntax_28 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 109)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 110)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 114)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fileprivate COMMA_SOURCE_FILE ("accessControl.galgas4", 118)) ;
    switch (select_galgas_34_DeclarationsSyntax_29 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("accessControl.galgas4", 122)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("accessControl.galgas4", 123)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("accessControl.galgas4", 128)) ;
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

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 67)) ;
  GGS_lstring var_structTypeName_2635 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 68)) ;
  GGS_structComparison var_comparison_2705 ;
  switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
  case 1: {
    var_comparison_2705 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-struct.galgas3", 71)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 73)) ;
    var_comparison_2705 = GGS_structComparison::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas3", 74)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 76)) ;
    var_comparison_2705 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas3", 77)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 79)) ;
  GGS_propertyInCollectionListAST var_propertyList_2919 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_2919, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_structTypeName_2635, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 87)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (false), var_structTypeName_2635, var_propertyList_2919, GGS_string::makeEmptyString (), var_comparison_2705, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_struct COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 67)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 68)) ;
  switch (select_galgas_34_DeclarationsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 73)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 76)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 79)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_31 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 87)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 88)) ;
  GGS_lstring var_listTypeName_3476 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 89)) ;
  GGS_bool var_isUsefull_3553 = GGS_bool (false) ;
  GGS_bool var_isEquatable_3579 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 94)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isEquatable_3579.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 96)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 96)) ;
        }
      }
      var_isEquatable_3579 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 100)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_isUsefull_3553.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 102)), GGS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 102)) ;
        }
      }
      var_isUsefull_3553 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 106)) ;
  GGS_propertyInCollectionListAST var_propertyList_3955 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_3955, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_listTypeName_3476, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 114)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList_21_equatable (GGS_bool (false), var_listTypeName_3476, var_propertyList_3955, var_isUsefull_3553, var_isEquatable_3579, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 88)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 89)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 94)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_usefull COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 100)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 106)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_33 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 114)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i30_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  GGS_AccessControlAST var_accessControl_5178 ;
  nt_acces_5F_control_ (var_accessControl_5178, inCompiler) ;
  GGS_propertyMutability var_mutability_5221 ;
  switch (select_galgas_34_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 138)) ;
    var_mutability_5221 = GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-property.galgas3", 139)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 141)) ;
    extensionMethod_checkCompatibilityWithLet (var_accessControl_5178, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas3", 142)), inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas3", 142)) ;
    var_mutability_5221 = GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-property.galgas3", 143)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_5456 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_propertyTypeName_5456, inCompiler) ;
  GGS_lstring var_propertyName_5497 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 146)) ;
  GGS_bool var_selectorAttribute_5519 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_35 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 150)) ;
      var_selectorAttribute_5519 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_propertyInCollectionInitializationAST var_initialization_5674 ;
  switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
    var_initialization_5674 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas3", 155)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 157)) ;
    GGS_semanticExpressionAST var_expression_5789 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_5789, inCompiler) ;
    var_initialization_5674 = GGS_propertyInCollectionInitializationAST::class_func_some (var_expression_5789  COMMA_SOURCE_FILE ("declaration-property.galgas3", 159)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioAttributeInCollectionList.addAssignOperation (var_mutability_5221, var_propertyTypeName_5456, var_propertyName_5497, var_accessControl_5178, var_selectorAttribute_5519, var_initialization_5674  COMMA_SOURCE_FILE ("declaration-property.galgas3", 161)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_34 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 138)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 141)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 146)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_35 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 150)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 157)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  GGS_AccessControlAST var_accessControl_6367 ;
  nt_acces_5F_control_ (var_accessControl_6367, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_weak COMMA_SOURCE_FILE ("declaration-property.galgas3", 175)) ;
  switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 177)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 179)) ;
    GenericArray <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-property.galgas3", 180)), GGS_string ("a weak property is mutable, should be declared with 'var'"), fixItArray0  COMMA_SOURCE_FILE ("declaration-property.galgas3", 180)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_6571 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_propertyTypeName_6571, inCompiler) ;
  GGS_lstring var_propertyName_6612 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 183)) ;
  GGS_bool var_selectorAttribute_6634 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_DeclarationsSyntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 187)) ;
      var_selectorAttribute_6634 = GGS_bool (true) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_propertyInCollectionInitializationAST var_initialization_6789 ;
  switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
    var_initialization_6789 = GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-property.galgas3", 192)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 194)) ;
    GGS_semanticExpressionAST var_expression_6904 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_6904, inCompiler) ;
    var_initialization_6789 = GGS_propertyInCollectionInitializationAST::class_func_some (var_expression_6904  COMMA_SOURCE_FILE ("declaration-property.galgas3", 196)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyWeakTypeName_6987 = function_makeWeakTypeLName (var_propertyTypeName_6571, inCompiler COMMA_SOURCE_FILE ("declaration-property.galgas3", 198)) ;
  ioArgument_ioAttributeInCollectionList.addAssignOperation (GGS_propertyMutability::class_func_weakProperty (SOURCE_FILE ("declaration-property.galgas3", 204)), var_propertyWeakTypeName_6987, var_propertyName_6612, var_accessControl_6367, var_selectorAttribute_6634, var_initialization_6789  COMMA_SOURCE_FILE ("declaration-property.galgas3", 203)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_property_5F_declaration_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_acces_5F_control_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_weak COMMA_SOURCE_FILE ("declaration-property.galgas3", 175)) ;
  switch (select_galgas_34_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("declaration-property.galgas3", 177)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declaration-property.galgas3", 179)) ;
  } break ;
  default:
    break ;
  }
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-property.galgas3", 183)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_38 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_initArgLabel COMMA_SOURCE_FILE ("declaration-property.galgas3", 187)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declaration-property.galgas3", 194)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 105)) ;
  GGS_lstring var_enumTypeName_3817 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 106)) ;
  GGS_structComparison var_comparison_3883 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-enum.galgas3", 107)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 110)) ;
      switch (var_comparison_3883.enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        {
          var_comparison_3883 = GGS_structComparison::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas3", 113)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 115)), GGS_string ("duplicated attribute"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 115)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 117)), GGS_string ("%comparable and %equatable are mutually exclusive"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 117)) ;
        }
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 120)) ;
      switch (var_comparison_3883.enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        {
          var_comparison_3883 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas3", 123)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 125)), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 125)) ;
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 127)), GGS_string ("%comparable and %equatable are mutually exclusive"), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 127)) ;
        }
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 130)) ;
  GGS_enumConstantList var_constantList_4523 = GGS_enumConstantList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 134)) ;
      GGS_lstring var_constantName_4601 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 135)) ;
      GGS__5B_associatedValue_5D_ var_associatedValueTypeList_4644 = GGS__5B_associatedValue_5D_::init (inCompiler COMMA_HERE) ;
      switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 139)) ;
        bool repeatFlag_6 = true ;
        while (repeatFlag_6) {
          GGS_bool var_weakQualifier_4743 ;
          switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
          case 1: {
            var_weakQualifier_4743 = GGS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_weak COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 145)) ;
            var_weakQualifier_4743 = GGS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_associatedValueType_4939 ;
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_associatedValueType_4939, inCompiler) ;
          GGS_lstring var_associatedValueName_4989 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 149)) ;
          {
          var_associatedValueTypeList_4644.setter_append (GGS_associatedValue::init_21__21__21_ (var_weakQualifier_4743, var_associatedValueType_4939, var_associatedValueName_4989, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 150)) ;
          }
          if (select_galgas_34_DeclarationsSyntax_43 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 152)) ;
          }else{
            repeatFlag_6 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 154)) ;
      } break ;
      default:
        break ;
      }
      var_constantList_4523.addAssignOperation (var_constantName_4601, var_associatedValueTypeList_4644  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 156)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_enumTypeName_3817, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 160)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, var_constantList_4523.getter_count (SOURCE_FILE ("declaration-type-enum.galgas3", 161)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (var_enumTypeName_3817.readProperty_location (), GGS_string ("an enumerated type must define at least one case constant"), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 162)) ;
    }
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_enumDeclarationAST::init_21_isPredefined_21__21__21_comparison (GGS_bool (false), var_enumTypeName_3817, var_constantList_4523, var_comparison_3883, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 164)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_enum COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 105)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 106)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_40 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_comparable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 110)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 120)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 130)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 135)) ;
      switch (select_galgas_34_DeclarationsSyntax_42 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 139)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          switch (select_galgas_34_DeclarationsSyntax_44 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_weak COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 145)) ;
          } break ;
          default:
            break ;
          }
          nt_type_5F_definition_indexing (inCompiler) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 149)) ;
          if (select_galgas_34_DeclarationsSyntax_43 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 152)) ;
          }else{
            repeatFlag_2 = false ;
          }
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 154)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 160)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 63)) ;
  GGS_lstring var_graphTypeName_2634 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 65)) ;
  GGS_lstring var_associatedListTypeName_2730 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_associatedListTypeName_2730, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 68)) ;
  GGS_graphInsertModifierList var_graphInsertModifierList_2778 = GGS_graphInsertModifierList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 72)) ;
      GGS_lstring var_insertName_2909 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 74)) ;
      GGS_lstring var_errorMessage_2975 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 75)) ;
      var_graphInsertModifierList_2778.addAssignOperation (var_insertName_2909, var_errorMessage_2975  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 76)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 78)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_graphDeclarationAST::init_21_isPredefined_21__21__21_ (GGS_bool (false), var_graphTypeName_2634, var_associatedListTypeName_2730, var_graphInsertModifierList_2778, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 79)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_graph COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 63)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 65)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_45 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 72)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 74)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-graph.galgas3", 78)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      GGS_lstring & outArgument_outTypeName,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 193)) ;
      GGS_lstring var_typeName_7918 ;
      nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_7918, inCompiler) ;
      outArgument_outTypeName = function_makeEmbeddedTypeLName (outArgument_outTypeName, var_typeName_7918, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 195)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 197)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_t_8092 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_t_8092, inCompiler) ;
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_t_8092.readProperty_location (), GGS_string ("not handled yet"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 200)) ;
        if (select_galgas_34_DeclarationsSyntax_47 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 202)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 204)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 209)) ;
    GGS_lstring var_unwrappedTypeName_8242 = outArgument_outTypeName ;
    {
    extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, outArgument_outTypeName, var_unwrappedTypeName_8242, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 211)) ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_type_5F_definition_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 193)) ;
      nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 197)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_type_5F_definition_indexing (inCompiler) ;
        if (select_galgas_34_DeclarationsSyntax_47 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 202)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 204)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 209)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i35_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 219)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 219)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i36_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 226)) ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_49 (inCompiler)) {
  case 1: {
    GGS_lstring var_elementTypeName_8990 = outArgument_outTypeName ;
    outArgument_outTypeName = function_makeArrayTypeLName (var_elementTypeName_8990, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 230)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = ioArgument_ioDeclarations.readProperty_implicitTypeDeclarationSet ().getter_hasKey (outArgument_outTypeName.readProperty_string () COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 231)).operator_not (SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 231)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioDeclarations.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (outArgument_outTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 232)) ;
        ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_arrayTypeDeclarationAST::init_21_isPredefined_21__21__21_isUsefull_21_equatable (GGS_bool (false), outArgument_outTypeName, var_elementTypeName_8990, GGS_bool (true), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 233)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 242)) ;
    GGS_lstring joker_9529 ; // Joker input parameter
    nt_type_5F_definition_ (ioArgument_ioDeclarations, joker_9529, inCompiler) ;
    joker_9529.drop () ; // Release temporary input variables (joker in source)
    GenericArray <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 244)), GGS_string ("Not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 244)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 246)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 226)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_DeclarationsSyntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 242)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 246)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_lstring & outArgument_outTypeName,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 253)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, outArgument_outTypeName, inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_50 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 257)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 259)), GGS_string ("Not handled yet"), fixItArray1  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 259)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 260)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_simple_5F_type_5F_definition_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 253)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_type_5F_definition_indexing (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_50 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 257)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas3", 260)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 160)) ;
  GGS_lstring var_mapTypeName_6051 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 161)) ;
  GGS_bool var_isEquatable_6132 ;
  switch (select_galgas_34_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
    var_isEquatable_6132 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 166)) ;
    var_isEquatable_6132 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 169)) ;
  GGS_propertyInCollectionListAST var_propertyList_6256 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  GGS_insertSetterListAST var_mInsertSetterList_6311 = GGS_insertSetterListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_mSearchMethodList_6383 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_mRemoveSetterList_6435 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_replaceMethodList_6487 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  GGS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_6554 = GGS_insertOrReplaceDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_mapAccessorListAST var_searchSubscriptListAST_6622 = GGS_mapAccessorListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_52 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_6256, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertSetterList_6311, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_method_5F_declaration_ (var_mSearchMethodList_6383, inCompiler) ;
    } break ;
    case 5: {
      nt_search_5F_subscript_5F_declaration_ (var_searchSubscriptListAST_6622, inCompiler) ;
    } break ;
    case 6: {
      nt_remove_5F_setter_5F_declaration_ (var_mRemoveSetterList_6435, inCompiler) ;
    } break ;
    case 7: {
      nt_replace_5F_setter_5F_declaration_ (var_replaceMethodList_6487, inCompiler) ;
    } break ;
    case 8: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_6554, inCompiler) ;
    } break ;
    case 9: {
      nt_method_5F_declaration_ (var_mapTypeName_6051, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 195)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_mapDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (GGS_bool (false), var_mapTypeName_6051, var_propertyList_6256, var_mInsertSetterList_6311, var_mSearchMethodList_6383, var_searchSubscriptListAST_6622, var_mRemoveSetterList_6435, var_replaceMethodList_6487, var_insertOrReplaceDeclarationListAST_6554, var_isEquatable_6132, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 196)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i38_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_map COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 160)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 161)) ;
  switch (select_galgas_34_DeclarationsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 166)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 169)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_52 (inCompiler)) {
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
      nt_search_5F_subscript_5F_declaration_indexing (inCompiler) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 195)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i39_ (GGS_mapAccessorListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchMethod COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 213)) ;
  GGS_lstring var_methodName_7834 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 214)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 215)) ;
  GGS_lstring var_errorMessage_7896 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 216)) ;
  ioArgument_ioMapSearchMethodListAST.addAssignOperation (var_methodName_7834, var_errorMessage_7896  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 217)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_method_5F_declaration_i39_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchMethod COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 213)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 214)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 215)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 216)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_subscript_5F_declaration_i40_ (GGS_mapAccessorListAST & ioArgument_ioMapSearchSubscriptListAST,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 223)) ;
  GGS_lstring var_methodName_8245 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 224)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 225)) ;
  GGS_lstring var_errorMessage_8307 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 226)) ;
  ioArgument_ioMapSearchSubscriptListAST.addAssignOperation (var_methodName_8245, var_errorMessage_8307  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 227)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_search_5F_subscript_5F_declaration_i40_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchSubscript COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 223)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 224)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 225)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 226)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i41_ (GGS_mapAccessorListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_removeSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 233)) ;
  GGS_lstring var_mMethodName_8650 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 235)) ;
  GGS_lstring var_mErrorMessage_8713 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 236)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssignOperation (var_mMethodName_8650, var_mErrorMessage_8713  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 237)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_remove_5F_setter_5F_declaration_i41_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_removeSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 233)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 234)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 235)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 236)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i42_ (GGS_mapAccessorListAST & ioArgument_ioMapReplaceMethodListAST,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_replaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 243)) ;
  GGS_lstring var_mMethodName_9037 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 244)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 245)) ;
  GGS_lstring var_mErrorMessage_9100 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 246)) ;
  ioArgument_ioMapReplaceMethodListAST.addAssignOperation (var_mMethodName_9037, var_mErrorMessage_9100  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 247)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_replace_5F_setter_5F_declaration_i42_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_replaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 243)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 244)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 245)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 246)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i43_ (GGS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertOrReplaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 253)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssignOperation (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 254))  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 254)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i43_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertOrReplaceSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 253)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i44_ (GGS_insertSetterListAST & ioArgument_ioMapMethodList,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 260)) ;
  GGS_lstring var_mMethodName_9730 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 261)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 262)) ;
  GGS_lstring var_mErrorMessage_9793 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 263)) ;
  GGS_lstring var_mShadowErrorMessage_9825 ;
  switch (select_galgas_34_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_9825 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 266)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 268)) ;
    var_mShadowErrorMessage_9825 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 269)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssignOperation (var_mMethodName_9730, var_mErrorMessage_9793, var_mShadowErrorMessage_9825  COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 271)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i44_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_insertSetter COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 260)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 261)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 262)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 263)) ;
  switch (select_galgas_34_DeclarationsSyntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 268)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-map.galgas3", 269)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i45_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_boolset COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 69)) ;
  GGS_lstring var_boolsetTypeName_2725 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 70)) ;
  GGS_bool var_isEquatable_2784 ;
  switch (select_galgas_34_DeclarationsSyntax_54 (inCompiler)) {
  case 1: {
    var_isEquatable_2784 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 75)) ;
    var_isEquatable_2784 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 78)) ;
  GGS_lstringlist var_slotList_2921 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_55 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 82)) ;
      GGS_lstring var_slotName_2995 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 83)) ;
      var_slotList_2921.addAssignOperation (var_slotName_2995  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 84)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_boolsetTypeName_2725, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 88)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_slotList_2921.getter_count (SOURCE_FILE ("declaration-type-boolset.galgas3", 89)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_boolsetTypeName_2725.readProperty_location (), GGS_string ("a boolset type must define at least one case constant"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 90)) ;
    }
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_boolsetDeclarationAST::init_21_isPredefined_21__21__21_isEquatable (GGS_bool (false), var_boolsetTypeName_2725, var_slotList_2921, var_isEquatable_2784, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 92)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i45_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_boolset COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 69)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 70)) ;
  switch (select_galgas_34_DeclarationsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 75)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 78)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_55 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 82)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 83)) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-boolset.galgas3", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i46_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  GGS_bool var_isAbstract_3678 ;
  GGS_bool var_clonable_3703 ;
  GGS_bool var_finalClass_3726 ;
  switch (select_galgas_34_DeclarationsSyntax_56 (inCompiler)) {
  case 1: {
    var_isAbstract_3678 = GGS_bool (false) ;
    var_clonable_3703 = GGS_bool (false) ;
    var_finalClass_3726 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 117)) ;
    var_isAbstract_3678 = GGS_bool (true) ;
    var_clonable_3703 = GGS_bool (false) ;
    var_finalClass_3726 = GGS_bool (false) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_final COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 122)) ;
    var_isAbstract_3678 = GGS_bool (false) ;
    var_clonable_3703 = GGS_bool (false) ;
    var_finalClass_3726 = GGS_bool (true) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 127)) ;
    var_isAbstract_3678 = GGS_bool (false) ;
    var_clonable_3703 = GGS_bool (true) ;
    var_finalClass_3726 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 132)) ;
  GGS_lstring var_className_4154 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 133)) ;
  GGS_lstring var_superClassName_4209 ;
  switch (select_galgas_34_DeclarationsSyntax_57 (inCompiler)) {
  case 1: {
    var_superClassName_4209 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas3", 136)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 138)) ;
    var_superClassName_4209 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 139)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_generateInSeparateFile_4407 ;
  switch (select_galgas_34_DeclarationsSyntax_58 (inCompiler)) {
  case 1: {
    var_generateInSeparateFile_4407 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 145)) ;
    var_generateInSeparateFile_4407 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 148)) ;
  GGS_propertyInCollectionListAST var_propertyList_4632 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_59 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_4632, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_className_4154, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 157)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_classDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_isAbstract_3678, var_finalClass_3726, var_className_4154, var_superClassName_4209, var_generateInSeparateFile_4407, var_propertyList_4632, var_clonable_3703, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 158)) ;
  GGS_lstring temp_1 ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_superClassName_4209.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = var_superClassName_4209 ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = function_makeWeakTypeLName (var_superClassName_4209, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 175)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_weakReferenceDeclarationAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_className_4154, function_makeWeakTypeLName (var_className_4154, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 172)), temp_1, var_generateInSeparateFile_4407, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 169)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i46_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_DeclarationsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_abstract COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 117)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_final COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 122)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_clonable COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 127)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_class COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 132)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 133)) ;
  switch (select_galgas_34_DeclarationsSyntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 138)) ;
    inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 139)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_DeclarationsSyntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_generatedInSeparateFile COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 145)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 148)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_59 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-class.galgas3", 157)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i47_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_dict COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 86)) ;
  GGS_lstring var_mDictTypeName_3419 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 88)) ;
  GGS_bool var_equatable_3502 ;
  switch (select_galgas_34_DeclarationsSyntax_60 (inCompiler)) {
  case 1: {
    var_equatable_3502 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 93)) ;
    var_equatable_3502 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 96)) ;
  GGS_lstring var_keyTypeName_3658 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_keyTypeName_3658, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 99)) ;
  GGS_propertyInCollectionListAST var_propertyList_3710 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_61 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_propertyList_3710, inCompiler) ;
    } break ;
    case 3: {
      nt_method_5F_declaration_ (var_mDictTypeName_3419, ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 107)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_dictDeclarationAST::init_21_isPredefined_21__21__21__21_equatable (GGS_bool (false), var_mDictTypeName_3419, var_keyTypeName_3658, var_propertyList_3710, var_equatable_3502, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 108)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i47_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_dict COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 86)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 88)) ;
  switch (select_galgas_34_DeclarationsSyntax_60 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 93)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 96)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_61 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-dict.galgas3", 107)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i48_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_sortedlist COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 86)) ;
  GGS_lstring var_sortedListTypeName_3232 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 87)) ;
  GGS_bool var_isEquatable_3327 ;
  switch (select_galgas_34_DeclarationsSyntax_62 (inCompiler)) {
  case 1: {
    var_isEquatable_3327 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 92)) ;
    var_isEquatable_3327 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 95)) ;
  GGS_propertyInCollectionListAST var_attributeList_3480 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_63 (inCompiler) == 2) {
      nt_property_5F_declaration_ (ioArgument_ioDeclarations, var_attributeList_3480, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 102)) ;
  GGS_sortedListSortDescriptorListAST var_sortDescriptorList_3652 = GGS_sortedListSortDescriptorListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_3652, inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 107)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 109)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_sortedListDeclarationAST::init_21_isPredefined_21__21__21__21_equatable (GGS_bool (false), var_sortedListTypeName_3232, var_attributeList_3480, var_sortDescriptorList_3652, var_isEquatable_3327, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 110)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i48_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_sortedlist COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 86)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_structDefinition, ".element") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 87)) ;
  switch (select_galgas_34_DeclarationsSyntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_equatable COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 92)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_63 (inCompiler) == 2) {
      nt_property_5F_declaration_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 101)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 102)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    if (select_galgas_34_DeclarationsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 107)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 109)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i49_ (GGS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mSortedAttributeName_4234 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 122)) ;
  GGS_bool var_mAscending_4270 ;
  switch (select_galgas_34_DeclarationsSyntax_65 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 125)) ;
    var_mAscending_4270 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 128)) ;
    var_mAscending_4270 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssignOperation (var_mSortedAttributeName_4234, var_mAscending_4270  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i49_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 122)) ;
  switch (select_galgas_34_DeclarationsSyntax_65 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 125)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas3", 128)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i50_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 166)) ;
  GGS_lstring var_externTypeName_6754 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 167)) ;
  GGS_string var_cppPredeclarationCode_6844 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_6844, inCompiler) ;
  GGS_string var_cppClassCode_6911 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_6911, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 170)) ;
  GGS_externTypeConstructorList var_externTypeConstructorList_6968 = GGS_externTypeConstructorList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeGetterList var_externTypeGetterList_7030 = GGS_externTypeGetterList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeSetterList var_externTypeSetterList_7087 = GGS_externTypeSetterList::init (inCompiler COMMA_HERE) ;
  GGS_externTypeMethodList var_externTypeMethodList_7144 = GGS_externTypeMethodList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_66 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_ (ioArgument_ioDeclarations, var_externTypeConstructorList_6968, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_ (ioArgument_ioDeclarations, var_externTypeGetterList_7030, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_ (ioArgument_ioDeclarations, var_externTypeSetterList_7087, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_ (ioArgument_ioDeclarations, var_externTypeMethodList_7144, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 185)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_externTypeDeclarationAST::init_21_isPredefined_21__21__21__21__21__21__21_ (GGS_bool (false), var_externTypeName_6754, var_cppPredeclarationCode_6844, var_cppClassCode_6911, var_externTypeConstructorList_6968, var_externTypeGetterList_7030, var_externTypeSetterList_7087, var_externTypeMethodList_7144, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 186)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_declaration_i50_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 166)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 167)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 170)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_66 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 185)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i51_ (GGS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 201)) ;
  outArgument_outCppPredeclarationCode = GGS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_67 (inCompiler) == 2) {
      GGS_lstring var_cppPredeclarationCodeElement_8094 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 205)) ;
      outArgument_outCppPredeclarationCode.plusAssignOperation(var_cppPredeclarationCodeElement_8094.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 206)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 208)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i51_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 201)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_67 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 205)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 208)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i52_ (GGS_string & outArgument_outCppClassCode,
                                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 214)) ;
  outArgument_outCppClassCode = GGS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_68 (inCompiler) == 2) {
      GGS_lstring var_cppPredeclarationCodeElement_8474 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 218)) ;
      outArgument_outCppClassCode.plusAssignOperation(var_cppPredeclarationCodeElement_8474.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 219)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 221)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i52_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 214)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_DeclarationsSyntax_68 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 218)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 221)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i53_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GGS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 228)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 229)) ;
  GGS_typeNameFormalParameterNameList var_argumentTypeList_8914 = GGS_typeNameFormalParameterNameList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_DeclarationsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_DeclarationsSyntax_71 (inCompiler)) {
      case 1: {
        GGS_lstring var_selector_9012 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 235)) ;
        GGS_lstring var_argumentTypeName_9074 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_9074, inCompiler) ;
        GGS_lstring var_argumentName_9121 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 237)) ;
        var_argumentTypeList_8914.addAssignOperation (var_selector_9012, var_argumentTypeName_9074, var_argumentName_9121  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 238)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 240)) ;
        GGS_lstring var_selector_9246 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 241)) ;
        GGS_lstring var_argumentTypeName_9317 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_9317, inCompiler) ;
        GGS_lstring var_argumentName_9364 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 243)) ;
        var_argumentTypeList_8914.addAssignOperation (var_selector_9246, var_argumentTypeName_9317, var_argumentName_9364  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 244)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_DeclarationsSyntax_70 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 247)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 250)) ;
  ioArgument_ioExternTypeConstructorList.addAssignOperation (var_argumentTypeList_8914  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 251)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_constructor_i53_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 228)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 229)) ;
  switch (select_galgas_34_DeclarationsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_DeclarationsSyntax_71 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 235)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 237)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 240)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 243)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_DeclarationsSyntax_70 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 247)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 250)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i54_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GGS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 258)) ;
  GGS_lstring var_getterName_9861 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 259)) ;
  GGS_typeNameFormalParameterNameList var_argumentTypeList_9914 = GGS_typeNameFormalParameterNameList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_72 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_9983 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 263)) ;
      GGS_lstring var_argumentTypeName_10041 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_10041, inCompiler) ;
      GGS_lstring var_argumentName_10093 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 265)) ;
      var_argumentTypeList_9914.addAssignOperation (var_selector_9983, var_argumentTypeName_10041, var_argumentName_10093  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 266)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 268)) ;
      GGS_lstring var_selector_10205 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 269)) ;
      GGS_lstring var_argumentTypeName_10272 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_argumentTypeName_10272, inCompiler) ;
      GGS_lstring var_argumentName_10324 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 271)) ;
      var_argumentTypeList_9914.addAssignOperation (var_selector_10205, var_argumentTypeName_10272, var_argumentName_10324  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 272)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 274)) ;
  GGS_lstring var_resultTypeName_10469 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_10469, inCompiler) ;
  ioArgument_ioExternTypeGetterList.addAssignOperation (var_getterName_9861, var_resultTypeName_10469, var_argumentTypeList_9914  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 276)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_getter_i54_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 258)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 259)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_DeclarationsSyntax_72 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 263)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 265)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 268)) ;
      nt_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 271)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 274)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i55_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GGS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 283)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 284)) ;
  GGS_lstring var_setterName_10877 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 285)) ;
  GGS_formalParameterListAST var_formalParameterList_10965 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_10965, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssignOperation (var_setterName_10877, var_formalParameterList_10965  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 287)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_setter_i55_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mutating COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 283)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 284)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 285)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i56_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                        GGS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 294)) ;
  GGS_lstring var_methodName_11345 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 295)) ;
  GGS_formalParameterListAST var_formalParameterList_11433 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_11433, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssignOperation (var_methodName_11345, var_formalParameterList_11433, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 297))  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 297)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_DeclarationsSyntax::rule_galgas_34_DeclarationsSyntax_externtype_5F_method_i56_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 295)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas3", 454)) ;
  GGS_lstring var_lexiqueComponentName_16975 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 456)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 457)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_17066 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_17130 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalAttributeListAST var_lexicalAttributeList_17193 = GGS_lexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalStyleListAST var_lexicalStyleList_17249 = GGS_lexicalStyleListAST::init (inCompiler COMMA_HERE) ;
  GGS_terminalDeclarationListAST var_terminalDeclarationList_17308 = GGS_terminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_17380 = GGS_lexicalMessageDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationList_17455 = GGS_lexicalListDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_lexicalRuleListAST var_lexicalRuleList_17516 = GGS_lexicalRuleListAST::init (inCompiler COMMA_HERE) ;
  GGS_indexingListAST var_indexingListAST_17563 = GGS_indexingListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_0 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_17066, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_17130, inCompiler) ;
    } break ;
    case 4: {
      nt_lexical_5F_attribute_5F_declaration_ (var_lexicalAttributeList_17193, inCompiler) ;
    } break ;
    case 5: {
      nt_style_5F_declaration_ (var_lexicalStyleList_17249, inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_ (var_terminalDeclarationList_17308, inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_ (var_lexicalListDeclarationList_17455, inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_ (var_lexicalRuleList_17516, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_ (var_lexicalRuleList_17516, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_ (var_lexicalMessageDeclarationList_17380, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_ (var_indexingListAST_17563, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 490)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_lexiqueComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_16975, GGS_bool (false), var_templateDelimitorList_17066, var_templateReplacementList_17130, var_lexicalAttributeList_17193, var_lexicalStyleList_17249, var_terminalDeclarationList_17308, var_lexicalMessageDeclarationList_17380, var_lexicalListDeclarationList_17455, var_lexicalRuleList_17516, var_indexingListAST_17563, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas3", 491)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("lexique-component.galgas3", 454)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 456)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 457)) ;
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
      nt_style_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_terminal_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_lexical_5F_list_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_lexical_5F_explicit_5F_rule_indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_implicit_5F_rule_indexing (inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_message_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_indexing_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 490)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GGS_indexingListAST & ioArgument_ioIndexingListAST,
                                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas3", 510)) ;
  GGS_lstring var_indexName_18954 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 512)) ;
  GGS_lstring var_indexComment_19037 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 513)) ;
  ioArgument_ioIndexingListAST.addAssignOperation (var_indexName_18954, var_indexComment_19037  COMMA_SOURCE_FILE ("lexique-component.galgas3", 514)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("lexique-component.galgas3", 510)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 511)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 512)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 513)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_ (GGS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                            Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas3", 521)) ;
  GGS_lstring var_messageName_19374 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 523)) ;
  GGS_lstring var_messageValue_19425 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 524)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssignOperation (var_messageName_19374, var_messageValue_19425  COMMA_SOURCE_FILE ("lexique-component.galgas3", 525)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas3", 521)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 522)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 523)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 524)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 531)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 532)) ;
  GGS_lstring var_listName_19750 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 533)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssignOperation (GGS_lexicalImplicitRuleAST::init_21_ (var_listName_19750, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas3", 534)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 531)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 532)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 533)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_ (GGS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 540)) ;
  GGS_lexicalExpressionAST var_lexicalRuleExpression_20085 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_20085, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 542)) ;
  GGS_lexicalInstructionListAST var_instructionList_20151 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_instructionList_20151, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 548)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssignOperation (GGS_lexicalExplicitRuleAST::init_21__21_ (var_lexicalRuleExpression_20085, var_instructionList_20151, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas3", 549)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("lexique-component.galgas3", 540)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 542)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_1 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 548)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas3", 555)) ;
  GGS_lexicalInstructionAST var_instruction_20617 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_20617, inCompiler) ;
  ioArgument_ioInstructionList.addAssignOperation (var_instruction_20617  COMMA_SOURCE_FILE ("lexique-component.galgas3", 557)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-component.galgas3", 555)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_ (GGS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas3", 563)) ;
  GGS_lexicalExpressionAST var_whileExpression_20928 ;
  nt_lexical_5F_expression_ (var_whileExpression_20928, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 565)) ;
  GGS_lexicalInstructionListAST var_whileInstructionList_20988 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_2 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_whileInstructionList_20988, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssignOperation (var_whileExpression_20928, var_whileInstructionList_20988  COMMA_SOURCE_FILE ("lexique-component.galgas3", 571)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("lexique-component.galgas3", 563)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 565)) ;
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
  GGS_lchar var_character_21419 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 577)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCharacterInputArgumentAST::init_21_ (var_character_21419, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 577)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lbigint var_unsignedValue_21752 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas3", 584)) ;
  outArgument_outEffectiveArgument = GGS_lexicalUnsignedInputArgumentAST::init_21_ (var_unsignedValue_21752, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("lexique-component.galgas3", 584)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                     Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_location var_currentLocation_22077 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas3", 591)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 592)) ;
  outArgument_outEffectiveArgument = GGS_lexicalCurrentCharacterInputArgumentAST::init_21_ (var_currentLocation_22077, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 592)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_ (GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GGS_lstring var_idf_22453 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 599)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GGS_lexicalAttributeInputArgumentAST::init_21_ (var_idf_22453, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 603)) ;
    GGS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList_22608 = GGS_lexicalFunctionCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 607)) ;
        GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_22776 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_22776, inCompiler) ;
        var_functionActualArgumentList_22608.addAssignOperation (var_arg_22776  COMMA_SOURCE_FILE ("lexique-component.galgas3", 609)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 611)) ;
    outArgument_outEffectiveArgument = GGS_lexicalFunctionInputArgumentAST::init_21__21_ (var_idf_22453, var_functionActualArgumentList_22608, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 599)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 603)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_LexiqueComponentSyntax_4 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 607)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 611)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 628)) ;
      GGS_lexicalExpressionAST var_rightExpression_23431 ;
      nt_lexical_5F_factor_ (var_rightExpression_23431, inCompiler) ;
      outArgument_outExpression = GGS_lexicalOrExpressionAST::init_21__21_ (outArgument_outExpression, var_rightExpression_23431, inCompiler COMMA_HERE) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 628)) ;
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
  GGS_lstring var_string_23729 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 637)) ;
  outArgument_outExpression = GGS_lexicalStringMatchAST::init_21_ (var_string_23729, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 637)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 644)) ;
  GGS_lstring var_string_23992 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 646)) ;
  GGS_lstring var_errorMessage_24035 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 647)) ;
  outArgument_outExpression = GGS_lexicalStringNotMatchAST::init_21__21_ (var_string_23992, var_errorMessage_24035, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 644)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 645)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-component.galgas3", 646)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 647)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_character_24318 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 654)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_lexicalCharacterMatchAST::init_21_ (var_character_24318, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 658)) ;
    GGS_lchar var_upperBound_24447 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 659)) ;
    outArgument_outExpression = GGS_lexicalCharacterIntervalMatchAST::init_21__21_ (var_character_24318, var_upperBound_24447, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 654)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 658)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 659)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_ (GGS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_characterSet_24753 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 667)) ;
  outArgument_outExpression = GGS_lexicalCharacterSetMatchAST::init_21_ (var_characterSet_24753, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_factor_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 667)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_ (GGS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 674)) ;
  GGS_lstring var_name_25074 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 675)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_25117 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_25187 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 679)) ;
      GGS_lstring var_sentAttribute_25222 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 680)) ;
      var_sentAttributeList_25117.addAssignOperation (var_selector_25187, var_sentAttribute_25222  COMMA_SOURCE_FILE ("lexique-component.galgas3", 681)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 683)) ;
      GGS_lstring var_selector_25319 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas3", 684)) ;
      GGS_lstring var_sentAttribute_25363 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 685)) ;
      var_sentAttributeList_25117.addAssignOperation (var_selector_25319, var_sentAttribute_25363  COMMA_SOURCE_FILE ("lexique-component.galgas3", 686)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_theStyle_25455 ;
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 690)) ;
    var_theStyle_25455 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 691)) ;
  } break ;
  case 2: {
    var_theStyle_25455 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas3", 693)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas3", 695)) ;
  GGS_lstring var_errorMessage_25662 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 696)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 697)) ;
  GGS_lexicalListEntryListAST var_entryList_25692 = GGS_lexicalListEntryListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_25692, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 702)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 704)) ;
  ioArgument_ioLexicalListDeclarationList.addAssignOperation (var_name_25074, var_theStyle_25455, var_errorMessage_25662, var_sentAttributeList_25117, var_entryList_25692  COMMA_SOURCE_FILE ("lexique-component.galgas3", 705)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_list COMMA_SOURCE_FILE ("lexique-component.galgas3", 674)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 675)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_7 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 679)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 680)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 683)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 685)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 690)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 691)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas3", 695)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 696)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 697)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 702)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 704)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_ (GGS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_entrySpelling_26136 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 711)) ;
  GGS_bool var_isTemplateEndMark_26159 = GGS_bool (false) ;
  GGS_bool var_nonAtomicSelection_26193 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 716)) ;
      var_isTemplateEndMark_26159 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 719)) ;
      var_nonAtomicSelection_26193 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_terminalSpelling_26392 ;
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 724)) ;
    var_terminalSpelling_26392 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 725)) ;
  } break ;
  case 2: {
    var_terminalSpelling_26392 = var_entrySpelling_26136 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssignOperation (var_entrySpelling_26136, var_terminalSpelling_26392, var_nonAtomicSelection_26193, var_isTemplateEndMark_26159  COMMA_SOURCE_FILE ("lexique-component.galgas3", 729)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 711)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 716)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 719)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 724)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 725)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_ (GGS_lexicalAttributeListAST & ioArgument_ioLexicalAttributeList,
                                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_typeName_26922 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas3", 739)) ;
  GGS_lstring var_name_26964 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 740)) ;
  ioArgument_ioLexicalAttributeList.addAssignOperation (var_typeName_26922, var_name_26964  COMMA_SOURCE_FILE ("lexique-component.galgas3", 741)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("lexique-component.galgas3", 739)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 740)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_ (GGS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_name_27248 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 747)) ;
  GGS_sentLexicalAttributeListAST var_sentAttributeList_27293 = GGS_sentLexicalAttributeListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_27391 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 751)) ;
      GGS_lstring var_sentAttribute_27426 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 752)) ;
      var_sentAttributeList_27293.addAssignOperation (var_selector_27391, var_sentAttribute_27426  COMMA_SOURCE_FILE ("lexique-component.galgas3", 753)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 755)) ;
      GGS_lstring var_selector_27523 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas3", 756)) ;
      GGS_lstring var_sentAttribute_27567 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 757)) ;
      var_sentAttributeList_27293.addAssignOperation (var_selector_27523, var_sentAttribute_27567  COMMA_SOURCE_FILE ("lexique-component.galgas3", 758)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstring var_theStyle_27659 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("lexique-component.galgas3", 760)) ;
  GGS_bool var_nonAtomicSelection_27717 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_27752 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_34_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 765)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, var_theStyle_27659.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas3", 767)), GGS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas3", 767)) ;
        }
      }
      var_theStyle_27659 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 769)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 771)) ;
      var_nonAtomicSelection_27717 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 774)) ;
      var_templateEndMark_27752 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas3", 777)) ;
  GGS_lstring var_errorMessage_28143 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 778)) ;
  ioArgument_ioTerminalDeclarationList.addAssignOperation (var_name_27248, var_sentAttributeList_27293, var_errorMessage_28143, var_theStyle_27659, var_nonAtomicSelection_27717, var_templateEndMark_27752  COMMA_SOURCE_FILE ("lexique-component.galgas3", 779)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_terminal_5F_declaration_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 747)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 751)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 752)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 755)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 757)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 765)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 769)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("lexique-component.galgas3", 771)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("lexique-component.galgas3", 774)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("lexique-component.galgas3", 777)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 778)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_ (GGS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 791)) ;
  GGS_lstring var_styleIdentifier_28578 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 792)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_styleIdentifier_28578.readProperty_string ().getter_containsCharacter (GGS_char (utf32 (95)) COMMA_SOURCE_FILE ("lexique-component.galgas3", 793)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_styleIdentifier_28578.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain '_' character"), fixItArray1  COMMA_SOURCE_FILE ("lexique-component.galgas3", 794)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_styleIdentifier_28578.readProperty_string ().getter_containsCharacterInRange (GGS_char (utf32 (48)), GGS_char (utf32 (57)) COMMA_SOURCE_FILE ("lexique-component.galgas3", 796)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_styleIdentifier_28578.readProperty_location (), GGS_string ("for compatibility with latex formatting, a style name should not contain any digit"), fixItArray3  COMMA_SOURCE_FILE ("lexique-component.galgas3", 797)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 799)) ;
  GGS_lstring var_comment_29021 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 800)) ;
  ioArgument_ioLexicalStyleList.addAssignOperation (var_styleIdentifier_28578, var_comment_29021  COMMA_SOURCE_FILE ("lexique-component.galgas3", 801)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_style_5F_declaration_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_style COMMA_SOURCE_FILE ("lexique-component.galgas3", 791)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-component.galgas3", 792)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 799)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("lexique-component.galgas3", 800)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i22_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lexicalSendSearchListAST var_lexicalSendSearchList_3255 = GGS_lexicalSendSearchListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_attributeName_3348 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 78)) ;
    GGS_lstring var_searchListName_3408 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 79)) ;
    var_lexicalSendSearchList_3255.addAssignOperation (var_attributeName_3348, var_searchListName_3408  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 80)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 81)) ;
    if (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 83)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction_3579 ;
  switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
    GGS_lstring var_defaultSentTerminal_3651 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 87)) ;
    var_lexicalSendDefaultAction_3579 = GGS_lexicalSendTerminalByDefaultAST::init_21_ (var_defaultSentTerminal_3651, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 90)) ;
    GGS_lstring var_defaultErrorMessageName_3816 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 91)) ;
    var_lexicalSendDefaultAction_3579 = GGS_lexicalErrorByDefaultAST::init_21_ (var_defaultErrorMessageName_3816, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_lexicalStructuredSendInstructionAST::init_21__21_ (var_lexicalSendSearchList_3255, var_lexicalSendDefaultAction_3579, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 77)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 78)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 79)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 81)) ;
    if (select_galgas_34_LexiqueComponentSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_searchString COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 83)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 87)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 90)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas3", 91)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_actionName_4454 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 107)) ;
  GGS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList_4515 = GGS_lexicalRoutineCallActualArgumentListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 109)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 112)) ;
      GGS_location var_passingModeLocation_4589 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 113)) ;
      GGS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_4722 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_4722, inCompiler) ;
      var_actualArgumentList_4515.addAssignOperation (GGS_lexicalFormalInputArgumentAST::init_21__21_ (var_passingModeLocation_4589, var_arg_4722, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 115)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 117)) ;
      GGS_location var_passingModeLocation_4846 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 118)) ;
      GGS_lstring var_attributeName_4917 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 119)) ;
      GGS_lexicalAttributeInputOutputArgumentAST var_arg_4942 = GGS_lexicalAttributeInputOutputArgumentAST::init_21__21_ (var_passingModeLocation_4846, var_attributeName_4917, inCompiler COMMA_HERE) ;
      var_actualArgumentList_4515.addAssignOperation (var_arg_4942  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 121)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GGS_lstringlist var_errorMessageList_5088 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 126)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_errorMessageName_5192 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 128)) ;
      var_errorMessageList_5088.addAssignOperation (var_errorMessageName_5192  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 129)) ;
      if (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 131)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 134)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRoutineCallInstructionAST::init_21__21__21_ (var_actionName_4454, var_actualArgumentList_4515, var_errorMessageList_5088, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 107)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 109)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 112)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 117)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 119)) ;
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
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 126)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 128)) ;
      if (select_galgas_34_LexiqueComponentSyntax_18 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 131)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas3", 134)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i24_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 52)) ;
  GGS_lstring var_tagName_2434 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalTagInstructionAST::init_21_ (var_tagName_2434, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_tag COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas3", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i25_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 75)) ;
  GGS_lexicalSelectBranchListAST var_lexicalWhileBranchList_3168 = GGS_lexicalSelectBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 78)) ;
    GGS_lexicalExpressionAST var_selectExpression_3276 ;
    nt_lexical_5F_expression_ (var_selectExpression_3276, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 80)) ;
    GGS_lexicalInstructionListAST var_selectInstructionList_3341 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_galgas_34_LexiqueComponentSyntax_20 (inCompiler) == 2) {
        nt_lexical_5F_instruction_ (var_selectInstructionList_3341, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_lexicalWhileBranchList_3168.addAssignOperation (var_selectExpression_3276, var_selectInstructionList_3341  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 86)) ;
    if (select_galgas_34_LexiqueComponentSyntax_19 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 89)) ;
  GGS_lexicalInstructionListAST var_defaultInstructionList_3600 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_defaultInstructionList_3600, inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 95)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalSelectInstructionAST::init_21__21_ (var_lexicalWhileBranchList_3168, var_defaultInstructionList_3600, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 96)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 78)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 80)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 89)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_LexiqueComponentSyntax_21 (inCompiler) == 2) {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-select.galgas3", 95)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_ (GGS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_sentTerminal_2447 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas3", 51)) ;
  outArgument_outInstruction = GGS_lexicalSimpleSendInstructionAST::init_21_ (var_sentTerminal_2447, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas3", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas3", 50)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalLogInstructionAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-log.galgas3", 51)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_log COMMA_SOURCE_FILE ("lexique-instruction-log.galgas3", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 55)) ;
  GGS_lstring var_tagName_2547 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 57)) ;
  GGS_lstring var_terminalName_2592 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 58)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRewindInstructionAST::init_21__21_ (var_tagName_2547, var_terminalName_2592, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rewind COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas3", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 69)) ;
  GGS_location var_location_2941 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 70)) ;
  GGS_lexicalInstructionListAST var_repeatedInstructionList_3002 = GGS_lexicalInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_LexiqueComponentSyntax_22 (inCompiler) == 2) {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList_3002, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lexicalWhileBranchListAST var_lexicalWhileBranchList_3152 = GGS_lexicalWhileBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList_3152, inCompiler) ;
    if (select_galgas_34_LexiqueComponentSyntax_23 (inCompiler) == 2) {
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 81)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalRepeatInstructionAST::init_21__21__21_ (var_repeatedInstructionList_3002, var_lexicalWhileBranchList_3152, var_location_2941, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 69)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas3", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 52)) ;
  GGS_lstring var_terminalName_2450 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalDropInstructionAST::init_21_ (var_terminalName_2450, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas3", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 52)) ;
  GGS_lstring var_warningMessageName_2476 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalWarningInstructionAST::init_21_ (var_warningMessageName_2476, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas3", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_ (GGS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 52)) ;
  GGS_lstring var_errorMessageName_2462 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 53)) ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_lexicalErrorInstructionAST::init_21_ (var_errorMessageName_2462, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_lexical_5F_instruction_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("lexique-instruction-error.galgas3", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 134)) ;
  GGS_lstring var_lexiqueComponentName_4932 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 137)) ;
  GGS_lstring var_lexiqueSuperComponentName_4994 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 140)) ;
  GGS_templateDelimitorListAST var_templateDelimitorList_5090 = GGS_templateDelimitorListAST::init (inCompiler COMMA_HERE) ;
  GGS_templateReplacementListAST var_templateReplacementList_5154 = GGS_templateReplacementListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_24 (inCompiler)) {
    case 2: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_5090, inCompiler) ;
    } break ;
    case 3: {
      nt_template_5F_replacement_ (var_templateReplacementList_5154, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 149)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_templateLexiqueComponentAST::init_21_isPredefined_21__21__21__21_ (GGS_bool (false), var_lexiqueComponentName_4932, var_lexiqueSuperComponentName_4994, var_templateDelimitorList_5090, var_templateReplacementList_5154, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 150)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_declaration_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 138)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 140)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 149)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i34_ (GGS_templateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 162)) ;
  GGS_lstring var_startString_5805 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 163)) ;
  GGS_bool var_nonAtomicSelection_5826 = GGS_bool (false) ;
  GGS_bool var_templateEndMark_5861 = GGS_bool (false) ;
  GGS_bool var_preserved_5893 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 169)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_nonAtomicSelection_5826.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 171)), GGS_string ("duplicated %nonAtomicSelection attribute"), fixItArray2  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 171)) ;
        }
      }
      var_nonAtomicSelection_5826 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 175)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_templateEndMark_5861.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 177)), GGS_string ("duplicated %templateEndMark attribute"), fixItArray4  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 177)) ;
        }
      }
      var_templateEndMark_5861 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 181)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_preserved_5893.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 183)), GGS_string ("duplicated %preserved attribute"), fixItArray6  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 183)) ;
        }
      }
      var_preserved_5893 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 187)) ;
  GGS_lstring var_endString_6462 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 188)) ;
  ioArgument_ioTemplateDelimitorList.addAssignOperation (var_startString_5805, var_nonAtomicSelection_5826, var_templateEndMark_5861, var_preserved_5893, var_endString_6462  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 189)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_delimitor_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_template COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 162)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_LexiqueComponentSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 169)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateEndMark COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 175)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_preserved COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 181)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 187)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 188)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i35_ (GGS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 200)) ;
  GGS_lstring var_matchString_6877 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 201)) ;
  GGS_lstring var_replacementString_6907 ;
  GGS_lstring var_replacementFunction_6942 ;
  switch (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 205)) ;
    var_replacementString_6907 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 206)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 207)) ;
    var_replacementFunction_6942 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 210)) ;
    var_replacementString_6907 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 211)) ;
    var_replacementFunction_6942 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 212)), inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.addAssignOperation (var_matchString_6877, var_replacementString_6907, var_replacementFunction_6942  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 214)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_LexiqueComponentSyntax::rule_galgas_34_LexiqueComponentSyntax_template_5F_replacement_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_templateReplacement COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 200)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 201)) ;
  switch (select_galgas_34_LexiqueComponentSyntax_26 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 205)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 206)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 207)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 208)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 210)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 211)) ;
  } break ;
  default:
    break ;
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas3", 93)) ;
  GGS_lstring var_optionComponentName_3510 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 95)) ;
  GGS_commandLineOptionListAST var_options_3573 = GGS_commandLineOptionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__ (var_options_3573, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 101)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (false), var_optionComponentName_3510, var_options_3573, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 102)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("optionCompilation.galgas3", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 95)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_OptionComponentSyntax_0 (inCompiler) == 2) {
      nt_option_5F_declaration_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 101)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_ (GGS_commandLineOptionListAST & ioArgument_ioCommandLineOptionList,
                                                                                                                         Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mOptionTypeName_4040 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas3", 112)) ;
  GGS_lstring var_mOptionInternalName_4089 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 114)) ;
  GGS_lchar var_mOptionInvocationLetter_4144 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 116)) ;
  GGS_lstring var_mOptionInvocationString_4207 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 118)) ;
  GGS_lstring var_mOptionComment_4271 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 119)) ;
  GGS_lstring var_defaultValue_4295 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 120)), inCompiler COMMA_HERE) ;
  GGS_optionDefaultValueEnumAST var_optionDefaultValueKind_4376 ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_optionDefaultValueKind_4376 = GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 123)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas3", 125)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      var_defaultValue_4295 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 127)) ;
      var_optionDefaultValueKind_4376 = GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 128)) ;
    } break ;
    case 2: {
      GGS_lbigint var_v_4672 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas3", 130)) ;
      var_defaultValue_4295 = GGS_lstring::init_21__21_ (var_v_4672.readProperty_bigint ().getter_string (SOURCE_FILE ("optionCompilation.galgas3", 131)), var_v_4672.readProperty_location (), inCompiler COMMA_HERE) ;
      var_optionDefaultValueKind_4376 = GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 132)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioCommandLineOptionList.addAssignOperation (var_mOptionTypeName_4040, var_mOptionInternalName_4089, var_mOptionInvocationLetter_4144, var_mOptionInvocationString_4207, var_mOptionComment_4271, var_defaultValue_4295, var_optionDefaultValueKind_4376  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 135)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_OptionComponentSyntax::rule_galgas_34_OptionComponentSyntax_option_5F_declaration_5F_ggs_33__i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("optionCompilation.galgas3", 112)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("optionCompilation.galgas3", 113)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 114)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 115)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 116)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 117)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 118)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 119)) ;
  switch (select_galgas_34_OptionComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_default COMMA_SOURCE_FILE ("optionCompilation.galgas3", 125)) ;
    switch (select_galgas_34_OptionComponentSyntax_2 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("optionCompilation.galgas3", 127)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("optionCompilation.galgas3", 130)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas3", 257)) ;
  GGS_lstring var_mGUIName_8778 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 258)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 259)) ;
  GGS_lstringlist var_importedOptionList_8817 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleGlobalAttributes_8877 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_withLexiqueListAST var_withLexiqueList_8934 = GGS_withLexiqueListAST::init (inCompiler COMMA_HERE) ;
  GGS_projectIndexingDescriptorList var_projectExtensionList_8995 = GGS_projectIndexingDescriptorList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas3", 266)) ;
      GGS_lstring var_fileExtension_9082 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas3", 268)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas3", 269)) ;
      GGS_lstring var_indexingPathSuffix_9148 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 270)) ;
      var_projectExtensionList_8995.addAssignOperation (var_fileExtension_9082, var_indexingPathSuffix_9148  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 271)) ;
    } break ;
    case 3: {
      nt_gui_5F_attributes_ (var_simpleGlobalAttributes_8877, inCompiler) ;
    } break ;
    case 4: {
      nt_gui_5F_with_5F_option_5F_declaration_ (var_importedOptionList_8817, inCompiler) ;
    } break ;
    case 5: {
      nt_gui_5F_with_5F_lexique_5F_declaration_ (var_withLexiqueList_8934, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 280)) ;
  ioArgument_ioDeclarations.mProperty_mGUIComponentList.addAssignOperation (var_mGUIName_8778, var_importedOptionList_8817, var_simpleGlobalAttributes_8877, var_withLexiqueList_8934, var_projectExtensionList_8995  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 281)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_gui COMMA_SOURCE_FILE ("guiCompilation.galgas3", 257)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 258)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 259)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("guiCompilation.galgas3", 266)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 267)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("guiCompilation.galgas3", 268)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("guiCompilation.galgas3", 269)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 270)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 280)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_ (GGS_withLexiqueListAST & ioArgument_ioWithLexiqueList,
                                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas3", 293)) ;
  GGS_lstring var_lexiqueReference_9863 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 294)) ;
  GGS_guiLabelListAST var_labels_9906 = GGS_guiLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiSimpleAttributeListAST var_simpleAttributes_9954 = GGS_guiSimpleAttributeListAST::init (inCompiler COMMA_HERE) ;
  GGS_guiCompoundAttributeListAST var_compoundAttributes_10014 = GGS_guiCompoundAttributeListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 298)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas3", 301)) ;
      GGS_uint var_displayStyle_10098 ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
        var_displayStyle_10098 = GGS_uint (uint32_t (0U)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 306)) ;
        var_displayStyle_10098 = GGS_uint (uint32_t (1U)) ;
      } break ;
      default:
        break ;
      }
      GGS_terminalLabelListAST var_terminalList_10237 = GGS_terminalLabelListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_terminal_10308 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 311)) ;
        GGS_uint var_displayFlags_10336 ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
          var_displayFlags_10336 = GGS_uint (uint32_t (0U)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 316)) ;
          var_displayFlags_10336 = GGS_uint (uint32_t (65535U)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 319)) ;
          GGS_lbigint var_leadingStrip_10530 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 320)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_leadingStrip_10530.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 321)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (var_leadingStrip_10530.readProperty_location (), GGS_string ("leading strip should be < 15"), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 322)) ;
            }
          }
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 324)) ;
          GGS_lbigint var_endingStrip_10709 = inCompiler->synthetizedAttribute_bigintValue () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 325)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::greaterOrEqual, var_endingStrip_10709.readProperty_bigint ().objectCompare (GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 326)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (var_endingStrip_10709.readProperty_location (), GGS_string ("tail strip should be < 15"), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 327)) ;
            }
          }
          var_displayFlags_10336 = var_leadingStrip_10530.readProperty_bigint ().left_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 329)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 329)).operator_or (var_endingStrip_10709.readProperty_bigint () COMMA_SOURCE_FILE ("guiCompilation.galgas3", 329)).getter_uint (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 329)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 330)) ;
        } break ;
        default:
          break ;
        }
        var_terminalList_10237.addAssignOperation (var_terminal_10308, var_displayFlags_10336  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 332)) ;
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 334)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_labels_9906.addAssignOperation (var_displayStyle_10098, var_terminalList_10237, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 336))  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 336)) ;
    } break ;
    case 3: {
      GGS_lstring var_key_11116 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 338)) ;
      GGS_lstring var_name_11153 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 339)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 340)) ;
      GGS_lstring var_value_11179 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 341)), inCompiler COMMA_HERE) ;
      bool repeatFlag_6 = true ;
      while (repeatFlag_6) {
        GGS_lstring var_v_11265 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 343)) ;
        var_value_11179 = GGS_lstring::init_21__21_ (var_value_11179.readProperty_string ().add_operation (var_v_11265.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 344)), var_v_11265.readProperty_location (), inCompiler COMMA_HERE) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_6 = false ;
        }
      }
      var_compoundAttributes_10014.addAssignOperation (var_key_11116, var_name_11153, var_value_11179  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 347)) ;
    } break ;
    case 4: {
      GGS_lstring var_name_11444 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 349)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 350)) ;
      GGS_lstring var_value_11492 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 351)) ;
      var_simpleAttributes_9954.addAssignOperation (var_name_11444, var_value_11492  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 352)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 354)) ;
  ioArgument_ioWithLexiqueList.addAssignOperation (var_lexiqueReference_9863, var_labels_9906, var_simpleAttributes_9954, var_compoundAttributes_10014  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 355)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_lexique_5F_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 292)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_lexique COMMA_SOURCE_FILE ("guiCompilation.galgas3", 293)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 294)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 298)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_GuiComponentSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("guiCompilation.galgas3", 301)) ;
      switch (select_galgas_34_GuiComponentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 306)) ;
      } break ;
      default:
        break ;
      }
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 311)) ;
        switch (select_galgas_34_GuiComponentSyntax_4 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 316)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 319)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 320)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 324)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("guiCompilation.galgas3", 325)) ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 330)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_34_GuiComponentSyntax_3 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 334)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 338)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 339)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 340)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 343)) ;
        if (select_galgas_34_GuiComponentSyntax_5 (inCompiler) == 2) {
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 349)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 350)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 351)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 354)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_ (GGS_lstringlist & ioArgument_ioImportedOptionList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas3", 362)) ;
  GGS_lstring var_optionReference_11885 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 363)) ;
  ioArgument_ioImportedOptionList.addAssignOperation (var_optionReference_11885  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 364)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_with_5F_option_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_with COMMA_SOURCE_FILE ("guiCompilation.galgas3", 361)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("guiCompilation.galgas3", 362)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 363)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_ (GGS_guiSimpleAttributeListAST & ioArgument_ioSimpleGlobalAttributes,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_mKey_12169 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 370)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 371)) ;
  GGS_lstring var_mValue_12191 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 372)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_value_12265 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 374)) ;
    var_mValue_12191 = GGS_lstring::init_21__21_ (var_mValue_12191.readProperty_string ().add_operation (var_value_12265.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 375)), var_value_12265.readProperty_location (), inCompiler COMMA_HERE) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioSimpleGlobalAttributes.addAssignOperation (var_mKey_12169, var_mValue_12191  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 378)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GuiComponentSyntax::rule_galgas_34_GuiComponentSyntax_gui_5F_attributes_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("guiCompilation.galgas3", 370)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 371)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("guiCompilation.galgas3", 374)) ;
    if (select_galgas_34_GuiComponentSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 243)) ;
  GGS_lstring var_syntaxComponentName_10249 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 244)) ;
  GGS_lstring var_importedLexiqueReference_10312 ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_importedLexiqueReference_10312 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 248)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 250)) ;
    var_importedLexiqueReference_10312 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 251)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 252)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_hasTranslateFeature_10516 ;
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_10516 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 259)) ;
    var_hasTranslateFeature_10516 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 262)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_10693 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_10764 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_10693, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_10764, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 273)) ;
  ioArgument_ioDeclarations.mProperty_mSyntaxComponentList.addAssignOperation (var_syntaxComponentName_10249, var_importedLexiqueReference_10312, var_nonterminalDeclarationList_10693, var_ruleList_10764, var_hasTranslateFeature_10516  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 274)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 243)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 244)) ;
  switch (select_galgas_34_SyntaxComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 250)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 251)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 252)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_SyntaxComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 259)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 262)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 273)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 287)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 288)) ;
  GGS_lstring var_syntaxComponentName_11558 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 289)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 290)) ;
  GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_11624 = GGS_nonterminalDeclarationListAST::init (inCompiler COMMA_HERE) ;
  GGS_syntaxRuleListAST var_ruleList_11695 = GGS_syntaxRuleListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_3 (inCompiler)) {
    case 2: {
      nt_nonterminal_5F_declaration_ (ioArgument_ioDeclarations, var_nonterminalDeclarationList_11624, inCompiler) ;
    } break ;
    case 3: {
      nt_syntax_5F_rule_5F_declaration_ (ioArgument_ioDeclarations, var_ruleList_11695, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 301)) ;
  {
  extensionSetter_insertKey (ioArgument_ioDeclarations.mProperty_mSyntaxExtensions, var_syntaxComponentName_11558.readProperty_string (), var_syntaxComponentName_11558, var_nonterminalDeclarationList_11624, var_ruleList_11695, inCompiler COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 302)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 287)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extension COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 288)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 289)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 290)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_SyntaxComponentSyntax_3 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 301)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                   GGS_nonterminalDeclarationListAST & ioArgument_ioNonterminalDeclarationList,
                                                                                                                   Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 321)) ;
  GGS_lstring var_mNonterminalName_12749 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 322)) ;
  GGS_nonTerminalLabelListAST var_labels_12826 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_firstBranchFormalParameters_12915 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_firstBranchFormalParameters_12915, inCompiler) ;
  var_labels_12826.addAssignOperation (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 325)), inCompiler COMMA_HERE), var_firstBranchFormalParameters_12915, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 325))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 325)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 328)) ;
      GGS_lstring var_labelName_13078 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 329)) ;
      GGS_formalParameterListAST var_formalParameters_13167 ;
      nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameters_13167, inCompiler) ;
      var_labels_12826.addAssignOperation (var_labelName_13078, var_formalParameters_13167, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 331))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 331)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioNonterminalDeclarationList.addAssignOperation (var_mNonterminalName_12749, var_labels_12826  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 333)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_nonterminal_5F_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 321)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 322)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_SyntaxComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 328)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 329)) ;
      nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                const GGS_lstring constinArgument_inLabelName,
                                                                                                                GGS_syntaxRuleLabelListAST & ioArgument_ioLabelList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_formalParameterListAST var_mFormalParameters_13789 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameters_13789, inCompiler) ;
  GGS_location var_endOfArguments_13816 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 343)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 344)) ;
  GGS_syntaxInstructionList var_mSyntaxInstructionList_13933 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mSyntaxInstructionList_13933, inCompiler) ;
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_mFormalParameters_13789, var_endOfArguments_13816, var_mSyntaxInstructionList_13933, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 351))  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 346)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 352)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_label_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 344)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 352)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_syntaxRuleListAST & ioArgument_ioRuleList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 359)) ;
  GGS_lstring var_mNonterminalName_14399 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 360)) ;
  GGS_lstring var_labelName_14451 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 361)), inCompiler COMMA_HERE) ;
  GGS_syntaxRuleLabelListAST var_mLabelList_14502 = GGS_syntaxRuleLabelListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_ (ioArgument_ioDeclarations, var_labelName_14451, var_mLabelList_14502, inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 366)) ;
      var_labelName_14451 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 367)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRuleList.addAssignOperation (var_mNonterminalName_14399, var_mLabelList_14502  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 369)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_rule_5F_declaration_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_rule COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 359)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 360)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_syntax_5F_rule_5F_label_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 366)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 367)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                      GGS_syntaxInstructionList & outArgument_outSyntaxInstructionList,
                                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outSyntaxInstructionList.drop () ; // Release 'out' argument
  outArgument_outSyntaxInstructionList = GGS_syntaxInstructionList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        GGS_semanticInstructionAST var_instruction_15333 ;
        nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_15333, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_15333  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 386)) ;
      } break ;
      case 2: {
        GGS_syntaxInstructionAST var_instruction_15463 ;
        nt_syntax_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_15463, inCompiler) ;
        outArgument_outSyntaxInstructionList.addAssignOperation (var_instruction_15463  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 389)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_34_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 393)) ;
        } break ;
        case 2: {
          GGS_string var_separator_15605 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 395)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_15605.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 396)).operator_not (SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 396)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 397)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 397)) ;
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
  switch (select_galgas_34_SyntaxComponentSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_SyntaxComponentSyntax_8 (inCompiler)) {
      case 1: {
        nt_semantic_5F_instruction_indexing (inCompiler) ;
      } break ;
      case 2: {
        nt_syntax_5F_instruction_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_7 (inCompiler) == 2) {
        switch (select_galgas_34_SyntaxComponentSyntax_9 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasSyntaxComponentSyntax.galgas3", 393)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas3", 47)) ;
  GGS_location var_instructionLocation_2253 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas3", 48)) ;
  GGS_semanticExpressionAST var_sentExpression_2354 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sentExpression_2354, inCompiler) ;
  outArgument_outInstruction = GGS_syntaxSendInstructionAST::init_21__21_ (var_instructionLocation_2253, var_sentExpression_2354, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_send COMMA_SOURCE_FILE ("instruction-syntax-send.galgas3", 47)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mNonterminalName_2844 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 56)) ;
  GGS_actualParameterListAST var_mActualParameterList_2980 ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_mActualParameterList_2980, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_3123 ;
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_3123 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 63)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_3123, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_nonterminalCallInstruction::init_21__21__21__21_ (var_mNonterminalName_2844.readProperty_location (), var_mNonterminalName_2844, var_mActualParameterList_2980, var_grammarInstructionSyntaxDirectedTranslationResult_3123, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 56)) ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 63)) ;
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
  GGS_lstring var_terminalName_4015 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 86)) ;
  GGS_actualInputParameterListAST var_actualInputParameterList_4116 ;
  nt_actual_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_actualInputParameterList_4116, inCompiler) ;
  GGS__32_lstringlist var_indexNameList_4184 ;
  nt_terminal_5F_instruction_5F_indexing_ (var_indexNameList_4184, inCompiler) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4320 ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4450 ;
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4320 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
    var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4450 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 96)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4320, inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4450, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_terminalCheckInstructionAST::init_21__21__21__21__21__21_ (var_terminalName_4015.readProperty_location (), var_terminalName_4015, var_actualInputParameterList_4116, var_indexNameList_4184, var_grammarInstructionSyntaxDirectedTranslationPreceedingDelimitor_4320, var_grammarInstructionSyntaxDirectedTranslationPreceedingToken_4450, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_terminalReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__24_terminal_24_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 86)) ;
  nt_actual_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  nt_terminal_5F_instruction_5F_indexing_indexing (inCompiler) ;
  switch (select_galgas_34_SyntaxComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 96)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i9_ (GGS__32_lstringlist & outArgument_outIndexNameList,
                                                                                                                            Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outIndexNameList.drop () ; // Release 'out' argument
  outArgument_outIndexNameList = GGS__32_lstringlist::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 116)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 117)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_indexName_5649 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 119)) ;
      GGS_lstring var_postfixName_5714 ;
      switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
      case 1: {
        var_postfixName_5714 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-terminal.galgas3", 122)) ;
      } break ;
      case 2: {
        var_postfixName_5714 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 124)) ;
      } break ;
      default:
        break ;
      }
      outArgument_outIndexNameList.addAssignOperation (var_indexName_5649, var_postfixName_5714  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 126)) ;
      if (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 128)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 130)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_terminal_5F_instruction_5F_indexing_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_SyntaxComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 116)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 117)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_indexingNameReference, "") ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 119)) ;
      switch (select_galgas_34_SyntaxComponentSyntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 124)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_SyntaxComponentSyntax_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 128)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 130)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas3", 69)) ;
  GGS_location var_mSelectInstructionLocation_3158 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 70)) ;
  GGS_listOfSyntaxInstructionList var_mSelectBranchList_3210 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_syntaxInstructionList var_il_3339 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_il_3339, inCompiler) ;
  var_mSelectBranchList_3210.addAssignOperation (var_il_3339, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 73))  COMMA_SOURCE_FILE ("instruction-select.galgas3", 73)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas3", 75)) ;
    GGS_syntaxInstructionList var_instructionList_3489 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructionList_3489, inCompiler) ;
    var_mSelectBranchList_3210.addAssignOperation (var_instructionList_3489, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 77))  COMMA_SOURCE_FILE ("instruction-select.galgas3", 77)) ;
    if (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas3", 80)) ;
  GGS_location var_endOf_5F_select_5F_instruction_3602 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 81)) ;
  outArgument_outInstruction = GGS_selectInstruction::init_21__21__21_ (var_mSelectInstructionLocation_3158, var_mSelectBranchList_3210, var_endOf_5F_select_5F_instruction_3602, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_select COMMA_SOURCE_FILE ("instruction-select.galgas3", 69)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_or COMMA_SOURCE_FILE ("instruction-select.galgas3", 75)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_15 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-select.galgas3", 80)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                               GGS_syntaxInstructionAST & outArgument_outInstruction,
                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 73)) ;
  GGS_location var_mRepeatInstructionLocation_3385 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 74)) ;
  GGS_syntaxInstructionList var_mRepeatedInstructionList_3505 ;
  nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mRepeatedInstructionList_3505, inCompiler) ;
  GGS_location var_endOf_5F_repeated_5F_instructions_3539 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 76)) ;
  GGS_listOfSyntaxInstructionList var_mRepeatBranchList_3592 = GGS_listOfSyntaxInstructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 79)) ;
    GGS_syntaxInstructionList var_mInstructionList_3748 ;
    nt_syntax_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_3748, inCompiler) ;
    var_mRepeatBranchList_3592.addAssignOperation (var_mInstructionList_3748, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 81))  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 81)) ;
    if (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 84)) ;
  GGS_location var_endOf_5F_repeat_5F_instruction_3864 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 85)) ;
  outArgument_outInstruction = GGS_repeatInstruction::init_21__21__21__21__21_ (var_mRepeatInstructionLocation_3385, var_mRepeatedInstructionList_3505, var_endOf_5F_repeated_5F_instructions_3539, var_mRepeatBranchList_3592, var_endOf_5F_repeat_5F_instruction_3864, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_SyntaxComponentSyntax::rule_galgas_34_SyntaxComponentSyntax_syntax_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_repeat COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 73)) ;
  nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 79)) ;
    nt_syntax_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_SyntaxComponentSyntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 84)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lbool var_hasIndexing_8351 ;
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_hasIndexing_8351 = GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 239)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    var_hasIndexing_8351 = GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 241)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 242)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 244)) ;
  GGS_lstring var_mGrammarName_8555 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 245)) ;
  GGS_lstring var_mGrammarClass_8637 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 246)) ;
  GGS_bool var_hasTranslateFeature_8692 ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_hasTranslateFeature_8692 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 252)) ;
    var_hasTranslateFeature_8692 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 255)) ;
  GGS_lstringlist var_syntaxComponents_8869 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 259)) ;
    GGS_lstring var_syntaxComponent_8952 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 260)) ;
    var_syntaxComponents_8869.addAssignOperation (var_syntaxComponent_8952  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 261)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_startSymbol_9086 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 265)) ;
  GGS_nonTerminalLabelListAST var_mLabelList_9132 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
  nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 267)), inCompiler COMMA_HERE), var_mLabelList_9132, inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 270)) ;
      GGS_lstring var_labelName_9341 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 271)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_ (ioArgument_ioDeclarations, var_labelName_9341, var_mLabelList_9132, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_lstringlist var_mUnusedNonterminalList_9485 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 278)) ;
      GGS_lstring var_nonterminalSymbolName_9600 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 279)) ;
      var_mUnusedNonterminalList_9485.addAssignOperation (var_nonterminalSymbolName_9600  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 280)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 283)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_galgas_33_GrammarComponentAST::init_21_isPredefined_21__21__21__21__21__21__21__21_ (GGS_bool (false), var_hasIndexing_8351, var_mGrammarName_8555, var_mGrammarClass_8637, var_syntaxComponents_8869, var_startSymbol_9086, var_mLabelList_9132, var_mUnusedNonterminalList_9485, var_hasTranslateFeature_8692, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 284)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_GrammarComponentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_indexing COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 242)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 244)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 245)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 246)) ;
  switch (select_galgas_34_GrammarComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_translate COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 252)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 255)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_syntax COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 259)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 260)) ;
    if (select_galgas_34_GrammarComponentSyntax_2 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_ruleReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 265)) ;
  nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_34_GrammarComponentSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 270)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 271)) ;
      nt_grammar_5F_start_5F_symbol_5F_label_indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_34_GrammarComponentSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 278)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_non_5F_terminal_3E_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 279)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 283)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              const GGS_lstring constinArgument_inLabelName,
                                                                                                                              GGS_nonTerminalLabelListAST & ioArgument_ioLabelList,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  GGS_stringset var_argumentNameSet_10324 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListAST var_formalParameterList_10378 = GGS_formalParameterListAST::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 303)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_argumentName_10500 ;
      nt_label_5F_formal_5F_parameter_ (ioArgument_ioDeclarations, var_argumentName_10500, var_formalParameterList_10378, inCompiler) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_argumentNameSet_10324.getter_hasKey (var_argumentName_10500.readProperty_string () COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 308)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_argumentName_10500.readProperty_location (), GGS_string ("there is already an argument named '").add_operation (var_argumentName_10500.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 309)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 309)), fixItArray2  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 309)) ;
        }
      }
      var_argumentNameSet_10324.plusPlusAssignOperation (var_argumentName_10500.readProperty_string ()  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 311)) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 313)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 316)) ;
  ioArgument_ioLabelList.addAssignOperation (constinArgument_inLabelName, var_formalParameterList_10378, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 317))  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 317)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_grammar_5F_start_5F_symbol_5F_label_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 303)) ;
  switch (select_galgas_34_GrammarComponentSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_label_5F_formal_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_GrammarComponentSyntax_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 313)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 316)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_11223 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 325)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 326)) ;
  GGS_lstring var_mTypeName_11298 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_11298, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 330)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 332)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_11223, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 335)), var_mTypeName_11298, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 333)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 325)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 326)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 330)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 332)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 346)) ;
  GGS_lstring var_selector_11877 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 347)) ;
  GGS_lstring var_mTypeName_11951 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_11951, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 351)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 353)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_11877, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 356)), var_mTypeName_11951, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 354)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 346)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 351)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 353)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_12541 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 367)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 368)) ;
  GGS_lstring var_mTypeName_12616 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_12616, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 372)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 374)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_12541, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 377)), var_mTypeName_12616, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 375)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 367)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 368)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 372)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 374)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 388)) ;
  GGS_lstring var_selector_13199 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 389)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 390)) ;
  GGS_lstring var_mTypeName_13283 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_13283, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 394)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 396)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_13199, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 399)), var_mTypeName_13283, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 397)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 388)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 390)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 394)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 396)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_13904 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 410)) ;
  GGS_lstring var_mTypeName_13969 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_13969, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 414)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 416)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_13904, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 419)), var_mTypeName_13969, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 417)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 410)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 414)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 416)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 430)) ;
  GGS_lstring var_selector_14578 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 431)) ;
  GGS_lstring var_mTypeName_14652 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_14652, inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 435)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 437)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_14578, GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 440)), var_mTypeName_14652, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 438)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 430)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_GrammarComponentSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 435)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 437)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  GGS_lstring var_selector_15267 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 451)) ;
  GGS_lstring var_mTypeName_15332 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_15332, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 453)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_15267, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 456)), var_mTypeName_15332, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 454)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 451)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 453)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_lstring & outArgument_outArgumentName,
                                                                                                                       GGS_formalParameterListAST & ioArgument_ioStartSymbolLabelFormalParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outArgumentName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 467)) ;
  GGS_lstring var_selector_15898 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 468)) ;
  GGS_lstring var_mTypeName_15972 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_mTypeName_15972, inCompiler) ;
  outArgument_outArgumentName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 470)) ;
  ioArgument_ioStartSymbolLabelFormalParameterList.addAssignOperation (var_selector_15898, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 473)), var_mTypeName_15972, outArgument_outArgumentName, GGS_bool (false)  COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 471)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_GrammarComponentSyntax::rule_galgas_34_GrammarComponentSyntax_label_5F_formal_5F_parameter_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 467)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasGrammarComponentSyntax.galgas3", 470)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 134)) ;
  GGS_semanticInstructionListAST var_prologueInstructionList_5388 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_5388, inCompiler) ;
  GGS_location var_endOfPrologue_5421 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 136)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 137)) ;
  ioArgument_ioDeclarations.mProperty_mPrologueDeclarationList.addAssignOperation (var_prologueInstructionList_5388, var_endOfPrologue_5421  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 133)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 134)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 137)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 148)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 149)) ;
  GGS_semanticInstructionListAST var_prologueInstructionList_5958 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_prologueInstructionList_5958, inCompiler) ;
  GGS_location var_endOfPrologue_5991 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 151)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 152)) ;
  ioArgument_ioDeclarations.mProperty_mEpilogueDeclarationList.addAssignOperation (var_prologueInstructionList_5958, var_endOfPrologue_5991  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 153)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 148)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 149)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 163)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 164)) ;
  GGS_lstring var_mSourceFileExtension_6480 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 165)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 166)) ;
  GGS_lstring var_mSourceFileHelp_6552 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 167)) ;
  GGS_lstring var_referenceGrammar_6612 ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
    var_referenceGrammar_6612 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgramDeclarations.galgas3", 171)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 173)) ;
    var_referenceGrammar_6612 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 174)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_selector_6789 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 177)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_selector_6789.readProperty_string ().objectCompare (GGS_string ("sourceFilePath"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("\?sourceFilePath:")) ;
      inCompiler->emitSemanticError (var_selector_6789.readProperty_location (), GGS_string ("the selector should be '\?sourceFilePath:'"), fixItArray1  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 179)) ;
    }
  }
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_lstring var_typeName_6995 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 183)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, var_typeName_6995.readProperty_string ().objectCompare (GGS_string ("lstring"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_typeName_6995.readProperty_location (), GGS_string ("the only type allowed here is '@lstring'"), fixItArray3  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 185)) ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_bool var_isUnused_7150 ;
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
    var_isUnused_7150 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 192)) ;
    var_isUnused_7150 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mSourceFileVariableName_7277 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 195)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 197)) ;
  GGS_semanticInstructionListAST var_mInstructionList_7402 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mInstructionList_7402, inCompiler) ;
  GGS_location var_endOfInstructionList_7428 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 199)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 200)) ;
  ioArgument_ioDeclarations.mProperty_mSourceRuleList.addAssignOperation (var_mSourceFileExtension_6480, var_mSourceFileHelp_6552, var_mSourceFileVariableName_7277, var_isUnused_7150, var_referenceGrammar_6612, var_mInstructionList_7402, var_endOfInstructionList_7428  COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 201)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProgramDeclarations::rule_galgas_34_ProgramDeclarations_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 163)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 164)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 165)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_errorMessage COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 166)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 167)) ;
  switch (select_galgas_34_ProgramDeclarations_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 173)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 174)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 177)) ;
  switch (select_galgas_34_ProgramDeclarations_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 183)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ProgramDeclarations_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_unused COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 192)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 195)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 197)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProgramDeclarations.galgas3", 200)) ;
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
mProperty_mStyleMap (),
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
mProperty_mStyleMap (inSource.mProperty_mStyleMap),
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
  mProperty_mStyleMap = inSource.mProperty_mStyleMap ;
  mProperty_mUnicodeTestFunctions = inSource.mProperty_mUnicodeTestFunctions ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexiqueAnalysisContext GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mLexiqueName,
                                                                                                             const GGS_lexicalRoutineMap & in_mLexicalRoutineMessageMap,
                                                                                                             const GGS_lexicalFunctionMap & in_mLexicalFunctionMap,
                                                                                                             const GGS_lexicalMessageMap & in_mLexicalMessageMap,
                                                                                                             const GGS_terminalMap & in_mTerminalMap,
                                                                                                             const GGS_terminalList & in_mTerminalList,
                                                                                                             const GGS_lexicalAttributeMap & in_mLexicalAttributeMap,
                                                                                                             const GGS_lexicalExplicitTokenListMapMap & in_mLexicalTokenListMap,
                                                                                                             const GGS_stringset & in_mUnicodeStringToGenerate,
                                                                                                             const GGS_templateDelimitorList & in_mTemplateDelimitorList,
                                                                                                             const GGS_styleMap & in_mStyleMap,
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
  result.mProperty_mStyleMap = in_mStyleMap ;
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
                                                        const GGS_terminalList & inOperand5,
                                                        const GGS_lexicalAttributeMap & inOperand6,
                                                        const GGS_lexicalExplicitTokenListMapMap & inOperand7,
                                                        const GGS_stringset & inOperand8,
                                                        const GGS_templateDelimitorList & inOperand9,
                                                        const GGS_styleMap & inOperand10,
                                                        const GGS_stringset & inOperand11) :
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
mProperty_mStyleMap (inOperand10),
mProperty_mUnicodeTestFunctions (inOperand11) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexiqueAnalysisContext::isValid (void) const {
  return mProperty_mLexiqueName.isValid () && mProperty_mLexicalRoutineMessageMap.isValid () && mProperty_mLexicalFunctionMap.isValid () && mProperty_mLexicalMessageMap.isValid () && mProperty_mTerminalMap.isValid () && mProperty_mTerminalList.isValid () && mProperty_mLexicalAttributeMap.isValid () && mProperty_mLexicalTokenListMap.isValid () && mProperty_mUnicodeStringToGenerate.isValid () && mProperty_mTemplateDelimitorList.isValid () && mProperty_mStyleMap.isValid () && mProperty_mUnicodeTestFunctions.isValid () ;
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
  mProperty_mStyleMap.drop () ;
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
    mProperty_mStyleMap.description (ioString, inIndentation+1) ;
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

AC_GALGAS_root * GGS_lexiqueAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueAnalysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueAnalysisContext GGS_lexiqueAnalysisContext::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexiqueAnalysisContext result ;
  const GGS_lexiqueAnalysisContext * p = (const GGS_lexiqueAnalysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  mProperty_mMainGroupChildrenRefs = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mProjectObjectReference = GGS_string::makeEmptyString () ;
  mProperty_mGroupList = GGS_XCodeGroupList::init (inCompiler COMMA_HERE) ;
  mProperty_mToolTargetList = GGS_XCodeToolTargetList::init (inCompiler COMMA_HERE) ;
  mProperty_mAppTargetList = GGS_XCodeAppTargetList::init (inCompiler COMMA_HERE) ;
  mProperty_mCFileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mCppFileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_m_5F_Swift_5F_FileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_m_5F_M_5F_FileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_m_5F_MM_5F_FileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mFrameworkFileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mHeaderFileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mBuildFileList = GGS_BuildFileList::init (inCompiler COMMA_HERE) ;
  mProperty_mDefaultConfigurationRef = GGS_string::makeEmptyString () ;
  mProperty_mDefaultConfigurationSettingList = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mProjectBuildConfigurationRef = GGS_string::makeEmptyString () ;
  mProperty_mInfoPlistFileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mXIB_5F_fileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mTIFF_5F_fileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mICNS_5F_fileList = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  mProperty_mApplicationBundleName = GGS_string::makeEmptyString () ;
  mProperty_mProjectName = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::GGS_XcodeProjectDescriptor (const GGS_uint & inOperand0,
                                                        const GGS_string & inOperand1,
                                                        const GGS_stringlist & inOperand2,
                                                        const GGS_string & inOperand3,
                                                        const GGS_XCodeGroupList & inOperand4,
                                                        const GGS_XCodeToolTargetList & inOperand5,
                                                        const GGS_XCodeAppTargetList & inOperand6,
                                                        const GGS__32_stringlist & inOperand7,
                                                        const GGS__32_stringlist & inOperand8,
                                                        const GGS__32_stringlist & inOperand9,
                                                        const GGS__32_stringlist & inOperand10,
                                                        const GGS__32_stringlist & inOperand11,
                                                        const GGS__32_stringlist & inOperand12,
                                                        const GGS__32_stringlist & inOperand13,
                                                        const GGS_BuildFileList & inOperand14,
                                                        const GGS_string & inOperand15,
                                                        const GGS_stringlist & inOperand16,
                                                        const GGS_string & inOperand17,
                                                        const GGS__32_stringlist & inOperand18,
                                                        const GGS__32_stringlist & inOperand19,
                                                        const GGS__32_stringlist & inOperand20,
                                                        const GGS__32_stringlist & inOperand21,
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

AC_GALGAS_root * GGS_XcodeProjectDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XcodeProjectDescriptor (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor GGS_XcodeProjectDescriptor::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_XcodeProjectDescriptor result ;
  const GGS_XcodeProjectDescriptor * p = (const GGS_XcodeProjectDescriptor *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XcodeProjectDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XcodeProjectDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 41)) ;
  }
  ioObject.mProperty_mTIFF_5F_fileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 42)) ;
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 50)) ;
  }
  ioObject.mProperty_mInfoPlistFileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 51)) ;
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 59)) ;
  }
  ioObject.mProperty_mXIB_5F_fileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 60)) ;
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 68)) ;
  }
  ioObject.mProperty_mFrameworkFileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 69)) ;
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 77)) ;
  }
  ioObject.mProperty_m_5F_Swift_5F_FileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 78)) ;
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 86)) ;
  }
  ioObject.mProperty_m_5F_M_5F_FileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 87)) ;
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 95)) ;
  }
  ioObject.mProperty_m_5F_MM_5F_FileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 96)) ;
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 104)) ;
  }
  ioObject.mProperty_mCppFileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 105)) ;
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 113)) ;
  }
  ioObject.mProperty_mCFileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 114)) ;
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 122)) ;
  }
  ioObject.mProperty_mHeaderFileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 123)) ;
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 132)) ;
  }
  ioObject.mProperty_mBuildFileList.addAssignOperation (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 133)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addToolTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inTargetName,
                                    const GGS_string constinArgument_inProductFileName,
                                    const GGS_stringlist constinArgument_inSourceList,
                                    const GGS_stringlist constinArgument_inToolFrameworksFileRefList,
                                    const GGS_stringlist constinArgument_inBuildConfigurationSettingList,
                                    GGS_string & outArgument_outTargetRef,
                                    GGS_string & outArgument_outProductFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 146)) ;
  }
  GGS_string var_buildPhaseRef_5890 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_5890, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 147)) ;
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 148)) ;
  }
  GGS_string var_buildConfigurationListRef_5987 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_5987, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 149)) ;
  }
  GGS_string var_buildConfigurationRef_6050 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_6050, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 150)) ;
  }
  GGS_string var_frameworkBuildRef_6109 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_6109, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 151)) ;
  }
  ioObject.mProperty_mToolTargetList.addAssignOperation (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_5890, var_buildConfigurationListRef_5987, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_6050, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef_6109  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 152)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addAppTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inTargetName,
                                   const GGS_string constinArgument_inProductFileName,
                                   const GGS_stringlist constinArgument_inSourceList,
                                   const GGS_stringlist constinArgument_inFrameworksFileRefList,
                                   const GGS_stringlist constinArgument_inResourceFileBuildRefs,
                                   const GGS_stringlist constinArgument_inBuildConfigurationSettingList,
                                   const GGS_stringlist constinArgument_inDependentTargetRefList,
                                   const GGS__32_stringlist constinArgument_inProductCopyList,
                                   GGS_string & outArgument_outProductFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 178)) ;
  }
  GGS_string var_buildPhaseRef_7172 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_7172, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 179)) ;
  }
  GGS_string var_targetRef_7223 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_targetRef_7223, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 180)) ;
  }
  GGS_string var_buildConfigurationListRef_7270 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_7270, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 181)) ;
  }
  GGS_string var_buildConfigurationRef_7333 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_7333, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 182)) ;
  }
  GGS_string var_frameworkBuildRef_7392 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_7392, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 183)) ;
  }
  GGS_string var_resourceBuildRef_7447 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_resourceBuildRef_7447, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 184)) ;
  }
  GGS__32_stringlist var_dependentTargets_7484 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_7514 (constinArgument_inDependentTargetRefList) ;
  while (enumerator_7514.hasCurrentObject ()) {
    GGS_string var_dependencyBuildRef_7588 ;
    {
    extensionSetter_getReferenceKey (ioObject, var_dependencyBuildRef_7588, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 187)) ;
    }
    var_dependentTargets_7484.addAssignOperation (var_dependencyBuildRef_7588, enumerator_7514.current_mValue (HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 188)) ;
    enumerator_7514.gotoNextObject () ;
  }
  GGS_stringlist var_resourceFileBuildRefs_7681 = constinArgument_inResourceFileBuildRefs ;
  UpEnumerator__32_stringlist enumerator_7740 (constinArgument_inProductCopyList) ;
  while (enumerator_7740.hasCurrentObject ()) {
    GGS_string var_buildRef_7847 ;
    {
    extensionSetter_addBuildFile (ioObject, enumerator_7740.current_mValue_30_ (HERE), enumerator_7740.current_mValue_31_ (HERE), var_buildRef_7847, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 192)) ;
    }
    var_resourceFileBuildRefs_7681.addAssignOperation (var_buildRef_7847  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 193)) ;
    enumerator_7740.gotoNextObject () ;
  }
  ioObject.mProperty_mAppTargetList.addAssignOperation (var_targetRef_7223, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_7172, var_buildConfigurationListRef_7270, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_7333, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef_7392, var_dependentTargets_7484, var_resourceBuildRef_7447, var_resourceFileBuildRefs_7681  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 195)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inGroupName,
                               const GGS_string constinArgument_inGroupPath,
                               const GGS_stringlist constinArgument_inChildrenRefs,
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
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 221)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 224)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 227)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 229)) ;
  }
  ioObject.mProperty_mGroupList.addAssignOperation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 230)) ;
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
                                        GGS_stringlist & ioArgument_ioCFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioCppFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioSwiftFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioFrameWorkFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioResourceFileBuildRefs,
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
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 246)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 249)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 252)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 254)) ;
  }
  GGS_stringlist var_childrenRefs_10044 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringset enumerator_10070 (constinArgument_inFileNames) ;
  while (enumerator_10070.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, enumerator_10070.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 258)).objectCompare (GGS_string ("c"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_string var_cFileRef_10183 ;
        {
        extensionSetter_addCFile (ioObject, enumerator_10070.current_key (HERE), var_cFileRef_10183, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 259)) ;
        }
        var_childrenRefs_10044.addAssignOperation (var_cFileRef_10183  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 260)) ;
        GGS_string var_buildRef_10306 ;
        {
        extensionSetter_addBuildFile (ioObject, var_cFileRef_10183, enumerator_10070.current_key (HERE), var_buildRef_10306, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 261)) ;
        }
        ioArgument_ioCFileBuildRefs.addAssignOperation (var_buildRef_10306  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 262)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, enumerator_10070.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 263)).objectCompare (GGS_string ("cpp"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_string var_cppFileRef_10451 ;
          {
          extensionSetter_addCppFile (ioObject, enumerator_10070.current_key (HERE), var_cppFileRef_10451, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 264)) ;
          }
          var_childrenRefs_10044.addAssignOperation (var_cppFileRef_10451  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 265)) ;
          GGS_string var_buildRef_10580 ;
          {
          extensionSetter_addBuildFile (ioObject, var_cppFileRef_10451, enumerator_10070.current_key (HERE), var_buildRef_10580, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 266)) ;
          }
          ioArgument_ioCppFileBuildRefs.addAssignOperation (var_buildRef_10580  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 267)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::equal, enumerator_10070.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 268)).objectCompare (GGS_string ("h"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_string var_headerFileRef_10728 ;
            {
            extensionSetter_addHeaderFile (ioObject, enumerator_10070.current_key (HERE), var_headerFileRef_10728, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 269)) ;
            }
            var_childrenRefs_10044.addAssignOperation (var_headerFileRef_10728  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 270)) ;
          }
        }
        if (GalgasBool::boolFalse == test_8) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, enumerator_10070.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 271)).objectCompare (GGS_string ("framework"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GGS_string var_framework_5F_FileRef_10891 ;
              {
              extensionSetter_addFrameworkFile (ioObject, enumerator_10070.current_key (HERE), var_framework_5F_FileRef_10891, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 272)) ;
              }
              GGS_string var_buildRef_11000 ;
              {
              extensionSetter_addBuildFile (ioObject, var_framework_5F_FileRef_10891, enumerator_10070.current_key (HERE), var_buildRef_11000, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 273)) ;
              }
              var_childrenRefs_10044.addAssignOperation (var_framework_5F_FileRef_10891  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 274)) ;
              ioArgument_ioFrameWorkFileBuildRefs.addAssignOperation (var_buildRef_11000  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 275)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, enumerator_10070.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 276)).objectCompare (GGS_string ("plist"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GGS_string var_resource_5F_FileRef_11202 ;
                {
                extensionSetter_addInfoPlistFile (ioObject, enumerator_10070.current_key (HERE), var_resource_5F_FileRef_11202, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 277)) ;
                }
                var_childrenRefs_10044.addAssignOperation (var_resource_5F_FileRef_11202  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 278)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GalgasBool test_11 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, enumerator_10070.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 279)).objectCompare (GGS_string ("xib"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                  GGS_string var_resource_5F_FileRef_11359 ;
                  {
                  extensionSetter_addXIBFile (ioObject, enumerator_10070.current_key (HERE), var_resource_5F_FileRef_11359, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 280)) ;
                  }
                  var_childrenRefs_10044.addAssignOperation (var_resource_5F_FileRef_11359  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 281)) ;
                  GGS_string var_buildRef_11506 ;
                  {
                  extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11359, enumerator_10070.current_key (HERE), var_buildRef_11506, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 282)) ;
                  }
                  ioArgument_ioResourceFileBuildRefs.addAssignOperation (var_buildRef_11506  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 283)) ;
                }
              }
              if (GalgasBool::boolFalse == test_11) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, enumerator_10070.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 284)).objectCompare (GGS_string ("tiff"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    GGS_string var_resource_5F_FileRef_11661 ;
                    {
                    extensionSetter_addTIFF_5F_file (ioObject, enumerator_10070.current_key (HERE), var_resource_5F_FileRef_11661, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 285)) ;
                    }
                    var_childrenRefs_10044.addAssignOperation (var_resource_5F_FileRef_11661  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 286)) ;
                    GGS_string var_buildRef_11808 ;
                    {
                    extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11661, enumerator_10070.current_key (HERE), var_buildRef_11808, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 287)) ;
                    }
                    ioArgument_ioResourceFileBuildRefs.addAssignOperation (var_buildRef_11808  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 288)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  GalgasBool test_13 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_13) {
                    test_13 = GGS_bool (ComparisonKind::equal, enumerator_10070.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 289)).objectCompare (GGS_string ("icns"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_13) {
                      GGS_string var_resource_5F_FileRef_11963 ;
                      {
                      extensionSetter_addICNS_5F_file (ioObject, enumerator_10070.current_key (HERE), var_resource_5F_FileRef_11963, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 290)) ;
                      }
                      var_childrenRefs_10044.addAssignOperation (var_resource_5F_FileRef_11963  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 291)) ;
                      GGS_string var_buildRef_12110 ;
                      {
                      extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11963, enumerator_10070.current_key (HERE), var_buildRef_12110, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 292)) ;
                      }
                      ioArgument_ioResourceFileBuildRefs.addAssignOperation (var_buildRef_12110  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 293)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_13) {
                    GalgasBool test_14 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_14) {
                      test_14 = GGS_bool (ComparisonKind::equal, enumerator_10070.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 294)).objectCompare (GGS_string ("swift"))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_14) {
                        GGS_string var_swiftFileRef_12266 ;
                        {
                        extensionSetter_addSwiftFile (ioObject, enumerator_10070.current_key (HERE), var_swiftFileRef_12266, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 295)) ;
                        }
                        GGS_string var_buildRef_12365 ;
                        {
                        extensionSetter_addBuildFile (ioObject, var_swiftFileRef_12266, enumerator_10070.current_key (HERE), var_buildRef_12365, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 296)) ;
                        }
                        var_childrenRefs_10044.addAssignOperation (var_swiftFileRef_12266  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 297)) ;
                        ioArgument_ioSwiftFileBuildRefs.addAssignOperation (var_buildRef_12365  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 298)) ;
                      }
                    }
                    if (GalgasBool::boolFalse == test_14) {
                      GenericArray <FixItDescription> fixItArray15 ;
                      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("XcodeProjectGeneration.galgas3", 300)), GGS_string ("unhandled extension for file '").add_operation (enumerator_10070.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 300)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 300)), fixItArray15  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 300)) ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_10070.gotoNextObject () ;
  }
  ioObject.mProperty_mGroupList.addAssignOperation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, var_childrenRefs_10044  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas3", 303)) ;
}


