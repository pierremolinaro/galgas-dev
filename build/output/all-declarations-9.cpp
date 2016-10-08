#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"




//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GALGAS_formalParameterListAST & outArgument_outFormalParameterList,
                                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_2718 ;
      GALGAS_formalArgumentPassingModeAST var_mFormalParameterPassingMode_2780 ;
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        var_selector_2718 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 35)) ;
        var_mFormalParameterPassingMode_2780 = GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 36)) ;
      } break ;
      case 2: {
        var_selector_2718 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 38)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 39)) ;
        var_mFormalParameterPassingMode_2780 = GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 40)) ;
      } break ;
      case 3: {
        var_selector_2718 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 42)) ;
        var_mFormalParameterPassingMode_2780 = GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 43)) ;
      } break ;
      case 4: {
        var_selector_2718 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 45)) ;
        var_mFormalParameterPassingMode_2780 = GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 46)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_3288 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
      GALGAS_bool var_mIsUnused_3308 ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_mIsUnused_3308 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 53)) ;
        var_mIsUnused_3308 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_3448 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 56)) ;
      outArgument_outFormalParameterList.addAssign_operation (var_selector_2718, var_mFormalParameterPassingMode_2780, var_mFormalParameterTypeName_3288, var_mFormalParameterName_3448, var_mIsUnused_3308  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 57)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 35)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 38)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 39)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 42)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 45)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 53)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 56)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 35)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 38)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 39)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 42)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 45)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 48)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 53)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 56)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_ (GALGAS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  outArgument_outActualParameterList = GALGAS_actualParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 75)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_4402 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 78)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 80)) ;
        outArgument_outActualParameterList.addAssign_operation (GALGAS_inputSingleJokerActualParameterAST::constructor_new (var_selector_4402  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 81))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 81)) ;
      } break ;
      case 2: {
        GALGAS_luint var_count_4534 ;
        var_count_4534 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 85)) ;
        GALGAS_uint var_n_4579 = var_count_4534.getter_uint (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 86)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector_4402.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_selector_4402.getter_location (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 88)), GALGAS_string ("the selector should be '\?'"), fixItArray2  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 88)) ;
        }
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_n_4579.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_count_4534.getter_location (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 91)), GALGAS_string ("the count value should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 91)) ;
        }else if (kBoolFalse == test_3) {
          if (var_n_4579.isValid ()) {
            uint32_t variant_4791 = var_n_4579.uintValue () ;
            bool loop_4791 = true ;
            while (loop_4791) {
              loop_4791 = GALGAS_bool (kIsStrictSup, var_n_4579.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
              if (loop_4791) {
                loop_4791 = GALGAS_bool (kIsStrictSup, var_n_4579.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
              }
              if (loop_4791 && (0 == variant_4791)) {
                loop_4791 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 93)) ;
              }
              if (loop_4791) {
                variant_4791 -- ;
                outArgument_outActualParameterList.addAssign_operation (GALGAS_inputJokerActualParameterAST::constructor_new (var_selector_4402.mAttribute_location, var_n_4579  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 95))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 95)) ;
                var_n_4579.minusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 96)) ;
              }
            }
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      GALGAS_lstring var_selector_4990 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 101)) ;
      GALGAS_semanticExpressionAST var_e_5037 ;
      nt_expression_ (var_e_5037, inCompiler) ;
      GALGAS_location var_endOfExpressionLocation_5079 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 103)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::constructor_new (var_selector_4990, var_e_5037, var_endOfExpressionLocation_5079  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 104))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 104)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_5252 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 110)) ;
      GALGAS_lstring var_outputInputActualParameterName_5296 ;
      var_outputInputActualParameterName_5296 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 112)) ;
      GALGAS_lstringlist var_structAttributeList_5373 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 113)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 116)) ;
          GALGAS_lstring var_structAttributeName_5465 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 117)) ;
          var_structAttributeList_5373.addAssign_operation (var_structAttributeName_5465  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 118)) ;
        } break ;
        default:
          repeatFlag_5 = false ;
          break ;
        }
      }
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputActualParameterAST::constructor_new (var_selector_5252, var_outputInputActualParameterName_5296, var_structAttributeList_5373  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 120))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 120)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_5710 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 127)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputSingleJokerParameterAST::constructor_new (var_selector_5710  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 128))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 128)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector_5832 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 130)) ;
      GALGAS_luint var_count_5863 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 132)) ;
      GALGAS_uint var_n_5881 = var_count_5863.getter_uint (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 133)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_selector_5832.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_selector_5832.getter_location (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 135)), GALGAS_string ("the selector should be '!\?'"), fixItArray7  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 135)) ;
      }
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_n_5881.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_count_5863.getter_location (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 138)), GALGAS_string ("the count value should be > 0"), fixItArray9  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 138)) ;
      }else if (kBoolFalse == test_8) {
        if (var_n_5881.isValid ()) {
          uint32_t variant_6081 = var_n_5881.uintValue () ;
          bool loop_6081 = true ;
          while (loop_6081) {
            loop_6081 = GALGAS_bool (kIsStrictSup, var_n_5881.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
            if (loop_6081) {
              loop_6081 = GALGAS_bool (kIsStrictSup, var_n_5881.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
            }
            if (loop_6081 && (0 == variant_6081)) {
              loop_6081 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 140)) ;
            }
            if (loop_6081) {
              variant_6081 -- ;
              outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputJokerParameterAST::constructor_new (var_selector_5832.mAttribute_location, var_n_5881  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 142))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 142)) ;
              var_n_5881.minusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 143)) ;
            }
          }
        }
      }
    } break ;
    case 7: {
      GALGAS_lstring var_selector_6299 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 147)) ;
      GALGAS_lstring var_inputActualParameterName_6346 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 148)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualExistingVariableParameterAST::constructor_new (var_selector_6299, var_inputActualParameterName_6346  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 149))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 149)) ;
    } break ;
    case 8: {
      GALGAS_lstring var_selector_6541 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 155)) ;
      GALGAS_lstring var_declarationTypeName_6584 ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
        var_declarationTypeName_6584 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 158)) ;
      } break ;
      case 2: {
        var_declarationTypeName_6584 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 160)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_6733 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 162)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_6541, var_declarationTypeName_6584, var_inputActualParameterName_6733  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 163))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 163)) ;
    } break ;
    case 9: {
      GALGAS_lstring var_selector_6960 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 168)) ;
      GALGAS_lstring var_declarationTypeName_7006 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      GALGAS_lstring var_inputActualParameterName_7053 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 170)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_6960, var_declarationTypeName_7006, var_inputActualParameterName_7053  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 171))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 171)) ;
    } break ;
    case 10: {
      GALGAS_lstring var_selector_7269 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 177)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      GALGAS_lstring var_declarationTypeName_7312 ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
        var_declarationTypeName_7312 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 181)) ;
      } break ;
      case 2: {
        var_declarationTypeName_7312 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 183)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_bool var_markedAsUnused_7439 ;
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
        var_markedAsUnused_7439 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 189)) ;
        var_markedAsUnused_7439 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_7584 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 192)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewConstantParameterAST::constructor_new (var_selector_7269, var_declarationTypeName_7312, var_inputActualParameterName_7584, var_markedAsUnused_7439  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 193))  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 193)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 78)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 80)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 85)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 101)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 110)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 112)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 116)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 117)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 127)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 130)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 132)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 147)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 148)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 155)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 160)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 162)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 168)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 170)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 177)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 183)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 189)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 192)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 78)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 80)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 84)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 85)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 101)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 110)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 112)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 116)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 117)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 126)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 127)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 130)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 131)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 132)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 147)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 148)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 155)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 160)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 162)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 168)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 169)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 170)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 177)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 178)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 183)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 189)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 192)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_ (GALGAS_formalInputParameterListAST & outArgument_outFormalInputParameterList,
                                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 209)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      GALGAS_bool var_isConstant_8543 ;
      GALGAS_lstring var_selector_8565 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 213)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
        var_isConstant_8543 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 217)) ;
        var_isConstant_8543 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_8703 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 220)) ;
      GALGAS_bool var_mIsUnused_8723 ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
        var_mIsUnused_8723 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 225)) ;
        var_mIsUnused_8723 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_8863 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 228)) ;
      outArgument_outFormalInputParameterList.addAssign_operation (var_selector_8565, var_mFormalParameterTypeName_8703, var_mFormalParameterName_8863, var_mIsUnused_8723, var_isConstant_8543  COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 229)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 213)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 217)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 220)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 225)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 228)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 213)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 217)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 220)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 225)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3ParameterArgumentSyntax.galgas", 228)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GALGAS_semanticInstructionListAST & outArgument_outInstructionsList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 40)) ;
    } break ;
    case 3: {
      GALGAS_semanticInstructionAST var_instruction_3434 ;
      nt_semantic_5F_instruction_ (var_instruction_3434, inCompiler) ;
      outArgument_outInstructionsList.addAssign_operation (var_instruction_3434  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 43)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 40)) ;
    } break ;
    case 3: {
      nt_semantic_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 40)) ;
    } break ;
    case 3: {
      nt_semantic_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i1_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isLocal_3683 ;
  switch (select_galgas_33_InstructionsSyntax_1 (inCompiler)) {
  case 1: {
    var_isLocal_3683 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_private) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 55)) ;
    var_isLocal_3683 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  nt_declaration_5F_with_5F_private_ (var_isLocal_3683, ioArgument_ioDeclarations, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_private) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  nt_declaration_5F_with_5F_private_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_private) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 55)) ;
  } break ;
  default:
    break ;
  }
  nt_declaration_5F_with_5F_private_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 69)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 70)) ;
  GALGAS_lstring var_mActionName_4544 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 71)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_4647 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList_4647, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_externRoutineDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mActionName_4544, var_mFormalParameterList_4647  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 73))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 73)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 69)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 70)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 71)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 69)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 70)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 71)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_ (const GALGAS_bool constinArgument_inIsPrivate,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 95)) ;
  GALGAS_lstring var_mRoutineName_5725 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 96)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_5828 ;
  nt_formal_5F_parameter_5F_list_ (var_mFormalParameterList_5828, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 98)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_5921 ;
  nt_semantic_5F_instruction_5F_list_ (var_mRoutineInstructionList_5921, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 100)) ;
  GALGAS_location var_endOfInstructionList_5954 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 101)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::constructor_new (GALGAS_bool (false), constinArgument_inIsPrivate, var_mRoutineName_5725, var_mFormalParameterList_5828, var_mRoutineInstructionList_5921, var_endOfInstructionList_5954  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 102))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 95)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 96)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 98)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 100)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 95)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 96)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 98)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 100)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_ (const GALGAS_bool constinArgument_inIsPrivate,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 126)) ;
  GALGAS_bool var_isOnce_7066 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_7090 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_7156 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 131)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_attribute_7156.mAttribute_string.objectCompare (GALGAS_string ("once"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_isOnce_7066.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          fixItArray3.addObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (var_attribute_7156.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 134)), GALGAS_string ("duplicate attribute"), fixItArray3  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 134)) ;
        }
        var_isOnce_7066 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_attribute_7156.mAttribute_string.objectCompare (GALGAS_string ("usefull"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = var_isUsefull_7090.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            fixItArray6.addObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (var_attribute_7156.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 139)), GALGAS_string ("duplicate attribute"), fixItArray6  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 139)) ;
          }
          var_isUsefull_7090 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%once")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("%usefull")) ;
          inCompiler->emitSemanticError (var_attribute_7156.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 143)), GALGAS_string ("invalid attribute"), fixItArray7  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 143)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_7623 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 146)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_7742 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_7742, inCompiler) ;
  const enumGalgasBool test_8 = var_isOnce_7066.operator_and (GALGAS_bool (kIsStrictSup, var_formalInputParameterList_7742.getter_length (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 148)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 148)).boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (var_functionName_7623.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 149)), GALGAS_string ("an 'once' function should has no argument"), fixItArray9  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 149)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 151)) ;
  GALGAS_lstring var_resultTypeName_7912 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 152)) ;
  GALGAS_lstring var_resultVariableName_7942 ;
  switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
    var_resultVariableName_7942 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 155)) ;
  } break ;
  case 2: {
    var_resultVariableName_7942 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 157))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 157)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 159)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_8141 ;
  nt_semantic_5F_instruction_5F_list_ (var_functionInstructionList_8141, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 161)) ;
  GALGAS_location var_endOfFunctionInstructionList_8182 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 162)) ;
  const enumGalgasBool test_10 = var_isOnce_7066.boolEnum () ;
  if (kBoolTrue == test_10) {
    ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_7623, var_resultTypeName_7912, var_resultVariableName_7942, var_functionInstructionList_8141, var_endOfFunctionInstructionList_8182, constinArgument_inIsPrivate, var_isUsefull_7090  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 164))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 164)) ;
  }else if (kBoolFalse == test_10) {
    ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_7623, var_formalInputParameterList_7742, var_resultTypeName_7912, var_resultVariableName_7942, var_functionInstructionList_8141, var_endOfFunctionInstructionList_8182, constinArgument_inIsPrivate, var_isUsefull_7090  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 175))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 175)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 131)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 146)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 151)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 152)) ;
  switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 155)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 159)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 161)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_with_5F_private_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 131)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 146)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 151)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 152)) ;
  switch (select_galgas_33_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 155)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 159)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 161)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 200)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 201)) ;
  GALGAS_lstring var_mActionName_9701 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 202)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_9820 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_9820, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 204)) ;
  GALGAS_lstring var_resultTypeName_9857 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 205)) ;
  GALGAS_lstring var_resultVariableName_9887 ;
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    var_resultVariableName_9887 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 208)) ;
  } break ;
  case 2: {
    var_resultVariableName_9887 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 210))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 210)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_externFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_mActionName_9701, var_formalInputParameterList_9820, var_resultTypeName_9857, var_resultVariableName_9887  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 212))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 212)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 200)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 201)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 202)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 204)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 205)) ;
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 208)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 200)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 201)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 202)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 204)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 205)) ;
  switch (select_galgas_33_InstructionsSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 208)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 235)) ;
  GALGAS_lstring var_typeName_11181 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 236)) ;
  GALGAS_lstring var_variableName_11214 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 237)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 238)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_11280 ;
  nt_expression_ (var_sourceExpression_11280, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_11181.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 241)), GALGAS_bool (false), var_typeName_11181, var_variableName_11214, var_sourceExpression_11280  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 240)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 235)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 236)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 237)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 238)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 235)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 236)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 237)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 238)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_11671 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 252)) ;
  GALGAS_lstring var_variableName_11704 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 253)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 254)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_11770 ;
  nt_expression_ (var_sourceExpression_11770, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_11671.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 257)), GALGAS_bool (false), var_typeName_11671, var_variableName_11704, var_sourceExpression_11770  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 256)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 252)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 253)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 254)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 252)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 253)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 254)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i8_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_outResult,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outResult.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_13040 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 282)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selector_13040.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_selector_13040.getter_location (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 284)), GALGAS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 284)) ;
  }
  switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 287)) ;
    outArgument_outResult = GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 288))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 288)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_actualParameterTypeName_13284 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 290)) ;
    GALGAS_lstring var_actualParameterName_13326 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 291)) ;
    outArgument_outResult = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (var_actualParameterTypeName_13284, var_actualParameterName_13326  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 292)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 294)) ;
    GALGAS_lstring var_actualParameterTypeName_13514 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 295)) ;
    GALGAS_lstring var_actualParameterName_13556 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 296)) ;
    outArgument_outResult = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (var_actualParameterTypeName_13514, var_actualParameterName_13556  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 297)) ;
  } break ;
  case 4: {
    GALGAS_lstring var_actualParameterName_13737 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 299)) ;
    outArgument_outResult = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (var_actualParameterName_13737  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 300)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 282)) ;
  switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 287)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 290)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 291)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 294)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 295)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 296)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 299)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 282)) ;
  switch (select_galgas_33_InstructionsSyntax_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 287)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 290)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 291)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 294)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 295)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 296)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 299)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i9_ (GALGAS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GALGAS_actualInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 353)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_16010 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 356)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 357)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_16010, GALGAS_inputParameterAnonymousVariable::constructor_new (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 358))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 358)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_16131 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 360)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 361)) ;
      GALGAS_lstring var_actualParameterTypeName_16178 ;
      switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_16178 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 364)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_16178 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 366)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_16330 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 368)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_16131, GALGAS_inputParameterDeclaredVariable::constructor_new (var_actualParameterTypeName_16178, var_actualParameterName_16330  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 371))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 369)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_16502 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 373)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 374)) ;
      GALGAS_lstring var_actualParameterTypeName_16549 ;
      switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_16549 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 377)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_16549 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 379)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_16701 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 381)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_16502, GALGAS_inputParameterDeclaredConstant::constructor_new (var_actualParameterTypeName_16549, var_actualParameterName_16701  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 384))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 382)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_16873 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 386)) ;
      GALGAS_lstring var_actualParameterName_16915 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 387)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_16873, GALGAS_inputParameterVariable::constructor_new (var_actualParameterName_16915  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 388))  COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 388)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 356)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 357)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 360)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 361)) ;
      switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 366)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 368)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 373)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 374)) ;
      switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 379)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 381)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 386)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 387)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 356)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 357)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 360)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 361)) ;
      switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 366)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 368)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 373)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 374)) ;
      switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 379)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 381)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 386)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3InstructionsSyntax.galgas", 387)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mTargetVariableName_960 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  GALGAS_lstringlist var_mStructAttributeList_989 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-assignment.galgas", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 25)) ;
      GALGAS_lstring var_attributeName_1075 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 26)) ;
      var_mStructAttributeList_989.addAssign_operation (var_attributeName_1075  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 27)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 29)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_1199 ;
  nt_expression_ (var_mSourceExpression_1199, inCompiler) ;
  outArgument_outInstruction = GALGAS_assignmentInstructionAST::constructor_new (var_mTargetVariableName_960.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 32)), var_mTargetVariableName_960, var_mStructAttributeList_989, var_mSourceExpression_1199  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 25)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 29)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 25)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 29)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_ (GALGAS_castInstructionBranchListAST & ioArgument_ioCastInstructionBranchList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  GALGAS_dynamicTypeComparisonKind var_kind_1437 ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
    var_kind_1437 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("instruction-cast.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
    var_kind_1437 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("instruction-cast.galgas", 38)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
    var_kind_1437 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("instruction-cast.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mTypeName_1605 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  GALGAS_lstring var_mConstantVarName_1635 ;
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    var_mConstantVarName_1635 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
    var_mConstantVarName_1635 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 48))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 48)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  GALGAS_semanticInstructionListAST var_mCastBranchInstructionList_1892 ;
  nt_semantic_5F_instruction_5F_list_ (var_mCastBranchInstructionList_1892, inCompiler) ;
  ioArgument_ioCastInstructionBranchList.addAssign_operation (var_mTypeName_1605, var_mConstantVarName_1635, var_mCastBranchInstructionList_1892, var_kind_1437, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 57))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  switch (select_galgas_33_InstructionsSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_ (GALGAS_semanticInstructionListAST & outArgument_outElseOrDefault,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outElseOrDefault.drop () ; // Release 'out' argument
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
    outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 64)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_ (outArgument_outElseOrDefault, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    GALGAS_location var_instructionLocation_2410 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 70)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    GALGAS_semanticExpressionAST var_errorLocationExpression_2512 ;
    nt_expression_ (var_errorLocationExpression_2512, inCompiler) ;
    outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 73)) ;
    GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 77)) ;
    temp_0.addAssign_operation (GALGAS_string ("cast instruction run-time error")  COMMA_SOURCE_FILE ("instruction-cast.galgas", 77)) ;
    outArgument_outElseOrDefault.addAssign_operation (GALGAS_errorInstructionAST::constructor_new (var_instructionLocation_2410, var_errorLocationExpression_2512, GALGAS_literalStringExpressionAST::constructor_new (var_instructionLocation_2410, temp_0  COMMA_SOURCE_FILE ("instruction-cast.galgas", 77)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 78)), GALGAS_fixitListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 79))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 74))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 74)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_cast) COMMA_SOURCE_FILE ("instruction-cast.galgas", 88)) ;
  GALGAS_location var_instructionLocation_3043 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 89)) ;
  GALGAS_semanticExpressionAST var_expression_3116 ;
  nt_expression_ (var_expression_3116, inCompiler) ;
  GALGAS_castInstructionBranchListAST var_mCastInstructionBranchList_3151 = GALGAS_castInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 91)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_ (var_mCastInstructionBranchList_3151, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_semanticInstructionListAST var_mElseOrDefault_3351 ;
  nt_cast_5F_else_5F_or_5F_default_ (var_mElseOrDefault_3351, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-cast.galgas", 97)) ;
  switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_3423 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-cast.galgas", 100)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_terminator_3423.mAttribute_string.objectCompare (GALGAS_string ("cast"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%cast")) ;
      inCompiler->emitSemanticError (var_terminator_3423.getter_location (SOURCE_FILE ("instruction-cast.galgas", 102)), GALGAS_string ("the terminator attribute should be '%cast'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-cast.galgas", 102)) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfInstructionLocation_3614 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 105)) ;
  outArgument_outInstruction = GALGAS_structuredCastInstructionAST::constructor_new (var_instructionLocation_3043, var_expression_3116, var_mCastInstructionBranchList_3151, var_mElseOrDefault_3351, var_endOfInstructionLocation_3614  COMMA_SOURCE_FILE ("instruction-cast.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_cast) COMMA_SOURCE_FILE ("instruction-cast.galgas", 88)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-cast.galgas", 97)) ;
  switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-cast.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_cast) COMMA_SOURCE_FILE ("instruction-cast.galgas", 88)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-cast.galgas", 97)) ;
  switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-cast.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mReceiverName_2127 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-concat.galgas", 52)) ;
  GALGAS_location var_instructionLocation_2155 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 53)) ;
  GALGAS_lstringlist var_mStructAttributeList_2210 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 54)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 57)) ;
      GALGAS_lstring var_attributeName_2284 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-concat.galgas", 58)) ;
      var_mStructAttributeList_2210.addAssign_operation (var_attributeName_2284  COMMA_SOURCE_FILE ("instruction-concat.galgas", 59)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
    GALGAS_semanticExpressionAST var_expression_2417 ;
    nt_expression_ (var_expression_2417, inCompiler) ;
    outArgument_outInstruction = GALGAS_minusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2155, var_mReceiverName_2127, var_mStructAttributeList_2210, var_expression_2417  COMMA_SOURCE_FILE ("instruction-concat.galgas", 64)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 71)) ;
    switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
    case 1: {
      GALGAS_actualOutputExpressionList var_expressionList_2714 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList_2714, inCompiler) ;
      outArgument_outInstruction = GALGAS_plusEqualElementsInstructionAST::constructor_new (var_instructionLocation_2155, var_mReceiverName_2127, var_mStructAttributeList_2210, var_expressionList_2714  COMMA_SOURCE_FILE ("instruction-concat.galgas", 74)) ;
    } break ;
    case 2: {
      GALGAS_semanticExpressionAST var_expression_2971 ;
      nt_expression_ (var_expression_2971, inCompiler) ;
      outArgument_outInstruction = GALGAS_plusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2155, var_mReceiverName_2127, var_mStructAttributeList_2210, var_expression_2971  COMMA_SOURCE_FILE ("instruction-concat.galgas", 82)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 90)) ;
    GALGAS_semanticExpressionAST var_expression_3243 ;
    nt_expression_ (var_expression_3243, inCompiler) ;
    outArgument_outInstruction = GALGAS_mulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2155, var_mReceiverName_2127, var_mStructAttributeList_2210, var_expression_3243  COMMA_SOURCE_FILE ("instruction-concat.galgas", 92)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2F__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 99)) ;
    GALGAS_semanticExpressionAST var_expression_3492 ;
    nt_expression_ (var_expression_3492, inCompiler) ;
    outArgument_outInstruction = GALGAS_divEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2155, var_mReceiverName_2127, var_mStructAttributeList_2210, var_expression_3492  COMMA_SOURCE_FILE ("instruction-concat.galgas", 101)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-concat.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 57)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-concat.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 71)) ;
    switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
    case 1: {
      nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 90)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2F__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 99)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-concat.galgas", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 57)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-concat.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 71)) ;
    switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
    case 1: {
      nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 90)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2F__3D_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 99)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i15_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 113)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_3955 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 115)) ;
    GALGAS_semanticExpressionAST var_expression_4013 ;
    nt_expression_ (var_expression_4013, inCompiler) ;
    outArgument_outExpressionList.addAssign_operation (var_selector_3955, var_expression_4013, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 117))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 117)) ;
    switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 115)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("instruction-concat.galgas", 115)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("instruction-drop.galgas", 19)) ;
  GALGAS_location var_instructionLocation_866 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas", 20)) ;
  GALGAS_lstringlist var_dropList_909 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-drop.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_variableName_962 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-drop.galgas", 23)) ;
    var_dropList_909.addAssign_operation (var_variableName_962  COMMA_SOURCE_FILE ("instruction-drop.galgas", 24)) ;
    switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-drop.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_dropInstructionAST::constructor_new (var_instructionLocation_866, var_dropList_909  COMMA_SOURCE_FILE ("instruction-drop.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("instruction-drop.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-drop.galgas", 23)) ;
    switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-drop.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("instruction-drop.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-drop.galgas", 23)) ;
    switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-drop.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i17_ (GALGAS_fixitListAST & outArgument_outFixitListAST,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GALGAS_fixitListAST::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 36)) ;
  switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_fixit) COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    GALGAS_bool var_hasFixItRemove_1596 = GALGAS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_remove) COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
        const enumGalgasBool test_1 = var_hasFixItRemove_1596.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.addObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 46)), GALGAS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas", 46)) ;
        }else if (kBoolFalse == test_1) {
          outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 48))  COMMA_SOURCE_FILE ("instruction-error.galgas", 48)) ;
          var_hasFixItRemove_1596 = GALGAS_bool (true) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        GALGAS_location var_errorLocation_1896 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 53)) ;
        GALGAS_semanticExpressionAST var_expression_1973 ;
        nt_expression_ (var_expression_1973, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItReplace (var_expression_1973, var_errorLocation_1896  COMMA_SOURCE_FILE ("instruction-error.galgas", 55))  COMMA_SOURCE_FILE ("instruction-error.galgas", 55)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_after) COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        GALGAS_location var_errorLocation_2116 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 58)) ;
        GALGAS_semanticExpressionAST var_expression_2193 ;
        nt_expression_ (var_expression_2193, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertAfter (var_expression_2193, var_errorLocation_2116  COMMA_SOURCE_FILE ("instruction-error.galgas", 60))  COMMA_SOURCE_FILE ("instruction-error.galgas", 60)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_before) COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        GALGAS_location var_errorLocation_2341 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 63)) ;
        GALGAS_semanticExpressionAST var_expression_2418 ;
        nt_expression_ (var_expression_2418, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertBefore (var_expression_2418, var_errorLocation_2341  COMMA_SOURCE_FILE ("instruction-error.galgas", 65))  COMMA_SOURCE_FILE ("instruction-error.galgas", 65)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_fixit) COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_remove) COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_after) COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_before) COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        nt_expression_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_fixit) COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_21 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_remove) COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_after) COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_before) COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i18_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  GALGAS_location var_instructionLocation_2779 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 75)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_2861 ;
  nt_expression_ (var_mReceiverExpression_2861, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  GALGAS_semanticExpressionAST var_mErrorExpression_2931 ;
  nt_expression_ (var_mErrorExpression_2931, inCompiler) ;
  GALGAS_lstringlist var_mBuiltVariableList_2958 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 79)) ;
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_builtVariableName_3059 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      var_mBuiltVariableList_2958.addAssign_operation (var_builtVariableName_3059  COMMA_SOURCE_FILE ("instruction-error.galgas", 85)) ;
      switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_fixitListAST var_fixitListAST_3199 ;
  nt_issue_5F_fixit_ (var_fixitListAST_3199, inCompiler) ;
  outArgument_outInstruction = GALGAS_errorInstructionAST::constructor_new (var_instructionLocation_2779, var_mReceiverExpression_2861, var_mErrorExpression_2931, var_mBuiltVariableList_2958, var_fixitListAST_3199  COMMA_SOURCE_FILE ("instruction-error.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i19_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 77)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 77))  COMMA_SOURCE_FILE ("instruction-for.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_luint var_count_3500 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("instruction-for.galgas", 84)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-for.galgas", 85)) ;
  GALGAS_uint var_n_3518 = var_count_3500.getter_uint (SOURCE_FILE ("instruction-for.galgas", 86)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_n_3518.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_count_3500.getter_location (SOURCE_FILE ("instruction-for.galgas", 88)), GALGAS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 88)) ;
  }
  if (var_n_3518.isValid ()) {
    uint32_t variant_3615 = var_n_3518.uintValue () ;
    bool loop_3615 = true ;
    while (loop_3615) {
      loop_3615 = GALGAS_bool (kIsStrictSup, var_n_3518.objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_3615) {
        loop_3615 = GALGAS_bool (kIsStrictSup, var_n_3518.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_3615 && (0 == variant_3615)) {
        loop_3615 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas", 90)) ;
      }
      if (loop_3615) {
        variant_3615 -- ;
        ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 91)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 91))  COMMA_SOURCE_FILE ("instruction-for.galgas", 91)) ;
        var_n_3518.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 92)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("instruction-for.galgas", 84)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-for.galgas", 85)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("instruction-for.galgas", 84)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-for.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_typeName_3958 ;
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
    var_typeName_3958 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 102)) ;
  } break ;
  case 2: {
    var_typeName_3958 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-for.galgas", 104)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_constantName_4082 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 106)) ;
  ioArgument_ioElementList.addAssign_operation (var_typeName_3958, var_constantName_4082  COMMA_SOURCE_FILE ("instruction-for.galgas", 107)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-for.galgas", 104)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-for.galgas", 104)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 114)) ;
  GALGAS_forInstructionEnumeratedObjectElementListAST var_elementList_4389 = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 115)) ;
  GALGAS_bool var_endsWithEllipsis_4466 ;
  switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 118)) ;
    var_endsWithEllipsis_4466 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_ (var_elementList_4389, inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
      var_endsWithEllipsis_4466 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 128)) ;
      var_endsWithEllipsis_4466 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-for.galgas", 132)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-for.galgas", 133)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_4811 ;
  nt_expression_ (var_enumeratedExpression_4811, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionCstListInExpAST::constructor_new (var_elementList_4389, var_endsWithEllipsis_4466, var_enumeratedExpression_4811, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 139))  COMMA_SOURCE_FILE ("instruction-for.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 114)) ;
  switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 118)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_parse (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 128)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-for.galgas", 132)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-for.galgas", 133)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 114)) ;
  switch (select_galgas_33_InstructionsSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 118)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 128)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-for.galgas", 132)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-for.galgas", 133)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_5230 ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
    var_typeName_5230 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 148)) ;
  } break ;
  case 2: {
    var_typeName_5230 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-for.galgas", 150)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_enumerationVariable_5361 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 152)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_5436 ;
  nt_expression_ (var_enumeratedExpression_5436, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionVarInExpAST::constructor_new (var_typeName_5230, var_enumerationVariable_5361, var_enumeratedExpression_5436, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 159))  COMMA_SOURCE_FILE ("instruction-for.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-for.galgas", 150)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 152)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-for.galgas", 150)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 152)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 166)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-for.galgas", 167)) ;
  GALGAS_lstring var_prefix_5865 ;
  switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
    var_prefix_5865 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 170)) ;
  } break ;
  case 2: {
    var_prefix_5865 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 172)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-for.galgas", 174)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_6021 ;
  nt_expression_ (var_enumeratedExpression_6021, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (var_prefix_5865, var_enumeratedExpression_6021, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 179))  COMMA_SOURCE_FILE ("instruction-for.galgas", 176)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 166)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-for.galgas", 167)) ;
  switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 172)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-for.galgas", 174)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 166)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-for.galgas", 167)) ;
  switch (select_galgas_33_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 172)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-for.galgas", 174)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_for) COMMA_SOURCE_FILE ("instruction-for.galgas", 186)) ;
  GALGAS_location var_instructionLocation_6404 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 187)) ;
  GALGAS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList_6451 = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 188)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_ascending_6527 ;
    switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
    case 1: {
      var_ascending_6527 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 194)) ;
      var_ascending_6527 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_abstractEnumeratedCollectionAST var_enumeratedObject_6719 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeratedObject_6719, inCompiler) ;
    var_mEnumeratedObjectList_6451.addAssign_operation (var_ascending_6527, var_enumeratedObject_6719  COMMA_SOURCE_FILE ("instruction-for.galgas", 198)) ;
    switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-for.galgas", 200)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_semanticExpressionAST var_mWhileExpression_6851 ;
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    var_mWhileExpression_6851 = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 204))  COMMA_SOURCE_FILE ("instruction-for.galgas", 204)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("instruction-for.galgas", 206)) ;
    nt_expression_ (var_mWhileExpression_6851, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_while_5F_expression_7026 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 209)) ;
  GALGAS_semanticInstructionListAST var_mBeforeInstructionList_7098 ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_7098 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 212)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_before) COMMA_SOURCE_FILE ("instruction-for.galgas", 214)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBeforeInstructionList_7098, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_before_5F_branch_7295 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 217)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-for.galgas", 218)) ;
  GALGAS_lstring var_indexVariableName_7352 ;
  switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    var_indexVariableName_7352 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 221))  COMMA_SOURCE_FILE ("instruction-for.galgas", 221)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 223)) ;
    var_indexVariableName_7352 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 224)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticInstructionListAST var_mDoInstructionList_7549 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoInstructionList_7549, inCompiler) ;
  GALGAS_location var_endof_5F_do_5F_branch_7626 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 229)) ;
  GALGAS_semanticInstructionListAST var_mBetweenInstructionList_7699 ;
  switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_7699 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 232)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_between) COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mBetweenInstructionList_7699, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_between_5F_branch_7900 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 237)) ;
  GALGAS_semanticInstructionListAST var_mAfterInstructionList_7971 ;
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_7971 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 240)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_after) COMMA_SOURCE_FILE ("instruction-for.galgas", 242)) ;
    nt_semantic_5F_instruction_5F_list_ (var_mAfterInstructionList_7971, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_after_5F_branch_8164 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 245)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-for.galgas", 246)) ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_8253 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-for.galgas", 249)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_terminator_8253.mAttribute_string.objectCompare (GALGAS_string ("for"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%for")) ;
      inCompiler->emitSemanticError (var_terminator_8253.getter_location (SOURCE_FILE ("instruction-for.galgas", 251)), GALGAS_string ("the terminator attribute should be '%for'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for.galgas", 251)) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_foreach_5F_instruction_8442 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 254)) ;
  outArgument_outInstruction = GALGAS_forInstructionAST::constructor_new (var_instructionLocation_6404, var_mEnumeratedObjectList_6451, var_indexVariableName_7352, var_mWhileExpression_6851, var_endof_5F_while_5F_expression_7026, var_mBeforeInstructionList_7098, var_endof_5F_before_5F_branch_7295, var_mBetweenInstructionList_7699, var_endof_5F_between_5F_branch_7900, var_mDoInstructionList_7549, var_endof_5F_do_5F_branch_7626, var_mAfterInstructionList_7971, var_endof_5F_after_5F_branch_8164, var_endof_5F_foreach_5F_instruction_8442  COMMA_SOURCE_FILE ("instruction-for.galgas", 255)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_for) COMMA_SOURCE_FILE ("instruction-for.galgas", 186)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 194)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-for.galgas", 200)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("instruction-for.galgas", 206)) ;
    nt_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_before) COMMA_SOURCE_FILE ("instruction-for.galgas", 214)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-for.galgas", 218)) ;
  switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 223)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 224)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_between) COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_after) COMMA_SOURCE_FILE ("instruction-for.galgas", 242)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-for.galgas", 246)) ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-for.galgas", 249)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_for) COMMA_SOURCE_FILE ("instruction-for.galgas", 186)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("instruction-for.galgas", 194)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-for.galgas", 200)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("instruction-for.galgas", 206)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_before) COMMA_SOURCE_FILE ("instruction-for.galgas", 214)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-for.galgas", 218)) ;
  switch (select_galgas_33_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-for.galgas", 223)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-for.galgas", 224)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_between) COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_after) COMMA_SOURCE_FILE ("instruction-for.galgas", 242)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-for.galgas", 246)) ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-for.galgas", 249)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_grammar) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 77)) ;
  GALGAS_location var_instructionLocation_3462 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 78)) ;
  GALGAS_lstring var_grammarComponentName_3531 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  GALGAS_lstring var_labelName_3589 ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    var_labelName_3589 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 82))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 82)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
    var_labelName_3589 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_ (var_instructionLocation_3462, var_grammarComponentName_3531, var_labelName_3589, outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_grammar) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 77)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_grammar) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 77)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_label) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 85)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 98)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_4208 ;
  nt_expression_ (var_mSourceExpression_4208, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_4238 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 100)) ;
  GALGAS_actualParameterListAST var_actualParameterList_4332 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_4332, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_4498 ;
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_4498 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 105)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 107)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_4498, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInFileInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_mSourceExpression_4208, var_endOfSourceExpression_4238, var_actualParameterList_4332, var_grammarInstructionSyntaxDirectedTranslationResult_4498  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 110)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 98)) ;
  nt_expression_parse (inCompiler) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 107)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 98)) ;
  nt_expression_indexing (inCompiler) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 107)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_on) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 129)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_5398 ;
  GALGAS_location var_endOfSourceExpression_5434 ;
  GALGAS_semanticExpressionAST var_nameExpression_5476 ;
  GALGAS_location var_endOfNameExpression_5510 ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
    nt_expression_ (var_sourceExpression_5398, inCompiler) ;
    var_endOfSourceExpression_5434 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 136)) ;
    GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 137)) ;
    temp_0.addAssign_operation (GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 137)) ;
    var_nameExpression_5476 = GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 137)), temp_0  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 137)) ;
    var_endOfNameExpression_5510 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 138)) ;
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 139)), GALGAS_string ("obsolete syntax, use '... on (source_string, name_string) ...'").add_operation (GALGAS_string (" instead of '... on source_string ...' ; you can use empty string \"\" for name_string"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 139)), fixItArray1  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 139)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_expression_ (var_sourceExpression_5398, inCompiler) ;
    var_endOfSourceExpression_5434 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 144)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 145)) ;
    nt_expression_ (var_nameExpression_5476, inCompiler) ;
    var_endOfNameExpression_5510 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 147)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_actualParameterListAST var_actualParameterList_6149 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_6149, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_6315 ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_6315 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 154)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 156)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_6315, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInStringInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_5398, var_endOfSourceExpression_5434, var_nameExpression_5476, var_endOfNameExpression_5510, var_actualParameterList_6149, var_grammarInstructionSyntaxDirectedTranslationResult_6315  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 159)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_on) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 129)) ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
    nt_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 145)) ;
    nt_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 156)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_on) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 129)) ;
  switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 145)) ;
    nt_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 148)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A__3E_) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 156)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mReceiverName_1774 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 48)) ;
  GALGAS_lstringlist var_mStructAttributeList_1803 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 49)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 52)) ;
      GALGAS_lstring var_attributeName_1889 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 53)) ;
      var_mStructAttributeList_1803.addAssign_operation (var_attributeName_1889  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 54)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName_1774.getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 59)), var_mReceiverName_1774, var_mStructAttributeList_1803, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 62))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 58)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 65)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName_1774.getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 67)), var_mReceiverName_1774, var_mStructAttributeList_1803, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 70))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 66)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName_1774.getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 75)), var_mReceiverName_1774, var_mStructAttributeList_1803, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 78))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 74)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 81)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName_1774.getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 83)), var_mReceiverName_1774, var_mStructAttributeList_1803, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 86))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 52)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 53)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 65)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 52)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 53)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 65)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 81)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 94)) ;
  GALGAS_location var_instructionLocation_2940 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 95)) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 97)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation_2940, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 100))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 98)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 103)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation_2940, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 106))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 104)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 109)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation_2940, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 112))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 110)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 115)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation_2940, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 118))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 116)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 94)) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 97)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 103)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 109)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 94)) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 97)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 103)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2B__2B_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 109)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__26__2D__2D_) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 115)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i31_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_1049 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 22)) ;
  GALGAS_semanticExpressionAST var_if_5F_expression_1102 ;
  nt_expression_ (var_if_5F_expression_1102, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("instruction-if.galgas", 24)) ;
  GALGAS_semanticInstructionListAST var_then_5F_instructionList_1171 ;
  nt_semantic_5F_instruction_5F_list_ (var_then_5F_instructionList_1171, inCompiler) ;
  GALGAS_location var_endOf_5F_then_5F_branchLocation_1205 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 26)) ;
  GALGAS_semanticInstructionListAST var_else_5F_instructionList_1275 ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_1275 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 29)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-if.galgas", 31)) ;
    nt_semantic_5F_instruction_5F_list_ (var_else_5F_instructionList_1275, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_elsif) COMMA_SOURCE_FILE ("instruction-if.galgas", 34)) ;
    GALGAS_semanticInstructionAST var_instruction_1496 ;
    nt_if_5F_instruction_5F_core_ (var_instruction_1496, inCompiler) ;
    GALGAS_semanticInstructionListAST temp_0 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 36)) ;
    temp_0.addAssign_operation (var_instruction_1496  COMMA_SOURCE_FILE ("instruction-if.galgas", 36)) ;
    var_else_5F_instructionList_1275 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_ifInstructionAST::constructor_new (var_instructionLocation_1049, var_if_5F_expression_1102, var_then_5F_instructionList_1171, var_endOf_5F_then_5F_branchLocation_1205, var_else_5F_instructionList_1275, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 44))  COMMA_SOURCE_FILE ("instruction-if.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("instruction-if.galgas", 24)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-if.galgas", 31)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_elsif) COMMA_SOURCE_FILE ("instruction-if.galgas", 34)) ;
    nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_then) COMMA_SOURCE_FILE ("instruction-if.galgas", 24)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-if.galgas", 31)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_elsif) COMMA_SOURCE_FILE ("instruction-if.galgas", 34)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  nt_if_5F_instruction_5F_core_ (outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-if.galgas", 53)) ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_2084 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-if.galgas", 56)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_terminator_2084.mAttribute_string.objectCompare (GALGAS_string ("if"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%if")) ;
      inCompiler->emitSemanticError (var_terminator_2084.getter_location (SOURCE_FILE ("instruction-if.galgas", 58)), GALGAS_string ("the terminator attribute should be '%if'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 58)) ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-if.galgas", 53)) ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-if.galgas", 56)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_if) COMMA_SOURCE_FILE ("instruction-if.galgas", 51)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-if.galgas", 53)) ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-if.galgas", 56)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  GALGAS_lstring var_typeName_1504 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  GALGAS_lstring var_constantName_1539 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
  outArgument_outInstruction = GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (var_typeName_1504.getter_location (SOURCE_FILE ("instruction-let.galgas", 39)), var_typeName_1504, var_constantName_1539  COMMA_SOURCE_FILE ("instruction-let.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  GALGAS_lstring var_typeName_1907 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  GALGAS_lstring var_variableName_1942 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2012 ;
  nt_expression_ (var_sourceExpression_2012, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_1907.getter_location (SOURCE_FILE ("instruction-let.galgas", 54)), GALGAS_bool (true), var_typeName_1907, var_variableName_1942, var_sourceExpression_2012  COMMA_SOURCE_FILE ("instruction-let.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  GALGAS_lstring var_variableName_2450 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2520 ;
  nt_expression_ (var_sourceExpression_2520, inCompiler) ;
  outArgument_outInstruction = GALGAS_localConstantDeclarationWithAssignmentAST::constructor_new (var_variableName_2450.getter_location (SOURCE_FILE ("instruction-let.galgas", 69)), var_variableName_2450, var_sourceExpression_2520  COMMA_SOURCE_FILE ("instruction-let.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_let) COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  GALGAS_location var_instructionLocation_1065 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 27)) ;
  GALGAS_logListAST var_logList_1098 = GALGAS_logListAST::constructor_emptyList (SOURCE_FILE ("instruction-log.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_loggedVariableName_1192 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
      var_logList_1098.addAssign_operation (var_loggedVariableName_1192, GALGAS_varInExpressionAST::constructor_new (var_loggedVariableName_1192  COMMA_SOURCE_FILE ("instruction-log.galgas", 32))  COMMA_SOURCE_FILE ("instruction-log.galgas", 32)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_logMessage_1322 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      GALGAS_semanticExpressionAST var_logExpression_1397 ;
      nt_expression_ (var_logExpression_1397, inCompiler) ;
      var_logList_1098.addAssign_operation (var_logMessage_1322, var_logExpression_1397  COMMA_SOURCE_FILE ("instruction-log.galgas", 37)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-log.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outInstruction = GALGAS_logInstructionAST::constructor_new (var_instructionLocation_1065, var_logList_1098  COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      nt_expression_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-log.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-log.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_loop) COMMA_SOURCE_FILE ("instruction-loop.galgas", 27)) ;
  GALGAS_location var_instructionLocation_1201 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-loop.galgas", 30)) ;
  GALGAS_semanticExpressionAST var_mVariantExpression_1305 ;
  nt_expression_ (var_mVariantExpression_1305, inCompiler) ;
  GALGAS_location var_mEndOfVariantExpression_1337 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-loop.galgas", 33)) ;
  GALGAS_semanticInstructionListAST var_mFirstInstructions_1453 ;
  nt_semantic_5F_instruction_5F_list_ (var_mFirstInstructions_1453, inCompiler) ;
  GALGAS_location var_mEndOfFirstInstructions_1492 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 37)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("instruction-loop.galgas", 38)) ;
  GALGAS_semanticExpressionAST var_mLoopExpression_1582 ;
  nt_expression_ (var_mLoopExpression_1582, inCompiler) ;
  GALGAS_location var_mEndOfLoopExpression_1611 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 40)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-loop.galgas", 41)) ;
  GALGAS_semanticInstructionListAST var_mSecondInstructions_1722 ;
  nt_semantic_5F_instruction_5F_list_ (var_mSecondInstructions_1722, inCompiler) ;
  GALGAS_location var_mEndOfSecondInstructions_1755 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 43)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-loop.galgas", 44)) ;
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_1844 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-loop.galgas", 47)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_terminator_1844.mAttribute_string.objectCompare (GALGAS_string ("loop"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%loop")) ;
      inCompiler->emitSemanticError (var_terminator_1844.getter_location (SOURCE_FILE ("instruction-loop.galgas", 49)), GALGAS_string ("the terminator attribute should be '%loop'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-loop.galgas", 49)) ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_mEndOfLoopInstruction_2032 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 52)) ;
  outArgument_outInstruction = GALGAS_loopInstructionAST::constructor_new (var_instructionLocation_1201, var_mVariantExpression_1305, var_mEndOfVariantExpression_1337, var_mFirstInstructions_1453, var_mEndOfFirstInstructions_1492, var_mLoopExpression_1582, var_mEndOfLoopExpression_1611, var_mSecondInstructions_1722, var_mEndOfSecondInstructions_1755, var_mEndOfLoopInstruction_2032  COMMA_SOURCE_FILE ("instruction-loop.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_loop) COMMA_SOURCE_FILE ("instruction-loop.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-loop.galgas", 30)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-loop.galgas", 33)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("instruction-loop.galgas", 38)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-loop.galgas", 41)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-loop.galgas", 44)) ;
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-loop.galgas", 47)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_loop) COMMA_SOURCE_FILE ("instruction-loop.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-loop.galgas", 30)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-loop.galgas", 33)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("instruction-loop.galgas", 38)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-loop.galgas", 41)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-loop.galgas", 44)) ;
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-loop.galgas", 47)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i38_ (GALGAS_matchEntryListAST & ioArgument_ioMatchEntryList,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_enumerationConstantName_1736 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-match.galgas", 38)) ;
  ioArgument_ioMatchEntryList.addAssign_operation (GALGAS_bool (false), var_enumerationConstantName_1736, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 42))  COMMA_SOURCE_FILE ("instruction-match.galgas", 42))  COMMA_SOURCE_FILE ("instruction-match.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-match.galgas", 38)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-match.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i39_ (GALGAS_matchEntryListAST & ioArgument_ioMatchEntryList,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_className_2061 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-match.galgas", 48)) ;
  GALGAS_lstring var_localConstant_2088 ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
    var_localConstant_2088 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 51))  COMMA_SOURCE_FILE ("instruction-match.galgas", 51)) ;
  } break ;
  case 2: {
    var_localConstant_2088 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-match.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMatchEntryList.addAssign_operation (GALGAS_bool (true), var_className_2061, var_localConstant_2088  COMMA_SOURCE_FILE ("instruction-match.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-match.galgas", 48)) ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-match.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_entry_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-match.galgas", 48)) ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-match.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i40_ (GALGAS_matchInstructionBranchListAST & ioArgument_ioMatchInstructionBranchList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-match.galgas", 64)) ;
  GALGAS_matchEntryListAST var_mMatchEntryList_2541 = GALGAS_matchEntryListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_ (var_mMatchEntryList_2541, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-match.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfMatchEntryList_2678 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 71)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-match.galgas", 72)) ;
  GALGAS_semanticInstructionListAST var_mMatchBranchInstructionList_2763 ;
  nt_semantic_5F_instruction_5F_list_ (var_mMatchBranchInstructionList_2763, inCompiler) ;
  ioArgument_ioMatchInstructionBranchList.addAssign_operation (var_mMatchEntryList_2541, var_endOfMatchEntryList_2678, var_mMatchBranchInstructionList_2763, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 79))  COMMA_SOURCE_FILE ("instruction-match.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-match.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-match.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-match.galgas", 72)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_match_5F_instruction_5F_branch_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-match.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_match_5F_entry_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-match.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-match.galgas", 72)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_match) COMMA_SOURCE_FILE ("instruction-match.galgas", 85)) ;
  GALGAS_semanticExpressionListAST var_matchedExpressionNameList_3238 = GALGAS_semanticExpressionListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 86)) ;
  GALGAS_location var_instructionLocation_3271 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 87)) ;
  GALGAS_semanticExpressionAST var_receiverExpression_3352 ;
  nt_expression_ (var_receiverExpression_3352, inCompiler) ;
  var_matchedExpressionNameList_3238.addAssign_operation (var_receiverExpression_3352, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 89))  COMMA_SOURCE_FILE ("instruction-match.galgas", 89)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-match.galgas", 91)) ;
    GALGAS_semanticExpressionAST var_expression_3500 ;
    nt_expression_ (var_expression_3500, inCompiler) ;
    var_matchedExpressionNameList_3238.addAssign_operation (var_expression_3500, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 93))  COMMA_SOURCE_FILE ("instruction-match.galgas", 93)) ;
    switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_matchInstructionBranchListAST var_matchInstructionBranchList_3643 = GALGAS_matchInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 96)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_match_5F_instruction_5F_branch_ (var_matchInstructionBranchList_3643, inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  GALGAS_semanticInstructionListAST var_elseInstructionList_3792 ;
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
    var_elseInstructionList_3792 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 103)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-match.galgas", 105)) ;
    nt_semantic_5F_instruction_5F_list_ (var_elseInstructionList_3792, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-match.galgas", 108)) ;
  GALGAS_location var_endOf_5F_match_5F_instruction_3960 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 109)) ;
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_4039 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-match.galgas", 112)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_terminator_4039.mAttribute_string.objectCompare (GALGAS_string ("match"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("%match")) ;
      inCompiler->emitSemanticError (var_terminator_4039.getter_location (SOURCE_FILE ("instruction-match.galgas", 114)), GALGAS_string ("the terminator attribute should be '%match'"), fixItArray3  COMMA_SOURCE_FILE ("instruction-match.galgas", 114)) ;
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_matchInstructionAST::constructor_new (var_instructionLocation_3271, var_matchedExpressionNameList_3238, var_matchInstructionBranchList_3643, var_elseInstructionList_3792, var_endOf_5F_match_5F_instruction_3960  COMMA_SOURCE_FILE ("instruction-match.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_match) COMMA_SOURCE_FILE ("instruction-match.galgas", 85)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-match.galgas", 91)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_match_5F_instruction_5F_branch_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-match.galgas", 105)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-match.galgas", 108)) ;
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-match.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i41_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_match) COMMA_SOURCE_FILE ("instruction-match.galgas", 85)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-match.galgas", 91)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_52 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_match_5F_instruction_5F_branch_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-match.galgas", 105)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-match.galgas", 108)) ;
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-match.galgas", 112)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  GALGAS_location var_instructionLocation_880 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 19)) ;
  GALGAS_semanticExpressionAST var_expression_953 ;
  nt_expression_ (var_expression_953, inCompiler) ;
  outArgument_outInstruction = GALGAS_messageInstructionAST::constructor_new (var_instructionLocation_880, var_expression_953  COMMA_SOURCE_FILE ("instruction-message.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i42_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-message.galgas", 18)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  GALGAS_location var_instructionLocation_959 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 22)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1041 ;
  nt_expression_ (var_mReceiverExpression_1041, inCompiler) ;
  GALGAS_lstring var_mMethodName_1075 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 24)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1152 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_1152, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
  outArgument_outInstruction = GALGAS_methodCallInstructionAST::constructor_new (var_instructionLocation_959, var_mReceiverExpression_1041, var_mMethodName_1075, var_actualParameterList_1152  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 24)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i43_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 24)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mRoutineName_908 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1014 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_1014, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
  outArgument_outInstruction = GALGAS_procCallInstructionAST::constructor_new (var_mRoutineName_908.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 24)), var_mRoutineName_908, var_actualParameterList_1014  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i44_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 20)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  GALGAS_location var_instructionLocation_894 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_981 ;
  nt_expression_ (var_sourceExpression_981, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfAssignmentInstructionAST::constructor_new (var_instructionLocation_894, var_sourceExpression_981  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  GALGAS_location var_instructionLocation_1832 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 43)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1945 ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_ (var_expressionList_1945, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualElementsInstructionAST::constructor_new (var_instructionLocation_1832, var_expressionList_1945  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  GALGAS_location var_instructionLocation_2306 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 56)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  GALGAS_semanticExpressionAST var_expression_2388 ;
  nt_expression_ (var_expression_2388, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2306, var_expression_2388  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i47_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  GALGAS_location var_instructionLocation_2747 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 69)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  GALGAS_semanticExpressionAST var_expression_2829 ;
  nt_expression_ (var_expression_2829, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMinusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2747, var_expression_2829  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i48_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  GALGAS_location var_instructionLocation_3189 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 82)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  GALGAS_semanticExpressionAST var_expression_3271 ;
  nt_expression_ (var_expression_3271, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3189, var_expression_3271  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i49_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  GALGAS_location var_instructionLocation_3629 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 95)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2F__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  GALGAS_semanticExpressionAST var_expression_3711 ;
  nt_expression_ (var_expression_3711, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfDivEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3629, var_expression_3711  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2F__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i50_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2F__3D_) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  GALGAS_location var_instructionLocation_1269 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 31)) ;
  GALGAS_lstring var_selector_1309 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selector_1309.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_selector_1309.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 34)), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 34)) ;
  }
  GALGAS_lstring var_mReceiverName_1452 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 36)) ;
  GALGAS_lstringlist var_mReceiverStructAttributes_1486 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 37)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
      GALGAS_lstring var_structAttribute_1574 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
      var_mReceiverStructAttributes_1486.addAssign_operation (var_structAttribute_1574  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 42)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_lstring var_typeNameForCasting_1666 ;
  switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
    var_typeNameForCasting_1666 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-setter-call.galgas", 46)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
    var_typeNameForCasting_1666 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSetterName_1811 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 51)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1888 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_1888, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 53)) ;
  outArgument_outInstruction = GALGAS_setterCallInstructionAST::constructor_new (var_instructionLocation_1269, var_mReceiverName_1452, var_mReceiverStructAttributes_1486, var_typeNameForCasting_1666, var_mSetterName_1811, var_actualParameterList_1888  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 51)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i51_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_56 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_as) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 51)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 68)) ;
  GALGAS_location var_instructionLocation_2347 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 69)) ;
  GALGAS_lstring var_selector_2387 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 70)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selector_2387.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_selector_2387.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 72)), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 72)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 74)) ;
  GALGAS_lstring var_mSetterName_2539 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 75)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2616 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_2616, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 77)) ;
  outArgument_outInstruction = GALGAS_selfSetterCallInstructionAST::constructor_new (var_instructionLocation_2347, var_mSetterName_2539, var_actualParameterList_2616  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 68)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 70)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 74)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 75)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 77)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i52_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 68)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 70)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_self) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 74)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 75)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_switch) COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  GALGAS_location var_instructionLocation_1553 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 39)) ;
  GALGAS_semanticExpressionAST var_switchExpression_1632 ;
  nt_expression_ (var_switchExpression_1632, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression_1662 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
  GALGAS_switchBranchesAST var_switchBranches_1702 = GALGAS_switchBranchesAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    GALGAS_lstringlist var_constantNameList_1812 ;
    GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction_1882 ;
    nt_switch_5F_case_ (var_constantNameList_1812, var_associatedValuesExtraction_1882, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    GALGAS_semanticInstructionListAST var_instructions_1972 ;
    nt_semantic_5F_instruction_5F_list_ (var_instructions_1972, inCompiler) ;
    var_switchBranches_1702.addAssign_operation (var_constantNameList_1812, var_associatedValuesExtraction_1882, var_instructions_1972, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
    switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  GALGAS_location var_endOfSwitchInstruction_2131 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 54)) ;
  switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_2210 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-switch.galgas", 57)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_terminator_2210.mAttribute_string.objectCompare (GALGAS_string ("switch"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("%switch")) ;
      inCompiler->emitSemanticError (var_terminator_2210.getter_location (SOURCE_FILE ("instruction-switch.galgas", 59)), GALGAS_string ("the terminator attribute should be '%switch'"), fixItArray2  COMMA_SOURCE_FILE ("instruction-switch.galgas", 59)) ;
    }
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_switchInstructionAST::constructor_new (var_instructionLocation_1553, var_switchExpression_1632, var_endOfSwitchExpression_1662, var_switchBranches_1702, var_endOfSwitchInstruction_2131  COMMA_SOURCE_FILE ("instruction-switch.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_switch) COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  nt_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    nt_switch_5F_case_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-switch.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i53_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_switch) COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-switch.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i54_ (GALGAS_lstringlist & outArgument_outConstantNameList,
                                                                                                  GALGAS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 77)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_2902 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    outArgument_outConstantNameList.addAssign_operation (var_constantName_2902  COMMA_SOURCE_FILE ("instruction-switch.galgas", 80)) ;
    switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GALGAS_switchExtractedValuesListAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 84)) ;
  switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 87)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 91)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 91)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
      } break ;
      case 2: {
        GALGAS_lstring var_typeName_3200 ;
        switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
        case 1: {
          var_typeName_3200 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-switch.galgas", 95)) ;
        } break ;
        case 2: {
          var_typeName_3200 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 97)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_bool var_constantMarkedAsUnused_3349 ;
        switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_3349 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("instruction-switch.galgas", 103)) ;
          var_constantMarkedAsUnused_3349 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_constantName_3549 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 106)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (var_typeName_3200, var_constantName_3549, var_constantMarkedAsUnused_3349  COMMA_SOURCE_FILE ("instruction-switch.galgas", 107)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 111)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i54_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 87)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
      } break ;
      case 2: {
        switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-switch.galgas", 95)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("instruction-switch.galgas", 103)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 106)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 111)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i54_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 79)) ;
    switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 87)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
      } break ;
      case 2: {
        switch (select_galgas_33_InstructionsSyntax_64 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-switch.galgas", 95)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("instruction-switch.galgas", 103)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-switch.galgas", 106)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
      case 2: {
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("instruction-switch.galgas", 111)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  GALGAS_location var_instructionLocation_935 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 21)) ;
  GALGAS_lstring var_mTypeName_988 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  GALGAS_lstring var_mMethodName_1066 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1143 ;
  nt_actual_5F_parameter_5F_list_ (var_actualParameterList_1143, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
  outArgument_outInstruction = GALGAS_typeMethodCallInstructionAST::constructor_new (var_instructionLocation_935, var_mTypeName_988, var_mMethodName_1066, var_actualParameterList_1143  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i55_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 19)) ;
  GALGAS_lstring var_variableName_934 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_1004 ;
  nt_expression_ (var_sourceExpression_1004, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationWithAssignmentAST::constructor_new (var_variableName_934.getter_location (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 24)), var_variableName_934, var_sourceExpression_1004  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i56_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3D_) COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  GALGAS_location var_instructionLocation_966 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 22)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1048 ;
  nt_expression_ (var_mReceiverExpression_1048, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  GALGAS_semanticExpressionAST var_mWarningExpression_1120 ;
  nt_expression_ (var_mWarningExpression_1120, inCompiler) ;
  GALGAS_fixitListAST var_fixitListAST_1170 ;
  nt_issue_5F_fixit_ (var_fixitListAST_1170, inCompiler) ;
  outArgument_outInstruction = GALGAS_warningInstructionAST::constructor_new (var_instructionLocation_966, var_mReceiverExpression_1048, var_mWarningExpression_1120, var_fixitListAST_1170  COMMA_SOURCE_FILE ("instruction-warning.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  nt_expression_parse (inCompiler) ;
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i57_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  nt_expression_indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("instruction-with.galgas", 43)) ;
  GALGAS_location var_instructionLocation_1833 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  GALGAS_semanticExpressionAST var_keyExpression_1909 ;
  nt_expression_ (var_keyExpression_1909, inCompiler) ;
  GALGAS_location var_endOfKeyExpression_1936 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 46)) ;
  GALGAS_lstring var_withPrefix_1977 ;
  switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
    var_withPrefix_1977 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 49))  COMMA_SOURCE_FILE ("instruction-with.galgas", 49)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-with.galgas", 51)) ;
    var_withPrefix_1977 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-with.galgas", 54)) ;
  nt_with_5F_instruction_5F_core_ (var_instructionLocation_1833, var_keyExpression_1909, var_endOfKeyExpression_1936, var_withPrefix_1977, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-with.galgas", 56)) ;
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_terminator_2292 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-with.galgas", 59)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_terminator_2292.mAttribute_string.objectCompare (GALGAS_string ("with"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("%with")) ;
      inCompiler->emitSemanticError (var_terminator_2292.getter_location (SOURCE_FILE ("instruction-with.galgas", 61)), GALGAS_string ("the terminator attribute should be '%with'"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 61)) ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("instruction-with.galgas", 43)) ;
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-with.galgas", 51)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-with.galgas", 54)) ;
  nt_with_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-with.galgas", 56)) ;
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-with.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_i58_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_with) COMMA_SOURCE_FILE ("instruction-with.galgas", 43)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("instruction-with.galgas", 51)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("instruction-with.galgas", 54)) ;
  nt_with_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("instruction-with.galgas", 56)) ;
  switch (select_galgas_33_InstructionsSyntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("instruction-with.galgas", 59)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i59_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_receiverExpression_2881 ;
  nt_expression_ (var_receiverExpression_2881, inCompiler) ;
  GALGAS_location var_endOfReceiverExpression_2913 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 76)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_2977 ;
  switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_2977 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 79)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-with.galgas", 81)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-with.galgas", 82)) ;
    var_searchMethodNameForErrorSignaling_2977 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 83)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-with.galgas", 85)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_3238 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions_3238, inCompiler) ;
  GALGAS_location var_endOfDoInstructions_3266 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 87)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_3339 ;
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_3339 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 90)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-with.galgas", 92)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_2977.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_2977.getter_location (SOURCE_FILE ("instruction-with.galgas", 94)), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 94)) ;
    }
    nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions_3339, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_readAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_receiverExpression_2881, var_endOfReceiverExpression_2913, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_2977, var_mDoBranchInstructions_3238, var_endOfDoInstructions_3266, var_mElseBranchInstructions_3339, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 109))  COMMA_SOURCE_FILE ("instruction-with.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i59_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-with.galgas", 81)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-with.galgas", 82)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 83)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-with.galgas", 85)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-with.galgas", 92)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i59_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-with.galgas", 81)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-with.galgas", 82)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 83)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-with.galgas", 85)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-with.galgas", 92)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i60_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_4400 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-with.galgas", 122)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selector_4400.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_selector_4400.getter_location (SOURCE_FILE ("instruction-with.galgas", 124)), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 124)) ;
  }
  GALGAS_lstring var_mTargetObjectName_4547 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 126)) ;
  GALGAS_lstringlist var_structAttributeList_4575 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 127)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_InstructionsSyntax_70 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-with.galgas", 130)) ;
      GALGAS_lstring var_mStructFieldName_4664 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 131)) ;
      var_structAttributeList_4575.addAssign_operation (var_mStructFieldName_4664  COMMA_SOURCE_FILE ("instruction-with.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  GALGAS_location var_endOfReceiverExpression_4751 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 134)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_4815 ;
  switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_4815 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 137)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-with.galgas", 139)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-with.galgas", 140)) ;
    var_searchMethodNameForErrorSignaling_4815 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 141)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-with.galgas", 143)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_5076 ;
  nt_semantic_5F_instruction_5F_list_ (var_mDoBranchInstructions_5076, inCompiler) ;
  GALGAS_location var_endOf_5F_do_5F_instructions_5106 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 145)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_5179 ;
  switch (select_galgas_33_InstructionsSyntax_72 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_5179 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 148)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-with.galgas", 150)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_4815.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_4815.getter_location (SOURCE_FILE ("instruction-with.galgas", 152)), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray4  COMMA_SOURCE_FILE ("instruction-with.galgas", 152)) ;
    }
    nt_semantic_5F_instruction_5F_list_ (var_mElseBranchInstructions_5179, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOf_5F_else_5F_instructions_5550 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 156)) ;
  outArgument_outInstruction = GALGAS_readWriteAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_mTargetObjectName_4547, var_structAttributeList_4575, var_endOfReceiverExpression_4751, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_4815, var_mDoBranchInstructions_5076, var_endOf_5F_do_5F_instructions_5106, var_mElseBranchInstructions_5179, var_endOf_5F_else_5F_instructions_5550  COMMA_SOURCE_FILE ("instruction-with.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i60_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-with.galgas", 122)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_70 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-with.galgas", 130)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 131)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-with.galgas", 139)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-with.galgas", 140)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 141)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-with.galgas", 143)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-with.galgas", 150)) ;
    nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i60_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("instruction-with.galgas", 122)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_70 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E_) COMMA_SOURCE_FILE ("instruction-with.galgas", 130)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 131)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("instruction-with.galgas", 139)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("instruction-with.galgas", 140)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-with.galgas", 141)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("instruction-with.galgas", 143)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_else) COMMA_SOURCE_FILE ("instruction-with.galgas", 150)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 34)) ;
    } break ;
    case 3: {
      nt_declaration_ (ioArgument_ioDeclarations, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 34)) ;
    } break ;
    case 3: {
      nt_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_start_5F_symbol_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 34)) ;
    } break ;
    case 3: {
      nt_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_ (GALGAS_propertyInCollectionListAST & ioArgument_ioAttributeInCollectionList,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_mAttributeTypeName_4315 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 59)) ;
  GALGAS_lstring var_mAttributeName_4360 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 60)) ;
  GALGAS_lstringlist var_featureList_4378 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 61)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_featureName_4455 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 64)) ;
      var_featureList_4378.addAssign_operation (var_featureName_4455  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 65)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioAttributeInCollectionList.addAssign_operation (var_mAttributeTypeName_4315, var_mAttributeName_4360, var_featureList_4378  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 59)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 64)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_property_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 59)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 64)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i2_ (const GALGAS_bool constinArgument_inIsInternal,
                                                                                                                 GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 87)) ;
  GALGAS_lstring var_mFilewrapperName_5511 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 88)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 89)) ;
  GALGAS_lstring var_mFilewrapperPath_5594 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 90)) ;
  GALGAS_lstringlist var_filewrapperTextFileExtensionList_5659 ;
  nt_filewrapper_5F_text_5F_files_ (var_filewrapperTextFileExtensionList_5659, inCompiler) ;
  GALGAS_lstringlist var_filewrapperBinaryFileExtensionList_5728 ;
  nt_filewrapper_5F_binary_5F_files_ (var_filewrapperBinaryFileExtensionList_5728, inCompiler) ;
  GALGAS_filewrapperTemplateListAST var_filewrapperTemplateList_5783 ;
  nt_filewrapper_5F_templates_ (var_filewrapperTemplateList_5783, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool (false), constinArgument_inIsInternal, GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 97)), var_mFilewrapperName_5511, var_mFilewrapperPath_5594, var_filewrapperTextFileExtensionList_5659, var_filewrapperBinaryFileExtensionList_5728, var_filewrapperTemplateList_5783  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 94))  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 94)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 87)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 88)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 89)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 90)) ;
  nt_filewrapper_5F_text_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_parse (inCompiler) ;
  nt_filewrapper_5F_templates_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_5F_with_5F_private_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_filewrapper) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 87)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 88)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 89)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 90)) ;
  nt_filewrapper_5F_text_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_binary_5F_files_indexing (inCompiler) ;
  nt_filewrapper_5F_templates_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_ (GALGAS_lstringlist & outArgument_outFilewrapperTextFileExtensionList,
                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFilewrapperTextFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperTextFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 109)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 110)) ;
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_6422 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 114)) ;
      outArgument_outFilewrapperTextFileExtensionList.addAssign_operation (var_pathExtension_6422  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 115)) ;
      switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 117)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 120)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 110)) ;
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 114)) ;
      switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 117)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 120)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_text_5F_files_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 110)) ;
  switch (select_galgas_33_DeclarationsSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 114)) ;
      switch (select_galgas_33_DeclarationsSyntax_3 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 117)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 120)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_ (GALGAS_lstringlist & outArgument_outFilewrapperBinaryFileExtensionList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFilewrapperBinaryFileExtensionList.drop () ; // Release 'out' argument
  outArgument_outFilewrapperBinaryFileExtensionList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 126)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 127)) ;
  switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_pathExtension_6854 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 131)) ;
      outArgument_outFilewrapperBinaryFileExtensionList.addAssign_operation (var_pathExtension_6854  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 132)) ;
      switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 134)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 127)) ;
  switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 131)) ;
      switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 134)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 137)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_binary_5F_files_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 127)) ;
  switch (select_galgas_33_DeclarationsSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 131)) ;
      switch (select_galgas_33_DeclarationsSyntax_5 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 134)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_ (GALGAS_filewrapperTemplateListAST & outArgument_outFilewrapperTemplateList,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outFilewrapperTemplateList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 143)) ;
  outArgument_outFilewrapperTemplateList = GALGAS_filewrapperTemplateListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 147)) ;
      GALGAS_lstring var_mFilewrapperTemplateName_7287 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 148)) ;
      GALGAS_lstring var_mFilewrapperTemplatePath_7332 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 149)) ;
      GALGAS_formalTemplateInputParameterListAST var_filewrapperTemplateFormalInputParameters_7414 = GALGAS_formalTemplateInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 150)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_7464 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 153)) ;
          GALGAS_lstring var_typeName_7502 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 154)) ;
          GALGAS_bool var_isUnused_7523 ;
          switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
            var_isUnused_7523 = GALGAS_bool (false) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 159)) ;
            var_isUnused_7523 = GALGAS_bool (true) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_argumentName_7658 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 162)) ;
          var_filewrapperTemplateFormalInputParameters_7414.addAssign_operation (var_selector_7464, var_typeName_7502, var_argumentName_7658, var_isUnused_7523  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 163)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      outArgument_outFilewrapperTemplateList.addAssign_operation (var_mFilewrapperTemplateName_7287, var_mFilewrapperTemplatePath_7332, var_filewrapperTemplateFormalInputParameters_7414  COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 165)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 170)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 143)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 147)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 148)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 149)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 153)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 154)) ;
          switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 159)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 162)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 170)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_filewrapper_5F_templates_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 143)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 147)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 148)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 149)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_DeclarationsSyntax_7 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 153)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 154)) ;
          switch (select_galgas_33_DeclarationsSyntax_8 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_unused) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 159)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 162)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3DeclarationsSyntax.galgas", 170)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_array) COMMA_SOURCE_FILE ("type-array.galgas", 18)) ;
  GALGAS_lstring var_arrayTypeName_1041 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("type-array.galgas", 21)) ;
  GALGAS_lstring var_elementListTypeName_1125 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  GALGAS_luint var_dimension_1204 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_arrayDeclarationAST::constructor_new (GALGAS_bool (false), var_arrayTypeName_1041, var_elementListTypeName_1125, var_dimension_1204  COMMA_SOURCE_FILE ("type-array.galgas", 26))  COMMA_SOURCE_FILE ("type-array.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_array) COMMA_SOURCE_FILE ("type-array.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("type-array.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_array) COMMA_SOURCE_FILE ("type-array.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-array.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("type-array.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_arrayElementTypeReference, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-array.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5B_) COMMA_SOURCE_FILE ("type-array.galgas", 23)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("type-array.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__5D_) COMMA_SOURCE_FILE ("type-array.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i7_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_mIsAbstract_1147 ;
  switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
  case 1: {
    var_mIsAbstract_1147 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("type-class.galgas", 26)) ;
    var_mIsAbstract_1147 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_class) COMMA_SOURCE_FILE ("type-class.galgas", 29)) ;
  GALGAS_lstringlist var_classNameList_1275 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 30)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_className_1341 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-class.galgas", 32)) ;
    var_classNameList_1275.addAssign_operation (var_className_1341  COMMA_SOURCE_FILE ("type-class.galgas", 33)) ;
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("type-class.galgas", 35)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_mSuperClassName_1457 ;
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
    var_mSuperClassName_1457 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 39)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("type-class.galgas", 41)) ;
    var_mSuperClassName_1457 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-class.galgas", 42)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstringlist var_classFeatureList_1650 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 44)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_classFeatureName_1739 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
      var_classFeatureList_1650.addAssign_operation (var_classFeatureName_1739  COMMA_SOURCE_FILE ("type-class.galgas", 48)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-class.galgas", 50)) ;
  GALGAS_string var_mClassMessage_1825 = GALGAS_string::makeEmptyString () ;
  GALGAS_propertyInCollectionListAST var_mAttributeList_1877 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 53)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_mAttributeList_1877, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-class.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-class.galgas", 60)) ;
  cEnumerator_lstringlist enumerator_2042 (var_classNameList_1275, kENUMERATION_UP) ;
  while (enumerator_2042.hasCurrentObject ()) {
    ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_classDeclarationAST::constructor_new (GALGAS_bool (false), var_mIsAbstract_1147, enumerator_2042.current_mValue (HERE), var_mSuperClassName_1457, var_classFeatureList_1650, var_mAttributeList_1877  COMMA_SOURCE_FILE ("type-class.galgas", 62))  COMMA_SOURCE_FILE ("type-class.galgas", 62)) ;
    enumerator_2042.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("type-class.galgas", 26)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_class) COMMA_SOURCE_FILE ("type-class.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-class.galgas", 32)) ;
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("type-class.galgas", 35)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("type-class.galgas", 41)) ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-class.galgas", 42)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-class.galgas", 50)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-class.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-class.galgas", 60)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("type-class.galgas", 26)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_class) COMMA_SOURCE_FILE ("type-class.galgas", 29)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classDefinition, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-class.galgas", 32)) ;
    switch (select_galgas_33_DeclarationsSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("type-class.galgas", 35)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_DeclarationsSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("type-class.galgas", 41)) ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_classReferencedAsSuperClass, "") ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-class.galgas", 42)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("type-class.galgas", 47)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-class.galgas", 50)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_DeclarationsSyntax_13 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-class.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-class.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i8_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_enum) COMMA_SOURCE_FILE ("type-enum.galgas", 29)) ;
  GALGAS_lstring var_mEnumTypeName_1709 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-enum.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-enum.galgas", 31)) ;
  GALGAS_enumConstantList var_mConstantList_1763 = GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("type-enum.galgas", 34)) ;
    GALGAS_lstring var_constantName_1855 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-enum.galgas", 35)) ;
    GALGAS__32_lstringlist var_associatedValueTypeList_1899 = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 36)) ;
    switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("type-enum.galgas", 39)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_associatedValueType_2005 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-enum.galgas", 41)) ;
        GALGAS_lstring var_associatedValueName_2044 ;
        switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
        case 1: {
          var_associatedValueName_2044 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-enum.galgas", 44)) ;
        } break ;
        case 2: {
          var_associatedValueName_2044 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-enum.galgas", 46)) ;
        } break ;
        default:
          break ;
        }
        var_associatedValueTypeList_1899.addAssign_operation (var_associatedValueType_2005, var_associatedValueName_2044  COMMA_SOURCE_FILE ("type-enum.galgas", 48)) ;
        switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("type-enum.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
    var_mConstantList_1763.addAssign_operation (var_constantName_1855, var_associatedValueTypeList_1899  COMMA_SOURCE_FILE ("type-enum.galgas", 53)) ;
    switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-enum.galgas", 56)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool (false), var_mEnumTypeName_1709, var_mConstantList_1763  COMMA_SOURCE_FILE ("type-enum.galgas", 57))  COMMA_SOURCE_FILE ("type-enum.galgas", 57)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_enum) COMMA_SOURCE_FILE ("type-enum.galgas", 29)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-enum.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-enum.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("type-enum.galgas", 34)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-enum.galgas", 35)) ;
    switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("type-enum.galgas", 39)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-enum.galgas", 41)) ;
        switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-enum.galgas", 46)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("type-enum.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-enum.galgas", 56)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_enum) COMMA_SOURCE_FILE ("type-enum.galgas", 29)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_enumDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-enum.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-enum.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("type-enum.galgas", 34)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-enum.galgas", 35)) ;
    switch (select_galgas_33_DeclarationsSyntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("type-enum.galgas", 39)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-enum.galgas", 41)) ;
        switch (select_galgas_33_DeclarationsSyntax_17 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-enum.galgas", 46)) ;
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_DeclarationsSyntax_16 (inCompiler)) {
        case 2: {
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("type-enum.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_14 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-enum.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  GALGAS_lstring var_externTypeName_2613 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  GALGAS_string var_cppPredeclarationCode_2706 ;
  nt_externtype_5F_cpp_5F_predeclaration_ (var_cppPredeclarationCode_2706, inCompiler) ;
  GALGAS_string var_cppClassCode_2762 ;
  nt_externtype_5F_cpp_5F_classdeclaration_ (var_cppClassCode_2762, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  GALGAS_externTypeConstructorList var_externTypeConstructorList_2827 = GALGAS_externTypeConstructorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 69)) ;
  GALGAS_externTypeGetterList var_externTypeGetterList_2880 = GALGAS_externTypeGetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 70)) ;
  GALGAS_externTypeSetterList var_externTypeSetterList_2932 = GALGAS_externTypeSetterList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 71)) ;
  GALGAS_externTypeMethodList var_externTypeMethodList_2984 = GALGAS_externTypeMethodList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 72)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_ (var_externTypeConstructorList_2827, inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_ (var_externTypeGetterList_2880, inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_ (var_externTypeSetterList_2932, inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_ (var_externTypeMethodList_2984, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_externTypeDeclarationAST::constructor_new (GALGAS_bool (false), var_externTypeName_2613, var_cppPredeclarationCode_2706, var_cppClassCode_2762, var_externTypeConstructorList_2827, var_externTypeGetterList_2880, var_externTypeSetterList_2932, var_externTypeMethodList_2984  COMMA_SOURCE_FILE ("type-extern.galgas", 84))  COMMA_SOURCE_FILE ("type-extern.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  nt_externtype_5F_cpp_5F_predeclaration_parse (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
    case 2: {
      nt_externtype_5F_constructor_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_externtype_5F_getter_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_externtype_5F_setter_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_externtype_5F_method_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("type-extern.galgas", 64)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_externTypeDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 65)) ;
  nt_externtype_5F_cpp_5F_predeclaration_indexing (inCompiler) ;
  nt_externtype_5F_cpp_5F_classdeclaration_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-extern.galgas", 68)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_18 (inCompiler)) {
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
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-extern.galgas", 83)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i10_ (GALGAS_string & outArgument_outCppPredeclarationCode,
                                                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outCppPredeclarationCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  outArgument_outCppPredeclarationCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement_3888 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
      outArgument_outCppPredeclarationCode.plusAssign_operation(var_cppPredeclarationCodeElement_3888.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 104)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_predeclaration_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-extern.galgas", 99)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-extern.galgas", 103)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-extern.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i11_ (GALGAS_string & outArgument_outCppClassCode,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outCppClassCode.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  outArgument_outCppClassCode = GALGAS_string::makeEmptyString () ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_cppPredeclarationCodeElement_4285 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
      outArgument_outCppClassCode.plusAssign_operation(var_cppPredeclarationCodeElement_4285.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 117)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_cpp_5F_classdeclaration_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-extern.galgas", 112)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-extern.galgas", 116)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-extern.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i12_ (GALGAS_externTypeConstructorList & ioArgument_ioExternTypeConstructorList,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_constructor) COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  GALGAS_lstring var_constructorName_4645 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_4699 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 127)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_4749 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      GALGAS_lstring var_argumentTypeName_4794 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      GALGAS_lstring var_argumentName_4840 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
      var_argumentTypeList_4699.addAssign_operation (var_selector_4749, var_argumentTypeName_4794, var_argumentName_4840  COMMA_SOURCE_FILE ("type-extern.galgas", 133)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  GALGAS_lstring var_resultTypeName_4966 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
  ioArgument_ioExternTypeConstructorList.addAssign_operation (var_constructorName_4645, var_resultTypeName_4966, var_argumentTypeList_4699  COMMA_SOURCE_FILE ("type-extern.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_constructor) COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_constructor_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_constructor) COMMA_SOURCE_FILE ("type-extern.galgas", 125)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 126)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("type-extern.galgas", 130)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 131)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 132)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-extern.galgas", 135)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i13_ (GALGAS_externTypeGetterList & ioArgument_ioExternTypeGetterList,
                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  GALGAS_lstring var_getterName_5310 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  GALGAS_typeNameFormalParameterNameList var_argumentTypeList_5364 = GALGAS_typeNameFormalParameterNameList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 145)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_5414 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      GALGAS_lstring var_argumentTypeName_5459 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      GALGAS_lstring var_argumentName_5505 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
      var_argumentTypeList_5364.addAssign_operation (var_selector_5414, var_argumentTypeName_5459, var_argumentName_5505  COMMA_SOURCE_FILE ("type-extern.galgas", 151)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  GALGAS_lstring var_resultTypeName_5631 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
  ioArgument_ioExternTypeGetterList.addAssign_operation (var_getterName_5310, var_resultTypeName_5631, var_argumentTypeList_5364  COMMA_SOURCE_FILE ("type-extern.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_getter_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("type-extern.galgas", 143)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 144)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("type-extern.galgas", 148)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 149)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 150)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-extern.galgas", 153)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-extern.galgas", 154)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i14_ (GALGAS_externTypeSetterList & ioArgument_ioExternTypeSetterList,
                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  GALGAS_lstring var_setterName_5965 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  GALGAS_formalParameterListAST var_formalParameterList_6042 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_6042, inCompiler) ;
  ioArgument_ioExternTypeSetterList.addAssign_operation (var_setterName_5965, var_formalParameterList_6042  COMMA_SOURCE_FILE ("type-extern.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_setter_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("type-extern.galgas", 161)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i15_ (GALGAS_externTypeMethodList & ioArgument_ioExternTypeMethodList,
                                                                                                        C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  GALGAS_lstring var_methodName_6363 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  GALGAS_formalParameterListAST var_formalParameterList_6440 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_6440, inCompiler) ;
  ioArgument_ioExternTypeMethodList.addAssign_operation (var_methodName_6363, var_formalParameterList_6440, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 173))  COMMA_SOURCE_FILE ("type-extern.galgas", 173)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_externtype_5F_method_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("type-extern.galgas", 170)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-extern.galgas", 171)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i16_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_graph) COMMA_SOURCE_FILE ("type-graph.galgas", 26)) ;
  GALGAS_lstring var_graphTypeName_1296 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-graph.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  GALGAS_lstring var_associatedListTypeName_1379 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  GALGAS_graphInsertModifierList var_graphInsertModifierList_1427 = GALGAS_graphInsertModifierList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("type-graph.galgas", 35)) ;
      GALGAS_lstring var_insertName_1537 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-graph.galgas", 36)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      GALGAS_lstring var_errorMessage_1612 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
      var_graphInsertModifierList_1427.addAssign_operation (var_insertName_1537, var_errorMessage_1612  COMMA_SOURCE_FILE ("type-graph.galgas", 40)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-graph.galgas", 42)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool (false), var_graphTypeName_1296, var_associatedListTypeName_1379, var_graphInsertModifierList_1427  COMMA_SOURCE_FILE ("type-graph.galgas", 43))  COMMA_SOURCE_FILE ("type-graph.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_graph) COMMA_SOURCE_FILE ("type-graph.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-graph.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("type-graph.galgas", 35)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-graph.galgas", 36)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-graph.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_graph) COMMA_SOURCE_FILE ("type-graph.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_graphDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-graph.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("type-graph.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-graph.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("type-graph.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-graph.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("type-graph.galgas", 35)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-graph.galgas", 36)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-graph.galgas", 37)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-graph.galgas", 38)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-graph.galgas", 39)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-graph.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("type-list.galgas", 17)) ;
  GALGAS_lstring var_listTypeName_1033 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-list.galgas", 18)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-list.galgas", 19)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_1141 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_ (var_attributeList_1141, inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-list.galgas", 25)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-list.galgas", 29)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (false), var_listTypeName_1033, var_attributeList_1141  COMMA_SOURCE_FILE ("type-list.galgas", 30))  COMMA_SOURCE_FILE ("type-list.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("type-list.galgas", 17)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-list.galgas", 18)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-list.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_parse (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-list.galgas", 25)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-list.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("type-list.galgas", 17)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-list.galgas", 18)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-list.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_property_5F_declaration_indexing (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_25 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-list.galgas", 25)) ;
    } break ;
    default:
      break ;
    }
    switch (select_galgas_33_DeclarationsSyntax_24 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-list.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_listmap) COMMA_SOURCE_FILE ("type-listmap.galgas", 18)) ;
  GALGAS_lstring var_mListmapTypeName_1019 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-listmap.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  GALGAS_lstring var_mAssociatedListTypeName_1105 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool (false), var_mListmapTypeName_1019, var_mAssociatedListTypeName_1105  COMMA_SOURCE_FILE ("type-listmap.galgas", 23))  COMMA_SOURCE_FILE ("type-listmap.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_listmap) COMMA_SOURCE_FILE ("type-listmap.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-listmap.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_listmap) COMMA_SOURCE_FILE ("type-listmap.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_listmapDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-listmap.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("type-listmap.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-listmap.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("type-listmap.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_map) COMMA_SOURCE_FILE ("type-map.galgas", 54)) ;
  GALGAS_lstring var_mMapTypeName_2405 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-map.galgas", 56)) ;
  GALGAS_lstringlist var_mapAttributeList_2513 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 58)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_2573 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
      var_mapAttributeList_2513.addAssign_operation (var_attribute_2573  COMMA_SOURCE_FILE ("type-map.galgas", 62)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-map.galgas", 65)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_2669 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 66)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList_2728 = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 67)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList_2799 = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 68)) ;
  GALGAS_mapRemoveMethodListAST var_mRemoveMethodList_2850 = GALGAS_mapRemoveMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 69)) ;
  GALGAS_insertOrReplaceDeclarationListAST var_insertOrReplaceDeclarationListAST_2928 = GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 70)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_propertyList_2669, inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertMethodList_2728, inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_ (var_mSearchMethodList_2799, inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_ (var_mRemoveMethodList_2850, inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_ (var_insertOrReplaceDeclarationListAST_2928, inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-map.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-map.galgas", 85)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName_2405, var_mapAttributeList_2513, var_propertyList_2669, var_mInsertMethodList_2728, var_mSearchMethodList_2799, var_mRemoveMethodList_2850, var_insertOrReplaceDeclarationListAST_2928  COMMA_SOURCE_FILE ("type-map.galgas", 86))  COMMA_SOURCE_FILE ("type-map.galgas", 86)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_map) COMMA_SOURCE_FILE ("type-map.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-map.galgas", 56)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-map.galgas", 65)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-map.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-map.galgas", 85)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_map) COMMA_SOURCE_FILE ("type-map.galgas", 54)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-map.galgas", 56)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("type-map.galgas", 61)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-map.galgas", 65)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_27 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_map_5F_insert_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_search_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_remove_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_insert_5F_or_5F_replace_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-map.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-map.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i20_ (GALGAS_mapSearchMethodListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("type-map.galgas", 101)) ;
  GALGAS_lstring var_mMethodName_3857 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-map.galgas", 102)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-map.galgas", 103)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-map.galgas", 104)) ;
  GALGAS_lstring var_mErrorMessage_3933 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-map.galgas", 105)) ;
  ioArgument_ioMapSearchMethodListAST.addAssign_operation (var_mMethodName_3857, var_mErrorMessage_3933, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 106))  COMMA_SOURCE_FILE ("type-map.galgas", 106))  COMMA_SOURCE_FILE ("type-map.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("type-map.galgas", 101)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-map.galgas", 102)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-map.galgas", 103)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-map.galgas", 104)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-map.galgas", 105)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_search_5F_declaration_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("type-map.galgas", 101)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-map.galgas", 102)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-map.galgas", 103)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-map.galgas", 104)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-map.galgas", 105)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i21_ (GALGAS_mapRemoveMethodListAST & ioArgument_ioMapRemoveMethodListAST,
                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_remove) COMMA_SOURCE_FILE ("type-map.galgas", 112)) ;
  GALGAS_lstring var_mMethodName_4283 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-map.galgas", 113)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-map.galgas", 114)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-map.galgas", 115)) ;
  GALGAS_lstring var_mErrorMessage_4359 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-map.galgas", 116)) ;
  ioArgument_ioMapRemoveMethodListAST.addAssign_operation (var_mMethodName_4283, var_mErrorMessage_4359  COMMA_SOURCE_FILE ("type-map.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_remove) COMMA_SOURCE_FILE ("type-map.galgas", 112)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-map.galgas", 113)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-map.galgas", 114)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-map.galgas", 115)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-map.galgas", 116)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_remove_5F_declaration_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_remove) COMMA_SOURCE_FILE ("type-map.galgas", 112)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-map.galgas", 113)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-map.galgas", 114)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-map.galgas", 115)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-map.galgas", 116)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i22_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument_ioInsertOrReplaceDeclarationListAST,
                                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("type-map.galgas", 123)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_or) COMMA_SOURCE_FILE ("type-map.galgas", 124)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("type-map.galgas", 125)) ;
  ioArgument_ioInsertOrReplaceDeclarationListAST.addAssign_operation (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 126))  COMMA_SOURCE_FILE ("type-map.galgas", 126)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("type-map.galgas", 123)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_or) COMMA_SOURCE_FILE ("type-map.galgas", 124)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("type-map.galgas", 125)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_insert_5F_or_5F_replace_5F_declaration_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("type-map.galgas", 123)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_or) COMMA_SOURCE_FILE ("type-map.galgas", 124)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("type-map.galgas", 125)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i23_ (GALGAS_insertMethodListAST & ioArgument_ioMapMethodList,
                                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
  GALGAS_lstring var_mMethodName_5021 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-map.galgas", 133)) ;
  GALGAS_lstring var_stateName_5044 ;
  switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
  case 1: {
    var_stateName_5044 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 136))  COMMA_SOURCE_FILE ("type-map.galgas", 136)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("type-map.galgas", 138)) ;
    var_stateName_5044 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-map.galgas", 139)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-map.galgas", 142)) ;
  GALGAS_lstring var_mErrorMessage_5238 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-map.galgas", 143)) ;
  GALGAS_lstring var_mShadowErrorMessage_5271 ;
  switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
  case 1: {
    var_mShadowErrorMessage_5271 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 146))  COMMA_SOURCE_FILE ("type-map.galgas", 146)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("type-map.galgas", 148)) ;
    var_mShadowErrorMessage_5271 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-map.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioMapMethodList.addAssign_operation (var_mMethodName_5021, var_mErrorMessage_5238, var_mShadowErrorMessage_5271, var_stateName_5044  COMMA_SOURCE_FILE ("type-map.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-map.galgas", 133)) ;
  switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("type-map.galgas", 138)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-map.galgas", 139)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-map.galgas", 142)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-map.galgas", 143)) ;
  switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("type-map.galgas", 148)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-map.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_map_5F_insert_5F_setter_5F_declaration_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_insert) COMMA_SOURCE_FILE ("type-map.galgas", 132)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-map.galgas", 133)) ;
  switch (select_galgas_33_DeclarationsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("type-map.galgas", 138)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-map.galgas", 139)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-map.galgas", 141)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-map.galgas", 142)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-map.galgas", 143)) ;
  switch (select_galgas_33_DeclarationsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("type-map.galgas", 148)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-map.galgas", 149)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i24_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sharedmap) COMMA_SOURCE_FILE ("type-shared-map.galgas", 92)) ;
  GALGAS_lstring var_mMapTypeName_5037 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-shared-map.galgas", 94)) ;
  GALGAS_lstring var_mapProxyTypeName_5120 = GALGAS_lstring::constructor_new (var_mMapTypeName_5037.mAttribute_string.add_operation (GALGAS_string ("-proxy"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 95)), var_mMapTypeName_5037.mAttribute_location  COMMA_SOURCE_FILE ("type-shared-map.galgas", 95)) ;
  GALGAS_lstringlist var_mapAttributeList_5248 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 97)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attribute_5308 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("type-shared-map.galgas", 100)) ;
      var_mapAttributeList_5248.addAssign_operation (var_attribute_5308  COMMA_SOURCE_FILE ("type-shared-map.galgas", 101)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 104)) ;
  GALGAS_propertyInCollectionListAST var_propertyList_5429 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 105)) ;
  GALGAS_insertMethodListAST var_mInsertMethodList_5477 = GALGAS_insertMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 106)) ;
  GALGAS_mapSearchMethodListAST var_mSearchMethodList_5528 = GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 107)) ;
  GALGAS_mapStateList var_mapStateList_5564 = GALGAS_mapStateList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 108)) ;
  GALGAS_mapOverrideBlockListAST var_mapOverrideBlockListAST_5622 = GALGAS_mapOverrideBlockListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 109)) ;
  GALGAS_sharedMapAttributeListAST var_sharedMapAttributeListAST_5684 = GALGAS_sharedMapAttributeListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 110)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      nt_sharedmap_5F_state_5F_list_ (var_mapStateList_5564, inCompiler) ;
    } break ;
    case 3: {
      nt_sharedmap_5F_attribute_ (var_sharedMapAttributeListAST_5684, inCompiler) ;
    } break ;
    case 4: {
      nt_property_5F_declaration_ (var_propertyList_5429, inCompiler) ;
    } break ;
    case 5: {
      nt_map_5F_insert_5F_setter_5F_declaration_ (var_mInsertMethodList_5477, inCompiler) ;
    } break ;
    case 6: {
      nt_sharedmap_5F_search_5F_method_5F_declaration_ (var_mSearchMethodList_5528, inCompiler) ;
    } break ;
    case 7: {
      nt_sharedmap_5F_override_ (var_mapOverrideBlockListAST_5622, inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 125)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 127)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_sharedMapDeclarationAST::constructor_new (GALGAS_bool (false), var_mMapTypeName_5037, var_mapAttributeList_5248, var_propertyList_5429, var_mInsertMethodList_5477, var_mSearchMethodList_5528, var_mapStateList_5564, var_mapOverrideBlockListAST_5622, var_sharedMapAttributeListAST_5684  COMMA_SOURCE_FILE ("type-shared-map.galgas", 129))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 129)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_mapProxyDeclarationAST::constructor_new (GALGAS_bool (false), var_mapProxyTypeName_5120, var_mMapTypeName_5037  COMMA_SOURCE_FILE ("type-shared-map.galgas", 141))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 141)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sharedmap) COMMA_SOURCE_FILE ("type-shared-map.galgas", 92)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-shared-map.galgas", 94)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("type-shared-map.galgas", 100)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 104)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      nt_sharedmap_5F_state_5F_list_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_sharedmap_5F_attribute_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_map_5F_insert_5F_setter_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_sharedmap_5F_search_5F_method_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_sharedmap_5F_override_parse (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 125)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 127)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sharedmap) COMMA_SOURCE_FILE ("type-shared-map.galgas", 92)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_uniquemapDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_mapProxyDefinition, "-proxy") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-shared-map.galgas", 94)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("type-shared-map.galgas", 100)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 104)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_31 (inCompiler)) {
    case 2: {
      nt_sharedmap_5F_state_5F_list_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_sharedmap_5F_attribute_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_map_5F_insert_5F_setter_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_sharedmap_5F_search_5F_method_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_sharedmap_5F_override_indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 125)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 127)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_override_i25_ (GALGAS_mapOverrideBlockListAST & ioArgument_ioMapOverrideBlockListAST,
                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("type-shared-map.galgas", 151)) ;
  GALGAS_lstring var_overrideBlockName_6896 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 152)) ;
  GALGAS_mapOverrideBlockDescriptorAST var_mapOverrideBlockDescriptor_31_AST_6962 = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 153)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 154)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_sourceState_31__7043 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 157)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 158)) ;
      GALGAS_lstring var_sourceState_32__7100 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 159)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 160)) ;
      GALGAS_lstring var_targetState_7157 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 161)) ;
      GALGAS_mapAutomatonMessageKind var_messageKind_7200 ;
      GALGAS_lstring var_messageText_7227 ;
      switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
      case 1: {
        var_messageKind_7200 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 165)) ;
        var_messageText_7227 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 166))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 166)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 168)) ;
        var_messageKind_7200 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 169)) ;
        var_messageText_7227 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 170)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 172)) ;
        var_messageKind_7200 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 173)) ;
        var_messageText_7227 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 174)) ;
      } break ;
      default:
        break ;
      }
      var_mapOverrideBlockDescriptor_31_AST_6962.addAssign_operation (var_sourceState_31__7043, var_sourceState_32__7100, var_targetState_7157, var_messageKind_7200, var_messageText_7227  COMMA_SOURCE_FILE ("type-shared-map.galgas", 176)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 178)) ;
  GALGAS_mapOverrideBlockDescriptorAST var_mapOverrideBlockDescriptor_32_AST_7766 = GALGAS_mapOverrideBlockDescriptorAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 179)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 180)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_sourceState_31__7877 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 183)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 184)) ;
      GALGAS_lstring var_sourceState_32__7934 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 185)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 186)) ;
      GALGAS_lstring var_targetState_7991 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 187)) ;
      GALGAS_mapAutomatonMessageKind var_messageKind_8034 ;
      GALGAS_lstring var_messageText_8061 ;
      switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
      case 1: {
        var_messageKind_8034 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 191)) ;
        var_messageText_8061 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 192))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 192)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 194)) ;
        var_messageKind_8034 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 195)) ;
        var_messageText_8061 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 196)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 198)) ;
        var_messageKind_8034 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 199)) ;
        var_messageText_8061 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 200)) ;
      } break ;
      default:
        break ;
      }
      var_mapOverrideBlockDescriptor_32_AST_7766.addAssign_operation (var_sourceState_31__7877, var_sourceState_32__7934, var_targetState_7991, var_messageKind_8034, var_messageText_8061  COMMA_SOURCE_FILE ("type-shared-map.galgas", 202)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 204)) ;
  ioArgument_ioMapOverrideBlockListAST.addAssign_operation (var_overrideBlockName_6896, var_mapOverrideBlockDescriptor_31_AST_6962, var_mapOverrideBlockDescriptor_32_AST_7766  COMMA_SOURCE_FILE ("type-shared-map.galgas", 205)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_override_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("type-shared-map.galgas", 151)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 152)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 154)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 157)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 158)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 159)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 160)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 161)) ;
      switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 168)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 170)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 172)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 174)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 178)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 180)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 183)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 184)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 185)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 186)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 187)) ;
      switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 194)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 196)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 198)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 200)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 204)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_override_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("type-shared-map.galgas", 151)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 152)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 154)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 157)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 158)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 159)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 160)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 161)) ;
      switch (select_galgas_33_DeclarationsSyntax_33 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 168)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 170)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 172)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 174)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 178)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 180)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_DeclarationsSyntax_34 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 183)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 184)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 185)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 186)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 187)) ;
      switch (select_galgas_33_DeclarationsSyntax_35 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 194)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 196)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 198)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 200)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 204)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_attribute_i26_ (GALGAS_sharedMapAttributeListAST & ioArgument_ioSharedMapAttributeListAST,
                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isError_8910 ;
  switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 213)) ;
    var_isError_8910 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 216)) ;
    var_isError_8910 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_attributeName_9045 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("type-shared-map.galgas", 219)) ;
  GALGAS_lstring var_messageText_9077 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 220)) ;
  ioArgument_ioSharedMapAttributeListAST.addAssign_operation (var_attributeName_9045, var_isError_8910, var_messageText_9077  COMMA_SOURCE_FILE ("type-shared-map.galgas", 221)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_attribute_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 213)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 216)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("type-shared-map.galgas", 219)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 220)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_attribute_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_DeclarationsSyntax_36 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 213)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 216)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("type-shared-map.galgas", 219)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 220)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_search_5F_method_5F_declaration_i27_ (GALGAS_mapSearchMethodListAST & ioArgument_ioMapSearchMethodListAST,
                                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("type-shared-map.galgas", 227)) ;
  GALGAS_lstring var_mMethodName_9430 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 228)) ;
  GALGAS_lstring var_actionName_9454 ;
  switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
    var_actionName_9454 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 231))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 231)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("type-shared-map.galgas", 233)) ;
    var_actionName_9454 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 234)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 236)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-shared-map.galgas", 237)) ;
  GALGAS_lstring var_mErrorMessage_9647 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 238)) ;
  ioArgument_ioMapSearchMethodListAST.addAssign_operation (var_mMethodName_9430, var_mErrorMessage_9647, var_actionName_9454  COMMA_SOURCE_FILE ("type-shared-map.galgas", 239)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_search_5F_method_5F_declaration_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("type-shared-map.galgas", 227)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 228)) ;
  switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("type-shared-map.galgas", 233)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 234)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 236)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-shared-map.galgas", 237)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 238)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_search_5F_method_5F_declaration_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("type-shared-map.galgas", 227)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 228)) ;
  switch (select_galgas_33_DeclarationsSyntax_37 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_do) COMMA_SOURCE_FILE ("type-shared-map.galgas", 233)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 234)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 236)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("type-shared-map.galgas", 237)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 238)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_state_5F_list_i28_ (GALGAS_mapStateList & ioArgument_ioMapStateList,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("type-shared-map.galgas", 248)) ;
  GALGAS_lstring var_stateName_9982 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 249)) ;
  GALGAS_mapAutomatonMessageKind var_stateMessageKind_10028 ;
  GALGAS_lstring var_stateMessage_10054 ;
  switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
  case 1: {
    var_stateMessageKind_10028 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 253)) ;
    var_stateMessage_10054 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 254))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 254)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 256)) ;
    var_stateMessage_10054 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 257)) ;
    var_stateMessageKind_10028 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 258)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 260)) ;
    var_stateMessage_10054 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 261)) ;
    var_stateMessageKind_10028 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 262)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 264)) ;
  GALGAS_mapStateTransitionList var_transitionList_10404 = GALGAS_mapStateTransitionList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 265)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_sharedmap_5F_state_5F_transition_ (var_transitionList_10404, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioMapStateList.addAssign_operation (var_stateName_9982, var_stateMessageKind_10028, var_stateMessage_10054, var_transitionList_10404  COMMA_SOURCE_FILE ("type-shared-map.galgas", 270)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 275)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_state_5F_list_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("type-shared-map.galgas", 248)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 249)) ;
  switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 256)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 257)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 260)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 261)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 264)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_sharedmap_5F_state_5F_transition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 275)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_state_5F_list_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_state) COMMA_SOURCE_FILE ("type-shared-map.galgas", 248)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 249)) ;
  switch (select_galgas_33_DeclarationsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 256)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 257)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 260)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 261)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 264)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_39 (inCompiler)) {
    case 2: {
      nt_sharedmap_5F_state_5F_transition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 275)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_state_5F_transition_i29_ (GALGAS_mapStateTransitionList & ioArgument_ioTransitionList,
                                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_actionName_10853 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 281)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 282)) ;
  GALGAS_lstring var_targetStateName_10909 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 283)) ;
  GALGAS_mapAutomatonMessageKind var_transitionMessageKind_10960 ;
  GALGAS_lstring var_transitionMessage_10991 ;
  switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
    var_transitionMessageKind_10960 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 287)) ;
    var_transitionMessage_10991 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 288))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 288)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 290)) ;
    var_transitionMessage_10991 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 291)) ;
    var_transitionMessageKind_10960 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 292)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 294)) ;
    var_transitionMessage_10991 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 295)) ;
    var_transitionMessageKind_10960 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 296)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTransitionList.addAssign_operation (var_actionName_10853, var_targetStateName_10909, var_transitionMessageKind_10960, var_transitionMessage_10991  COMMA_SOURCE_FILE ("type-shared-map.galgas", 298)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_state_5F_transition_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 281)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 282)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 283)) ;
  switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 290)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 291)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 294)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 295)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sharedmap_5F_state_5F_transition_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 281)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 282)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-shared-map.galgas", 283)) ;
  switch (select_galgas_33_DeclarationsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("type-shared-map.galgas", 290)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 291)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("type-shared-map.galgas", 294)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("type-shared-map.galgas", 295)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i30_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sortedlist) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  GALGAS_lstring var_sortedListTypeName_1447 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_1561 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_attributeList_1561, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 39)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 40)) ;
  GALGAS_sortedListSortDescriptorListAST var_sortDescriptorList_1733 = GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 41)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_ (var_sortDescriptorList_1733, inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 47)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool (false), var_sortedListTypeName_1447, var_attributeList_1561, var_sortDescriptorList_1733  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 48))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sortedlist) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 39)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 40)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_parse (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 47)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_sortedlist) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 29)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_sortedListDefinition, "") ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "-element") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 30)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_41 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 37)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 39)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 40)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_sortedlist_5F_sort_5F_descriptor_indexing (inCompiler) ;
    switch (select_galgas_33_DeclarationsSyntax_42 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 47)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i31_ (GALGAS_sortedListSortDescriptorListAST & ioArgument_ioSortedListSortDescriptorList,
                                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_mSortedAttributeName_2310 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 59)) ;
  GALGAS_bool var_mAscending_2331 ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 62)) ;
    var_mAscending_2331 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 65)) ;
    var_mAscending_2331 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioSortedListSortDescriptorList.addAssign_operation (var_mSortedAttributeName_2310, var_mAscending_2331  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 59)) ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 62)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 65)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_sortedlist_5F_sort_5F_descriptor_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 59)) ;
  switch (select_galgas_33_DeclarationsSyntax_43 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3C_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 62)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3E_) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 65)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i32_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_struct) COMMA_SOURCE_FILE ("type-struct.galgas", 18)) ;
  GALGAS_lstring var_structTypeName_1091 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-struct.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_1172 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 21)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_ (var_attributeList_1172, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-struct.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-struct.galgas", 28)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (false), var_structTypeName_1091, var_attributeList_1172, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-struct.galgas", 29))  COMMA_SOURCE_FILE ("type-struct.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_struct) COMMA_SOURCE_FILE ("type-struct.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-struct.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-struct.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-struct.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_struct) COMMA_SOURCE_FILE ("type-struct.galgas", 18)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_structDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("type-struct.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("type-struct.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_DeclarationsSyntax_44 (inCompiler)) {
    case 2: {
      nt_property_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3B_) COMMA_SOURCE_FILE ("type-struct.galgas", 26)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("type-struct.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i33_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  GALGAS_lstring var_className_1270 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  GALGAS_lstring var_mGetterName_1350 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1487 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_1487, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  GALGAS_lstring var_mReturnedTypeName_1541 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_idf_1588 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.addObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_1588.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 31)), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1270, var_mGetterName_1350, var_mFormalInputParameterList_1487, var_mReturnedTypeName_1541  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 33))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 24)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 26)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 27)) ;
  switch (select_galgas_33_DeclarationsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i34_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  GALGAS_lstring var_className_1218 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  GALGAS_lstring var_mMethodName_1308 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1428 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1428, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1218, var_mMethodName_1308, var_formalParameterList_1428  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 25))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i35_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  GALGAS_lstring var_className_1218 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  GALGAS_lstring var_setterName_1307 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1427 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1427, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_abstractExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1218, var_setterName_1307, var_formalParameterList_1427  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 25))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_abstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 23)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i36_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("extension-getter.galgas", 24)) ;
  GALGAS_lstring var_className_1376 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  GALGAS_lstring var_mMethodName_1458 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1552 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_1552, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  GALGAS_lstring var_mReturnedTypeName_1668 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  GALGAS_lstring var_resultVariableName_1700 ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    var_resultVariableName_1700 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
    var_resultVariableName_1700 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 35))  COMMA_SOURCE_FILE ("extension-getter.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1912 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1912, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1951 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 39)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_extensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1376, var_mMethodName_1458, var_mFormalInputParameterList_1552, var_mReturnedTypeName_1668, var_resultVariableName_1700, var_routineInstructionList_1912, var_endOfInstructionList_1951  COMMA_SOURCE_FILE ("extension-getter.galgas", 41))  COMMA_SOURCE_FILE ("extension-getter.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("extension-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("extension-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionGetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-getter.galgas", 26)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("extension-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-getter.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i37_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("extension-method.galgas", 22)) ;
  GALGAS_lstring var_className_1274 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-method.galgas", 23)) ;
  GALGAS_lstring var_mMethodName_1356 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1468 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1468, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1564 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1564, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_1592 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_extensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1274, var_mMethodName_1356, var_formalParameterList_1468, var_routineInstructionList_1564, var_endOfMethodLocation_1592  COMMA_SOURCE_FILE ("extension-method.galgas", 30))  COMMA_SOURCE_FILE ("extension-method.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("extension-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("extension-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-method.galgas", 26)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-method.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i38_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("extension-setter.galgas", 22)) ;
  GALGAS_lstring var_className_1285 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  GALGAS_lstring var_setterName_1366 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1478 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1478, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-setter.galgas", 26)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1574 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1574, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_1612 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-setter.galgas", 29)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_extensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1285, var_setterName_1366, var_formalParameterList_1478, var_routineInstructionList_1574, var_endOfSetterLocation_1612  COMMA_SOURCE_FILE ("extension-setter.galgas", 30))  COMMA_SOURCE_FILE ("extension-setter.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("extension-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-setter.galgas", 26)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-setter.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("extension-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceExtensionSetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_extensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-setter.galgas", 26)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-setter.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i39_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  GALGAS_lstring var_className_1295 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  GALGAS_lstring var_mGetterName_1383 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  GALGAS_formalInputParameterListAST var_mFormalInputParameterList_1528 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_mFormalInputParameterList_1528, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  GALGAS_lstring var_mReturnedTypeName_1582 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_idf_1622 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
    TC_Array <C_FixItDescription> fixItArray0 ;
    fixItArray0.addObject (C_FixItDescription (kFixItRemove, "")) ;
    inCompiler->emitSemanticWarning (var_idf_1622.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 31)), GALGAS_string ("an identifier is no longer required here"), fixItArray0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 31)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1295, var_mGetterName_1383, var_mFormalInputParameterList_1528, var_mReturnedTypeName_1582  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 34))  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionGetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 25)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 28)) ;
  switch (select_galgas_33_DeclarationsSyntax_47 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 30)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i40_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  GALGAS_lstring var_className_1247 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  GALGAS_lstring var_mMethodName_1345 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1473 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1473, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1247, var_mMethodName_1345, var_formalParameterList_1473  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 26))  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i40_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i40_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionMethod, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideAbstractExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i41_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  GALGAS_lstring var_className_1247 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  GALGAS_lstring var_setterName_1344 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1472 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1472, inCompiler) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingAbstractExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1247, var_setterName_1344, var_formalParameterList_1472  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 26))  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i41_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i41_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_abstract) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 22)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideAbstractExtensionSetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideabstractExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 24)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i42_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  GALGAS_lstring var_className_1450 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  GALGAS_lstring var_mMethodName_1539 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_1646 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (var_formalInputParameterList_1646, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 29)) ;
  GALGAS_lstring var_mReturnedTypeName_1700 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  GALGAS_lstring var_resultVariableName_1732 ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    var_resultVariableName_1732 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 33)) ;
  } break ;
  case 2: {
    var_resultVariableName_1732 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 35))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 37)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1944 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1944, inCompiler) ;
  GALGAS_location var_endOfInstructionList_1983 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 39)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 40)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionGetterAST::constructor_new (GALGAS_bool (false), var_className_1450, var_mMethodName_1539, var_formalInputParameterList_1646, var_mReturnedTypeName_1700, var_resultVariableName_1732, var_routineInstructionList_1944, var_endOfInstructionList_1983  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 41))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i42_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  nt_formal_5F_input_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 40)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i42_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 24)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_getter) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 25)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionGetter, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 26)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionGetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 27)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 30)) ;
  switch (select_galgas_33_DeclarationsSyntax_48 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 33)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 37)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i43_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 23)) ;
  GALGAS_lstring var_className_1329 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 24)) ;
  GALGAS_lstring var_mMethodName_1429 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 25)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1549 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1549, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1645 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1645, inCompiler) ;
  GALGAS_location var_endOfMethodLocation_1683 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 30)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionMethodAST::constructor_new (GALGAS_bool (false), var_className_1329, var_mMethodName_1429, var_formalParameterList_1549, var_routineInstructionList_1645, var_endOfMethodLocation_1683  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 31))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i43_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i43_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_method) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionMethodDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i44_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  GALGAS_lstring var_className_1340 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  GALGAS_lstring var_setterName_1439 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  GALGAS_formalParameterListAST var_formalParameterList_1559 ;
  nt_formal_5F_parameter_5F_list_ (var_formalParameterList_1559, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 27)) ;
  GALGAS_semanticInstructionListAST var_routineInstructionList_1655 ;
  nt_semantic_5F_instruction_5F_list_ (var_routineInstructionList_1655, inCompiler) ;
  GALGAS_location var_endOfSetterLocation_1693 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 30)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_overridingExtensionSetterAST::constructor_new (GALGAS_bool (false), var_className_1340, var_setterName_1439, var_formalParameterList_1559, var_routineInstructionList_1655, var_endOfSetterLocation_1693  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 31))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i44_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_declaration_i44_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_override) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 22)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_setter) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 23)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceOverrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 24)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_overrideExtensionSetterDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 25)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 27)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i45_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 20)) ;
  GALGAS_lstring var_typeName_1143 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 21)) ;
  GALGAS_lstring var_variableName_1178 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 22)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationAST::constructor_new (var_typeName_1143.getter_location (SOURCE_FILE ("instruction-var-declaration.galgas", 23)), var_typeName_1143, var_variableName_1178, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i45_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i45_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_var) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 20)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 21)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i46_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1511 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 29)) ;
  GALGAS_lstring var_variableName_1546 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 30)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationAST::constructor_new (var_typeName_1511.getter_location (SOURCE_FILE ("instruction-var-declaration.galgas", 31)), var_typeName_1511, var_variableName_1546, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i46_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_DeclarationsSyntax::rule_galgas_33_DeclarationsSyntax_semantic_5F_instruction_i46_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 30)) ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_i0_ (GALGAS_galgas_33_DeclarationAST & ioArgument_ioDeclarations,
                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_bool var_isTemplate_1953 ;
  switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
  case 1: {
    var_isTemplate_1953 = GALGAS_bool (true) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 25)) ;
  } break ;
  case 2: {
    var_isTemplate_1953 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 29)) ;
  GALGAS_lstring var_lexiqueComponentName_2123 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 31)) ;
  GALGAS_lstring var_indexingDirectory_2175 ;
  switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
  case 1: {
    var_indexingDirectory_2175 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 37)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 38)) ;
    var_indexingDirectory_2175 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 41)) ;
  GALGAS_metamodelTemplateDelimitorListAST var_templateDelimitorList_2380 = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 43)) ;
  GALGAS_templateReplacementListAST var_templateReplacementList_2439 = GALGAS_templateReplacementListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 44)) ;
  GALGAS_lexicalAttributeListAST var_lexicalAttributeList_2492 = GALGAS_lexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 45)) ;
  GALGAS_lexicalStyleListAST var_lexicalStyleList_2537 = GALGAS_lexicalStyleListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 46)) ;
  GALGAS_terminalDeclarationListAST var_terminalDeclarationList_2596 = GALGAS_terminalDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 47)) ;
  GALGAS_lexicalMessageDeclarationListAST var_lexicalMessageDeclarationList_2667 = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 48)) ;
  GALGAS_lexicalListDeclarationListAST var_lexicalListDeclarationList_2732 = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 49)) ;
  GALGAS_lexicalRuleListAST var_lexicalRuleList_2775 = GALGAS_lexicalRuleListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 50)) ;
  GALGAS_externRoutineListAST var_externRoutineList_2822 = GALGAS_externRoutineListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 51)) ;
  GALGAS_externFunctionListAST var_externFunctionList_2871 = GALGAS_externFunctionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 52)) ;
  GALGAS_indexingListAST var_indexingListAST_2911 = GALGAS_indexingListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 53)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_extern_5F_routine_5F_declaration_ (var_externRoutineList_2822, inCompiler) ;
    } break ;
    case 3: {
      nt_extern_5F_function_5F_declaration_ (var_externFunctionList_2871, inCompiler) ;
    } break ;
    case 4: {
      nt_template_5F_delimitor_ (var_templateDelimitorList_2380, inCompiler) ;
    } break ;
    case 5: {
      nt_template_5F_replacement_ (var_templateReplacementList_2439, inCompiler) ;
    } break ;
    case 6: {
      nt_lexical_5F_attribute_5F_declaration_ (var_lexicalAttributeList_2492, inCompiler) ;
    } break ;
    case 7: {
      nt_style_5F_declaration_ (var_lexicalStyleList_2537, inCompiler) ;
    } break ;
    case 8: {
      nt_terminal_5F_declaration_ (var_terminalDeclarationList_2596, inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_list_5F_declaration_ (var_lexicalListDeclarationList_2732, inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_explicit_5F_rule_ (var_lexicalRuleList_2775, inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_implicit_5F_rule_ (var_lexicalRuleList_2775, inCompiler) ;
    } break ;
    case 12: {
      nt_lexical_5F_message_5F_declaration_ (var_lexicalMessageDeclarationList_2667, inCompiler) ;
    } break ;
    case 13: {
      nt_lexical_5F_indexing_5F_declaration_ (var_indexingListAST_2911, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 80)) ;
  ioArgument_ioDeclarations.mAttribute_mDeclarationList.addAssign_operation (GALGAS_lexiqueComponentAST::constructor_new (GALGAS_bool (false), var_lexiqueComponentName_2123, var_isTemplate_1953, var_templateDelimitorList_2380, var_templateReplacementList_2439, var_lexicalAttributeList_2492, var_lexicalStyleList_2537, var_terminalDeclarationList_2596, var_lexicalMessageDeclarationList_2667, var_lexicalListDeclarationList_2732, var_lexicalRuleList_2775, var_externRoutineList_2822, var_externFunctionList_2871, var_indexingListAST_2911, var_indexingDirectory_2175  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 81))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 25)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 31)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 37)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 38)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_extern_5F_routine_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_extern_5F_function_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_template_5F_delimitor_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_template_5F_replacement_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_lexical_5F_attribute_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_style_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_terminal_5F_declaration_parse (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_list_5F_declaration_parse (inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_explicit_5F_rule_parse (inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_implicit_5F_rule_parse (inCompiler) ;
    } break ;
    case 12: {
      nt_lexical_5F_message_5F_declaration_parse (inCompiler) ;
    } break ;
    case 13: {
      nt_lexical_5F_indexing_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 80)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_declaration_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_LexiqueComponentSyntax_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 25)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_lexique) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 31)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 37)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 38)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_2 (inCompiler)) {
    case 2: {
      nt_extern_5F_routine_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_extern_5F_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_template_5F_delimitor_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_template_5F_replacement_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_lexical_5F_attribute_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_style_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_terminal_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_lexical_5F_list_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 10: {
      nt_lexical_5F_explicit_5F_rule_indexing (inCompiler) ;
    } break ;
    case 11: {
      nt_lexical_5F_implicit_5F_rule_indexing (inCompiler) ;
    } break ;
    case 12: {
      nt_lexical_5F_message_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 13: {
      nt_lexical_5F_indexing_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_ (GALGAS_indexingListAST & ioArgument_ioIndexingListAST,
                                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 103)) ;
  GALGAS_lstring var_indexName_4392 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 104)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 105)) ;
  GALGAS_lstring var_indexComment_4470 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 106)) ;
  ioArgument_ioIndexingListAST.addAssign_operation (var_indexName_4392, var_indexComment_4470  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 107)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 103)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 104)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 105)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 106)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_indexing_5F_declaration_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_indexing) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 103)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_indexingNameDefinition, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 104)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 105)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument_ioTemplateDelimitorList,
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 113)) ;
  GALGAS_lstring var_startString_4784 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 114)) ;
  GALGAS_lstringlist var_optionList_4801 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 115)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_optionName_4878 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 118)) ;
      var_optionList_4801.addAssign_operation (var_optionName_4878  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 119)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 121)) ;
  GALGAS_lstring var_endString_4959 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 122)) ;
  ioArgument_ioTemplateDelimitorList.addAssign_operation (var_startString_4784, var_optionList_4801, var_endString_4959  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 113)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 114)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 118)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 121)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 122)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_delimitor_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_template) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 113)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 114)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 118)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 121)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 122)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_ (GALGAS_templateReplacementListAST & ioArgument_ioTemplateReplacement,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 129)) ;
  GALGAS_lstring var_matchString_5282 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 130)) ;
  GALGAS_lstring var_replacementString_5311 ;
  GALGAS_lstring var_replacementFunction_5342 ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 134)) ;
    var_replacementString_5311 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 135)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 136)) ;
    var_replacementFunction_5342 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 137)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 139)) ;
    var_replacementString_5311 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 140)) ;
    var_replacementFunction_5342 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 141))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 141)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioTemplateReplacement.addAssign_operation (var_matchString_5282, var_replacementString_5311, var_replacementFunction_5342  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 143)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 129)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 130)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 134)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 135)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 136)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 137)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 139)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 140)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_template_5F_replacement_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_replace) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 129)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 130)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 134)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 135)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 136)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 137)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 139)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 140)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument_ioLexicalMessageDeclarationList,
                                                                                                                            C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 150)) ;
  GALGAS_lstring var_messageName_5921 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 151)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 152)) ;
  GALGAS_lstring var_messageValue_5967 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 153)) ;
  ioArgument_ioLexicalMessageDeclarationList.addAssign_operation (var_messageName_5921, var_messageValue_5967  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 154)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 150)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 151)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 152)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 153)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_message_5F_declaration_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 150)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 151)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 152)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 153)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalImplicitRuleList,
                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 160)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 161)) ;
  GALGAS_lstring var_listName_6291 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 162)) ;
  ioArgument_ioLexicalImplicitRuleList.addAssign_operation (GALGAS_lexicalImplicitRuleAST::constructor_new (var_listName_6291  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 163))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 163)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 160)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 161)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 162)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_implicit_5F_rule_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 160)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 161)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 162)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_ (GALGAS_lexicalRuleListAST & ioArgument_ioLexicalExplicitRuleList,
                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 169)) ;
  GALGAS_lexicalExpressionAST var_lexicalRuleExpression_6648 ;
  nt_lexical_5F_expression_ (var_lexicalRuleExpression_6648, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 171)) ;
  GALGAS_lexicalInstructionListAST var_instructionList_6699 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 172)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_instructionList_6699, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 177)) ;
  ioArgument_ioLexicalExplicitRuleList.addAssign_operation (GALGAS_lexicalExplicitRuleAST::constructor_new (var_lexicalRuleExpression_6648, var_instructionList_6699  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 178))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 178)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 169)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 171)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 177)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_explicit_5F_rule_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rule) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 169)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 171)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_5 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 177)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 184)) ;
  GALGAS_lexicalInstructionAST var_instruction_7158 ;
  nt_lexical_5F_send_5F_instruction_ (var_instruction_7158, inCompiler) ;
  ioArgument_ioInstructionList.addAssign_operation (var_instruction_7158  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 186)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 184)) ;
  nt_lexical_5F_send_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 184)) ;
  nt_lexical_5F_send_5F_instruction_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_sentTerminal_7436 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 192)) ;
  outArgument_outInstruction = GALGAS_lexicalSimpleSendInstructionAST::constructor_new (var_sentTerminal_7436  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 193)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 192)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 192)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_ (GALGAS_lexicalInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lexicalSendSearchListAST var_lexicalSendSearchList_7756 = GALGAS_lexicalSendSearchListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 199)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 200)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_attributeName_7826 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 202)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 203)) ;
    GALGAS_lstring var_searchListName_7881 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 204)) ;
    var_lexicalSendSearchList_7756.addAssign_operation (var_attributeName_7826, var_searchListName_7881  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 205)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 206)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 208)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lexicalSendDefaultActionAST var_lexicalSendDefaultAction_8038 ;
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_defaultSentTerminal_8100 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 212)) ;
    var_lexicalSendDefaultAction_8038 = GALGAS_lexicalSendTerminalByDefaultAST::constructor_new (var_defaultSentTerminal_8100  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 213)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 215)) ;
    GALGAS_lstring var_defaultErrorMessageName_8263 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 216)) ;
    var_lexicalSendDefaultAction_8038 = GALGAS_lexicalErrorByDefaultAST::constructor_new (var_defaultErrorMessageName_8263  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 217)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_lexicalStructuredSendInstructionAST::constructor_new (var_lexicalSendSearchList_7756, var_lexicalSendDefaultAction_8038  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 219)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 200)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 202)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 203)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 204)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 206)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 208)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 212)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 215)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 216)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_send_5F_instruction_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 200)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 202)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_in) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 203)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 204)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 206)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_search) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 208)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 212)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 215)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 216)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 228)) ;
  GALGAS_lexicalInstructionListAST var_repeatedInstructionList_8745 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 229)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_repeatedInstructionList_8745, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lexicalWhileBranchListAST var_lexicalWhileBranchList_8877 = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 234)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_ (var_lexicalWhileBranchList_8877, inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 239)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRepeatInstructionAST::constructor_new (var_repeatedInstructionList_8745, var_lexicalWhileBranchList_8877  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 240))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 240)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 228)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_parse (inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 239)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_repeat) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 228)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_8 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_repeat_5F_while_5F_branch_indexing (inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_9 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 239)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_ (GALGAS_lexicalWhileBranchListAST & ioArgument_ioLexicalWhileBranchList,
                                                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 249)) ;
  GALGAS_lexicalExpressionAST var_whileExpression_9368 ;
  nt_lexical_5F_expression_ (var_whileExpression_9368, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 251)) ;
  GALGAS_lexicalInstructionListAST var_whileInstructionList_9424 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 252)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_whileInstructionList_9424, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioLexicalWhileBranchList.addAssign_operation (var_whileExpression_9368, var_whileInstructionList_9424  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 257)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 249)) ;
  nt_lexical_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 251)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_repeat_5F_while_5F_branch_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_while) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 249)) ;
  nt_lexical_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 251)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_10 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_select) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 263)) ;
  GALGAS_lexicalSelectBranchListAST var_lexicalWhileBranchList_9835 = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 264)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 266)) ;
    GALGAS_lexicalExpressionAST var_selectExpression_9929 ;
    nt_lexical_5F_expression_ (var_selectExpression_9929, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 268)) ;
    GALGAS_lexicalInstructionListAST var_selectInstructionList_9990 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 269)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
      case 2: {
        nt_lexical_5F_instruction_ (var_selectInstructionList_9990, inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    var_lexicalWhileBranchList_9835.addAssign_operation (var_selectExpression_9929, var_selectInstructionList_9990  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 274)) ;
    switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 277)) ;
  GALGAS_lexicalInstructionListAST var_defaultInstructionList_10225 = GALGAS_lexicalInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 278)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_ (var_defaultInstructionList_10225, inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 283)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalSelectInstructionAST::constructor_new (var_lexicalWhileBranchList_9835, var_defaultInstructionList_10225  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 284))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 284)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_select) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 263)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 266)) ;
    nt_lexical_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 268)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
      case 2: {
        nt_lexical_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 277)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 283)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_select) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 263)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_case) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 266)) ;
    nt_lexical_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 268)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_LexiqueComponentSyntax_12 (inCompiler)) {
      case 2: {
        nt_lexical_5F_instruction_indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    switch (select_galgas_33_LexiqueComponentSyntax_11 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_default) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 277)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_LexiqueComponentSyntax_13 (inCompiler)) {
    case 2: {
      nt_lexical_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_end) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 283)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_actionName_10672 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 293)) ;
  GALGAS_lexicalRoutineCallActualArgumentListAST var_actualArgumentList_10734 = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 294)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 295)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_10784 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 298)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector_10784.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_selector_10784.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 300)), GALGAS_string ("the selector should be '!'"), fixItArray2  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 300)) ;
      }
      GALGAS_location var_passingModeLocation_10906 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 302)) ;
      GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_11020 ;
      nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_11020, inCompiler) ;
      var_actualArgumentList_10734.addAssign_operation (GALGAS_lexicalFormalInputArgumentAST::constructor_new (var_passingModeLocation_10906, var_arg_11020  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 304))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 304)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_11141 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 306)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_selector_11141.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (var_selector_11141.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 308)), GALGAS_string ("the selector should be '!\?'"), fixItArray4  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 308)) ;
      }
      GALGAS_location var_passingModeLocation_11264 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 310)) ;
      GALGAS_lstring var_attributeName_11326 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 311)) ;
      GALGAS_lexicalAttributeInputOutputArgumentAST var_arg_11338 = GALGAS_lexicalAttributeInputOutputArgumentAST::constructor_new (var_passingModeLocation_11264, var_attributeName_11326  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 312)) ;
      var_actualArgumentList_10734.addAssign_operation (var_arg_11338  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 313)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstringlist var_errorMessageList_11490 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 315)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 318)) ;
    bool repeatFlag_5 = true ;
    while (repeatFlag_5) {
      GALGAS_lstring var_errorMessageName_11582 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 320)) ;
      var_errorMessageList_11490.addAssign_operation (var_errorMessageName_11582  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 321)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 323)) ;
      } break ;
      default:
        repeatFlag_5 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 326)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRoutineInstructionAST::constructor_new (var_actionName_10672, var_actualArgumentList_10734, var_errorMessageList_11490  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 327))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 327)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 293)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 295)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 298)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 306)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 311)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 318)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 320)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 323)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 326)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 293)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 295)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 298)) ;
      nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 306)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 311)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 318)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 320)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_16 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 323)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 326)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lchar var_character_12060 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__27_char_27_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 336)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCharacterInputArgumentAST::constructor_new (var_character_12060  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 337)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__27_char_27_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 336)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__27_char_27_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 336)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_luint var_unsignedValue_12411 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 343)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalUnsignedInputArgumentAST::constructor_new (var_unsignedValue_12411  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 344)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 343)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 343)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_location var_currentLocation_12750 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 350)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 351)) ;
  outArgument_outEffectiveArgument = GALGAS_lexicalCurrentCharacterInputArgumentAST::constructor_new (var_currentLocation_12750  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 352)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 351)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2A_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 351)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument_outEffectiveArgument,
                                                                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outEffectiveArgument.drop () ; // Release 'out' argument
  GALGAS_lstring var_idf_13124 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 358)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
    outArgument_outEffectiveArgument = GALGAS_lexicalAttributeInputArgumentAST::constructor_new (var_idf_13124  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 360)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 362)) ;
    GALGAS_lexicalFunctionCallActualArgumentListAST var_functionActualArgumentList_13291 = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 363)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
      case 2: {
        GALGAS_lstring var_selector_13341 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 366)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector_13341.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_selector_13341.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 368)), GALGAS_string ("the selector should be '!'"), fixItArray2  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 368)) ;
        }
        GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST var_arg_13540 ;
        nt_lexical_5F_output_5F_effective_5F_argument_ (var_arg_13540, inCompiler) ;
        var_functionActualArgumentList_13291.addAssign_operation (var_arg_13540  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 371)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 373)) ;
    outArgument_outEffectiveArgument = GALGAS_lexicalFunctionInputArgumentAST::constructor_new (var_idf_13124, var_functionActualArgumentList_13291  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 374)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 358)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 362)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 366)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 373)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_output_5F_effective_5F_argument_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 358)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__28_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 362)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_LexiqueComponentSyntax_18 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 366)) ;
        nt_lexical_5F_output_5F_effective_5F_argument_indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__29_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 373)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 381)) ;
  GALGAS_lstring var_errorMessageName_13950 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 382)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalErrorInstructionAST::constructor_new (var_errorMessageName_13950  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 383))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 383)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 381)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 382)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 381)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 382)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 389)) ;
  GALGAS_lstring var_warningMessageName_14278 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 390)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalWarningInstructionAST::constructor_new (var_warningMessageName_14278  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 391))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 391)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 389)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 390)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_warning) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 389)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 390)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 397)) ;
  GALGAS_lstring var_terminalName_14603 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 398)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalDropInstructionAST::constructor_new (var_terminalName_14603  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 399))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 399)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 397)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 398)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_drop) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 397)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 398)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_tag) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 405)) ;
  GALGAS_lstring var_tagName_14911 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 406)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalTagInstructionAST::constructor_new (var_tagName_14911  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 407))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 407)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_tag) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 405)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 406)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_tag) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 405)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 406)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 413)) ;
  GALGAS_lstring var_tagName_15216 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 414)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 415)) ;
  GALGAS_lstring var_terminalName_15260 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 416)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalRewindInstructionAST::constructor_new (var_tagName_15216, var_terminalName_15260  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 417))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 417)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 413)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 414)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 415)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 416)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_rewind) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 413)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 414)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_send) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 415)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 416)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_ (GALGAS_lexicalInstructionListAST & ioArgument_ioInstructionList,
                                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 423)) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_lexicalLogInstructionAST::constructor_new (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 424))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 424)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 423)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_instruction_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_log) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 423)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i24_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_term_ (outArgument_outExpression, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_term_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_expression_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_term_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i25_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_lexical_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 439)) ;
      GALGAS_lexicalExpressionAST var_rightExpression_16112 ;
      nt_lexical_5F_factor_ (var_rightExpression_16112, inCompiler) ;
      outArgument_outExpression = GALGAS_lexicalOrExpressionAST::constructor_new (outArgument_outExpression, var_rightExpression_16112  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 441)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 439)) ;
      nt_lexical_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_term_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_lexical_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 439)) ;
      nt_lexical_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i26_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_string_16410 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 448)) ;
  outArgument_outExpression = GALGAS_lexicalStringMatchAST::constructor_new (var_string_16410  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 449)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 448)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 448)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 455)) ;
  GALGAS_lstring var_string_16682 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 456)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 457)) ;
  GALGAS_lstring var_errorMessage_16725 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 458)) ;
  outArgument_outExpression = GALGAS_lexicalStringNotMatchAST::constructor_new (var_string_16682, var_errorMessage_16725  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 459)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 455)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 456)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 457)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 458)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 455)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 456)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 457)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 458)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_character_17016 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__27_char_27_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 465)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_lexicalCharacterMatchAST::constructor_new (var_character_17016  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 467)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 469)) ;
    GALGAS_lchar var_upperBound_17138 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__27_char_27_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 470)) ;
    outArgument_outExpression = GALGAS_lexicalCharacterIntervalMatchAST::constructor_new (var_character_17016, var_upperBound_17138  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 471)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__27_char_27_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 465)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 469)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__27_char_27_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 470)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__27_char_27_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 465)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 469)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__27_char_27_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 470)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_ (GALGAS_lexicalExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_characterSet_17455 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 478)) ;
  outArgument_outExpression = GALGAS_lexicalCharacterSetMatchAST::constructor_new (var_characterSet_17455  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 479)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 478)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_factor_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 478)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_ (GALGAS_lexicalListDeclarationListAST & ioArgument_ioLexicalListDeclarationList,
                                                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 485)) ;
  GALGAS_lstring var_name_17786 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 486)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList_17835 = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 487)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_17879 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 490)) ;
      GALGAS_lstring var_sentAttribute_17915 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 491)) ;
      var_sentAttributeList_17835.addAssign_operation (var_selector_17879, var_sentAttribute_17915  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 492)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_theStyle_17991 ;
  switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 496)) ;
    var_theStyle_17991 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 497)) ;
  } break ;
  case 2: {
    var_theStyle_17991 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 499))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 499)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 501)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 502)) ;
  GALGAS_lstring var_errorMessage_18190 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 503)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 504)) ;
  GALGAS_lexicalListEntryListAST var_entryList_18212 = GALGAS_lexicalListEntryListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 505)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_ (var_entryList_18212, inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 509)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 511)) ;
  ioArgument_ioLexicalListDeclarationList.addAssign_operation (var_name_17786, var_theStyle_17991, var_errorMessage_18190, var_sentAttributeList_17835, var_entryList_18212  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 512)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 485)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 486)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 490)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 491)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 496)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 497)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 501)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 502)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 503)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 504)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_parse (inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 509)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 511)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_declaration_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_list) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 485)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 486)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 490)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 491)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 496)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 497)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 501)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 502)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 503)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7B_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 504)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    nt_lexical_5F_list_5F_entry_indexing (inCompiler) ;
    switch (select_galgas_33_LexiqueComponentSyntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 509)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__7D_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 511)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_ (GALGAS_lexicalListEntryListAST & ioArgument_ioLexicalListEntryList,
                                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_entrySpelling_18653 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 518)) ;
  GALGAS_lstringlist var_optionList_18679 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 519)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_lstring var_optionName_18741 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 522)) ;
    var_optionList_18679.addAssign_operation (var_optionName_18741  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 523)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_terminalSpelling_18805 ;
  switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 527)) ;
    var_terminalSpelling_18805 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 528)) ;
  } break ;
  case 2: {
    var_terminalSpelling_18805 = var_entrySpelling_18653 ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioLexicalListEntryList.addAssign_operation (var_entrySpelling_18653, var_terminalSpelling_18805, var_optionList_18679  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 532)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 518)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 522)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 527)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 528)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_list_5F_entry_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 518)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_24 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 522)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_LexiqueComponentSyntax_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 527)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 528)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_ (GALGAS_lexicalAttributeListAST & ioArgument_ioLexicalAttributeList,
                                                                                                                               C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_typeName_19229 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 538)) ;
  GALGAS_lstring var_name_19263 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 539)) ;
  ioArgument_ioLexicalAttributeList.addAssign_operation (var_typeName_19229, var_name_19263  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 540)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 538)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 539)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_lexical_5F_attribute_5F_declaration_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 538)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 539)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_ (GALGAS_terminalDeclarationListAST & ioArgument_ioTerminalDeclarationList,
                                                                                                                   C_Lexique_galgas_33_Scanner * inCompiler) {
  GALGAS_lstring var_name_19554 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 546)) ;
  GALGAS_sentLexicalAttributeListAST var_sentAttributeList_19607 = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 547)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_19679 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 550)) ;
      GALGAS_lstring var_sentAttribute_19715 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 551)) ;
      var_sentAttributeList_19607.addAssign_operation (var_selector_19679, var_sentAttribute_19715  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 552)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_theStyle_19791 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 554)) ;
  GALGAS_lstringlist var_optionList_19858 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 555)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 558)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_theStyle_19791.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 560)), GALGAS_string ("duplicated style reference"), fixItArray3  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 560)) ;
      }
      var_theStyle_19791 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 562)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_optionName_20070 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 564)) ;
      var_optionList_19858.addAssign_operation (var_optionName_20070  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 565)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 567)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 568)) ;
  GALGAS_lstring var_errorMessage_20168 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 569)) ;
  ioArgument_ioTerminalDeclarationList.addAssign_operation (var_name_19554, var_sentAttributeList_19607, var_errorMessage_20168, var_theStyle_19791, var_optionList_19858  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 570)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 546)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 550)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 551)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 558)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 562)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 564)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 567)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 568)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 569)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_terminal_5F_declaration_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_terminalDeclaration, "") ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__24_terminal_24_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 546)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_26 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 550)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 551)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_galgas_33_LexiqueComponentSyntax_27 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 558)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 562)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__25_attribute) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 564)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 567)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_message) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 568)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 569)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_ (GALGAS_lexicalStyleListAST & ioArgument_ioLexicalStyleList,
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 576)) ;
  GALGAS_lstring var_styleIdentifier_20509 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 577)) ;
  const enumGalgasBool test_0 = var_styleIdentifier_20509.mAttribute_string.getter_containsCharacter (GALGAS_char (TO_UNICODE (95)) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 578)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_styleIdentifier_20509.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 579)), GALGAS_string ("for compatibility with latex formatting, a style name should not contain '_' character"), fixItArray1  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 579)) ;
  }
  const enumGalgasBool test_2 = var_styleIdentifier_20509.mAttribute_string.getter_containsCharacterInRange (GALGAS_char (TO_UNICODE (48)), GALGAS_char (TO_UNICODE (57)) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 581)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_styleIdentifier_20509.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 582)), GALGAS_string ("for compatibility with latex formatting, a style name should not contain any digit"), fixItArray3  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 582)) ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 584)) ;
  GALGAS_lstring var_comment_20923 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 585)) ;
  ioArgument_ioLexicalStyleList.addAssign_operation (var_styleIdentifier_20509, var_comment_20923  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 586)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 576)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 577)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 584)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 585)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_style_5F_declaration_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_style) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 576)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 577)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 584)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__22_string_22_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 585)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_ (GALGAS_externRoutineListAST & ioArgument_ioExternRoutineList,
                                                                                                                            C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 592)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 593)) ;
  GALGAS_lstring var_routineName_21239 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 594)) ;
  GALGAS_lexicalExternRoutineFormalArgumentListAST var_lexicalRoutineFormalArgumentList_21278 = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 595)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_28 (inCompiler)) {
    case 2: {
      GALGAS_lexicalArgumentModeAST var_lexicalArgumentMode_21390 ;
      switch (select_galgas_33_LexiqueComponentSyntax_29 (inCompiler)) {
      case 1: {
        GALGAS_lstring var_selector_21426 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 600)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector_21426.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_selector_21426.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 602)), GALGAS_string ("the selector should be '\?!'"), fixItArray2  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 602)) ;
        }
        var_lexicalArgumentMode_21390 = GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 604)) ;
      } break ;
      case 2: {
        GALGAS_lstring var_selector_21634 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 606)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_selector_21634.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_selector_21634.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 608)), GALGAS_string ("the selector should be '\?'"), fixItArray4  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 608)) ;
        }
        var_lexicalArgumentMode_21390 = GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 610)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_lexicalTypeName_21854 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 612)) ;
      GALGAS_lstring var_formalArgumentName_21904 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 613)) ;
      var_lexicalRoutineFormalArgumentList_21278.addAssign_operation (var_lexicalArgumentMode_21390, var_lexicalTypeName_21854, var_formalArgumentName_21904  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 614)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_stringlist var_errorMessageList_22039 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 616)) ;
  switch (select_galgas_33_LexiqueComponentSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 619)) ;
    bool repeatFlag_5 = true ;
    while (repeatFlag_5) {
      GALGAS_lstring var_errorMessageName_22131 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 621)) ;
      var_errorMessageList_22039.addAssign_operation (var_errorMessageName_22131.getter_string (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 622))  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 622)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_31 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 624)) ;
      } break ;
      default:
        repeatFlag_5 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioExternRoutineList.addAssign_operation (var_routineName_21239, var_lexicalRoutineFormalArgumentList_21278, var_errorMessageList_22039  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 627)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 592)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 593)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 594)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_28 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_LexiqueComponentSyntax_29 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 600)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 606)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 612)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 613)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 619)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 621)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_31 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 624)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_routine_5F_declaration_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 592)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_proc) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 593)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 594)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_28 (inCompiler)) {
    case 2: {
      switch (select_galgas_33_LexiqueComponentSyntax_29 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F__21_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 600)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 606)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 612)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 613)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_galgas_33_LexiqueComponentSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_error) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 619)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 621)) ;
      switch (select_galgas_33_LexiqueComponentSyntax_31 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2C_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 624)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_ (GALGAS_externFunctionListAST & ioArgument_ioExternFunctionList,
                                                                                                                             C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 633)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 634)) ;
  GALGAS_lstring var_functionName_22578 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 635)) ;
  GALGAS_lexicalExternFunctionFormalArgumentListAST var_lexicalFunctionFormalArgumentList_22618 = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 636)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_32 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_22705 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 639)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_selector_22705.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_selector_22705.getter_location (SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 641)), GALGAS_string ("the selector should be '\?'"), fixItArray2  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 641)) ;
      }
      GALGAS_lstring var_lexicalTypeName_22841 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 643)) ;
      GALGAS_lstring var_formalArgumentName_22891 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 644)) ;
      var_lexicalFunctionFormalArgumentList_22618.addAssign_operation (var_lexicalTypeName_22841, var_formalArgumentName_22891  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 645)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 647)) ;
  GALGAS_lstring var_returnedTypeName_23023 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 648)) ;
  ioArgument_ioExternFunctionList.addAssign_operation (var_functionName_22578, var_lexicalFunctionFormalArgumentList_22618, var_returnedTypeName_23023  COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 649)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 633)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 634)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 635)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 639)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 643)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 644)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 647)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 648)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_LexiqueComponentSyntax::rule_galgas_33_LexiqueComponentSyntax_extern_5F_function_5F_declaration_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_extern) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 633)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_func) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 634)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 635)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_LexiqueComponentSyntax_32 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__3F_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 639)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 643)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken_identifier) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 644)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__2D__3E_) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 647)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_galgas_33_Scanner::kToken__40_type) COMMA_SOURCE_FILE ("galgas3LexiqueComponentSyntax.galgas", 648)) ;
}

